/*
 * XREFs of ndisReferenceMiniportByName @ 0x1C012B290
 * Callers:
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     NdisEnumerateFilterModules @ 0x1C008CEE0 (NdisEnumerateFilterModules.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C0099690 (ndisIMDeleteIfStackEntry.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A851C (ndisWmiChangeSingleInstance.c)
 *     ndisWmiQueryAllData @ 0x1C00A8EDC (ndisWmiQueryAllData.c)
 *     ?ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0115A34 (-ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C0115B9C (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 */

void __fastcall ndisReferenceMiniportByName(UNICODE_STRING *a1, __int64 *a2, char a3, unsigned __int8 a4)
{
  unsigned int v7; // r15d
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rbp
  KIRQL v10; // si
  __int64 MiniportQueue; // rbx
  wchar_t *Buffer; // r12
  unsigned __int16 Length; // si
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // edi
  int v17; // edx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  KIRQL v19; // [rsp+80h] [rbp+8h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v7 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x21u,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      &a1->Length);
  *a2 = 0LL;
  DestinationString.Length = a1->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, a1, 0);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v9 = ndisMiniDriverList;
    v10 = v8;
    v19 = v8;
    if ( ndisMiniDriverList )
    {
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
        MiniportQueue = (__int64)v9->MiniportQueue;
        if ( !MiniportQueue )
          goto LABEL_14;
        Buffer = DestinationString.Buffer;
        Length = DestinationString.Length;
        while ( 1 )
        {
          v14 = *(_DWORD *)(MiniportQueue + 124) & 0x2000000;
          if ( a3 )
            break;
          if ( !v14 )
          {
            v15 = *(_QWORD *)(MiniportQueue + 3768);
            if ( v15 )
            {
              v16 = *(_DWORD *)v15;
              if ( *(_DWORD *)v15 >= v7
                && Length == *(_WORD *)(v15 + 8)
                && !memcmp(Buffer, *(const void **)(v15 + 16), Length) )
              {
                v7 = v16;
                if ( *a2 )
                {
                  ndisDereferenceMiniport(*a2, a4);
                  *a2 = 0LL;
                  v7 = **(_DWORD **)(MiniportQueue + 3768);
                }
                if ( (unsigned __int8)ndisReferenceMiniport(MiniportQueue) )
                  goto LABEL_22;
                goto LABEL_14;
              }
            }
          }
LABEL_13:
          MiniportQueue = *(_QWORD *)(MiniportQueue + 8);
          if ( !MiniportQueue )
            goto LABEL_14;
        }
        if ( v14
          || Length != *(_WORD *)(MiniportQueue + 3808)
          || memcmp(Buffer, *(const void **)(MiniportQueue + 3816), Length) )
        {
          goto LABEL_13;
        }
        if ( (unsigned __int8)ndisReferenceMiniport(MiniportQueue) )
LABEL_22:
          *a2 = MiniportQueue;
LABEL_14:
        KeReleaseSpinLockFromDpcLevel(&v9->Ref.SpinLock);
        v9 = v9->NextDriver;
        if ( !v9 )
        {
          v10 = v19;
          break;
        }
      }
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v10);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v17,
        13,
        34,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        *a2);
    }
  }
}
