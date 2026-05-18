/*
 * XREFs of sub_1800A629C @ 0x1800A629C
 * Callers:
 *     sub_1800A3820 @ 0x1800A3820 (sub_1800A3820.c)
 *     sub_1800A40DC @ 0x1800A40DC (sub_1800A40DC.c)
 *     sub_1800A4114 @ 0x1800A4114 (sub_1800A4114.c)
 *     sub_1800A4608 @ 0x1800A4608 (sub_1800A4608.c)
 *     sub_1800A4B48 @ 0x1800A4B48 (sub_1800A4B48.c)
 *     sub_1800A4D60 @ 0x1800A4D60 (sub_1800A4D60.c)
 *     sub_1800A4EA0 @ 0x1800A4EA0 (sub_1800A4EA0.c)
 *     sub_1800A4F2C @ 0x1800A4F2C (sub_1800A4F2C.c)
 *     sub_1800D68F0 @ 0x1800D68F0 (sub_1800D68F0.c)
 *     sub_1800D8C58 @ 0x1800D8C58 (sub_1800D8C58.c)
 * Callees:
 *     sub_180072A00 @ 0x180072A00 (sub_180072A00.c)
 *     memcmp @ 0x180125BB8 (memcmp.c)
 */

__int64 *__fastcall sub_1800A629C(__int64 *a1, __int64 *a2, size_t *a3)
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
  v6 = sub_180072A00(a1, a3);
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
