/*
 * XREFs of GreSfmGetDirtyRgn @ 0x1C00784C4
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C00782C0 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0078820 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 */

__int64 __fastcall GreSfmGetDirtyRgn(
        __int64 a1,
        unsigned __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  __int64 v13; // rdx
  struct SFMLOGICALSURFACE *v14; // rbx
  struct SFMLOGICALSURFACE *v15; // rax
  unsigned int DirtyRgn; // edi

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  GreAcquireSemaphoreSharedInternal(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      v14 = 0LL;
      if ( a1 && (LOBYTE(v13) = 18, v15 = (struct SFMLOGICALSURFACE *)HmgShareLockCheck(a1, v13), (v14 = v15) != 0LL) )
        DirtyRgn = GrepSfmGetDirtyRgn(v15, a2, a3, a4, a5, a6, a7, a8, a9);
      else
        DirtyRgn = -1073741816;
      if ( v14 )
        DEC_SHARE_REF_CNT(v14);
    }
    else
    {
      DirtyRgn = -1071775733;
    }
  }
  else
  {
    DirtyRgn = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return DirtyRgn;
}
