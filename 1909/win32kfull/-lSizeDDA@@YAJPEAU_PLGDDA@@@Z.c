/*
 * XREFs of ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C00037B4
 * Callers:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 * Callees:
 *     ?bAddOverflow@@YAHJJ@Z @ 0x1C0003888 (-bAddOverflow@@YAHJJ@Z.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C00CE178 (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall lSizeDDA(struct _PLGDDA *a1)
{
  int *v1; // r9
  int v2; // r8d
  __int64 v3; // r10
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // r11d
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  int v13; // ecx
  bool v14; // cc
  int v15; // ecx
  _DWORD v17[3]; // [rsp+24h] [rbp-24h] BYREF

  v1 = v17;
  v2 = *((_DWORD *)a1 + 1);
  v3 = 3LL;
  v17[0] = *((_DWORD *)a1 + 3);
  v4 = v2;
  v17[1] = *((_DWORD *)a1 + 5);
  v17[2] = *((_DWORD *)a1 + 7);
  do
  {
    v5 = *v1;
    v6 = *v1++;
    if ( v4 <= v5 )
      v6 = v4;
    v4 = v6;
    if ( v2 >= v5 )
      v5 = v2;
    v2 = v5;
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)bSubOverflow(v5, v6) )
    return 0LL;
  v10 = v8 - v7;
  if ( !v10 )
    v10 = v9;
  if ( (unsigned int)bAddOverflow(v10, v7) )
    return 0LL;
  v13 = v12 + 4;
  if ( v12 != -4 )
  {
    if ( v13 < 0 )
    {
      v14 = v13 < -268435456;
LABEL_15:
      if ( v14 )
        return 0LL;
      goto LABEL_16;
    }
    if ( v13 > 0 )
    {
      v11 = 0x7FFFFFFF % v13;
      v14 = 0x7FFFFFFF / v13 < 8;
      goto LABEL_15;
    }
    if ( v12 == 2147483644 )
      return 0LL;
    v11 = -2147483647 % v13;
    if ( -2147483647 / v13 < -8 )
      return 0LL;
  }
LABEL_16:
  if ( !(unsigned int)bAddOverflow(8 * v13, v11) )
    return (unsigned int)(v15 + 4);
  return 0LL;
}
