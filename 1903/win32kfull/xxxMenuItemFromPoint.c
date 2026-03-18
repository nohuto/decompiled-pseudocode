/*
 * XREFs of xxxMenuItemFromPoint @ 0x1C0246C4C
 * Callers:
 *     NtUserMenuItemFromPoint @ 0x1C02323C0 (NtUserMenuItemFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     MNItemHitTest @ 0x1C0222D58 (MNItemHitTest.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C02465E0 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246B40 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxMenuItemFromPoint(__int64 a1, __int64 **a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 MenuPwnd; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]

  MenuPwnd = GetMenuPwnd(a1, (__int64)a2);
  if ( !MenuPwnd )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7, v8);
    v17 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v17;
    v18 = MenuPwnd;
    HMLockObject(MenuPwnd);
    xxxMNRecomputeBarIfNeeded(MenuPwnd, a2, v11, v12);
    ThreadUnlock1(v14, v13, v15);
  }
  v16 = (__int64)a2[2];
  if ( !v16 )
    v16 = **a2;
  return MNItemHitTest(v16, MenuPwnd, a3);
}
