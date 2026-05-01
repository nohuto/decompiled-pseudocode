/*
 * XREFs of _anonymous_namespace_::CompareAppUsageTimes @ 0x1801FF2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::CompareAppUsageTimes(RTL_SRWLOCK **a1, RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v3; // rsi
  RTL_SRWLOCK *v5; // rbp
  bool v6; // bl

  v3 = *a1 + 6;
  AcquireSRWLockShared(v3);
  v5 = *a2 + 6;
  AcquireSRWLockShared(v5);
  v6 = CompareFileTime((const FILETIME *)((char *)&(*a1)[4].Ptr + 4), (const FILETIME *)((char *)&(*a2)[4].Ptr + 4)) > 0;
  if ( v5 )
    ReleaseSRWLockShared(v5);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v6;
}
