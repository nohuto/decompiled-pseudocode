/*
 * XREFs of ndisReferenceMiniportByName @ 0x1C010A008
 * Callers:
 *     NdisEnumerateFilterModules @ 0x1C0059F60 (NdisEnumerateFilterModules.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C0061B70 (ndisIMDeleteIfStackEntry.c)
 *     ndisWmiQueryAllData @ 0x1C00B4384 (ndisWmiQueryAllData.c)
 *     ndisWmiExecuteMethod @ 0x1C00B4A84 (ndisWmiExecuteMethod.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B5580 (ndisWmiQuerySingleInstance.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00E9FD0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00EA7D4 (ndisHandleBindNotification.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 */

void __fastcall ndisReferenceMiniportByName(PCUNICODE_STRING SourceString, __int64 *a2, char a3, unsigned __int8 a4)
{
  char v5; // r14
  unsigned int v8; // r15d
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rsi
  __int64 MiniportQueue; // rbx
  unsigned __int16 Length; // bp
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  KIRQL v17; // [rsp+70h] [rbp+8h]

  v5 = a3;
  v8 = 1;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_Z(0x21u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, &SourceString->Length);
  *a2 = 0LL;
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v10 = ndisMiniDriverList;
    v17 = v9;
    if ( ndisMiniDriverList )
    {
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
        MiniportQueue = (__int64)v10->MiniportQueue;
        if ( !MiniportQueue )
          goto LABEL_15;
        Length = DestinationString.Length;
        while ( 1 )
        {
          v13 = *(_DWORD *)(MiniportQueue + 124) & 0x2000000;
          if ( !v5 )
            break;
          if ( !v13
            && Length == *(_WORD *)(MiniportQueue + 3840)
            && !memcmp(DestinationString.Buffer, *(const void **)(MiniportQueue + 3848), Length) )
          {
            goto LABEL_21;
          }
LABEL_14:
          MiniportQueue = *(_QWORD *)(MiniportQueue + 8);
          if ( !MiniportQueue )
            goto LABEL_15;
        }
        if ( v13 )
          goto LABEL_14;
        v14 = *(_QWORD *)(MiniportQueue + 3800);
        if ( !v14 )
          goto LABEL_14;
        v15 = *(_DWORD *)v14;
        if ( *(_DWORD *)v14 < v8
          || Length != *(_WORD *)(v14 + 8)
          || memcmp(DestinationString.Buffer, *(const void **)(v14 + 16), Length) )
        {
          break;
        }
        v8 = v15;
        if ( *a2 )
        {
          ndisDereferenceMiniport(*a2, a4);
          *a2 = 0LL;
          v8 = **(_DWORD **)(MiniportQueue + 3800);
        }
LABEL_21:
        if ( ndisReferenceMiniport(MiniportQueue) )
          *a2 = MiniportQueue;
LABEL_15:
        KeReleaseSpinLockFromDpcLevel(&v10->Ref.SpinLock);
        v10 = v10->NextDriver;
        v5 = a3;
        if ( !v10 )
        {
          v9 = v17;
          goto LABEL_17;
        }
      }
      v5 = a3;
      goto LABEL_14;
    }
LABEL_17:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
      WPP_SF_q(0x22u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, *a2);
  }
}
