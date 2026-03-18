/*
 * XREFs of PopAllocatePages @ 0x14059B544
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14059B168 (PopBuildMemoryImageHeader.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     PopGenerateMdl @ 0x14015FA20 (PopGenerateMdl.c)
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
    || *(int *)(qword_140443080 + 188) < 0 )
  {
    *(_DWORD *)(qword_140443080 + 188) = -1073741670;
  }
  return v1;
}
