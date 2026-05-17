/*
 * XREFs of sub_18005C8BC @ 0x18005C8BC
 * Callers:
 *     sub_18005C3BC @ 0x18005C3BC (sub_18005C3BC.c)
 * Callees:
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

char *__fastcall sub_18005C8BC(void **a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  __int64 v5; // rbx
  const void *v6; // rdx
  char *v9; // rdi
  unsigned __int16 v10; // ax
  char *result; // rax

  v5 = a4;
  v6 = (const void *)*((_QWORD *)a3 + 1);
  if ( v6 && *a3 )
    memmove(*a1, v6, *a3);
  v9 = (char *)*a1;
  *(_QWORD *)(a2 + 8) = *a1;
  v10 = *a3;
  *(_WORD *)a2 = *a3;
  *(_WORD *)(a2 + 2) = v5;
  if ( v10 < (unsigned __int16)v5 )
    memset(&v9[v10], 0, (unsigned __int16)v5 - (unsigned __int64)v10);
  result = &v9[(v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
  *a1 = result;
  return result;
}
