/*
 * XREFs of EtwTimLogProhibitWin32kSystemCalls @ 0x1408F9F3C
 * Callers:
 *     PsConvertToGuiThread @ 0x1406CBD50 (PsConvertToGuiThread.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x1406DFC34 (EtwpTimLogMitigationForProcess.c)
 */

void __fastcall EtwTimLogProhibitWin32kSystemCalls(int a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v3; // r8

  if ( (*(_DWORD *)(a2 + 2128) & 0x2000) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_WIN32K_SYSTEM_CALLS;
    if ( a1 != 1 )
      v3 = (const EVENT_DESCRIPTOR *)&MITIGATION_ENFORCE_PROHIBIT_WIN32K_SYSTEM_CALLS;
    EtwpTimLogMitigationForProcess(2, a1, v3, a2);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2128), 0xFFFFDFFF);
  }
}
