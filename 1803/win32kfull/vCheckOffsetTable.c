/*
 * XREFs of vCheckOffsetTable @ 0x1C0226EC8
 * Callers:
 *     bConvertFontRes @ 0x1C0226134 (bConvertFontRes.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall vCheckOffsetTable(__int16 *a1, _QWORD *a2)
{
  unsigned __int16 v3; // r8
  int v4; // ecx
  unsigned __int16 *v5; // r10
  __int16 v6; // ax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r11
  unsigned __int16 v10; // ax
  unsigned __int16 result; // ax

  v3 = 0;
  v4 = *((unsigned __int8 *)a1 + 5) - *((unsigned __int8 *)a1 + 4);
  v5 = (unsigned __int16 *)(*a2 + *((int *)a1 + 4));
  v6 = *a1;
  a1[1] = 0;
  v7 = v4 + 1;
  if ( v7 )
  {
    v8 = 4LL;
    if ( v6 != 512 )
      v8 = 6LL;
    v9 = v7;
    do
    {
      v10 = *v5;
      if ( *v5 <= v3 )
        v10 = v3;
      v3 = v10;
      if ( !*v5 )
        a1[1] |= 1u;
      v5 = (unsigned __int16 *)((char *)v5 + v8);
      --v9;
    }
    while ( v9 );
  }
  result = a1[5];
  *((_DWORD *)a1 + 7) = (((unsigned __int16)a1[4] * (((unsigned int)v3 + 7) >> 3) + 3) & 0xFFFFFFFC) + 16;
  if ( result <= v3 )
    result = v3;
  a1[5] = result;
  return result;
}
