/*
 * XREFs of ndisMInvokeBlockingOidRequest @ 0x1C01177A4
 * Callers:
 *     ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00C4D54 (-ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C00C5200 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ndisOidPrePDCloseProvider @ 0x1C0122490 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C0122830 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisMInvokeBlockingOidRequest(char *a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a2 + 88) |= 0x400u;
  KeInitializeEvent((PRKEVENT)(a2 + 112), NotificationEvent, 0);
  result = ndisMInvokeOidRequest(a1, a2);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject((PVOID)(a2 + 112), Executive, 0, 0, 0LL);
    return *(unsigned int *)(a2 + 80);
  }
  return result;
}
