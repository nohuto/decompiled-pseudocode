/*
 * XREFs of IopProbeAndLockPages_0 @ 0x14027F4D0
 * Callers:
 *     NtQueryEaFile @ 0x1406AA850 (NtQueryEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081BE3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14081F3E0 (NtSetEaFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1402A8E98 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_0(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MiProbeAndLockPages(a1, a2 != 0, a3 != 0);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
