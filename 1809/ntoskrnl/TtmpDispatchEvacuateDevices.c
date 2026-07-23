/*
 * XREFs of TtmpDispatchEvacuateDevices @ 0x140882FEC
 * Callers:
 *     TtmDispatchApi @ 0x140882960 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiEvacuateDevices @ 0x14087E880 (TtmiEvacuateDevices.c)
 *     TtmiScheduleSessionWorker @ 0x140881480 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140882BE8 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchEvacuateDevices(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 0, 1, &v4, (__int64 *)&Object);
  v2 = v1;
  if ( v1 >= 0 )
  {
    if ( TtmiEvacuateDevices(v4, (__int64)Object) )
      TtmiScheduleSessionWorker(v4, 1);
    v2 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchEvacuateDevices", 615, v1, v1);
  }
  if ( v4 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
