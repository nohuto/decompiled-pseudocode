/*
 * XREFs of sub_180046FB0 @ 0x180046FB0
 * Callers:
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180046B74 @ 0x180046B74 (sub_180046B74.c)
 * Callees:
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_180046FB0(__int64 a1, __int64 a2, int a3, char a4)
{
  int v5; // r8d
  int v6; // edx
  int v9; // [rsp+38h] [rbp-10h]

  if ( a4 )
  {
    v5 = a2 - 16;
    v6 = *(_DWORD *)(a2 - 16 + 8);
    LOWORD(v9) = v6;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v9 = *(_DWORD *)(a1 + 136) ^ v6;
      if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9))) )
        sub_18010A694(3, a1, v5, 0, 0LL, 0LL);
    }
    return (unsigned int)(a3 - (unsigned __int16)v9);
  }
  else
  {
    return (unsigned int)(a3 - *(_DWORD *)(a2 + 40));
  }
}
