/*
 * XREFs of ?GetNeediness@CApplicationViewBase@@UEAAJPEAH@Z @ 0x18017D9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewBase::GetNeediness(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 6;
  AcquireSRWLockShared(this + 6);
  *a2 = LOBYTE(this[16].Ptr);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
