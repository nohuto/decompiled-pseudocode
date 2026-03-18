/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C001ADA8
 * Callers:
 *     xxxTrackMouseMove @ 0x1C001C4B4 (xxxTrackMouseMove.c)
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C012FBB0 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxResetTooltip @ 0x1C01369EC (xxxResetTooltip.c)
 *     xxxHotTrack @ 0x1C013D878 (xxxHotTrack.c)
 */

__int64 __fastcall xxxCancelMouseMoveTracking(__int16 a1, __int64 a2, unsigned int a3, __int16 a4)
{
  __int64 result; // rax
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h]
  __int64 v20; // [rsp+40h] [rbp-28h]

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
    v12 = result;
    if ( result )
    {
      v13 = *(_QWORD *)result;
      if ( *(_QWORD *)result )
      {
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v18 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v18;
        v19 = v13;
        HMLockObject(v13);
        xxxResetTooltip(v12);
        result = ThreadUnlock1(v16, v15, v17);
      }
    }
  }
  v9 = a4 & a1;
  if ( v9 < 0 )
    result = PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0, 0);
  if ( (v9 & 0x40) != 0 )
    return FindTimer(a2, 65530, 2, 1, 0LL);
  return result;
}
