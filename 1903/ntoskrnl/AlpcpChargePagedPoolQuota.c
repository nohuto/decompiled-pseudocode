/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x14064B958
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405E2E80 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x14064B500 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1406C84A8 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1406C86F8 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1406BC4D0 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 1688));
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 1688);
    if ( v2 < a2 )
      break;
    v3 = *(_QWORD *)(a1 + 1688);
    if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1688), v2 - a2, v2) )
      return 0LL;
  }
  return PsChargeProcessPagedPoolQuota();
}
