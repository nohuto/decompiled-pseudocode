/*
 * XREFs of ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0167538
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C015EBB0 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0163BD0 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0163C70 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0163DC8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C0172C90 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C015F3C4 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY **__fastcall CTouchProcessor::GetNextFrame(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        struct _LIST_ENTRY *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  struct _LIST_ENTRY *v9; // rax

  v8 = 0LL;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  v9 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 2);
  if ( v9 && v9 != a3 )
    return &v9[-1].Blink;
  return (struct _LIST_ENTRY **)v8;
}
