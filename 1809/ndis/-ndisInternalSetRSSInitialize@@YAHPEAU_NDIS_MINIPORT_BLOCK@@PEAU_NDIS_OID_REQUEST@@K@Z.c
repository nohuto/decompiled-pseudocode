/*
 * XREFs of ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C007FBFC
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0080BFC (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00F0810 (ndisMInvokeBlockingOidRequest.c)
 */

__int64 __fastcall ndisInternalSetRSSInitialize(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _QWORD v5[32]; // [rsp+20h] [rbp-E0h] BYREF

  if ( (a1->Flags & 0x80u) == 0 )
    return 0LL;
  memset(v5, 0, 0xF8uLL);
  LODWORD(v5[11]) |= 8u;
  v5[5] = 0LL;
  LODWORD(v5[6]) = 0;
  v5[13] = &ndisIntReqGeneric;
  LODWORD(v5[1]) = a2->PortNumber;
  HIDWORD(v5[30]) = a2[1].RequestType;
  HIDWORD(v5[29]) = *(_DWORD *)(&a2->Reserved2 + 1);
  LODWORD(v5[30]) = a2[1].Header;
  v5[0] = 0x100F80296LL;
  LODWORD(v5[4]) = 66241;
  return ndisMInvokeBlockingOidRequest(a1, v5);
}
