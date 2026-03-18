/*
 * XREFs of newpathalloc @ 0x1C0073080
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0072BA4 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C0078F7C (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 */

struct PATHALLOC *newpathalloc()
{
  __int64 v0; // rdx
  __int64 v1; // r8
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
