/*
 * XREFs of FsFilterPerformCompletionCallbacks @ 0x140009DD0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14011DBF8 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14011E148 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlReleaseFile @ 0x1405D5620 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405D5810 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14069ECE0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069EF34 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlQueryOpen @ 0x14084E93C (FsRtlQueryOpen.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsFilterPerformCompletionCallbacks(__int64 a1, unsigned int a2)
{
  unsigned __int16 i; // ax
  __int64 v5; // r8

  for ( i = *(_WORD *)(a1 + 74); i; *(_WORD *)(a1 + 74) = i )
  {
    v5 = *(_QWORD *)(a1 + 80) + 32LL * i;
    if ( *(_BYTE *)(a1 + 4) == 0xF9 )
      *(_DWORD *)(a1 + 52) = 0;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v5 - 32);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(v5 - 24);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v5 - 8))(a1, a2, *(_QWORD *)(v5 - 16));
    if ( *(_BYTE *)(a1 + 4) == 0xF9 )
      a2 = *(_DWORD *)(a1 + 52);
    i = *(_WORD *)(a1 + 74) - 1;
  }
  return a2;
}
