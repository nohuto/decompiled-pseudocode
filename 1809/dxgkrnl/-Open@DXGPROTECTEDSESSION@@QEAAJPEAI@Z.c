/*
 * XREFs of ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C022CC98
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C022CFB0 (DxgkCreateProtectedSession.c)
 *     DxgkOpenProtectedSessionFromNtHandle @ 0x1C022DCA0 (DxgkOpenProtectedSessionFromNtHandle.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000E448 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Open(DXGPROTECTEDSESSION *this, unsigned int *a2)
{
  __int64 v4; // rax
  struct DXGPROCESS *Current; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 1107LL;
    WdLogEvent5_WdAssertion(v4);
  }
  Current = DXGPROCESS::GetCurrent();
  *a2 = DXGPROCESS::AllocHandleSafe((__int64)Current, (__int64)this, 0xEu);
  _InterlockedIncrement((volatile signed __int32 *)this + 18);
  return 0LL;
}
