/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x140882DDC
 * Callers:
 *     TtmDispatchApi @ 0x140882960 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ObInsertObject @ 0x14061C280 (ObInsertObject.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x140881814 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140882BE8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateEventQueue @ 0x14088353C (TtmiCreateEventQueue.c)
 */

__int64 __fastcall TtmpDispatchCreateEventQueue(__int64 a1, HANDLE *a2)
{
  void *v2; // rcx
  PVOID v4; // rdi
  int inserted; // eax
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  PVOID v10[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(void **)(a1 + 8);
  v4 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  inserted = TtmpAcquireSessionFromTerminalHandle(v2, 1, 0, &v12, (__int64 *)v10);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v7 = 307;
LABEL_3:
    TtmiLogError("TtmpDispatchCreateEventQueue", v7, inserted, inserted);
    goto LABEL_11;
  }
  v8 = TtmiCreateEventQueue(v12, &Object);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v4 = Object;
    inserted = TtmiWriteEnumerationEventsToQueue(v12, (__int64)Object);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 323;
      goto LABEL_3;
    }
    inserted = ObInsertObject(v4, 0LL, 0x1F0000u, 0, 0LL, &Handle);
    v4 = 0LL;
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 342;
      goto LABEL_3;
    }
    v6 = 0;
    *a2 = Handle;
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateEventQueue", 313, v8, v8);
    v4 = Object;
  }
LABEL_11:
  if ( v12 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v10[0] )
    ObfDereferenceObject(v10[0]);
  if ( v4 )
    ObfDereferenceObject(v4);
  return v6;
}
