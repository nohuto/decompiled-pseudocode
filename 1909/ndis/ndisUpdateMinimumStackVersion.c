/*
 * XREFs of ndisUpdateMinimumStackVersion @ 0x1C0104308
 * Callers:
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01042E0 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D50C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ndisDisableRsc @ 0x1C00AAFA4 (ndisDisableRsc.c)
 *     ndisEnableRsc @ 0x1C00AB100 (ndisEnableRsc.c)
 *     ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0104388 (-ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

unsigned __int8 __fastcall ndisUpdateMinimumStackVersion(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        unsigned int a3)
{
  unsigned __int8 MinimumNdisMajorVersion; // bl
  unsigned __int8 MinimumNdisMinorVersion; // di
  __int64 v5; // r11
  unsigned __int8 result; // al
  bool v7; // zf
  bool v8; // cc

  MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
  MinimumNdisMinorVersion = a1->MinimumNdisMinorVersion;
  ndisFindMinimumVersionDrivers(a1, a2, a3);
  result = *(_BYTE *)(v5 + 3148);
  if ( MinimumNdisMajorVersion == result && MinimumNdisMinorVersion == *(_BYTE *)(v5 + 3149) )
    return result;
  v7 = MinimumNdisMajorVersion == 6;
  v8 = MinimumNdisMajorVersion <= 6u;
  if ( MinimumNdisMajorVersion > 6u )
    goto LABEL_7;
  if ( MinimumNdisMajorVersion == 6 )
  {
    if ( MinimumNdisMinorVersion < 0x1Eu )
    {
LABEL_10:
      v7 = MinimumNdisMajorVersion == 6;
      v8 = MinimumNdisMajorVersion <= 6u;
      goto LABEL_11;
    }
LABEL_7:
    if ( result <= 6u && (result != 6 || *(_BYTE *)(v5 + 3149) < 0x1Eu) )
      return ndisDisableRsc(v5);
    goto LABEL_10;
  }
LABEL_11:
  if ( v8 && (!v7 || MinimumNdisMinorVersion < 0x1Eu) && (result > 6u || result == 6 && *(_BYTE *)(v5 + 3149) >= 0x1Eu) )
    return ndisEnableRsc(v5);
  return result;
}
