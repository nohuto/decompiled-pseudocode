/*
 * XREFs of ?GetCount@ViewGroup@@UEAA_KXZ @ 0x180206CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall ViewGroup::GetCount(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  PVOID Ptr; // rbx

  v1 = this + 21;
  AcquireSRWLockShared(this + 21);
  Ptr = this[23].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return Ptr;
}
