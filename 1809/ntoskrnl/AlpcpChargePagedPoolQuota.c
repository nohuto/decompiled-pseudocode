/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x140618460
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14061801C (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x1406348F0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406361D0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateReserve @ 0x1406A3FB8 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1406A4208 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x140696E00 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 1640));
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 1640);
    if ( v2 < a2 )
      break;
    v3 = *(_QWORD *)(a1 + 1640);
    if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1640), v2 - a2, v2) )
      return 0LL;
  }
  return PsChargeProcessPagedPoolQuota();
}
