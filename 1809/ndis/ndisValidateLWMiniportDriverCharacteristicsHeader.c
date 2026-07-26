/*
 * XREFs of ndisValidateLWMiniportDriverCharacteristicsHeader @ 0x1C00EAE34
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x1C00F17A0 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_SF_DDDDDDDD @ 0x1C00514EC (WPP_SF_DDDDDDDD.c)
 *     WPP_SF_DDZ @ 0x1C0051580 (WPP_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateLWMiniportDriverCharacteristicsHeader(__int64 a1, _BYTE *a2)
{
  const WCHAR *v2; // rax
  int v3; // r8d
  char v4; // r10

  v2 = (const WCHAR *)&unk_1C00897C0;
  v3 = 0;
  v4 = 0;
  while ( (*(unsigned __int8 *)(a1 + 5) | (*(unsigned __int8 *)(a1 + 4) << 16)) != *(_DWORD *)v2 )
  {
    v2 += 4;
    if ( v2 == L"DefaultFilterSettings" )
      goto LABEL_6;
  }
  v3 = *((unsigned __int8 *)v2 + 5);
  v4 = *((_BYTE *)v2 + 4);
LABEL_6:
  if ( v3 == 1 )
  {
    if ( *(_BYTE *)a1 == 0xC7 && *(_WORD *)(a1 + 2) >= 0x78u && *(_BYTE *)(a1 + 1) )
    {
      *a2 = v4;
      return 0LL;
    }
    else
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_DDDDDDDD(0x2Bu, *(unsigned __int8 *)(a1 + 1), 199, 1);
      return 3221291013LL;
    }
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_DDZ(0x2Au, (__int64)a2, *(unsigned __int8 *)(a1 + 4), *(unsigned __int8 *)(a1 + 5));
    return 3221291012LL;
  }
}
