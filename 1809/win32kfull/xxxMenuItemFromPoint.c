/*
 * XREFs of xxxMenuItemFromPoint @ 0x1C022E474
 * Callers:
 *     NtUserMenuItemFromPoint @ 0x1C021A4A0 (NtUserMenuItemFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNItemHitTest @ 0x1C020B230 (MNItemHitTest.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C022DE28 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C022E368 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxMenuItemFromPoint(__int64 a1, __int64 **a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 MenuPwnd; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  MenuPwnd = GetMenuPwnd(a1, (__int64)a2);
  if ( !MenuPwnd )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
    v14[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v14;
    v14[1] = MenuPwnd;
    _InterlockedIncrement((volatile signed __int32 *)(MenuPwnd + 8));
    xxxMNRecomputeBarIfNeeded(MenuPwnd, a2, v9, v10);
    ThreadUnlock1(v12, v11);
  }
  v13 = (__int64)a2[2];
  if ( !v13 )
    v13 = **a2;
  return MNItemHitTest(v13, MenuPwnd, a3);
}
