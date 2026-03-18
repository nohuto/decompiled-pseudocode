/*
 * XREFs of freepathalloc @ 0x1C0011F80
 * Callers:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0015BE0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0072BA4 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 */

void __fastcall freepathalloc(struct PATHALLOC *a1)
{
  unsigned int v2; // edx
  HSEMAPHORE v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = PATHALLOC::hsemFreelist;
  EngAcquireSemaphore(PATHALLOC::hsemFreelist);
  v2 = PATHALLOC::cFree;
  if ( PATHALLOC::cFree >= 4 )
  {
    Win32FreePool(a1);
    --PATHALLOC::cAllocated;
  }
  else
  {
    *(_QWORD *)a1 = PATHALLOC::freelist;
    PATHALLOC::freelist = a1;
    PATHALLOC::cFree = v2 + 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v3);
}
