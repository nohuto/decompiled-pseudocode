/*
 * XREFs of ?UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1C01C246C
 * Callers:
 *     xxxOnPTPMouseOperation @ 0x1C01C2D2C (xxxOnPTPMouseOperation.c)
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
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8

  v4 = 0;
  *a3 = 0;
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  if ( gdwPTPMouseEvents )
  {
    v7 = gdwPTPQueueHead;
    v8 = ((_BYTE)gdwPTPQueueHead - (_BYTE)gdwPTPMouseEvents + 1) & 0x3F;
    v9 = gdwPTPMouseEvents == 1;
    v10 = --gdwPTPMouseEvents;
    v11 = *(_OWORD *)((char *)&gPTPMouseEventQueue + 40 * v8 + 16);
    *(_OWORD *)a1 = *(_OWORD *)((char *)&gPTPMouseEventQueue + 40 * v8);
    v12 = *((_QWORD *)&gPTPMouseEventQueue + 5 * v8 + 4);
    *((_OWORD *)a1 + 1) = v11;
    *((_QWORD *)a1 + 4) = v12;
    if ( !v9 )
    {
      *a3 = 1;
      v13 = (v7 - v10 + 1) & 0x3F;
      v14 = *(_OWORD *)((char *)&gPTPMouseEventQueue + 40 * v13 + 16);
      *(_OWORD *)a2 = *(_OWORD *)((char *)&gPTPMouseEventQueue + 40 * v13);
      v15 = *((_QWORD *)&gPTPMouseEventQueue + 5 * v13 + 4);
      *((_OWORD *)a2 + 1) = v14;
      *((_QWORD *)a2 + 4) = v15;
    }
    v4 = 1;
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
  return v4;
}
