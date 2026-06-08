/*
 * XREFs of ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0004238
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002FF1C (InitCpcStatesInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C000823C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0008264 (_TlgWrite.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C0028F14 (ProcLibTraceNoPayloadEvent.c)
 */

BOOLEAN ProcLibTraceHiddenProcessorDegradedOperation()
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  result = ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
  if ( (unsigned int)dword_1C0015030 > 5 )
  {
    result = TlgKeywordOn(v1, 0x400000000000uLL);
    if ( result )
      return TlgWrite(v2, &unk_1C0011253, v3, v4, 2u, &pData);
  }
  return result;
}
