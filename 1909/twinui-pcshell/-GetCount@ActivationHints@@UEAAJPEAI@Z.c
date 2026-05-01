/*
 * XREFs of ?GetCount@ActivationHints@@UEAAJPEAI@Z @ 0x1803AB580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ActivationHints::GetCount(RTL_SRWLOCK *this, unsigned int *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  *a2 = ((char *)this[8].Ptr - (char *)this[7].Ptr) / 80;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
