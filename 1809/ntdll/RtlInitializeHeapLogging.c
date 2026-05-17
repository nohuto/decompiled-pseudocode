/*
 * XREFs of RtlInitializeHeapLogging @ 0x180084D28
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventRegister @ 0x180021AD0 (EtwEventRegister.c)
 *     TraceLoggingRegisterEx @ 0x180075FFC (TraceLoggingRegisterEx.c)
 */

__int64 RtlInitializeHeapLogging()
{
  void (__stdcall *v0)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  unsigned int v1; // ebx
  void *v2; // r8

  v1 = EtwEventRegister(
         WindowsHeapSnapshotProvider,
         (__int64)RtlpHpStackTraceEtwCallback,
         0LL,
         (unsigned __int64 *)&RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18015F698, v0, v2);
  return v1;
}
