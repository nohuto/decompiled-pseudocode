/*
 * XREFs of TtmpDispatchSetDisplayState @ 0x1408820F8
 * Callers:
 *     TtmDispatchApi @ 0x140881720 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1407616FC (TtmiLogError.c)
 *     TtmiSetPendingOnOffRequest @ 0x14087EDA4 (TtmiSetPendingOnOffRequest.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408819A8 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayState(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v6, (__int64 *)&Object);
  v3 = v2;
  if ( v2 >= 0 )
  {
    TtmiSetPendingOnOffRequest(v6, (unsigned int *)Object, *(_BYTE *)(a1 + 16), *(_DWORD *)(a1 + 20), 0x53445354u);
    v3 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayState", 475, v2, v2);
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
