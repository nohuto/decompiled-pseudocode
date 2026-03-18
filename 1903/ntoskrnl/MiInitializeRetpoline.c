/*
 * XREFs of MiInitializeRetpoline @ 0x140A19958
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x1401973A0 (RtlCreateRetpolineStubsFunctionTable.c)
 *     MmReleaseLoadLock @ 0x1406A6280 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A62E0 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x14070F8B4 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140A19AA8 (MiCreateRetpolineBitmap.c)
 *     MiLockRetpolineStubs @ 0x140A19B34 (MiLockRetpolineStubs.c)
 */

__int64 MiInitializeRetpoline()
{
  struct _KTHREAD *CurrentThread; // rdi
  int RetpolineStubsFunctionTable; // ebx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  qword_140464880 = (__int64)&qword_140464878;
  qword_140464878 = &qword_140464878;
  if ( (KiSpeculationFeatures & 0x2000000) == 0 )
    return 0;
  RetpolineStubsFunctionTable = MiRetpolUnwindInfoCopyStatus;
  if ( MiRetpolUnwindInfoCopyStatus >= 0 )
  {
    RetpolineStubsFunctionTable = MiLockRetpolineStubs();
    if ( RetpolineStubsFunctionTable >= 0 )
    {
      qword_140464870 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
      if ( !qword_140464870 )
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
                                        qword_140464868,
                                        dword_140464888 << 12);
        if ( RetpolineStubsFunctionTable >= 0 )
        {
          dword_140424DF4 = dword_1404648B0;
          dword_140424DF8 = dword_140464888 << 12;
          return 0;
        }
      }
    }
  }
  return (unsigned int)RetpolineStubsFunctionTable;
}
