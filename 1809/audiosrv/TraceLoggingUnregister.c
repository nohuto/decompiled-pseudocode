/*
 * XREFs of TraceLoggingUnregister @ 0x1800AEF4C
 * Callers:
 *     Pdcv2ActivationClientUnregister @ 0x18013396C (Pdcv2ActivationClientUnregister.c)
 * Callees:
 *     <none>
 */

void __stdcall TraceLoggingUnregister(TraceLoggingHProvider hProvider)
{
  EtwEventUnregister(*((_QWORD *)hProvider + 4));
  *((_QWORD *)hProvider + 4) = 0LL;
  *(_DWORD *)hProvider = 0;
}
