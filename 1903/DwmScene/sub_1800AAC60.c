/*
 * XREFs of sub_1800AAC60 @ 0x1800AAC60
 * Callers:
 *     sub_1800AA488 @ 0x1800AA488 (sub_1800AA488.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800AAC60(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rbx

  if ( a1 == a2 )
    return 1;
  v4 = a1 + 2;
  v5 = (__int64)a1 - a3;
  v6 = (_QWORD *)(a3 + 16);
  while ( *(v4 - 1) == *(v6 - 1)
       && *v4 == *v6
       && v4[1] == v6[1]
       && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v4[2] + 16LL))(v4[2], v6[2]) )
  {
    v6 += 6;
    v4 += 6;
    if ( (_QWORD *)((char *)v6 + v5 - 16) == a2 )
      return 1;
  }
  return 0;
}
