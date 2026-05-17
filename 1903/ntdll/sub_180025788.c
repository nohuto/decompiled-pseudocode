/*
 * XREFs of sub_180025788 @ 0x180025788
 * Callers:
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_180025714 @ 0x180025714 (sub_180025714.c)
 * Callees:
 *     sub_18002580C @ 0x18002580C (sub_18002580C.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_180025788(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v4; // edi

  v4 = 0;
  if ( *a2 )
  {
    v4 = sub_18002580C(a1, *a1 + 2 + (unsigned int)*a2);
    if ( v4 >= 0 )
    {
      memmove((void *)(*((_QWORD *)a1 + 1) + *a1), *((const void **)a2 + 1), *a2);
      *a1 += *a2;
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
    }
  }
  return (unsigned int)v4;
}
