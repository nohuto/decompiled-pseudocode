/*
 * XREFs of sub_1800A20EC @ 0x1800A20EC
 * Callers:
 *     sub_1800A35D4 @ 0x1800A35D4 (sub_1800A35D4.c)
 * Callees:
 *     sub_1800705EC @ 0x1800705EC (sub_1800705EC.c)
 *     sub_1800728F0 @ 0x1800728F0 (sub_1800728F0.c)
 *     sub_1800A0280 @ 0x1800A0280 (sub_1800A0280.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 */

__int64 __fastcall sub_1800A20EC(__int64 *a1, __int64 a2, size_t *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rbx
  const void *v8; // rdx
  const void *v9; // rcx
  size_t v10; // r14
  size_t v11; // r8
  int v12; // eax
  bool v13; // sf
  _QWORD *v14; // rax
  __int64 v16[4]; // [rsp+38h] [rbp-20h] BYREF

  v6 = sub_1800728F0(a1, a3);
  v7 = v6;
  if ( v6 == (__int64 *)*a1 )
    goto LABEL_14;
  v8 = v6 + 4;
  if ( (unsigned __int64)v6[7] >= 0x10 )
    v8 = (const void *)v6[4];
  v9 = a3;
  if ( a3[3] >= 0x10 )
    v9 = (const void *)*a3;
  v10 = v6[6];
  v11 = a3[2];
  if ( v10 < v11 )
    v11 = v6[6];
  v12 = memcmp(v9, v8, v11);
  v13 = v12 < 0;
  if ( v12 )
    goto LABEL_12;
  if ( a3[2] < v10 )
    goto LABEL_14;
  if ( a3[2] <= v10 )
  {
    v13 = 0;
LABEL_12:
    if ( !v13 )
      goto LABEL_13;
LABEL_14:
    v16[0] = (__int64)a3;
    v14 = sub_1800A0280(a1, (__int64)&unk_1801EF900, v16);
    sub_1800705EC((__int64 ***)a1, v16, v7, v14 + 4, v14);
    *(_QWORD *)a2 = v16[0];
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
LABEL_13:
  *(_QWORD *)a2 = v7;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
