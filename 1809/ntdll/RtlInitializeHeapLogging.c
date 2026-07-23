/*
 * XREFs of RtlInitializeHeapLogging @ 0x180084D38
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventRegister @ 0x180021AD0 (EtwEventRegister.c)
 *     TraceLoggingRegisterEx @ 0x18007600C (TraceLoggingRegisterEx.c)
 */

__int64 RtlInitializeHeapLogging()
{
  void (__cdecl *v0)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  unsigned __int32 v1; // ebx
  void *v2; // r8

  v1 = EtwEventRegister(&WindowsHeapSnapshotProvider, RtlpHpStackTraceEtwCallback, 0LL, &RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F698, v0, v2);
  return v1;
}
