/*
 * XREFs of ?IsEmpty@ViewGroup@@UEAA_NXZ @ 0x180207000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ViewGroup::IsEmpty(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  bool v3; // bl

  v1 = this + 21;
  AcquireSRWLockShared(this + 21);
  v3 = this[23].Ptr == 0LL;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
