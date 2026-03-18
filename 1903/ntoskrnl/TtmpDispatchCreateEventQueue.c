/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x1408BF90C
 * Callers:
 *     TtmDispatchApi @ 0x1408BF490 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408BE260 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408BF718 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateEventQueue @ 0x1408C0044 (TtmiCreateEventQueue.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
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
