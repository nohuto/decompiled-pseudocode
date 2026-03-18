/*
 * XREFs of MiLockRetpolineStubs @ 0x140A19B34
 * Callers:
 *     MiInitializeRetpoline @ 0x140A19958 (MiInitializeRetpoline.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MmCreateMdl @ 0x140126E30 (MmCreateMdl.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax

  Mdl = MmCreateMdl(0LL, qword_140464868, (unsigned int)(dword_140464888 << 12));
  qword_140464850 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages(Mdl, 0, 0);
  return 0LL;
}
