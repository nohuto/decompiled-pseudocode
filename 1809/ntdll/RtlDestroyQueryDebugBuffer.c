/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x18007DE00
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800DA0F0 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x18007DE38 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection(-1LL);
  return 0LL;
}
