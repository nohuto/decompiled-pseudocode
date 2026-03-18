/*
 * XREFs of MiLockRetpolineStubs @ 0x140A19CC4
 * Callers:
 *     MiInitializeRetpoline @ 0x140A19AE8 (MiInitializeRetpoline.c)
 * Callees:
 *     MmCreateMdl @ 0x140091780 (MmCreateMdl.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax

  Mdl = MmCreateMdl(0LL, qword_140464568, (unsigned int)(dword_140464588 << 12));
  qword_140464550 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages(Mdl, 0, 0);
  return 0LL;
}
