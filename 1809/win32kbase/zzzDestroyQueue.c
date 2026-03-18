/*
 * XREFs of zzzDestroyQueue @ 0x1C00E48C0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C001D8A0 (Win32FreeToPagedLookasideList.c)
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0031DA0 (ApiSetEditionUpdateRawMouseMode.c)
 *     RecalculateQueueInfo @ 0x1C0069C80 (RecalculateQueueInfo.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C008B004 (ApiSetEditionSystemGenerateMove.c)
 */

struct tagTHREADINFO *__fastcall zzzDestroyQueue(__int64 a1, __int64 a2)
{
  int v2; // esi
  _QWORD *v6; // rbp
  _QWORD *v7; // r15
  _QWORD *v8; // r10
  _QWORD **v9; // r8
  _QWORD *i; // r9
  _QWORD *v11; // rdx
  __int64 v12; // r14
  __int16 v13; // r11
  _QWORD *v14; // r14
  struct tagTHREADINFO *result; // rax
  __int64 v16; // rdx
  int v17; // eax

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 392))-- == 1 )
  {
    if ( gpqForeground == a1 )
    {
      v16 = *(_QWORD *)(a1 + 112);
      if ( v16 )
      {
        v17 = 49;
        if ( gdwDeferWinEvent )
          v17 = 51;
        xxxWindowEvent(2147483651LL, v16, 0LL, 6LL, v17);
      }
    }
    if ( (int)IsUnlockCaptureWindowSupported() >= 0 )
      UnlockCaptureWindow(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 112));
    HMAssignmentUnlock((__int64 *)(a1 + 120));
    HMAssignmentUnlock((__int64 *)(a1 + 128));
    if ( (int)IsClearDelegationCaptureSupported() >= 0 )
      ClearDelegationCapture(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 296));
    LockQCursor(a1, 0LL);
    if ( (int)IsFreeMessageListSupported() >= 0 )
      FreeMessageList(a1 + 24);
    result = (struct tagTHREADINFO *)IsSetNewForegroundQueueSupported();
    if ( (int)result >= 0 && gpqForeground == a1 )
      result = (struct tagTHREADINFO *)SetNewForegroundQueue(0LL);
    if ( gpqForegroundPrev == a1 )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == (struct tagQ *)a1 )
    {
      gpqCursor = 0LL;
      v2 = 1;
    }
    if ( *(_DWORD *)(a1 + 396) )
      *(_DWORD *)(a1 + 388) |= 0x4000000u;
    else
      result = (struct tagTHREADINFO *)Win32FreeToPagedLookasideList((__int64)QLookaside, a1);
    if ( v2 )
      return (struct tagTHREADINFO *)ApiSetEditionSystemGenerateMove(2u);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 64) == a2 )
      *(_QWORD *)(a1 + 64) = 0LL;
    if ( *(_QWORD *)(a1 + 96) == a2 || *(_QWORD *)(a1 + 88) == a2 )
    {
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
      v9 = (_QWORD **)(*(_QWORD *)(a2 + 456) + 168LL);
      for ( i = *v9; i != v9; i = (_QWORD *)*i )
      {
        v11 = i - 93;
        if ( (*(_DWORD *)(i - 32) & 1) == 0 && v11[54] == a1 )
        {
          v12 = *(_QWORD *)(a2 + 448);
          v6 = i - 93;
          v13 = *(_WORD *)(v12 + 6);
          if ( (v13 & 6) != 0 && (*(_BYTE *)(v11[56] + 10LL) & 6) != 0 )
            v7 = i - 93;
          if ( (v13 & 1) != 0 && (*(_BYTE *)(v11[56] + 10LL) & 1) != 0 )
            v8 = i - 93;
          if ( (*(_WORD *)(v12 + 10) & 0x400) != 0 && (*(_WORD *)(v11[56] + 10LL) & 0x400) != 0 )
            v8 = i - 93;
        }
      }
      v14 = v6;
      if ( v7 )
        v14 = v7;
      if ( v8 )
        v6 = v8;
      if ( (int)IsSetWakeBitSupported() >= 0 )
      {
        if ( v14 )
          SetWakeBit(v14, *(_WORD *)(*(_QWORD *)(a2 + 448) + 6LL) & 6);
        if ( v6 )
        {
          SetWakeBit(v6, *(_WORD *)(*(_QWORD *)(a2 + 448) + 6LL) & 1);
          SetWakeBit(v6, *(_WORD *)(*(_QWORD *)(a2 + 448) + 6LL) & 0x400);
        }
      }
      if ( *(_QWORD *)(a1 + 96) == a2 )
        *(_QWORD *)(a1 + 96) = v6;
      if ( *(_QWORD *)(a1 + 88) == a2 )
      {
        *(_QWORD *)(a1 + 88) = v14;
        ApiSetEditionUpdateRawMouseMode(a1);
      }
    }
    return RecalculateQueueInfo();
  }
  return result;
}
