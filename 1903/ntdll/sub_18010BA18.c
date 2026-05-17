/*
 * XREFs of sub_18010BA18 @ 0x18010BA18
 * Callers:
 *     sub_18005108C @ 0x18005108C (sub_18005108C.c)
 * Callees:
 *     sub_1800449D0 @ 0x1800449D0 (sub_1800449D0.c)
 *     sub_180051304 @ 0x180051304 (sub_180051304.c)
 */

__int64 __fastcall sub_18010BA18(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // r9
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2 & *(_QWORD *)a1;
  v5 = v2 + 32 * ((unsigned __int64)((unsigned int)*a2 - (unsigned int)v2) >> *(_BYTE *)(a1 + 8));
  v6 = sub_1800449D0(a1, v5, *a2, v2, &v8);
  return sub_180051304((__int64 *)a1, (__int64 *)a2, v6, *(unsigned int *)(v5 + 4), v8);
}
