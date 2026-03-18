/*
 * XREFs of TtmpDispatchSetDisplayState @ 0x1408BF710
 * Callers:
 *     TtmDispatchApi @ 0x1408BED60 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408BC1D0 (TtmiSetPendingOnOffRequest.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408BEFE8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayState(__int64 a1)
{
  int v2; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v5, (__int64 *)&Object);
  if ( v2 >= 0 )
  {
    TtmiSetPendingOnOffRequest(v5, (unsigned int *)Object, *(_BYTE *)(a1 + 16), *(_DWORD *)(a1 + 20), 0x53445354u);
    v2 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayState");
  }
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v2;
}
