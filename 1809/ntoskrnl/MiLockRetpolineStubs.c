/*
 * XREFs of MiLockRetpolineStubs @ 0x1409F7180
 * Callers:
 *     MiInitializeRetpoline @ 0x1409DEFC8 (MiInitializeRetpoline.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmCreateMdl @ 0x140113C40 (MmCreateMdl.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax

  Mdl = MmCreateMdl(0LL, qword_140438E50, (unsigned int)(dword_140438E60 << 12));
  qword_140438E38 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages((__int64)Mdl, 0, 0);
  return 0LL;
}
