/*
 * XREFs of ndisUpdateMinimumStackVersion @ 0x1C00C3140
 * Callers:
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3090 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00FDA58 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00C318C (-ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ndisDisableRsc @ 0x1C00F6DE8 (ndisDisableRsc.c)
 */

char __fastcall ndisUpdateMinimumStackVersion(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 MinimumNdisMajorVersion; // bl
  unsigned __int8 MinimumNdisMinorVersion; // di
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // rax
  bool v8; // cc

  MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
  MinimumNdisMinorVersion = a1->MinimumNdisMinorVersion;
  ndisFindMinimumVersionDrivers(a1, a2, a3);
  LOBYTE(v7) = *(_BYTE *)(v6 + 3164);
  if ( MinimumNdisMajorVersion == (_BYTE)v7 && MinimumNdisMinorVersion == *(_BYTE *)(v6 + 3165) )
    return v7;
  LOBYTE(v5) = 30;
  v8 = MinimumNdisMajorVersion <= 6u;
  if ( MinimumNdisMajorVersion > 6u )
    goto LABEL_9;
  if ( MinimumNdisMajorVersion != 6 )
    goto LABEL_12;
  if ( MinimumNdisMinorVersion >= 0x1Eu )
  {
LABEL_9:
    if ( (unsigned __int8)v7 <= 6u && ((_BYTE)v7 != 6 || *(_BYTE *)(v6 + 3165) < 0x1Eu) )
    {
      LOBYTE(v7) = ndisDisableRsc(v6, v5);
      return v7;
    }
  }
  v8 = MinimumNdisMajorVersion <= 6u;
LABEL_12:
  if ( v8
    && (MinimumNdisMajorVersion != 6 || MinimumNdisMinorVersion < 0x1Eu)
    && ((unsigned __int8)v7 > 6u || (_BYTE)v7 == 6 && *(_BYTE *)(v6 + 3165) >= 0x1Eu) )
  {
    v7 = *(_QWORD *)(v6 + 4128);
    if ( v7 )
      *(_BYTE *)(v7 + 5) = 0;
  }
  return v7;
}
