/*
 * XREFs of RtlpHpVaMgrCtxQuery @ 0x14000CAF4
 * Callers:
 *     RtlpHpQueryVA @ 0x14000A390 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrCommit @ 0x14000C244 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x14000CB98 (RtlSparseArrayElementAllocated.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxQuery(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v5 = RtlSparseArrayElementAllocated(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  if ( !v5 )
    NT_ASSERT("Range != ((void *)0)");
  memset(a3, 0, 0x20uLL);
  if ( (*(_BYTE *)v5 & 4) != 0 )
    v6 = *(_QWORD *)(v5 + 24);
  else
    v6 = *(unsigned __int16 *)(v5 + 24);
  *a3 = v6 << 20;
  v7 = *(unsigned __int8 *)(v5 + 1);
  *((_DWORD *)a3 + 6) = 16;
  *((_DWORD *)a3 + 2) = (*(unsigned __int8 *)(a1 + 48 * v7 + 158) >> 1) & 3;
  *((_DWORD *)a3 + 3) = *(unsigned __int8 *)(a1 + 48 * v7 + 157);
  a3[2] = v5 + 8;
  return 0LL;
}
