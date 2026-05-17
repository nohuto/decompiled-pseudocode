/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x180075C20
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8040 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180075C58 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection(-1LL);
  return 0LL;
}
