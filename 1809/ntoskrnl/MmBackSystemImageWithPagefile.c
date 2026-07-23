/*
 * XREFs of MmBackSystemImageWithPagefile @ 0x14070E58C
 * Callers:
 *     FsRtlSetDriverBacking @ 0x14070E560 (FsRtlSetDriverBacking.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     MiBackSystemImageWithPagefile @ 0x14070E5E8 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MmBackSystemImageWithPagefile(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rsi
  struct _KTHREAD *Lock; // rdi
  unsigned int v4; // ebx

  v2 = MiLookupDataTableEntry(BugCheckParameter2, 1);
  if ( !v2 )
    KeBugCheckEx(0x1Au, 0x1239uLL, BugCheckParameter2, 0LL, 0LL);
  Lock = MmAcquireLoadLock();
  v4 = MiBackSystemImageWithPagefile(v2);
  MmReleaseLoadLock((__int64)Lock);
  return v4;
}
