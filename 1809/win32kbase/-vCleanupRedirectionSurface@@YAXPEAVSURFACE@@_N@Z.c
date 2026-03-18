/*
 * XREFs of ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C00FF04C
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C00A03D0 (pProcessDfbSurfacesInternal.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0101370 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0044A78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0080380 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00A9FA8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall vCleanupRedirectionSurface(HSURF *this, char a2)
{
  char v4; // si
  __int64 v5; // rdi
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  _BYTE v7[32]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]

  if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 && (int)IsUserRecreateRedirectionBitmapSupported() >= 0 )
  {
    SURFREF::SURFREF((SURFREF *)v7, this[4]);
    if ( v8 )
    {
      v4 = 0;
      v5 = 0LL;
      while ( 1 )
      {
        FirstLSurf = SURFACE::GetFirstLSurf((SURFACE *)this);
        if ( !FirstLSurf )
          break;
        if ( !v5 )
          v5 = *((_QWORD *)FirstLSurf + 33);
        v4 = 1;
        vSpDwmMigrateLSurfShapeReferenceWrap(this[6], FirstLSurf, 0LL);
      }
      UserRecreateRedirectionBitmap(v5);
      SURFREF::bDeleteSurface((__int64)v7, 0);
      if ( a2 )
      {
        if ( !v4 && !byte_1C01D1E20 )
        {
          byte_1C01D1E20 = 1;
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 20LL, this, this[6], 0LL, 0LL, 0LL, 0);
        }
      }
    }
    SURFREF::~SURFREF((SURFREF *)v7);
  }
}
