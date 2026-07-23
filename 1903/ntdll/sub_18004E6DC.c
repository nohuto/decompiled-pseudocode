/*
 * XREFs of sub_18004E6DC @ 0x18004E6DC
 * Callers:
 *     sub_18004E460 @ 0x18004E460 (sub_18004E460.c)
 *     sub_18004E624 @ 0x18004E624 (sub_18004E624.c)
 *     sub_18004E6F8 @ 0x18004E6F8 (sub_18004E6F8.c)
 *     sub_180050258 @ 0x180050258 (sub_180050258.c)
 *     sub_1800F1150 @ 0x1800F1150 (sub_1800F1150.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18004E6DC(__int64 a1)
{
  bool v1; // zf
  _RTL_SRWLOCK *v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = (_RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( v1 )
    RtlReleaseSRWLockExclusive(v2);
  else
    RtlReleaseSRWLockShared(v2);
}
