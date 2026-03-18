/*
 * XREFs of FsRtlMupGetProviderIdFromName @ 0x14084EB80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlMupGetProviderIdFromName(PCUNICODE_STRING pProviderName, PULONG32 pProviderId)
{
  if ( pFsRtlpMupCalls )
    return (*(__int64 (__fastcall **)(PCUNICODE_STRING, PULONG32))(pFsRtlpMupCalls + 8))(pProviderName, pProviderId);
  else
    return -1073741637;
}
