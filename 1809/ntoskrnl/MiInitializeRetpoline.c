/*
 * XREFs of MiInitializeRetpoline @ 0x1409DFFC8
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x1402F6B00 (RtlCreateRetpolineStubsFunctionTable.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x140854FB0 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x1409F8060 (MiCreateRetpolineBitmap.c)
 *     MiLockRetpolineStubs @ 0x1409F8180 (MiLockRetpolineStubs.c)
 */

__int64 MiInitializeRetpoline()
{
  struct _KTHREAD *CurrentThread; // rdi
  int RetpolineStubsFunctionTable; // ebx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    return 0;
  RetpolineStubsFunctionTable = MiRetpolUnwindInfoCopyStatus;
  if ( MiRetpolUnwindInfoCopyStatus >= 0 )
  {
    RetpolineStubsFunctionTable = MiLockRetpolineStubs();
    if ( RetpolineStubsFunctionTable >= 0 )
    {
      qword_140439F18 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
      if ( !qword_140439F18 )
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
                                        qword_140439F10,
                                        dword_140439F20 << 12);
        if ( RetpolineStubsFunctionTable >= 0 )
        {
          dword_1403FFDF4 = dword_140439F34;
          dword_1403FFDF8 = dword_140439F20 << 12;
          return 0;
        }
      }
    }
  }
  return (unsigned int)RetpolineStubsFunctionTable;
}
