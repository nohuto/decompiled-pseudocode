/*
 * XREFs of PopAllocatePages @ 0x14059B524
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14059B148 (PopBuildMemoryImageHeader.c)
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     PopGenerateMdl @ 0x1401600C0 (PopGenerateMdl.c)
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
    || *(int *)(qword_140443000 + 188) < 0 )
  {
    *(_DWORD *)(qword_140443000 + 188) = -1073741670;
  }
  return v1;
}
