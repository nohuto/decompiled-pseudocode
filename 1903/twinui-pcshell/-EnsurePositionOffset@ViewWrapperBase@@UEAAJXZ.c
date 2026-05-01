/*
 * XREFs of ?EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ @ 0x1802978A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180299018 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::EnsurePositionOffset(ViewWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = (RTL_SRWLOCK *)(*((_QWORD *)this + 21) + 280LL);
  AcquireSRWLockExclusive(v2);
  ViewWrapperBase::PushDesiredPositionToWindow(this, 1LL);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
