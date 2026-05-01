/*
 * XREFs of _HamPopulateActivityProperties@12 @ 0x10005B20
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __stdcall HamPopulateActivityProperties(_WORD *a1, _WORD *a2, _DWORD *a3)
{
  int v3; // ecx
  _WORD *i; // eax
  int v5; // ecx
  _WORD *j; // eax
  _WORD *v7; // ecx
  int v8; // edx
  __int16 v9; // ax
  int v10; // edx
  _WORD *v11; // eax
  __int16 v12; // cx
  int v13; // eax

  if ( !a1 )
    return -1073741585;
  v3 = 64;
  for ( i = a1; *i; ++i )
  {
    if ( !--v3 )
      return -1073741585;
  }
  if ( !a2 )
    return -1073741584;
  v5 = 64;
  for ( j = a2; *j; ++j )
  {
    if ( !--v5 )
      return -1073741584;
  }
  memset(a3 + 1, 0, 0x184u);
  v7 = a3 + 3;
  *a3 = 8397888;
  v8 = 64;
  while ( v8 != -2147483582 )
  {
    v9 = *(_WORD *)((char *)v7 + (char *)a1 - (char *)(a3 + 3));
    if ( !v9 )
      break;
    *v7++ = v9;
    if ( !--v8 )
    {
      --v7;
      break;
    }
  }
  v10 = 64;
  *v7 = 0;
  v11 = a3 + 35;
  while ( v10 != -2147483582 )
  {
    v12 = *(_WORD *)((char *)v11 + (char *)a2 - (char *)(a3 + 35));
    if ( !v12 )
      break;
    *v11++ = v12;
    if ( !--v10 )
    {
      --v11;
      break;
    }
  }
  *v11 = 0;
  a3[67] = 5;
  a3[69] = -1;
  memset(a3 + 70, 0, 0x68u);
  memset(a3 + 80, 0, 0x38u);
  a3[92] = 1;
  a3[88] = -1;
  a3[89] = -1;
  a3[86] = -1;
  a3[87] = -1;
  a3[84] = -1;
  a3[85] = -1;
  a3[82] = -1;
  a3[83] = -1;
  v13 = a3[81];
  a3[92] |= 0x20u;
  a3[80] |= 0x80u;
  a3[81] = v13;
  return 0;
}
