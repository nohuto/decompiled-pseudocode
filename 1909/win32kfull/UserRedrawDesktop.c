/*
 * XREFs of UserRedrawDesktop @ 0x1C023AFC4
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0272EE8 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0021E34 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 UserRedrawDesktop()
{
  struct tagWND *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v12);
  v0 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1, v2);
  v9 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v9;
  v10 = v0;
  HMLockObject(v0);
  xxxInternalInvalidate(v0, (HRGN)1, 0x485u);
  result = ThreadUnlock1(v5, v4, v6);
  if ( !v12 )
    return UserSessionSwitchLeaveCrit(v8);
  return result;
}
