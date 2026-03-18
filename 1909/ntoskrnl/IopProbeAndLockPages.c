/*
 * XREFs of IopProbeAndLockPages @ 0x1400CBEF0
 * Callers:
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854290 (IopSetEaOrQuotaInformationFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1402C02A8 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MiProbeAndLockPages(a1, a2 != 0, a3 != 0);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
