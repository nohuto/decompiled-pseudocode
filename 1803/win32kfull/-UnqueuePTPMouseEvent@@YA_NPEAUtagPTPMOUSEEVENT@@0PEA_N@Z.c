/*
 * XREFs of ?UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1C01A0F20
 * Callers:
 *     xxxOnPTPMouseOperation @ 0x1C01A1748 (xxxOnPTPMouseOperation.c)
 * Callees:
 *     <none>
 */

char __fastcall UnqueuePTPMouseEvent(struct tagPTPMOUSEEVENT *a1, struct tagPTPMOUSEEVENT *a2, bool *a3)
{
  char v4; // bl
  char v7; // dl
  __int64 v8; // rcx
  bool v9; // zf
  char v10; // r9
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm1

  v4 = 0;
  *a3 = 0;
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  if ( gdwPTPMouseEvents )
  {
    v7 = gdwPTPQueueHead;
    v8 = 4LL * (((_BYTE)gdwPTPQueueHead - (_BYTE)gdwPTPMouseEvents + 1) & 0x3F);
    v9 = gdwPTPMouseEvents == 1;
    v10 = --gdwPTPMouseEvents;
    v11 = *(_OWORD *)&gPTPMouseEventQueue[v8 + 2];
    *(_OWORD *)a1 = *(_OWORD *)&gPTPMouseEventQueue[v8];
    *((_OWORD *)a1 + 1) = v11;
    if ( !v9 )
    {
      *a3 = 1;
      v12 = 4LL * ((v7 - v10 + 1) & 0x3F);
      v13 = *(_OWORD *)&gPTPMouseEventQueue[v12 + 2];
      *(_OWORD *)a2 = *(_OWORD *)&gPTPMouseEventQueue[v12];
      *((_OWORD *)a2 + 1) = v13;
    }
    v4 = 1;
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
  return v4;
}
