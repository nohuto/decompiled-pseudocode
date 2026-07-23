/*
 * XREFs of TtmpDispatchSetDisplayPowerRequest @ 0x140883298
 * Callers:
 *     TtmDispatchApi @ 0x140882960 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiSetDisplayPowerRequest @ 0x140881584 (TtmiSetDisplayPowerRequest.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140882BE8 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayPowerRequest(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v6, (__int64 *)&Object);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = TtmiSetDisplayPowerRequest(v6, (unsigned int *)Object, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
  else
    TtmiLogError("TtmpDispatchSetDisplayPowerRequest", 860, v2, v2);
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
