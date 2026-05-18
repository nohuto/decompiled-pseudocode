/*
 * XREFs of sub_1800728F0 @ 0x1800728F0
 * Callers:
 *     sub_180072D90 @ 0x180072D90 (sub_180072D90.c)
 *     sub_1800A1F4C @ 0x1800A1F4C (sub_1800A1F4C.c)
 *     sub_1800A201C @ 0x1800A201C (sub_1800A201C.c)
 *     sub_1800A20EC @ 0x1800A20EC (sub_1800A20EC.c)
 *     sub_1800A618C @ 0x1800A618C (sub_1800A618C.c)
 *     sub_1800D4080 @ 0x1800D4080 (sub_1800D4080.c)
 *     sub_18011CCC8 @ 0x18011CCC8 (sub_18011CCC8.c)
 * Callees:
 *     memcmp @ 0x180125AA8 (memcmp.c)
 */

__int64 *__fastcall sub_1800728F0(__int64 *a1, size_t *a2)
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
