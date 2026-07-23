/*
 * XREFs of sub_18004E7DC @ 0x18004E7DC
 * Callers:
 *     sub_18004E6F8 @ 0x18004E6F8 (sub_18004E6F8.c)
 *     sub_180050258 @ 0x180050258 (sub_180050258.c)
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18004E7DC(_RTL_SRWLOCK *a1, int a2, __int64 a3)
{
  _RTL_SRWLOCK *v5; // rcx

  v5 = a1 + 3;
  if ( a2 == 1 )
    RtlAcquireSRWLockExclusive(v5);
  else
    RtlAcquireSRWLockShared(v5);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = a2;
}
