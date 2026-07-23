/*
 * XREFs of RtlDeleteResource @ 0x18005C660
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x18005C6B0 (RtlDeleteCriticalSection.c)
 *     RtlpFreeDebugInfo @ 0x18005C7C8 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  RtlpFreeDebugInfo(Resource->DebugInfo);
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
