/*
 * XREFs of UserRedrawDesktop @ 0x1C0223048
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0259D10 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 UserRedrawDesktop()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
  v0 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1);
  v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v10;
  v10[1] = v0;
  _InterlockedAdd((volatile signed __int32 *)(v0 + 8), 1u);
  xxxInternalInvalidate((struct tagWND *)v0, (HRGN)1, 0x485u);
  result = ThreadUnlock1(v4, v3);
  if ( !v11 )
    return UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return result;
}
