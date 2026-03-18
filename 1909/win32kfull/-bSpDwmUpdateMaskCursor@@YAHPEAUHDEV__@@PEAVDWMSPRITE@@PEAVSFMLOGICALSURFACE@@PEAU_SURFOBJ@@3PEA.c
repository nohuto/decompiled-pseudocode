/*
 * XREFs of ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026BA60
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0106B94 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 * Callees:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0031E64 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngCopyBits @ 0x1C00BF3E0 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C026BFC8 (-vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z.c)
 */

__int64 __fastcall bSpDwmUpdateMaskCursor(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        SURFOBJ *psoSrc,
        struct _RECTL *a6,
        unsigned int *a7,
        struct SFMLOGICALSURFACE **a8)
{
  LONG cy; // eax
  unsigned int DIB; // r14d
  struct _SURFOBJ *v10; // r15
  struct _SURFOBJ *v11; // r12
  __int64 v12; // rax
  SURFOBJ *v13; // rbx
  struct DWMSPRITE *v14; // rdi
  __int64 v15; // rax
  SURFOBJ *v17; // [rsp+60h] [rbp-91h] BYREF
  XLATEOBJ *pxlo; // [rsp+68h] [rbp-89h] BYREF
  XLATEOBJ *v19; // [rsp+70h] [rbp-81h] BYREF
  __int64 v20; // [rsp+78h] [rbp-79h] BYREF
  char v21; // [rsp+80h] [rbp-71h]
  int v22; // [rsp+84h] [rbp-6Dh]
  __int64 v23; // [rsp+88h] [rbp-69h] BYREF
  char v24; // [rsp+90h] [rbp-61h]
  int v25; // [rsp+94h] [rbp-5Dh]
  _DWORD v26[2]; // [rsp+98h] [rbp-59h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp-51h]
  int v28; // [rsp+A4h] [rbp-4Dh]
  __int64 v29; // [rsp+A8h] [rbp-49h]
  __int64 v30; // [rsp+B0h] [rbp-41h]
  struct DWMSPRITE *v31; // [rsp+B8h] [rbp-39h]
  struct SFMLOGICALSURFACE **v32; // [rsp+C0h] [rbp-31h]
  struct SFMLOGICALSURFACE *v33; // [rsp+C8h] [rbp-29h]
  HDEV v34; // [rsp+D0h] [rbp-21h]
  RECTL prclDest; // [rsp+D8h] [rbp-19h] BYREF

  v32 = a8;
  v26[1] = a4->sizlBitmap.cx;
  cy = a4->sizlBitmap.cy;
  v17 = a4;
  v33 = a3;
  v31 = a2;
  v34 = a1;
  v28 = 0;
  v30 = 1LL;
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  v26[0] = 6;
  v27 = cy;
  v29 = 0LL;
  DIB = SURFMEM::bCreateDIB((SURFMEM *)&v23, (struct _DEVBITMAPINFO *)v26, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( DIB )
  {
    if ( psoSrc )
    {
      v27 >>= 1;
      DIB = SURFMEM::bCreateDIB((SURFMEM *)&v20, (struct _DEVBITMAPINFO *)v26, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    }
    if ( DIB )
    {
      v10 = 0LL;
      if ( v23 )
        v10 = (struct _SURFOBJ *)(v23 + 24);
      v11 = 0LL;
      if ( v20 )
        v11 = (struct _SURFOBJ *)(v20 + 24);
      v19 = 0LL;
      pxlo = 0LL;
      prclDest = *a6;
      if ( v20 )
      {
        v12 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&pxlo,
                             0LL,
                             0,
                             *(_QWORD *)(v12 + 128),
                             (__int64)gppalRGB,
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0xFFFFFF,
                             0,
                             0) )
          DIB = EngCopyBits(v11, psoSrc, 0LL, pxlo, &prclDest, (POINTL *)&prclDest);
      }
      v13 = v17;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v19,
                           0LL,
                           0,
                           (__int64)ppalMono,
                           (__int64)gppalRGB,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        prclDest.bottom += v17->sizlBitmap.cy >> 1;
        DIB = EngCopyBits(v10, v17, 0LL, v19, &prclDest, (POINTL *)&prclDest);
      }
      if ( DIB )
      {
        LODWORD(v17) = 0;
        vSpDwmMaskToARGB(v10, v11, (int *)&v17);
        v14 = v31;
        *((_DWORD *)v31 + 41) = ((_DWORD)v17 != 0 ? 4 : 0) | *((_DWORD *)v31 + 41) & 0xFFFFFFFB;
        prclDest.top += v13->sizlBitmap.cy >> 1;
        v15 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
        DIB = bSpDwmUpdateSpriteShape(v34, v14, v33, v10, &prclDest, *(struct PALETTE **)(v15 + 128), a7, 0LL, v32);
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v19);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v20);
  SURFMEM::~SURFMEM((SURFMEM *)&v23);
  return DIB;
}
