/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x14065FF44
 * Callers:
 *     AlpcpCaptureMessageDataSafe @ 0x1405E3650 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x14065F1A0 (AlpcpCreateSecurityContext.c)
 *     AlpcSecurityDestroyProcedure @ 0x14065FEC0 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1406BD860 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406C67D8 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1406C6A28 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x14005B130 (PsReturnProcessPagedPoolQuota.c)
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
