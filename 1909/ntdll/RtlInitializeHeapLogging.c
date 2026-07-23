/*
 * XREFs of RtlInitializeHeapLogging @ 0x1800098D0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180007DE8 (TraceLoggingRegisterEx.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 */

__int64 RtlInitializeHeapLogging()
{
  void (__cdecl *v0)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  unsigned __int32 v1; // ebx
  void *v2; // r8

  v1 = EtwEventRegister(&WindowsHeapSnapshotProvider, RtlpHpStackTraceEtwCallback, 0LL, &RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F5C8, v0, v2);
  return v1;
}
