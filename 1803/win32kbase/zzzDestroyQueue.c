/*
 * XREFs of zzzDestroyQueue @ 0x1C00703F0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0037430 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C003AAEC (ApiSetEditionUpdateRawMouseMode.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0044A20 (Win32FreeToPagedLookasideList.c)
 *     RecalculateQueueInfo @ 0x1C005F460 (RecalculateQueueInfo.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C0072C7C (ApiSetEditionSystemGenerateMove.c)
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
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 392))-- == 1 )
  {
    if ( gpqForeground == a1 )
    {
      v16 = *(_QWORD *)(a1 + 112);
      if ( v16 )
        xxxWindowEvent(2147483651LL, v16, 0LL);
    }
    if ( (int)IsUnlockCaptureWindowSupported(a1) >= 0 )
      UnlockCaptureWindow(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 112));
    HMAssignmentUnlock((__int64 *)(a1 + 120));
    HMAssignmentUnlock((__int64 *)(a1 + 128));
    if ( (int)IsClearDelegationCaptureSupported(v17) >= 0 )
      ClearDelegationCapture(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 296));
    v20 = (unsigned __int64)(a1 + 376);
    HMAssignmentLock((__int64)&v20);
    if ( (int)IsFreeMessageListSupported(v18) >= 0 )
      FreeMessageList(a1 + 24);
    result = (struct tagTHREADINFO *)IsSetNewForegroundQueueSupported(v19);
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
      return (struct tagTHREADINFO *)ApiSetEditionSystemGenerateMove(2LL);
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
      v9 = (_QWORD **)(*(_QWORD *)(a2 + 448) + 168LL);
      for ( i = *v9; i != v9; i = (_QWORD *)*i )
      {
        v11 = i - 91;
        if ( (*(_DWORD *)(i - 31) & 1) == 0 && v11[53] == a1 )
        {
          v12 = *(_QWORD *)(a2 + 440);
          v6 = i - 91;
          v13 = *(_WORD *)(v12 + 6);
          if ( (v13 & 6) != 0 && (*(_BYTE *)(v11[55] + 10LL) & 6) != 0 )
            v7 = i - 91;
          if ( (v13 & 1) != 0 && (*(_BYTE *)(v11[55] + 10LL) & 1) != 0 )
            v8 = i - 91;
          if ( (*(_WORD *)(v12 + 10) & 0x400) != 0 && (*(_WORD *)(v11[55] + 10LL) & 0x400) != 0 )
            v8 = i - 91;
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
          SetWakeBit(v14, *(_WORD *)(*(_QWORD *)(a2 + 440) + 6LL) & 6);
        if ( v6 )
        {
          SetWakeBit(v6, *(_WORD *)(*(_QWORD *)(a2 + 440) + 6LL) & 1);
          SetWakeBit(v6, *(_WORD *)(*(_QWORD *)(a2 + 440) + 6LL) & 0x400);
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
