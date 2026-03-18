/*
 * XREFs of pProcessDfbSurfaces2 @ 0x1C00A02F0
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C003DF70 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1C00FF190 (pProcessDfbSurfaces.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     bDfbSurfacesMigrated @ 0x1C0042950 (bDfbSurfacesMigrated.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00A03D0 (pProcessDfbSurfacesInternal.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(struct OBJECT *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v13; // eax
  HSEMAPHORE v14; // [rsp+20h] [rbp-18h] BYREF

  v14 = ghsemDwmState;
  EngAcquireSemaphore(ghsemDwmState);
  v9 = 0LL;
  if ( a3 && !(unsigned int)IsDwmActive(v8) )
    goto LABEL_9;
  if ( (*((_DWORD *)a1 + 29) & 1) == 0 )
    goto LABEL_8;
  v10 = *((_QWORD *)a1 + 6);
  if ( (*(_DWORD *)(v10 + 2128) & 0x10000) != 0 && a5 && (*(_DWORD *)(a5 + 2128) & 0x10000) != 0 )
  {
    if ( (*(_DWORD *)(v10 + 40) & 0x20000) != 0 && (*(_DWORD *)(a5 + 40) & 0x20000) != 0 )
    {
      if ( (int)IsMulProcessChildRedirectionDfbSurfaces2Supported(v8) >= 0 )
      {
        v13 = MulProcessChildRedirectionDfbSurfaces2((char *)a1 + 24, a5);
LABEL_21:
        v9 = v13;
        goto LABEL_9;
      }
      goto LABEL_9;
    }
    bDfbSurfacesMigrated(a5, (__int64)a1);
LABEL_8:
    v9 = pProcessDfbSurfacesInternal(a1);
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(v10 + 40) & 0x20000) != 0 )
    goto LABEL_8;
  v11 = *(_QWORD *)(v10 + 24);
  if ( (*(_DWORD *)(v11 + 40) & 0x20000) == 0 )
    goto LABEL_8;
  if ( a4 )
  {
    v9 = 1LL;
  }
  else if ( (int)IsMulProcessChildRedirectionDfbSurfacesSupported(v11) >= 0 )
  {
    v13 = MulProcessChildRedirectionDfbSurfaces(*((_QWORD *)a1 + 18));
    goto LABEL_21;
  }
LABEL_9:
  SEMOBJ::vUnlock((PERESOURCE *)&v14);
  return v9;
}
