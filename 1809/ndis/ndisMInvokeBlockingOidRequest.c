/*
 * XREFs of ndisMInvokeBlockingOidRequest @ 0x1C00F0810
 * Callers:
 *     ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C007FBFC (-ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C00800A8 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ndisOidPrePDCloseProvider @ 0x1C0102150 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C01024A0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ndisMInvokeOidRequest @ 0x1C00B7B80 (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisMInvokeBlockingOidRequest(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a2 + 88) |= 0x400u;
  KeInitializeEvent((PRKEVENT)(a2 + 112), NotificationEvent, 0);
  result = ndisMInvokeOidRequest(a1, (_NDIS_OID_REQUEST *)a2);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject((PVOID)(a2 + 112), Executive, 0, 0, 0LL);
    return *(unsigned int *)(a2 + 80);
  }
  return result;
}
