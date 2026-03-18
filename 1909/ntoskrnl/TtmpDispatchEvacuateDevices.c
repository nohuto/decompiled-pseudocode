/*
 * XREFs of TtmpDispatchEvacuateDevices @ 0x1408BF3C4
 * Callers:
 *     TtmDispatchApi @ 0x1408BED60 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     TtmiEvacuateDevices @ 0x1408BAA00 (TtmiEvacuateDevices.c)
 *     TtmiScheduleSessionWorker @ 0x1408BD7AC (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408BEFE8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchEvacuateDevices(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 0, 1, &v3, (__int64 *)&Object);
  if ( v1 >= 0 )
  {
    if ( TtmiEvacuateDevices(v3, (__int64)Object) )
      TtmiScheduleSessionWorker(v3, 1);
    v1 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchEvacuateDevices");
  }
  if ( v3 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v1;
}
