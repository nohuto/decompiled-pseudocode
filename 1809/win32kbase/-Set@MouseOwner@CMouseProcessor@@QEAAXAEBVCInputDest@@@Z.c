/*
 * XREFs of ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C0070194
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C007003C (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00939D4 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseOwner::Set(
        CMouseProcessor::MouseOwner *this,
        const struct CInputDest *a2,
        __int64 a3)
{
  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CInputDest::operator=(this, a2);
  _InterlockedExchange((volatile __int32 *)this + 46, 1);
}
