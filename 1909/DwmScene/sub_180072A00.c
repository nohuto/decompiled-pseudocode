/*
 * XREFs of sub_180072A00 @ 0x180072A00
 * Callers:
 *     sub_180072EA0 @ 0x180072EA0 (sub_180072EA0.c)
 *     sub_1800A205C @ 0x1800A205C (sub_1800A205C.c)
 *     sub_1800A212C @ 0x1800A212C (sub_1800A212C.c)
 *     sub_1800A21FC @ 0x1800A21FC (sub_1800A21FC.c)
 *     sub_1800A629C @ 0x1800A629C (sub_1800A629C.c)
 *     sub_1800D4190 @ 0x1800D4190 (sub_1800D4190.c)
 *     sub_18011CDD8 @ 0x18011CDD8 (sub_18011CDD8.c)
 * Callees:
 *     memcmp @ 0x180125BB8 (memcmp.c)
 */

__int64 *__fastcall sub_180072A00(__int64 *a1, size_t *a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rbx
  const void *v5; // rdx
  const void *v6; // rcx
  size_t v7; // rbp
  size_t v8; // r8
  int v9; // eax
  bool v10; // sf

  v2 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v4 + 25) )
  {
    v5 = a2;
    if ( a2[3] >= 0x10 )
      v5 = (const void *)*a2;
    v6 = v4 + 4;
    if ( (unsigned __int64)v4[7] >= 0x10 )
      v6 = (const void *)v4[4];
    v7 = v4[6];
    v8 = v7;
    if ( a2[2] < v7 )
      v8 = a2[2];
    v9 = memcmp(v6, v5, v8);
    v10 = v9 < 0;
    if ( !v9 )
    {
      if ( v7 < a2[2] )
        goto LABEL_14;
      if ( v7 > a2[2] )
        goto LABEL_13;
      v10 = 0;
    }
    if ( v10 )
    {
LABEL_14:
      v4 = (__int64 *)v4[2];
    }
    else
    {
LABEL_13:
      v2 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  return v2;
}
