/*
 * XREFs of IopProbeAndLockPages_2 @ 0x14029ADD0
 * Callers:
 *     NtQueryEaFile @ 0x1406CF9A0 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x140858120 (NtSetEaFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1402C0548 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_2(_DWORD *a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MiProbeAndLockPages(a1, a2 != 0, a3 != 0);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
