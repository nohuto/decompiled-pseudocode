/*
 * XREFs of ndisOidPMAddRemove @ 0x1C0016A60
 * Callers:
 *     NdisFOidRequest @ 0x1C000B090 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C0016B50 (ndisMOidRequest.c)
 *     ndisWmiExecuteMethod @ 0x1C00B4A84 (ndisWmiExecuteMethod.c)
 *     ndisPMAddRemoveAsync @ 0x1C00E7430 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     ndisPMAddProtocolOffload @ 0x1C0014904 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C00256CC (ndisPMAddWOLPattern.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0049FE0 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisOidPMRemove @ 0x1C00BB528 (ndisOidPMRemove.c)
 */

__int64 __fastcall ndisOidPMAddRemove(_QWORD *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  NDIS_OID Oid; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(62LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, MiniportAdapterHandle, a2, Request);
  if ( !KeGetCurrentIrql() )
  {
    Oid = Request->DATA.QUERY_INFORMATION.Oid;
    switch ( Oid )
    {
      case 0xFD01010A:
        v7 = ndisPMAddWOLPattern(MiniportAdapterHandle, a2, Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C00A025D < 2u )
          goto LABEL_6;
        v11 = 64LL;
        break;
      case 0xFD01010D:
        v7 = ndisPMAddProtocolOffload(MiniportAdapterHandle, a2, Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C00A025D < 2u )
          goto LABEL_6;
        v11 = 65LL;
        break;
      case 0xFD01010F:
      case 0xFD01010B:
        v7 = ndisOidPMRemove(MiniportAdapterHandle, a2, Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C00A025D < 2u )
          goto LABEL_6;
        v11 = 66LL;
        break;
      default:
        v8 = -1073741823;
        goto LABEL_6;
    }
    WPP_SF_D(v11, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, v7);
LABEL_6:
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qqqL(67LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, MiniportAdapterHandle, a2, Request, v8);
    return v8;
  }
  v10 = ndisCreatePMAddRemoveWorkItem(MiniportAdapterHandle, a2, Request);
  v8 = v10;
  if ( v10 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 2u )
      WPP_SF_dd(63LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, Request->DATA.QUERY_INFORMATION.Oid, v10);
    return v8;
  }
  return 259LL;
}
