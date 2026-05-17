/*
 * XREFs of RtlDeleteResource @ 0x18005C660
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x18005C6B0 (RtlDeleteCriticalSection.c)
 *     RtlpFreeDebugInfo @ 0x18005C7C8 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 */

void *__fastcall RtlDeleteResource(HANDLE *a1)
{
  RtlDeleteCriticalSection(a1);
  NtClose(a1[5]);
  NtClose(a1[7]);
  RtlpFreeDebugInfo(a1[11]);
  return memset(a1, 0, 0x60uLL);
}
