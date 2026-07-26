/*
 * XREFs of ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C00CD9F4
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021CD8 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_DDDDDDDD @ 0x1C00514EC (WPP_SF_DDDDDDDD.c)
 *     ?NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z @ 0x1C0103110 (-NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z.c)
 */

__int64 __fastcall ndisValidateMiniportDriverCharacteristicsHeader(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // esi
  __int64 v7; // rbx
  unsigned int v10; // edi
  const WCHAR *v11; // rax

  v5 = 0;
  v7 = a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 4);
  v10 = 152;
  *a5 = 0;
  if ( __PAIR16__(*(_BYTE *)(v7 + 5), a1) == 20998 && (unsigned __int16)(*(_WORD *)(v7 + 2) - 152) <= 7u )
  {
    *a3 = 6;
    *a4 = 70;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_dd(0x26u, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, 6, 82);
    if ( a2 )
      NdisTraceLoggingLogoFailure(a1, a2, *(unsigned __int16 *)(v7 + 2));
  }
  else
  {
    *a3 = (unsigned __int8)a1;
    *a4 = *(unsigned __int8 *)(v7 + 5);
  }
  v11 = (const WCHAR *)&unk_1C00897C0;
  while ( (*a4 | (*a3 << 16)) != *(_DWORD *)v11 )
  {
    v11 += 4;
    if ( v11 == L"DefaultFilterSettings" )
      goto LABEL_8;
  }
  v5 = *((unsigned __int8 *)v11 + 4);
LABEL_8:
  switch ( v5 )
  {
    case 1u:
      v10 = 136;
      goto LABEL_12;
    case 2u:
LABEL_10:
      if ( *(_BYTE *)v7 != 0x8A || *(unsigned __int8 *)(v7 + 1) < v5 )
      {
LABEL_25:
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_DDDDDDDD(0x28u, *(unsigned __int8 *)(v7 + 1), 138, v5);
        return 3221291013LL;
      }
LABEL_12:
      if ( *(unsigned __int16 *)(v7 + 2) >= v10 )
      {
        *a5 = v10;
        return 0LL;
      }
      goto LABEL_25;
    case 3u:
      v10 = 160;
      goto LABEL_10;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_dd(
      0x27u,
      &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids,
      *(unsigned __int8 *)(v7 + 4),
      *(unsigned __int8 *)(v7 + 5));
  return 3221291012LL;
}
