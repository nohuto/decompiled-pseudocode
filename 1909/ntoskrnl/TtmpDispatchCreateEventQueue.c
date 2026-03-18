/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x1408BF1DC
 * Callers:
 *     TtmDispatchApi @ 0x1408BED60 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408BDB30 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408BEFE8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateEventQueue @ 0x1408BF914 (TtmiCreateEventQueue.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchCreateEventQueue(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 8);
  v4 = 0LL;
  v8 = 0LL;
  v5 = TtmpAcquireSessionFromTerminalHandle(v2, 1, 0, &v9, (__int64 *)&Object);
  if ( v5 >= 0 )
  {
    v5 = TtmiCreateEventQueue(v9, &v7, &v8);
    if ( v5 < 0 || (v5 = TtmiWriteEnumerationEventsToQueue(v9, v7), v5 < 0) )
    {
      TtmiLogError("TtmpDispatchCreateEventQueue");
      v4 = v8;
    }
    else
    {
      v5 = 0;
      *a2 = v8;
    }
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateEventQueue");
  }
  if ( v9 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v4 )
    ObCloseHandle(Object, KeGetCurrentThread()->PreviousMode);
  return (unsigned int)v5;
}
