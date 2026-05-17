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

void __fastcall sub_18004E7DC(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  volatile signed __int64 *v6; // rcx
  int v7; // edi

  v6 = (volatile signed __int64 *)(a1 + 24);
  v7 = a2;
  if ( (_DWORD)a2 == 1 )
    RtlAcquireSRWLockExclusive(v6);
  else
    RtlAcquireSRWLockShared(v6, a2, a3, a4);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = v7;
}
