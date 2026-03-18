/*
 * XREFs of freepathalloc @ 0x1C007E800
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C00794F4 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C007E7B0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall freepathalloc(struct PATHALLOC *a1)
{
  __int64 v2; // r8
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
