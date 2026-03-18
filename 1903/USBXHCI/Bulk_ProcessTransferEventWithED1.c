/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x1C0035890
 * Callers:
 *     TR_TransferEventHandler @ 0x1C00298BC (TR_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C0034450 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDi @ 0x1C0004794 (WPP_RECORDER_SF_DDDi.c)
 *     WPP_RECORDER_SF_DDDqLDDi @ 0x1C00048B8 (WPP_RECORDER_SF_DDDqLDDi.c)
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0019058 (Endpoint_HaltedCompletionCode.c)
 *     StageQueue_Release @ 0x1C0027C58 (StageQueue_Release.c)
 *     TR_AttemptStateChange @ 0x1C00284E8 (TR_AttemptStateChange.c)
 *     TR_ReleaseSegments @ 0x1C0029718 (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0029AC0 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_FindStage @ 0x1C00344E0 (Bulk_FindStage.c)
 *     Bulk_MapTransfers @ 0x1C0034C98 (Bulk_MapTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0035DB8 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C0035FAC (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0036D5C (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0037CE4 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_ValidateStagePointer @ 0x1C00381BC (Bulk_ValidateStagePointer.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x1C0039280 (WPP_RECORDER_SF_DDDqqq.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2, char a3, int a4)
{
  bool v4; // r13
  unsigned __int64 v5; // rsi
  char v6; // bp
  char v7; // bl
  __int64 v8; // rdi
  __int64 v10; // rbx
  __int64 v11; // r8
  unsigned int v12; // ebp
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rbx
  signed __int64 v18; // rbx
  __int64 v19; // r10
  void *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  int v23; // eax
  int v24; // edx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v30; // [rsp+20h] [rbp-98h]
  __int64 v31; // [rsp+28h] [rbp-90h]
  __int64 v32; // [rsp+30h] [rbp-88h]
  __int64 v33; // [rsp+38h] [rbp-80h]
  __int64 v34; // [rsp+40h] [rbp-78h]
  int v35; // [rsp+C8h] [rbp+10h] BYREF
  char v36; // [rsp+D0h] [rbp+18h]
  __int64 v37; // [rsp+D8h] [rbp+20h] BYREF

  v36 = a3;
  v4 = 0;
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v6 = 0;
  v7 = a3;
  v8 = a2;
  if ( !a2 )
  {
    v10 = *(_QWORD *)v5;
    v8 = *(_QWORD *)(*(_QWORD *)v5 + 56LL);
LABEL_9:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v34) = HIDWORD(a1);
      WPP_RECORDER_SF_DDDqLDDi(
        *(_QWORD *)(*(_QWORD *)(v8 + 56) + 80LL),
        *(unsigned __int8 *)(a1 + 15),
        *(unsigned __int8 *)(a1 + 11),
        *(_DWORD *)(a1 + 8) & 0xFFFFFF,
        v30);
    }
    v11 = *(unsigned int *)(v5 + 40);
    v12 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    if ( v12 > (unsigned int)v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v8 + 56) + 80LL),
          3u,
          v11,
          0x38u,
          (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids);
      v12 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDqqq(
        *(_QWORD *)(*(_QWORD *)(v8 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v8 + 48) + 135LL),
        v11,
        a4,
        v30,
        *(_BYTE *)(*(_QWORD *)(v8 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v8 + 56) + 144LL),
        *(_DWORD *)(v8 + 64),
        *(_QWORD *)(v10 + 24),
        v10,
        v5);
    if ( Endpoint_HaltedCompletionCode(*(__m128i ***)(v8 + 56), *(unsigned __int8 *)(a1 + 11)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v34) = v13;
        LODWORD(v33) = *(_DWORD *)(v8 + 64);
        LODWORD(v32) = *(_DWORD *)(v15 + 144);
        LODWORD(v31) = *(unsigned __int8 *)(*(_QWORD *)(v8 + 48) + 135LL);
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(v15 + 80),
          2u,
          0xEu,
          0x3Au,
          (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
          v31,
          v32,
          v33,
          v34);
        LOBYTE(v13) = *(_BYTE *)(a1 + 11);
      }
      v7 = v36;
      LOBYTE(v30) = v36;
      Bulk_ProcessTransferEventWithHaltedCompletion(v8, v5, (unsigned __int8)v13, v12, v30);
      goto LABEL_46;
    }
    if ( (unsigned __int8)(v13 - 26) > 2u )
    {
      *(_DWORD *)(v10 + 108) += v12;
      v21 = *(_QWORD *)(v10 + 48);
      *(_DWORD *)(v10 + 68) = v13;
      if ( (*(_DWORD *)(v21 + 32) & 1) != 0 && *(_DWORD *)(v10 + 76) == 2 )
        memmove(*(void **)(v5 + 64), *(const void **)(*(_QWORD *)(v5 + 72) + 16LL), v12);
      LOBYTE(v14) = v36;
      Bulk_Stage_FreeScatterGatherList(v8, v5, v14);
      *(_BYTE *)(v8 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 96));
      v22 = *(_QWORD *)v5;
      if ( *(_BYTE *)(v5 + 44) )
      {
        IoFreeMdl(*(PMDL *)(v5 + 48));
        *(_QWORD *)(v5 + 48) = 0LL;
        *(_BYTE *)(v5 + 44) = 0;
      }
      TR_ReleaseSegments(v8, (unsigned __int64 *)(v5 + 8), 1);
      TR_ReleaseSegments(v8, (unsigned __int64 *)(v5 + 24), 0);
      StageQueue_Release((unsigned __int8 *)(v22 + 128), (unsigned __int8 *)v5);
      ++*(_DWORD *)(v10 + 116);
      if ( *(_DWORD *)(v10 + 68) == 13 || *(_DWORD *)(v10 + 112) == *(_DWORD *)(v10 + 104) )
        Bulk_Transfer_CompleteCancelable(v8, v10, 0xFFFFFFFFLL, 0LL);
      --*(_DWORD *)(v8 + 348);
      v23 = *(_DWORD *)(v8 + 352);
      if ( v23 )
      {
        v24 = v23 - 1;
        v25 = *(_DWORD *)(v8 + 324);
        *(_DWORD *)(v8 + 352) = v24;
        if ( (v25 & 2) != 0 )
          v4 = v24 == 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 96), *(_BYTE *)(v8 + 104));
      if ( !v4 )
        goto LABEL_45;
      v26 = *(_QWORD *)(v8 + 56);
      if ( *(_BYTE *)(v26 + 37) )
      {
        v27 = *(_QWORD *)(v26 + 136);
        if ( _InterlockedIncrement((volatile signed __int32 *)(v27 + 20)) != *(_DWORD *)(v27 + 8) )
          goto LABEL_45;
      }
      v20 = (void *)(v26 + 288);
    }
    else
    {
      v16 = *(_QWORD *)(v5 + 96);
      v17 = 16LL * *(unsigned int *)(v5 + 104);
      v35 = 0;
      v18 = *(_QWORD *)(v16 + 24) + v17;
      *(_BYTE *)(v8 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 96));
      if ( Bulk_FindStage(v8, v18, &v37, &v35) && v37 == v5 )
        Bulk_ProcessTransferEventWithStoppedCompletion(v8, v5, *(unsigned __int8 *)(a1 + 11), v12, v35);
      *(_DWORD *)(v8 + 324) |= 8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 96), *(_BYTE *)(v8 + 104));
      v19 = *(_QWORD *)(v8 + 56);
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
LABEL_45:
        v7 = v36;
LABEL_46:
        v6 = 1;
        goto LABEL_47;
      }
      _m_prefetchw((const void *)(v19 + 32));
      if ( (_InterlockedXor((volatile signed __int32 *)(v19 + 32), 8u) & 8) == 0 )
        goto LABEL_45;
      v20 = (void *)(v19 + 288);
    }
    ESM_AddEvent(v20);
    goto LABEL_45;
  }
  if ( (unsigned __int8)Bulk_ValidateStagePointer(a2, *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v10 = *(_QWORD *)v5;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(v8 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(*(_QWORD *)(v8 + 56) + 80LL), 2u, *(_WORD *)(a1 + 14) & 0x1F, 0x36u, v30);
    Controller_ReportFatalError(*(_QWORD *)(v8 + 40), 2, 4126, *(_QWORD *)(v8 + 48), *(_QWORD *)(v8 + 56), v8);
  }
LABEL_47:
  _InterlockedExchange((volatile __int32 *)(v8 + 340), 1);
  if ( (unsigned int)TR_AttemptStateChange(v8, 2, 3) == 2 )
  {
    LOBYTE(v28) = v7;
    Bulk_MapTransfers(v8, v28);
  }
  return v6;
}
