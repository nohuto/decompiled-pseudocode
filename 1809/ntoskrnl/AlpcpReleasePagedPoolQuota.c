/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x140616D14
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x140616C90 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpCreateSecurityContext @ 0x14061801C (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406361D0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcMessageDestroyProcedure @ 0x1406988C0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406A3FD8 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1406A4228 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140090290 (PsReturnProcessPagedPoolQuota.c)
 */

unsigned __int64 __fastcall AlpcpReleasePagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + a1[2].Affinity.Bitmap[12];
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[2].Affinity.Bitmap[12], a2);
  }
  return result;
}
