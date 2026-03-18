/*
 * XREFs of freepathalloc @ 0x1C0064170
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C001BB64 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C001C1C0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 */

void __fastcall freepathalloc(struct PATHALLOC *a1)
{
  int v2; // r8d
  __int64 v3; // rdx
  struct _ERESOURCE *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = (struct _ERESOURCE *)PATHALLOC::hsemFreelist;
  EngAcquireSemaphore(PATHALLOC::hsemFreelist);
  if ( PATHALLOC::cFree >= 4 )
  {
    Win32FreePool((__int64)a1);
    --PATHALLOC::cAllocated;
  }
  else
  {
    v3 = PATHALLOC::cFree + 1;
    *(_QWORD *)a1 = PATHALLOC::freelist;
    PATHALLOC::freelist = a1;
    PATHALLOC::cFree = v3;
  }
  SEMOBJ::vUnlock(&v4, v3, v2);
}
