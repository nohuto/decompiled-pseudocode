/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C00B0BB8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     xxxResetTooltip @ 0x1C00DE0BC (xxxResetTooltip.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0126510 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxHotTrack @ 0x1C0131988 (xxxHotTrack.c)
 */

__int64 __fastcall xxxCancelMouseMoveTracking(__int16 a1, __int64 a2, unsigned int a3, __int16 a4)
{
  __int64 result; // rax
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[4]; // [rsp+30h] [rbp-38h] BYREF

  result = 1024LL;
  if ( (a1 & 0x400) != 0 && (a4 & 0x400) != 0 )
    result = xxxHotTrack(a2, a3, 0LL);
  if ( (a1 & 0x200) != 0 && (a4 & 0x300) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0LL;
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 112);
    result = safe_cast_fnid_to_PTOOLTIPWND(v11);
    v13 = result;
    if ( result )
    {
      v14 = *(_QWORD *)result;
      if ( *(_QWORD *)result )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v18;
        v18[1] = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        xxxResetTooltip(v13);
        result = ThreadUnlock1(v17, v16);
      }
    }
  }
  v9 = a4 & a1;
  if ( v9 < 0 )
    result = PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0LL, 0LL);
  if ( (v9 & 0x40) != 0 )
    return FindTimer(a2, 65530, 2, 1, 0LL);
  return result;
}
