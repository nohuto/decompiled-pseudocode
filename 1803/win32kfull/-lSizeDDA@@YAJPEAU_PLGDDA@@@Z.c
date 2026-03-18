/*
 * XREFs of ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C02A840C
 * Callers:
 *     EngPlgBlt @ 0x1C025CFE0 (EngPlgBlt.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0104EB4 (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bAddOverflow@@YAHJJ@Z @ 0x1C02A6514 (-bAddOverflow@@YAHJJ@Z.c)
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
  int v11; // r8d
  int v12; // r8d
  int v13; // ecx
  bool v14; // cc
  int v15; // ecx
  _DWORD v16[3]; // [rsp+24h] [rbp-24h] BYREF

  v1 = v16;
  v2 = *((_DWORD *)a1 + 1);
  v3 = 3LL;
  v16[0] = *((_DWORD *)a1 + 3);
  v4 = v2;
  v16[1] = *((_DWORD *)a1 + 5);
  v16[2] = *((_DWORD *)a1 + 7);
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
  if ( bSubOverflow(v5, v6) )
    return 0LL;
  v11 = v8 - v7;
  if ( !v11 )
    v11 = v9;
  if ( bAddOverflow(v11) )
    return 0LL;
  v13 = v12 + 4;
  if ( v12 != -4 )
  {
    if ( v13 >= 0 )
    {
      if ( v13 <= 0 )
      {
        if ( v12 == 2147483644 )
          return 0LL;
        v14 = -2147483647 / v13 < -8;
      }
      else
      {
        v14 = 0x7FFFFFFF / v13 < 8;
      }
    }
    else
    {
      v14 = v13 < -268435456;
    }
    if ( !v14 )
      goto LABEL_20;
    return 0LL;
  }
LABEL_20:
  if ( bAddOverflow(8 * v13) )
    return 0LL;
  return (unsigned int)(v15 + 4);
}
