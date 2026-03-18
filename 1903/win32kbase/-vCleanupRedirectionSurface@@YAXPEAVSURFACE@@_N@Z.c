/*
 * XREFs of ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0128A6C
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C0058BB0 (pProcessDfbSurfacesInternal.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0129C60 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0093770 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BDBC8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall vCleanupRedirectionSurface(struct SURFACE *this, char a2)
{
  char v4; // si
  __int64 v5; // rdi
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v7; // [rsp+20h] [rbp-38h]
  struct OBJECT *v8; // [rsp+70h] [rbp+18h] BYREF

  if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 && (int)IsUserRecreateRedirectionBitmapSupported() >= 0 )
  {
    v8 = (struct OBJECT *)HmgShareLockCheck(*((_QWORD *)this + 4), 5);
    if ( v8 )
    {
      v4 = 0;
      v5 = 0LL;
      while ( 1 )
      {
        FirstLSurf = SURFACE::GetFirstLSurf(this);
        if ( !FirstLSurf )
          break;
        if ( !v5 )
          v5 = *((_QWORD *)FirstLSurf + 33);
        v4 = 1;
        vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)this + 6), FirstLSurf, 0LL);
      }
      UserRecreateRedirectionBitmap(v5);
      SURFREF::bDeleteSurface((__int64 *)&v8, 0);
      if ( a2 && !v4 && !byte_1C0219858 )
      {
        v7 = *((_QWORD *)this + 6);
        byte_1C0219858 = 1;
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 20LL, this, v7, 0LL, 0LL, 0LL, 0);
      }
      if ( v8 )
        HmgDecrementShareReferenceCountEx(v8, 0LL);
    }
  }
}
