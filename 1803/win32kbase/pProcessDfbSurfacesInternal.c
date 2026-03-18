/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1C0049C10
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C0049B30 (pProcessDfbSurfaces2.c)
 * Callees:
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C001D320 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0022C20 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0022CF8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003EA60 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C003EE00 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00487A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C0049DD0 (bMigrateSurfaceForConversion.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall pProcessDfbSurfacesInternal(struct OBJECT *a1, int a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rsi
  int v7; // r12d
  int v8; // eax
  char v9; // r14
  __int64 v10; // r15
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rax
  struct SFMLOGICALSURFACE *FirstLSurf; // rdi
  __int64 v21; // [rsp+68h] [rbp-49h] BYREF
  char v22; // [rsp+70h] [rbp-41h]
  int v23; // [rsp+74h] [rbp-3Dh]
  _QWORD v24[4]; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v25[80]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v26; // [rsp+118h] [rbp+67h] BYREF

  v2 = *((_DWORD *)a1 + 28);
  v3 = 0LL;
  v4 = *((_QWORD *)a1 + 70);
  if ( (v2 & 0x80100000) == 0 )
  {
    v7 = *((_DWORD *)a1 + 29) & 1;
    if ( v7 || (v2 & 0x800) == 0 || (v8 = 1, *((_WORD *)a1 + 50) != 3) )
      v8 = 0;
    if ( !v8 )
    {
      v21 = 0LL;
      v9 = 0;
      v22 = 0;
      v10 = 0LL;
      v23 = 0;
      if ( !v4 )
      {
        memset(v24, 0, sizeof(v24));
        LODWORD(v24[0]) = *((_DWORD *)a1 + 24);
        HIDWORD(v24[0]) = *((_DWORD *)a1 + 14);
        LODWORD(v24[1]) = *((_DWORD *)a1 + 15);
        v24[2] = 0LL;
        LODWORD(v24[3]) = 1;
        if ( v7 )
        {
          v11 = 1;
          if ( (*((_WORD *)a1 + 51) & 0x800) != 0 )
            v11 = 2049;
          LODWORD(v24[3]) = v11;
        }
        if ( !(unsigned int)SURFMEM::bCreateDIB(
                              (SURFMEM *)&v21,
                              (struct _DEVBITMAPINFO *)v24,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0) )
          goto LABEL_26;
        v26 = *((_QWORD *)a1 + 6);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v25, (struct PDEVOBJ *)&v26);
        GreAcquireHmgrSemaphore(v13, v12, v14);
        v4 = v21;
        v10 = v21;
        if ( (*((_DWORD *)a1 + 29) & 1) != 0 )
          *(_DWORD *)(v21 + 112) |= 0x800u;
        *(_QWORD *)(v4 + 48) = *((_QWORD *)a1 + 6);
        GreReleaseHmgrSemaphore(v16, v15, v17);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
        v9 = v22;
      }
      if ( (unsigned int)bMigrateSurfaceForConversion(a1, (struct _BASEOBJECT *)v4) )
      {
        v18 = v10;
        if ( (_DWORD)v26 && a2 )
        {
          vDynamicConvertNewSurfaceDCs(*((_QWORD *)a1 + 6), a1);
          v18 = v10;
        }
        if ( v18 )
          v22 = v9 | 1;
        v3 = v4;
LABEL_19:
        SURFMEM::~SURFMEM((SURFMEM *)&v21);
        return v3;
      }
LABEL_26:
      if ( (*((_DWORD *)a1 + 29) & 1) != 0 )
      {
        FirstLSurf = SURFACE::GetFirstLSurf(a1);
        if ( FirstLSurf )
        {
          if ( (int)IsUserReleaseRedirectionBitmapSupported() >= 0 )
            UserReleaseRedirectionBitmap(*((_QWORD *)FirstLSurf + 33));
        }
      }
      goto LABEL_19;
    }
  }
  return 0LL;
}
