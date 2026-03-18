/*
 * XREFs of ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C0147578
 * Callers:
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C0135348 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 * Callees:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01428E0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146784 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateMsgData(
        struct _KTHREAD **this,
        _DWORD *a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5)
{
  int v6; // ebp

  v6 = a3;
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (a2[9] & 0x20) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  a2[8] = a4;
  a2[7] = v6;
  if ( a5 )
  {
    if ( (*(_DWORD *)(a5 + 36) & 0x40) != 0 )
    {
      if ( (a2[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
      CTouchProcessor::ReferenceMsgData((__int64)this, (__int64)a2, 1LL);
      CTouchProcessor::UnreferenceMsgData((__int64)this, a5, 1LL);
    }
    *(_DWORD *)(a5 + 36) |= 0x20u;
  }
}
