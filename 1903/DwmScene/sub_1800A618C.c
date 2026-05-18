/*
 * XREFs of sub_1800A618C @ 0x1800A618C
 * Callers:
 *     sub_1800A3710 @ 0x1800A3710 (sub_1800A3710.c)
 *     sub_1800A3FCC @ 0x1800A3FCC (sub_1800A3FCC.c)
 *     sub_1800A4004 @ 0x1800A4004 (sub_1800A4004.c)
 *     sub_1800A44F8 @ 0x1800A44F8 (sub_1800A44F8.c)
 *     sub_1800A4A38 @ 0x1800A4A38 (sub_1800A4A38.c)
 *     sub_1800A4C50 @ 0x1800A4C50 (sub_1800A4C50.c)
 *     sub_1800A4D90 @ 0x1800A4D90 (sub_1800A4D90.c)
 *     sub_1800A4E1C @ 0x1800A4E1C (sub_1800A4E1C.c)
 *     sub_1800D67E0 @ 0x1800D67E0 (sub_1800D67E0.c)
 *     sub_1800D8B48 @ 0x1800D8B48 (sub_1800D8B48.c)
 * Callees:
 *     sub_1800728F0 @ 0x1800728F0 (sub_1800728F0.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 */

__int64 *__fastcall sub_1800A618C(__int64 *a1, __int64 *a2, size_t *a3)
{
  __int64 v3; // r15
  __int64 *v6; // rax
  __int64 v7; // rbx
  const void *v8; // rdx
  const void *v9; // rcx
  unsigned __int64 v10; // rbp
  size_t v11; // rdi
  size_t v12; // r8
  int v13; // eax
  bool v14; // sf

  v3 = *a1;
  v6 = sub_1800728F0(a1, a3);
  v7 = (__int64)v6;
  if ( v6 == (__int64 *)v3 )
    goto LABEL_13;
  v8 = v6 + 4;
  if ( (unsigned __int64)v6[7] >= 0x10 )
    v8 = (const void *)v6[4];
  v9 = a3;
  if ( a3[3] >= 0x10 )
    v9 = (const void *)*a3;
  v10 = v6[6];
  v11 = a3[2];
  v12 = v11;
  if ( v10 < v11 )
    v12 = v6[6];
  v13 = memcmp(v9, v8, v12);
  v14 = v13 < 0;
  if ( v13 )
  {
LABEL_12:
    if ( v14 )
      goto LABEL_13;
    goto LABEL_14;
  }
  if ( v11 < v10 )
  {
LABEL_13:
    v7 = v3;
    goto LABEL_14;
  }
  if ( v11 <= v10 )
  {
    v14 = 0;
    goto LABEL_12;
  }
LABEL_14:
  *a2 = v7;
  return a2;
}
