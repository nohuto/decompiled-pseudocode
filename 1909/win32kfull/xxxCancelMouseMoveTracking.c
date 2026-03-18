/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C00E9B58
 * Callers:
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     xxxTrackMouseMove @ 0x1C00200FC (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxResetTooltip @ 0x1C00EA428 (xxxResetTooltip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00EA580 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxHotTrack @ 0x1C01177B8 (xxxHotTrack.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 */

__int64 __fastcall xxxCancelMouseMoveTracking(__int16 a1, __int64 a2, unsigned int a3, __int16 a4)
{
  __int64 result; // rax
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h]
  __int64 v22; // [rsp+40h] [rbp-28h]

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
    v14 = result;
    if ( result )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result )
      {
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13);
        v20 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
        v21 = v15;
        HMLockObject(v15);
        xxxResetTooltip(v14);
        result = ThreadUnlock1(v18, v17, v19);
      }
    }
  }
  v9 = a4 & a1;
  if ( v9 < 0 )
    result = PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0LL);
  if ( (v9 & 0x40) != 0 )
    return FindTimer(a2, 65530LL, 2u, 1, 0LL);
  return result;
}
