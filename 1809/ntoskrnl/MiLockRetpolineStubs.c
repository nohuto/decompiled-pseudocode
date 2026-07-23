/*
 * XREFs of MiLockRetpolineStubs @ 0x1409F8180
 * Callers:
 *     MiInitializeRetpoline @ 0x1409DFFC8 (MiInitializeRetpoline.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmCreateMdl @ 0x140113CB0 (MmCreateMdl.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax

  Mdl = MmCreateMdl(0LL, qword_140439F10, (unsigned int)(dword_140439F20 << 12));
  qword_140439EF8 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages((__int64)Mdl, 0, 0);
  return 0LL;
}
