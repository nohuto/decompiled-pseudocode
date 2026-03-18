/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x1C0030AC8
 * Callers:
 *     TR_TransferEventHandler @ 0x1C002516C (TR_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C002F770 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDi @ 0x1C0003C28 (WPP_RECORDER_SF_DDDi.c)
 *     WPP_RECORDER_SF_DDDqLDDi @ 0x1C0003D4C (WPP_RECORDER_SF_DDDqLDDi.c)
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00161B8 (Endpoint_HaltedCompletionCode.c)
 *     StageQueue_Release @ 0x1C0023648 (StageQueue_Release.c)
 *     TR_AttemptStateChange @ 0x1C0023E60 (TR_AttemptStateChange.c)
 *     TR_ReleaseSegments @ 0x1C0024FC8 (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0025370 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_FindStage @ 0x1C002F800 (Bulk_FindStage.c)
 *     Bulk_MapTransfers @ 0x1C002FF50 (Bulk_MapTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0030FA8 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C003119C (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0031E20 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0032D6C (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_ValidateStagePointer @ 0x1C00331F4 (Bulk_ValidateStagePointer.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x1C0034290 (WPP_RECORDER_SF_DDDqqq.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2, char a3)
{
  bool v3; // r15
  char v4; // bl
  unsigned __int64 v5; // rsi
  char v6; // r13
  __int64 v7; // rdi
  __int64 v9; // rbx
  int v10; // r9d
  __int64 v11; // r8
  unsigned int v12; // r12d
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rbx
  signed __int64 v18; // rbx
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // r13
  int v22; // eax
  int v23; // edx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v29; // [rsp+20h] [rbp-98h]
  int v30; // [rsp+20h] [rbp-98h]
  int v31; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+28h] [rbp-90h]
  __int64 v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+40h] [rbp-78h]
  int v36; // [rsp+C8h] [rbp+10h] BYREF
  char v37; // [rsp+D0h] [rbp+18h]
  __int64 v38; // [rsp+D8h] [rbp+20h] BYREF

  v37 = a3;
  v3 = 0;
  v4 = 0;
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v6 = a3;
  v7 = a2;
  if ( a2 )
  {
    if ( !(unsigned __int8)Bulk_ValidateStagePointer(a2, *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      if ( !*(_DWORD *)(v7 + 64) )
      {
        WPP_RECORDER_SF_DDDi(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL), 2u, HIBYTE(*(_DWORD *)(a1 + 12)), 0x35u, v29);
        Controller_ReportFatalError(*(_QWORD *)(v7 + 40), 2, 4126, *(_QWORD *)(v7 + 48), *(_QWORD *)(v7 + 56), v7);
      }
      goto LABEL_36;
    }
    v9 = *(_QWORD *)v5;
  }
  else
  {
    v9 = *(_QWORD *)v5;
    v7 = *(_QWORD *)(*(_QWORD *)v5 + 56LL);
  }
  WPP_RECORDER_SF_DDDqLDDi(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F,
    (*(_DWORD *)(a1 + 12) >> 2) & 1,
    HIBYTE(*(_DWORD *)(a1 + 8)),
    v29);
  v11 = *(unsigned int *)(v5 + 40);
  v12 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
  if ( v12 > (unsigned int)v11 )
  {
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
      3u,
      v11,
      0x37u,
      (__int64)&WPP_e65a03fee1fe3b77277485fb27797cd8_Traceguids);
    v12 = 0;
  }
  WPP_RECORDER_SF_DDDqqq(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL),
    v11,
    v10,
    v30,
    *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v7 + 56) + 144LL),
    *(_DWORD *)(v7 + 64),
    *(_QWORD *)(v9 + 24),
    v9,
    v5);
  if ( Endpoint_HaltedCompletionCode(*(__m128i ***)(v7 + 56), *(unsigned __int8 *)(a1 + 11)) )
  {
    LODWORD(v35) = v13;
    LODWORD(v34) = *(_DWORD *)(v7 + 64);
    LODWORD(v33) = *(_DWORD *)(v15 + 144);
    LODWORD(v32) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v15 + 80),
      2u,
      0xEu,
      0x39u,
      (__int64)&WPP_e65a03fee1fe3b77277485fb27797cd8_Traceguids,
      v32,
      v33,
      v34,
      v35);
    LOBYTE(v31) = v6;
    Bulk_ProcessTransferEventWithHaltedCompletion(v7, v5, *(unsigned __int8 *)(a1 + 11), v12, v31);
  }
  else if ( (unsigned __int8)(v13 - 26) > 2u )
  {
    *(_DWORD *)(v9 + 108) += v12;
    v20 = *(_QWORD *)(v9 + 48);
    *(_DWORD *)(v9 + 68) = v13;
    if ( (*(_DWORD *)(v20 + 32) & 1) != 0 && *(_DWORD *)(v9 + 76) == 2 )
      memmove(*(void **)(v5 + 64), *(const void **)(*(_QWORD *)(v5 + 72) + 16LL), v12);
    LOBYTE(v14) = v6;
    Bulk_Stage_FreeScatterGatherList(v7, v5, v14);
    *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
    v21 = *(_QWORD *)v5;
    if ( *(_BYTE *)(v5 + 44) )
    {
      IoFreeMdl(*(PMDL *)(v5 + 48));
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_BYTE *)(v5 + 44) = 0;
    }
    TR_ReleaseSegments(v7, (unsigned __int64 *)(v5 + 8), 1);
    TR_ReleaseSegments(v7, (unsigned __int64 *)(v5 + 24), 0);
    StageQueue_Release((unsigned __int8 *)(v21 + 128), (unsigned __int8 *)v5);
    ++*(_DWORD *)(v9 + 116);
    if ( *(_DWORD *)(v9 + 68) == 13 || *(_DWORD *)(v9 + 112) == *(_DWORD *)(v9 + 104) )
      Bulk_Transfer_CompleteCancelable(v7, v9, 0xFFFFFFFFLL, 0LL);
    --*(_DWORD *)(v7 + 348);
    v22 = *(_DWORD *)(v7 + 352);
    if ( v22 )
    {
      v23 = v22 - 1;
      v24 = *(_DWORD *)(v7 + 324);
      *(_DWORD *)(v7 + 352) = v23;
      if ( (v24 & 2) != 0 )
        v3 = v23 == 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
    if ( v3 )
    {
      v25 = *(_QWORD *)(v7 + 56);
      if ( !*(_BYTE *)(v25 + 37)
        || (v26 = *(_QWORD *)(v25 + 136),
            _InterlockedIncrement((volatile signed __int32 *)(v26 + 20)) == *(_DWORD *)(v26 + 8)) )
      {
        ESM_AddEvent((PVOID)(v25 + 288));
      }
    }
    v6 = v37;
  }
  else
  {
    v16 = *(_QWORD *)(v5 + 96);
    v17 = *(unsigned int *)(v5 + 104);
    v36 = 0;
    v18 = *(_QWORD *)(v16 + 24) + 16 * v17;
    *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
    if ( Bulk_FindStage(v7, v18, &v38, &v36) && v38 == v5 )
      Bulk_ProcessTransferEventWithStoppedCompletion(v7, v5, *(unsigned __int8 *)(a1 + 11), v12, v36);
    *(_DWORD *)(v7 + 324) |= 8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
    v19 = *(_QWORD *)(v7 + 56);
    _m_prefetchw((const void *)(v19 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v19 + 32), 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v19,
        *(_QWORD *)(v19 + 8),
        *(_QWORD *)(v19 + 24),
        0x2000000LL,
        "Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v19 + 32));
      if ( (_InterlockedXor((volatile signed __int32 *)(v19 + 32), 8u) & 8) != 0 )
        ESM_AddEvent((PVOID)(v19 + 288));
    }
  }
  v4 = 1;
LABEL_36:
  _InterlockedExchange((volatile __int32 *)(v7 + 340), 1);
  if ( (unsigned int)TR_AttemptStateChange(v7, 2, 3) == 2 )
  {
    LOBYTE(v27) = v6;
    Bulk_MapTransfers(v7, v27);
  }
  return v4;
}
