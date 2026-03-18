/*
 * XREFs of IopProbeAndLockPages_0 @ 0x140127410
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x1400BB0E0 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127260 (IopBuildAsynchronousFsdRequest.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1402C0548 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_0(_DWORD *a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  int v8; // r8d
  __int64 result; // rax

  v7 = a3 == 0;
  v8 = 1;
  if ( v7 )
    v8 = a3;
  MiProbeAndLockPages(a1, 0, v8);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
