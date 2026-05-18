/*
 * XREFs of sub_18007F144 @ 0x18007F144
 * Callers:
 *     sub_18007F064 @ 0x18007F064 (sub_18007F064.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_180025A40 @ 0x180025A40 (sub_180025A40.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_18007F144(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 *v7; // rdi
  volatile signed __int32 *v8; // rcx

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
  v7 = sub_180025A40(a1, a3);
  sub_180011388(v7 + 6);
  v8 = (volatile signed __int32 *)v7[5];
  if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
  j_j__o_free(v7);
  *a2 = i;
  return a2;
}
