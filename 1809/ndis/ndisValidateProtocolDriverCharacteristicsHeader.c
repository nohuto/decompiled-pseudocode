/*
 * XREFs of ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C00CE384
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C00CDAF0 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_SF_DDDDDDDD @ 0x1C00514EC (WPP_SF_DDDDDDDD.c)
 *     WPP_SF_DDZ @ 0x1C0051580 (WPP_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateProtocolDriverCharacteristicsHeader(__int64 a1, unsigned int *a2)
{
  int v2; // r11d
  const WCHAR *v3; // rax
  int v4; // ebx
  int v5; // r9d
  unsigned int v6; // r8d

  v2 = *(unsigned __int8 *)(a1 + 4);
  v3 = (const WCHAR *)&unk_1C00897C0;
  v4 = *(unsigned __int8 *)(a1 + 5);
  v5 = 0;
  *a2 = 0;
  while ( (v4 | (v2 << 16)) != *(_DWORD *)v3 )
  {
    v3 += 4;
    if ( v3 == L"DefaultFilterSettings" )
      goto LABEL_6;
  }
  v5 = *((unsigned __int8 *)v3 + 7);
LABEL_6:
  if ( v5 == 1 )
  {
    v6 = 120;
    goto LABEL_10;
  }
  if ( v5 == 2 )
  {
    v6 = 128;
    if ( *(_BYTE *)a1 != 0x95 || *(_BYTE *)(a1 + 1) < 2u )
    {
LABEL_16:
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_DDDDDDDD(0x2Fu, *(unsigned __int8 *)(a1 + 1), 149, v5);
      return 3221291013LL;
    }
LABEL_10:
    if ( *(unsigned __int16 *)(a1 + 2) >= v6 )
    {
      *a2 = v6;
      return 0LL;
    }
    goto LABEL_16;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_DDZ(0x2Eu, (__int64)a2, v2, v4);
  return 3221291012LL;
}
