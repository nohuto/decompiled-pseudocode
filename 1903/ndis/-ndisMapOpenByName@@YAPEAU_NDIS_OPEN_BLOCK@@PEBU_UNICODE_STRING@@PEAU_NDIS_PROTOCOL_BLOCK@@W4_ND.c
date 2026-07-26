/*
 * XREFs of ?ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_MP_REFTAG@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C007C6D8
 * Callers:
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 */

__int64 __fastcall ndisMapOpenByName(UNICODE_STRING *a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // edx
  KSPIN_LOCK *v7; // rbp
  KIRQL v8; // al
  __int64 v9; // rbx
  KIRQL v10; // r14
  unsigned __int16 Length; // si
  __int64 v12; // rdx
  int v13; // edx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6u,
      0x23u,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      &a1->Length,
      a2);
  DestinationString.Length = a1->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  v4 = 0LL;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, a1, 0);
    v7 = (KSPIN_LOCK *)(a2 + 32);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 32));
    v9 = *(_QWORD *)(a2 + 24);
    v10 = v8;
    if ( v9 )
    {
      Length = DestinationString.Length;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v9 + 416);
        if ( Length == *(_WORD *)v12 && !memcmp(DestinationString.Buffer, *(const void **)(v12 + 8), Length) )
          break;
        v9 = *(_QWORD *)(v9 + 400);
        if ( !v9 )
          goto LABEL_17;
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 232));
      if ( (*(_DWORD *)(v9 + 224) & 0x10) == 0 && (unsigned __int8)ndisReferenceMiniport(*(_QWORD *)(v9 + 16)) )
      {
        v4 = v9;
        ndisMReferenceOpen(v9, 4u);
        *(_DWORD *)(v9 + 224) |= 0x10u;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v9 + 232));
    }
LABEL_17:
    KeReleaseSpinLock(v7, v10);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        6,
        37,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        v4);
    }
    return v4;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        6,
        36,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
    }
    return 0LL;
  }
}
