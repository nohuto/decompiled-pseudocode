/*
 * XREFs of UserRedrawDesktop @ 0x1C023B5E4
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02735F8 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001A014 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 */

__int64 UserRedrawDesktop()
{
  struct tagWND *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v13);
  v0 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1, v2, v3);
  v10 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
  v11 = v0;
  HMLockObject(v0);
  xxxInternalInvalidate(v0, (HRGN)1, 0x485u);
  result = ThreadUnlock1(v6, v5, v7);
  if ( !v13 )
    return UserSessionSwitchLeaveCrit(v9);
  return result;
}
