/*
 * XREFs of PopAllocatePages @ 0x14056CBD0
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14056C820 (PopBuildMemoryImageHeader.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     PopGenerateMdl @ 0x140144AD0 (PopGenerateMdl.c)
 */

PVOID __fastcall PopAllocatePages(__int64 a1)
{
  PVOID v1; // rbx
  struct _MDL *Mdl; // rax

  PopNumberOfPagesForHibernateProcess += a1;
  v1 = 0LL;
  Mdl = PopGenerateMdl(a1);
  if ( !Mdl
    || (v1 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 1u, 0x40000020u)) == 0LL
    || *(int *)(BugCheckParameter4 + 188) < 0 )
  {
    *(_DWORD *)(BugCheckParameter4 + 188) = -1073741670;
  }
  return v1;
}
