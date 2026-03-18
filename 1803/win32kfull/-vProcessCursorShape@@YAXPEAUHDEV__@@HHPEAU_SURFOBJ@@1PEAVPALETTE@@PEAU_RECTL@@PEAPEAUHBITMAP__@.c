/*
 * XREFs of ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00DCEE8
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00DC69C (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00DD264 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     EngEraseSurface @ 0x1C00DD4B0 (EngEraseSurface.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01365DC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall vProcessCursorShape(
        HDEV a1,
        int a2,
        int a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *psoSrc,
        struct PALETTE *a6,
        struct _RECTL *a7,
        HBITMAP *a8)
{
  __int64 v10; // rcx
  LONG cy; // eax
  LONG v12; // edx
  LONG v13; // eax
  LONG cx; // ecx
  LONG v15; // edx
  struct _SURFOBJ *v16; // r15
  XLATEOBJ *v17; // rdi
  __int64 v18; // r8
  struct _RECTL *v19; // rbx
  LONG v20; // ecx
  LONG bottom; // ecx
  int v22; // eax
  __int64 v24; // [rsp+70h] [rbp-71h] BYREF
  char v25; // [rsp+78h] [rbp-69h]
  int v26; // [rsp+7Ch] [rbp-65h]
  LONG v27; // [rsp+80h] [rbp-61h]
  LONG v28; // [rsp+84h] [rbp-5Dh]
  int v29; // [rsp+88h] [rbp-59h]
  XLATEOBJ *pxlo; // [rsp+90h] [rbp-51h] BYREF
  XLATEOBJ *v31; // [rsp+98h] [rbp-49h] BYREF
  _QWORD v32[4]; // [rsp+A0h] [rbp-41h] BYREF
  RECTL v33; // [rsp+C0h] [rbp-21h] BYREF
  RECTL prcl; // [rsp+D0h] [rbp-11h] BYREF
  RECTL prclDest; // [rsp+E0h] [rbp-1h] BYREF

  v29 = a2;
  *(_QWORD *)&v33.left = a7;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  memset(v32, 0, sizeof(v32));
  v10 = (__int64)*a8;
  v28 = a2 != 0 ? 3 : 0;
  if ( v10 )
  {
    GreDeleteObject(v10);
    *a8 = 0LL;
  }
  vCalculateCursorBounds(a4, 0LL, a7);
  v12 = a4->sizlBitmap.cy >> 31;
  cy = a4->sizlBitmap.cy;
  *(_QWORD *)&prcl.left = 0LL;
  v13 = __SPAIR64__(v12, cy) / 2;
  cx = a4->sizlBitmap.cx;
  v27 = v13;
  v15 = v13;
  prcl.bottom = v13;
  prcl.right = cx;
  if ( a2 )
  {
    cx += 9;
    v15 = v13 + 7;
    prcl.right = cx;
    prcl.bottom = v13 + 7;
  }
  HIDWORD(v32[0]) = cx;
  LODWORD(v32[3]) = 1;
  LODWORD(v32[1]) = v15;
  LODWORD(v32[0]) = 6;
  if ( psoSrc && *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc) + 128) )
    v32[2] = **(_QWORD **)(SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc) + 128);
  else
    v32[2] = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v24, (struct _DEVBITMAPINFO *)v32, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
  {
    if ( v24 )
      v16 = (struct _SURFOBJ *)(v24 + 24);
    else
      v16 = 0LL;
    SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
    v17 = 0LL;
    v31 = 0LL;
    pxlo = 0LL;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&v31,
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
      goto LABEL_21;
    if ( psoSrc )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (__int64 *)&pxlo,
                            0LL,
                            0,
                            (__int64)a6,
                            (__int64)gppalRGB,
                            (__int64)ppalDefault,
                            (__int64)ppalDefault,
                            0,
                            0,
                            0,
                            0) )
      {
LABEL_21:
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v31);
        goto LABEL_22;
      }
      prclDest.right = a4->sizlBitmap.cx;
      *(_QWORD *)&prclDest.left = 0LL;
      v17 = pxlo;
      prclDest.bottom = v27;
      EngCopyBits(v16, psoSrc, 0LL, pxlo, &prclDest, &gptlZero);
      v19 = *(struct _RECTL **)&v33.left;
      vCalculateCursorBounds(a4, v16, *(struct _RECTL **)&v33.left);
      if ( (v17->flXlate & 1) != 0 && psoSrc->iBitmapFormat == 6 )
      {
        EngEraseSurface(v16, &prcl, 0);
        v20 = v28 + v19->right;
        v33.left = v28;
        v33.right = v20;
        bottom = v19->bottom;
        v33.top = v28;
        v33.bottom = v28 + bottom;
        EngCopyBits(v16, psoSrc, 0LL, 0LL, &v33, &gptlZero);
      }
    }
    else
    {
      v19 = *(struct _RECTL **)&v33.left;
    }
    if ( v29 )
    {
      EngEraseSurface(v16, &prcl, 0);
      v22 = bShadowAlphaCursor(v16, a4, psoSrc, v31, v17, v19, a3);
    }
    else
    {
      v22 = a3;
    }
    if ( v22 )
    {
      LOBYTE(v18) = 5;
      v25 |= 1u;
      HmgSetOwner(*(_QWORD *)(v24 + 32), 0LL, v18);
      *a8 = *(HBITMAP *)(v24 + 32);
    }
    goto LABEL_21;
  }
LABEL_22:
  SURFMEM::~SURFMEM((SURFMEM *)&v24);
}
