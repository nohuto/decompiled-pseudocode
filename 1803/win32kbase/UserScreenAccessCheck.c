/*
 * XREFs of UserScreenAccessCheck @ 0x1C001E7D0
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00C9D30 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     UserSurfaceAccessCheck @ 0x1C001F650 (UserSurfaceAccessCheck.c)
 */

__int64 UserScreenAccessCheck()
{
  __int64 v0; // rcx

  v0 = 0LL;
  if ( grpdeskRitInput )
    v0 = ***((_QWORD ***)grpdeskRitInput + 1);
  return UserSurfaceAccessCheck(v0);
}
