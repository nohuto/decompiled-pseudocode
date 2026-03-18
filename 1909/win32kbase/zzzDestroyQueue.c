/*
 * XREFs of zzzDestroyQueue @ 0x1C0034320
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0024120 (HMAssignmentUnlock.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002E984 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0038320 (ApiSetEditionUpdateRawMouseMode.c)
 *     WPP_RECORDER_SF_qq @ 0x1C005C218 (WPP_RECORDER_SF_qq.c)
 *     RecalculateQueueInfo @ 0x1C0079140 (RecalculateQueueInfo.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C009D50C (ApiSetEditionSystemGenerateMove.c)
 *     FreeQueue @ 0x1C009E49C (FreeQueue.c)
 */

__int64 __fastcall zzzDestroyQueue(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebp
  int v6; // edx
  __int64 v7; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // r15
  _QWORD *v11; // r10
  _QWORD **v12; // r8
  _QWORD *i; // r9
  _QWORD *v14; // rdx
  __int64 v15; // r14
  __int16 v16; // r11
  _QWORD *v17; // r14
  __int64 v18; // xmm1_8
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h]

  v5 = 0;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v25, a1, a3);
  if ( (*(_DWORD *)(a1 + 400))-- == 1 )
  {
    if ( gpqForeground == a1 )
    {
      v20 = *(_QWORD *)(a1 + 120);
      if ( v20 )
        xxxWindowEvent(2147483651LL, v20, 0LL);
    }
    if ( (int)IsUnlockCaptureWindowSupported(v7) >= 0 )
      UnlockCaptureWindow(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 120));
    HMAssignmentUnlock((__int64 *)(a1 + 128));
    HMAssignmentUnlock((__int64 *)(a1 + 136));
    if ( (int)IsClearDelegationCaptureSupported(v21) >= 0 )
      ClearDelegationCapture(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 304));
    LockQCursor(a1, 0LL);
    if ( (int)IsFreeMessageListSupported(v22) >= 0 )
    {
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v25, a1, v24);
      FreeMessageList(a1 + 24);
    }
    result = IsSetNewForegroundQueueSupported(v23);
    if ( (int)result >= 0 && gpqForeground == a1 )
      result = SetNewForegroundQueue(0LL);
    if ( gpqForegroundPrev == a1 )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == (struct tagQ *)a1 )
    {
      gpqCursor = 0LL;
      v5 = 1;
    }
    if ( *(_DWORD *)(a1 + 404) )
      *(_DWORD *)(a1 + 396) |= 0x4000000u;
    else
      result = FreeQueue(a1);
    if ( v5 )
      return ApiSetEditionSystemGenerateMove(2LL);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 72) == a2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_qq(
          (_DWORD)gBaseLog,
          v6,
          19,
          17,
          (__int64)&WPP_ab23653d659a3eef467127bc1c313d97_Traceguids,
          a1,
          *(_QWORD *)(a1 + 72));
      }
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 104) == a2 || *(_QWORD *)(a1 + 96) == a2 )
    {
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = (_QWORD **)(*(_QWORD *)(a2 + 448) + 168LL);
      for ( i = *v12; i != v12; i = (_QWORD *)*i )
      {
        v14 = i - 92;
        if ( (*(_DWORD *)(i - 32) & 1) == 0 && v14[53] == a1 )
        {
          v15 = *(_QWORD *)(a2 + 440);
          v9 = i - 92;
          v16 = *(_WORD *)(v15 + 6);
          if ( (v16 & 6) != 0 && (*(_BYTE *)(v14[55] + 10LL) & 6) != 0 )
            v10 = i - 92;
          if ( (v16 & 1) != 0 && (*(_BYTE *)(v14[55] + 10LL) & 1) != 0 )
            v11 = i - 92;
          if ( (*(_WORD *)(v15 + 10) & 0x400) != 0 && (*(_WORD *)(v14[55] + 10LL) & 0x400) != 0 )
            v11 = i - 92;
        }
      }
      v17 = v9;
      if ( v10 )
        v17 = v10;
      if ( v11 )
        v9 = v11;
      if ( (int)IsSetWakeBitSupported() >= 0 )
      {
        if ( v17 )
          SetWakeBit(v17, *(_WORD *)(*(_QWORD *)(a2 + 440) + 6LL) & 6);
        if ( v9 )
        {
          SetWakeBit(v9, *(_WORD *)(*(_QWORD *)(a2 + 440) + 6LL) & 1);
          SetWakeBit(v9, *(_WORD *)(*(_QWORD *)(a2 + 440) + 6LL) & 0x400);
        }
      }
      v18 = *(_QWORD *)(a1 + 16);
      v25 = *(_OWORD *)a1;
      v26 = v18;
      if ( *(_QWORD *)(a1 + 104) == a2 )
        *(_QWORD *)(a1 + 104) = v9;
      if ( *(_QWORD *)(a1 + 96) == a2 )
      {
        *(_QWORD *)(a1 + 96) = v17;
        ApiSetEditionUpdateRawMouseMode(a1);
      }
    }
    return RecalculateQueueInfo();
  }
  return result;
}
