/*
 * XREFs of pProcessDfbSurfaces2 @ 0x1C0049B30
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C0049830 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1C00CB5F0 (pProcessDfbSurfaces.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0049C10 (pProcessDfbSurfacesInternal.c)
 *     bDfbSurfacesMigrated @ 0x1C004A640 (bDfbSurfacesMigrated.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(struct OBJECT *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v15; // eax
  struct _ERESOURCE *v16; // [rsp+20h] [rbp-18h] BYREF

  v16 = (struct _ERESOURCE *)ghsemDwmState;
  EngAcquireSemaphore(ghsemDwmState);
  v10 = 0LL;
  if ( a3 && !(unsigned int)IsDwmActive(v8) )
    goto LABEL_9;
  if ( (*((_DWORD *)a1 + 29) & 1) == 0 )
    goto LABEL_8;
  v12 = *((_QWORD *)a1 + 6);
  if ( (*(_DWORD *)(v12 + 2120) & 0x10000) != 0 && a5 && (*(_DWORD *)(a5 + 2120) & 0x10000) != 0 )
  {
    if ( (*(_DWORD *)(v12 + 40) & 0x20000) != 0 && (*(_DWORD *)(a5 + 40) & 0x20000) != 0 )
    {
      if ( (int)IsMulProcessChildRedirectionDfbSurfaces2Supported(v8) >= 0 )
      {
        v15 = MulProcessChildRedirectionDfbSurfaces2((char *)a1 + 24, a5);
LABEL_20:
        v10 = v15;
        goto LABEL_9;
      }
      goto LABEL_9;
    }
    bDfbSurfacesMigrated(a5, a1);
LABEL_8:
    v10 = pProcessDfbSurfacesInternal(a1);
    goto LABEL_9;
  }
  v11 = 0x20000LL;
  if ( (*(_DWORD *)(v12 + 40) & 0x20000) != 0 )
    goto LABEL_8;
  v13 = *(_QWORD *)(v12 + 24);
  if ( (*(_DWORD *)(v13 + 40) & 0x20000) == 0 )
    goto LABEL_8;
  if ( a4 )
  {
    v10 = 1LL;
  }
  else if ( (int)IsMulProcessChildRedirectionDfbSurfacesSupported(v13) >= 0 )
  {
    v15 = MulProcessChildRedirectionDfbSurfaces(*((_QWORD *)a1 + 18));
    goto LABEL_20;
  }
LABEL_9:
  SEMOBJ::vUnlock(&v16, v11, v9);
  return v10;
}
