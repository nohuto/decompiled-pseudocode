/*
 * XREFs of CmpTraceHiveFlushBoostedActiveFlusher @ 0x1407EBF4C
 * Callers:
 *     CmpBoostActiveHiveWriter @ 0x1406CF1D8 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAD00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

BOOLEAN CmpTraceHiveFlushBoostedActiveFlusher()
{
  REGHANDLE v0; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  v0 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_BOOSTED_ACTIVE_FLUSHER;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
    return EtwWrite(v0, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
