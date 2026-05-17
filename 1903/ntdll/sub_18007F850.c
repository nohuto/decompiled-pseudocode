/*
 * XREFs of sub_18007F850 @ 0x18007F850
 * Callers:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 * Callees:
 *     sub_18002891C @ 0x18002891C (sub_18002891C.c)
 */

__int64 __fastcall sub_18007F850(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // r11
  int v3; // r8d
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // r9

  if ( (unsigned int)sub_18002891C(a1) != 1 )
    return 3LL;
  v3 = 0;
  v4 = *v1 >> 1;
  v5 = 2;
  if ( v4 <= 2 )
    return v5;
  v6 = *((_QWORD *)v1 + 1);
  while ( *(_WORD *)(v6 + 2LL * v5) != 92 && *(_WORD *)(v6 + 2LL * v5) != 47 || ++v3 != 2 )
  {
    if ( ++v5 >= v4 )
      return v5;
  }
  return v5 + 1;
}
