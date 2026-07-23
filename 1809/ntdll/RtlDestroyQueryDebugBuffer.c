/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x18007DE10
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800DA0F0 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x18007DE48 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A0840 (NtUnmapViewOfSection.c)
 */

NTSTATUS __cdecl RtlDestroyQueryDebugBuffer(PRTL_DEBUG_INFORMATION Buffer)
{
  RtlpChangeQueryDebugBufferTarget(Buffer, 0LL, 0LL, 0LL);
  NtClose(Buffer->SectionHandleClient);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
  return 0;
}
