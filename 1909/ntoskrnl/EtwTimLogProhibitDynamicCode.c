/*
 * XREFs of EtwTimLogProhibitDynamicCode @ 0x1406E0F14
 * Callers:
 *     MiArbitraryCodeBlocked @ 0x14067DCBC (MiArbitraryCodeBlocked.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x1406E0F44 (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall EtwTimLogProhibitDynamicCode(unsigned int a1, __int64 a2)
{
  void *v2; // r8

  v2 = &MITIGATION_AUDIT_PROHIBIT_DYNAMIC_CODE;
  if ( a1 != 1 )
    v2 = &MITIGATION_ENFORCE_PROHIBIT_DYNAMIC_CODE;
  return EtwpTimLogMitigationForProcess(0LL, a1, v2, a2);
}
