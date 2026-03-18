/*
 * XREFs of ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C023B814
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0137094 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 * Callees:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C007D1FC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C023BD84 (-vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z.c)
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
  struct _SURFOBJ *v11; // r15
  struct _SURFOBJ *v12; // r12
  __int64 v13; // rax
  SURFOBJ *v14; // rbx
  struct DWMSPRITE *v15; // rdi
  __int64 v16; // rax
  SURFOBJ *v18; // [rsp+60h] [rbp-91h] BYREF
  XLATEOBJ *pxlo; // [rsp+68h] [rbp-89h] BYREF
  XLATEOBJ *v20; // [rsp+70h] [rbp-81h] BYREF
  __int64 v21; // [rsp+78h] [rbp-79h] BYREF
  char v22; // [rsp+80h] [rbp-71h]
  int v23; // [rsp+84h] [rbp-6Dh]
  __int64 v24; // [rsp+88h] [rbp-69h] BYREF
  char v25; // [rsp+90h] [rbp-61h]
  int v26; // [rsp+94h] [rbp-5Dh]
  _QWORD v27[4]; // [rsp+98h] [rbp-59h] BYREF
  struct DWMSPRITE *v28; // [rsp+B8h] [rbp-39h]
  struct SFMLOGICALSURFACE **v29; // [rsp+C0h] [rbp-31h]
  struct SFMLOGICALSURFACE *v30; // [rsp+C8h] [rbp-29h]
  HDEV v31; // [rsp+D0h] [rbp-21h]
  RECTL prclDest; // [rsp+D8h] [rbp-19h] BYREF

  v28 = a2;
  v30 = a3;
  v31 = a1;
  v18 = a4;
  v29 = a8;
  memset(v27, 0, sizeof(v27));
  HIDWORD(v27[0]) = a4->sizlBitmap.cx;
  cy = a4->sizlBitmap.cy;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  LODWORD(v27[0]) = 6;
  LODWORD(v27[1]) = cy;
  LODWORD(v27[3]) = 1;
  v27[2] = 0LL;
  DIB = SURFMEM::bCreateDIB((SURFMEM *)&v24, (struct _DEVBITMAPINFO *)v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( DIB )
  {
    if ( psoSrc )
    {
      LODWORD(v27[1]) >>= 1;
      DIB = SURFMEM::bCreateDIB((SURFMEM *)&v21, (struct _DEVBITMAPINFO *)v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    }
    if ( DIB )
    {
      v11 = 0LL;
      if ( v24 )
        v11 = (struct _SURFOBJ *)(v24 + 24);
      v12 = 0LL;
      if ( v21 )
        v12 = (struct _SURFOBJ *)(v21 + 24);
      v20 = 0LL;
      pxlo = 0LL;
      prclDest = *a6;
      if ( v21 )
      {
        v13 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&pxlo,
                             0LL,
                             0,
                             *(_QWORD *)(v13 + 128),
                             (__int64)gppalRGB,
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0xFFFFFF,
                             0,
                             0) )
          DIB = EngCopyBits(v12, psoSrc, 0LL, pxlo, &prclDest, (POINTL *)&prclDest);
      }
      v14 = v18;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v20,
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
        prclDest.bottom += v18->sizlBitmap.cy >> 1;
        DIB = EngCopyBits(v11, v18, 0LL, v20, &prclDest, (POINTL *)&prclDest);
      }
      if ( DIB )
      {
        LODWORD(v18) = 0;
        vSpDwmMaskToARGB(v11, v12, (int *)&v18);
        v15 = v28;
        *((_DWORD *)v28 + 41) = ((_DWORD)v18 != 0 ? 4 : 0) | *((_DWORD *)v28 + 41) & 0xFFFFFFFB;
        prclDest.top += v14->sizlBitmap.cy >> 1;
        v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
        DIB = bSpDwmUpdateSpriteShape(v31, v15, v30, v11, &prclDest, *(struct PALETTE **)(v16 + 128), a7, 0LL, v29);
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v21);
  SURFMEM::~SURFMEM((SURFMEM *)&v24);
  return DIB;
}
