/*
 * XREFs of ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2@Z @ 0x1C01C2148
 * Callers:
 *     SendPTPAsMouse @ 0x1C01C2B90 (SendPTPAsMouse.c)
 * Callees:
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01C2098 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 */

void __fastcall QueuePTPMouseEvent(void *a1, struct tagPOINT a2, int a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  if ( (unsigned int)gdwPTPMouseEvents < 0x40 )
  {
    v9 = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
    ++gdwPTPMouseEvents;
    gdwPTPQueueHead = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
    v10 = 5 * v9;
    *((_QWORD *)&gPTPMouseEventQueue + 5 * v9) = a1;
    *((_DWORD *)&gPTPMouseEventQueue + 2 * v10 + 4) = a3;
    *((struct tagPOINT *)&gPTPMouseEventQueue + v10 + 1) = a2;
    *((_QWORD *)&gPTPMouseEventQueue + v10 + 3) = a4;
    *((_QWORD *)&gPTPMouseEventQueue + v10 + 4) = a5;
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    KeSetEvent(gpevtPTPOperation, 1, 0);
  }
  else
  {
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    ++*((_DWORD *)&gTPTelemState + 22);
    InputTraceLogging::Mouse::DropInput();
  }
}
