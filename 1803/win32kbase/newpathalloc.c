/*
 * XREFs of newpathalloc @ 0x1C0063900
 * Callers:
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C001B8A4 (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C001BB64 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 */

struct PATHALLOC *newpathalloc()
{
  __int64 v0; // rdx
  int v1; // r8d
  struct PATHALLOC *v2; // rcx
  struct PATHALLOC *v3; // rbx
  struct PATHALLOC *v4; // rax
  struct _ERESOURCE *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (struct _ERESOURCE *)PATHALLOC::hsemFreelist;
  EngAcquireSemaphore(PATHALLOC::hsemFreelist);
  v2 = PATHALLOC::freelist;
  v3 = 0LL;
  if ( PATHALLOC::freelist )
  {
    v4 = *(struct PATHALLOC **)PATHALLOC::freelist;
    --PATHALLOC::cFree;
    PATHALLOC::freelist = v4;
  }
  else
  {
    v2 = (struct PATHALLOC *)PALLOCMEM2(0xFC0uLL, 0x74617047u, 1);
    if ( !v2 )
      goto LABEL_4;
    ++PATHALLOC::cAllocated;
  }
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = (char *)v2 + 24;
  v3 = v2;
  *((_DWORD *)v2 + 4) = 4032;
LABEL_4:
  SEMOBJ::vUnlock(&v6, v0, v1);
  return v3;
}
