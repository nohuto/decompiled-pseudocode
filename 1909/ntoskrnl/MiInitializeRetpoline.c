/*
 * XREFs of MiInitializeRetpoline @ 0x140A19AE8
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x140197A08 (RtlCreateRetpolineStubsFunctionTable.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x140711694 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140A19C38 (MiCreateRetpolineBitmap.c)
 *     MiLockRetpolineStubs @ 0x140A19CC4 (MiLockRetpolineStubs.c)
 */

__int64 MiInitializeRetpoline()
{
  struct _KTHREAD *CurrentThread; // rdi
  int RetpolineStubsFunctionTable; // ebx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  qword_140464580 = (__int64)&qword_140464578;
  qword_140464578 = &qword_140464578;
  if ( (KiSpeculationFeatures & 0x2000000) == 0 )
    return 0;
  RetpolineStubsFunctionTable = MiRetpolUnwindInfoCopyStatus;
  if ( MiRetpolUnwindInfoCopyStatus >= 0 )
  {
    RetpolineStubsFunctionTable = MiLockRetpolineStubs();
    if ( RetpolineStubsFunctionTable >= 0 )
    {
      qword_140464570 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1);
      if ( !qword_140464570 )
        return 3221225626LL;
      RetpolineStubsFunctionTable = MiCreateRetpolineBitmap(&v3);
      if ( RetpolineStubsFunctionTable >= 0 )
      {
        MmAcquireLoadLock();
        RetpolineStubsFunctionTable = MiMarkRetpolineBits((__int64)PsNtosImageBase);
        if ( RetpolineStubsFunctionTable < 0
          || (RetpolineStubsFunctionTable = MiMarkRetpolineBits((__int64)PsHalImageBase), RetpolineStubsFunctionTable < 0) )
        {
          MmReleaseLoadLock((__int64)CurrentThread);
          return (unsigned int)RetpolineStubsFunctionTable;
        }
        MmReleaseLoadLock((__int64)CurrentThread);
        retpoline_image_bitmap = v3 - 0x1FFFF0000000LL;
        RetpolineStubsFunctionTable = RtlCreateRetpolineStubsFunctionTable(
                                        v3 - 0x1FFFF0000000LL,
                                        qword_140464568,
                                        dword_140464588 << 12);
        if ( RetpolineStubsFunctionTable >= 0 )
        {
          dword_140424DF4 = dword_1404645B0;
          dword_140424DF8 = dword_140464588 << 12;
          return 0;
        }
      }
    }
  }
  return (unsigned int)RetpolineStubsFunctionTable;
}
