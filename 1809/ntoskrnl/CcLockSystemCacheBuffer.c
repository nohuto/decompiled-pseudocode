/*
 * XREFs of CcLockSystemCacheBuffer @ 0x140269D14
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B1860 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 */

PVOID __fastcall CcLockSystemCacheBuffer(void *a1, PMDL *a2, ULONG a3, int a4, int *a5)
{
  PVOID MappedSystemVa; // rsi
  PMDL Mdl; // rax
  PMDL v9; // rbx
  int v10; // ecx

  MappedSystemVa = 0LL;
  *a5 = 0;
  Mdl = IoAllocateMdl(a1, a3, 0, 0, 0LL);
  v9 = Mdl;
  if ( !Mdl )
  {
    *a5 = -1073741670;
LABEL_10:
    if ( v9 )
    {
      MmUnlockPages(v9);
      IoFreeMdl(v9);
      v9 = 0LL;
    }
    goto LABEL_12;
  }
  MiProbeAndLockPages((__int64)Mdl, 0, a4 != 0);
  v10 = *a5;
  if ( *a5 < 0 )
    goto LABEL_10;
  if ( (v9->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = v9->MappedSystemVa;
  }
  else
  {
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
    v10 = *a5;
  }
  if ( !MappedSystemVa )
  {
    v10 = -1073741670;
    *a5 = -1073741670;
  }
  if ( v10 < 0 )
    goto LABEL_10;
LABEL_12:
  *a2 = v9;
  return MappedSystemVa;
}
