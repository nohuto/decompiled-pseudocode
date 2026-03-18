/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x140053750
 * Callers:
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073C40 (MiCaptureWriteWatchDirtyBit.c)
 *     NtResetWriteWatch @ 0x140603F30 (NtResetWriteWatch.c)
 *     MiCreateWriteWatchView @ 0x14066FC68 (MiCreateWriteWatchView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadMandatoryPageSize(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (v1 >> 18) & 3;
  if ( (unsigned __int64)MiVadPageSizes[v2] >= 0x200 || (v1 & 0x400000) != 0 )
    return MiVadPageSizes[v2];
  else
    return 1LL;
}
