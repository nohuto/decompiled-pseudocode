/*
 * XREFs of MmBackSystemImageWithPagefile @ 0x14073978C
 * Callers:
 *     FsRtlSetDriverBacking @ 0x140739760 (FsRtlSetDriverBacking.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400F78E8 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MmReleaseLoadLock @ 0x1406A6280 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A62E0 (MmAcquireLoadLock.c)
 *     MiBackSystemImageWithPagefile @ 0x1407397E8 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MmBackSystemImageWithPagefile(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rsi
  struct _KTHREAD *Lock; // rdi
  unsigned int v4; // ebx

  v2 = MiLookupDataTableEntry(BugCheckParameter2, 1LL);
  if ( !v2 )
    KeBugCheckEx(0x1Au, 0x1239uLL, BugCheckParameter2, 0LL, 0LL);
  Lock = MmAcquireLoadLock();
  v4 = MiBackSystemImageWithPagefile(v2);
  MmReleaseLoadLock((__int64)Lock);
  return v4;
}
