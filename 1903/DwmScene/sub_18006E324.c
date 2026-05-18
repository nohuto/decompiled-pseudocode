/*
 * XREFs of sub_18006E324 @ 0x18006E324
 * Callers:
 *     sub_18006E244 @ 0x18006E244 (sub_18006E244.c)
 *     sub_180124E00 @ 0x180124E00 (sub_180124E00.c)
 * Callees:
 *     sub_180025A40 @ 0x180025A40 (sub_180025A40.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_18006E324(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 *v9; // rcx

  i = a3[2];
  v5 = a3;
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = a3[1]; !*(_BYTE *)(i + 25) && v5 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
      v5 = (__int64 *)i;
  }
  else
  {
    for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
      i = j;
  }
  v8 = sub_180025A40(a1, a3);
  v9 = (__int64 *)v8[12];
  if ( v9 )
  {
    LOBYTE(v7) = v9 != v8 + 5;
    (*(void (__fastcall **)(__int64 *, __int64))(*v9 + 32))(v9, v7);
    v8[12] = 0LL;
  }
  j_j__o_free(v8);
  *a2 = i;
  return a2;
}
