/*
 * XREFs of ndisValidateFilterDriverCharacteristicsHeader @ 0x1C00CE2C8
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00220A0 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_SF_DDDDDDDD @ 0x1C00514EC (WPP_SF_DDDDDDDD.c)
 *     WPP_SF_DDZ @ 0x1C0051580 (WPP_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateFilterDriverCharacteristicsHeader(__int64 a1, const WCHAR *a2)
{
  int v2; // r11d
  const WCHAR *v3; // rax
  int v4; // ebx
  unsigned int v5; // r9d
  _DWORD *v6; // rdi
  unsigned int v7; // r8d
  unsigned __int16 v9; // dx

  v2 = *(unsigned __int8 *)(a1 + 4);
  v3 = (const WCHAR *)&unk_1C00897C0;
  v4 = *(unsigned __int8 *)(a1 + 5);
  v5 = 0;
  *(_DWORD *)a2 = 0;
  v6 = a2;
  while ( (v4 | (v2 << 16)) != *(_DWORD *)v3 )
  {
    v3 += 4;
    a2 = L"DefaultFilterSettings";
    if ( v3 == L"DefaultFilterSettings" )
      goto LABEL_6;
  }
  v5 = *((unsigned __int8 *)v3 + 6);
LABEL_6:
  switch ( v5 )
  {
    case 1u:
      v9 = *(_WORD *)(a1 + 2);
      v7 = v9;
      if ( v9 >= 0xE0u )
        v7 = 224;
      goto LABEL_12;
    case 2u:
      v7 = 224;
      break;
    case 3u:
      v7 = 240;
      break;
    default:
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_DDZ(0x2Cu, (__int64)a2, v2, v4);
      return 3221291012LL;
  }
  if ( *(_BYTE *)a1 == 0x8B && *(unsigned __int16 *)(a1 + 2) >= v7 && *(unsigned __int8 *)(a1 + 1) >= v5 )
  {
LABEL_12:
    *v6 = v7;
    return 0LL;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_DDDDDDDD(0x2Du, *(unsigned __int8 *)(a1 + 1), 139, v5);
  return 3221291013LL;
}
