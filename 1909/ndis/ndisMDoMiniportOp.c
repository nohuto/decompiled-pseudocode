/*
 * XREFs of ndisMDoMiniportOp @ 0x1C0108AA8
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093C18 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00964B8 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisMNotifyMachineName @ 0x1C0108884 (ndisMNotifyMachineName.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisMDoMiniportOp(__int64 a1, char a2, int a3, __int64 a4, int a5, unsigned int a6, char a7)
{
  unsigned int v11; // edi
  int v12; // ecx
  int SetMiniport; // eax
  _QWORD v15[32]; // [rsp+30h] [rbp-D0h] BYREF

  v11 = 0;
  memset(v15, 0, 0xF8uLL);
  v12 = v15[11];
  if ( a2 )
  {
    v12 = LODWORD(v15[11]) | 0x80;
    LODWORD(v15[11]) |= 0x80u;
  }
  else
  {
    HIDWORD(v15[0]) = 1;
  }
  LODWORD(v15[6]) = a5;
  v15[13] = &ndisIntReqGeneric;
  LODWORD(v15[0]) = 15466902;
  LODWORD(v15[4]) = a3;
  v15[5] = a4;
  if ( a7 )
    LODWORD(v15[11]) = v12 | 0x8000;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (__int64)v15, 0, 0LL);
  if ( SetMiniport )
  {
    v11 = a6;
    if ( SetMiniport != -1 )
      return a6 + 1;
  }
  return v11;
}
