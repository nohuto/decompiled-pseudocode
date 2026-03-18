/*
 * XREFs of Bulk_ProcessTransferEventWithED0 @ 0x1C003558C
 * Callers:
 *     TR_TransferEventHandler @ 0x1C00298BC (TR_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C0034450 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_dddqLddi @ 0x1C0004A5C (WPP_RECORDER_SF_dddqLddi.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0019058 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0029AC0 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_FindStage @ 0x1C00344E0 (Bulk_FindStage.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0035DB8 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C0035FAC (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_Stage_CalculateBytesTransferred @ 0x1C0036710 (Bulk_Stage_CalculateBytesTransferred.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0037FEC (Bulk_ValidateED0TrbPointerOnMismatch.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED0(__int64 a1, __int64 a2, char a3)
{
  char v6; // di
  __int64 v7; // rcx
  __int64 v9; // rbp
  unsigned int v10; // r14d
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r10
  int v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+28h] [rbp-80h]
  int v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  int v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  int v21; // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+40h] [rbp-68h]
  int v23; // [rsp+48h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+10h] BYREF

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v22) = HIDWORD(a1);
    WPP_RECORDER_SF_dddqLddi(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      *(unsigned __int8 *)(a1 + 11),
      *(unsigned __int8 *)(a1 + 15),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF,
      v15);
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u && (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x40) != 0 )
    return 1;
  *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  if ( !Bulk_FindStage(a2, *(_QWORD *)a1, &v25, &v24) )
  {
    if ( !*(_DWORD *)(a2 + 64) )
      Bulk_ValidateED0TrbPointerOnMismatch(a2, a1);
    goto LABEL_9;
  }
  v9 = v25;
  if ( v25 )
  {
    v10 = Bulk_Stage_CalculateBytesTransferred(v7, v25, a1);
    if ( v10 <= *(_DWORD *)(v9 + 40) )
      goto LABEL_16;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(_QWORD *)(a2 + 56);
      v23 = *(_DWORD *)(v9 + 40);
      LODWORD(v22) = v10;
      v21 = *(_DWORD *)(a2 + 64);
      v19 = *(_DWORD *)(v11 + 144);
      v17 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      WPP_RECORDER_SF_DDDDD(
        *(_QWORD *)(v11 + 80),
        3u,
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
        0x34u,
        (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
        v17,
        v19,
        v21,
        v22,
        v23);
    }
  }
  v10 = 0;
LABEL_16:
  if ( Endpoint_HaltedCompletionCode(*(__m128i ***)(a2 + 56), *(unsigned __int8 *)(a1 + 11)) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    if ( v9 )
    {
      LOBYTE(v15) = a3;
      Bulk_ProcessTransferEventWithHaltedCompletion(a2, v9, *(unsigned __int8 *)(a1 + 11), v10, v15);
    }
  }
  else
  {
    if ( (unsigned __int8)(v12 - 26) > 2u )
    {
LABEL_9:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
      return v6;
    }
    Bulk_ProcessTransferEventWithStoppedCompletion(a2, v9, v12, v10, v24);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_QWORD *)(a2 + 56);
      LODWORD(v22) = *(_DWORD *)(a2 + 352);
      LODWORD(v20) = *(_DWORD *)(a2 + 64);
      LODWORD(v18) = *(_DWORD *)(v13 + 144);
      LODWORD(v16) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v13 + 80),
        4u,
        0xEu,
        0x35u,
        (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
        v16,
        v18,
        v20,
        v22);
    }
    *(_DWORD *)(a2 + 324) |= 8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    v14 = *(_QWORD *)(a2 + 56);
    _m_prefetchw((const void *)(v14 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v14,
        *(_QWORD *)(v14 + 8),
        *(_QWORD *)(v14 + 24),
        0x2000000LL,
        "Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v14 + 32));
      if ( (_InterlockedXor((volatile signed __int32 *)(v14 + 32), 8u) & 8) != 0 )
        ESM_AddEvent((PVOID)(v14 + 288));
    }
  }
  return 1;
}
