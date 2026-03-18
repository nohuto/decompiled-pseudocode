/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x14064C2B4
 * Callers:
 *     AlpcpCaptureMessageDataSafe @ 0x1405E2E80 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x14064B500 (AlpcpCreateSecurityContext.c)
 *     AlpcSecurityDestroyProcedure @ 0x14064C230 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1406BDDB0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406C84A8 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1406C86F8 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x14005B090 (PsReturnProcessPagedPoolQuota.c)
 */

unsigned __int64 __fastcall AlpcpReleasePagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + a1[2].Affinity.Bitmap[16];
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[2].Affinity.Bitmap[16], a2);
  }
  return result;
}
