/*
 * XREFs of sub_18003DA54 @ 0x18003DA54
 * Callers:
 *     sub_18003D974 @ 0x18003D974 (sub_18003D974.c)
 * Callees:
 *     sub_180025B50 @ 0x180025B50 (sub_180025B50.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_18003DA54(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rcx

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
  v7 = sub_180025B50(a1, a3);
  v8 = v7;
  v9 = v7[5];
  if ( v9 )
  {
    v7[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  j_j__o_free(v8);
  *a2 = i;
  return a2;
}
