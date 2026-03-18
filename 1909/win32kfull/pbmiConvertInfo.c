/*
 * XREFs of pbmiConvertInfo @ 0x1C02A8DC4
 * Callers:
 *     GreSetDIBits @ 0x1C02B92A0 (GreSetDIBits.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 */

char *__fastcall pbmiConvertInfo(unsigned __int16 *a1)
{
  int v1; // edx
  int v3; // ebx
  char *v4; // rax
  char *v5; // rcx
  char *v7; // r8
  _BYTE *v8; // rdx
  unsigned __int16 v9; // ax
  char v10; // al

  v1 = a1[5];
  if ( v1 == 1 )
  {
    v3 = 2;
  }
  else if ( a1[5] == 4 )
  {
    v3 = 16;
  }
  else if ( a1[5] == 8 )
  {
    v3 = 256;
  }
  else
  {
    v3 = 0;
    if ( v1 != 16 && v1 != 24 && v1 != 32 )
      return 0LL;
  }
  v4 = (char *)PALLOCMEM2((unsigned int)(4 * v3 + 40), 1886221383LL, 0);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  *(_DWORD *)v4 = 40;
  v7 = (char *)(a1 + 6);
  v8 = v4 + 40;
  *((_DWORD *)v4 + 1) = a1[2];
  *((_DWORD *)v4 + 2) = a1[3];
  *((_WORD *)v4 + 6) = a1[4];
  v9 = a1[5];
  *((_DWORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 9) = 0;
  for ( *((_WORD *)v5 + 7) = v9; v3; --v3 )
  {
    v8[2] = v7[2];
    v8[1] = v7[1];
    v10 = *v7;
    v7 += 3;
    *v8 = v10;
    v8[3] = 0;
    v8 += 4;
  }
  return v5;
}
