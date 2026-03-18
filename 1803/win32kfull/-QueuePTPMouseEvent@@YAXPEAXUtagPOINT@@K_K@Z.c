/*
 * XREFs of ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01A0C6C
 * Callers:
 *     SendPTPAsMouse @ 0x1C01A15D0 (SendPTPAsMouse.c)
 * Callees:
 *     <none>
 */

void __fastcall QueuePTPMouseEvent(void *a1, struct tagPOINT a2, int a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  if ( (unsigned int)gdwPTPMouseEvents < 0x40 )
  {
    v8 = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
    ++gdwPTPMouseEvents;
    gdwPTPQueueHead = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
    v9 = 4 * v8;
    gPTPMouseEventQueue[4 * v8] = a1;
    LODWORD(gPTPMouseEventQueue[v9 + 2]) = a3;
    gPTPMouseEventQueue[v9 + 1] = a2;
    gPTPMouseEventQueue[v9 + 3] = a4;
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    KeSetEvent(gpevtPTPOperation, 1, 0);
  }
  else
  {
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    ++*((_DWORD *)&gTPTelemState + 22);
  }
}
