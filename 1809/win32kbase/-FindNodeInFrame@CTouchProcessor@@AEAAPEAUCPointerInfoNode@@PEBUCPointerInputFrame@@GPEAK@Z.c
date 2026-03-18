/*
 * XREFs of ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01385CC
 * Callers:
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C01343D0 (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0138874 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0144E04 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01342D0 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeInFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int16 a3,
        unsigned int *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned __int64 v15; // rsi
  bool v16; // zf

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v8, (__int64)a2, v9) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  v13 = *((_DWORD *)a2 + 12);
  v14 = 0;
  v15 = *((_QWORD *)a2 + 13);
  if ( v13 )
  {
    LODWORD(v11) = *((_DWORD *)a2 + 12);
    do
    {
      v10 = (unsigned int)v11;
      v11 = *((_QWORD *)a2 + 13) + 576LL * (unsigned int)v11;
      if ( v15 >= v11 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
        v10 = *((unsigned int *)a2 + 12);
      }
      v13 = v10;
      if ( *(_WORD *)(v15 + 236) == a3 )
        break;
      v15 += 576LL;
      ++v14;
      v11 = (unsigned int)v10;
    }
    while ( v14 < (unsigned int)v10 );
  }
  v16 = v14 == v13;
  if ( v14 > v13 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    v16 = v14 == *((_DWORD *)a2 + 12);
  }
  if ( v16 )
    return 0LL;
  if ( a4 )
    *a4 = v14;
  return (struct CPointerInfoNode *)v15;
}
