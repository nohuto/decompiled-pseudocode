/*
 * XREFs of ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00C4B84
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C5D0C (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C01177A4 (ndisMInvokeBlockingOidRequest.c)
 */

__int64 __fastcall ndisInternalSetRSSInitialize(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  char v3; // bl
  _QWORD v5[31]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (char)a1;
  if ( (a1->Flags & 0x80u) == 0 )
    return 0LL;
  memset(v5, 0, sizeof(v5));
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
  return ndisMInvokeBlockingOidRequest(v3);
}
