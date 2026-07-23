/*
 * XREFs of PfSnParametersSetDefaults @ 0x1409D5A20
 * Callers:
 *     PfpParametersInitialize @ 0x1409D572C (PfpParametersInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnParametersSetDefaults(__int64 a1)
{
  __int64 v1; // r11
  _QWORD *v2; // r9
  int v3; // edx
  _DWORD *v4; // r10
  _QWORD *v5; // rcx
  _WORD *v6; // rax
  __int64 v7; // rdx
  __int16 v8; // cx
  _WORD *v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax

  v1 = a1 + 96;
  v2 = (_QWORD *)(a1 + 520);
  v3 = 0;
  v4 = (_DWORD *)(a1 + 96);
  v5 = (_QWORD *)(a1 + 112);
  do
  {
    *v4 = 0;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        *((_DWORD *)v5 - 2) = 20000;
        *((_DWORD *)v5 - 1) = 500;
        *v5 = -10000000LL;
        *v2 = L"Activity";
      }
    }
    else
    {
      *((_DWORD *)v5 - 2) = 32000;
      *((_DWORD *)v5 - 1) = 340;
      *v5 = -10000000LL;
      *v2 = L"AppLaunch";
    }
    ++v3;
    ++v2;
    ++v4;
    v5 += 2;
  }
  while ( v3 < 2 );
  v6 = (_WORD *)(v1 + 48);
  *(_DWORD *)(v1 + 400) = 0;
  *(_DWORD *)(v1 + 40) = 8;
  *(_DWORD *)(v1 + 44) = 16;
  v7 = 48LL;
  while ( v7 != -2147483598 )
  {
    v8 = *(_WORD *)((char *)v6 + (_QWORD)&aSystemrootPref[-24] - v1);
    if ( !v8 )
      break;
    *v6++ = v8;
    if ( !--v7 )
    {
      --v6;
      break;
    }
  }
  v9 = (_WORD *)(v1 + 144);
  *v6 = 0;
  *(_WORD *)(v1 + 142) = 0;
  v10 = 128LL;
  while ( 1 )
  {
    result = v10 + 2147483518;
    if ( v10 == -2147483518 )
      break;
    result = *(unsigned __int16 *)((char *)v9 + (_QWORD)&aDllhostExeMmcE[-72] - v1);
    if ( !(_WORD)result )
      break;
    *v9++ = result;
    if ( !--v10 )
    {
      --v9;
      break;
    }
  }
  *v9 = 0;
  *(_WORD *)(v1 + 398) = 0;
  *(_DWORD *)(v1 + 404) = 10;
  return result;
}
