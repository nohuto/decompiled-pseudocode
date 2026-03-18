/*
 * XREFs of ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C01260BC
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C004DE54 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngCopyBits @ 0x1C00BF3E0 (EngCopyBits.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00E3444 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C0127560 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     EngEraseSurface @ 0x1C01288F0 (EngEraseSurface.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  SIZEL v10; // rcx
  LONG v11; // r12d
  LONG cy; // eax
  LONG v13; // edx
  LONG v14; // eax
  LONG cx; // ecx
  LONG v16; // edx
  struct _SURFOBJ *p_hdev; // r15
  XLATEOBJ *v18; // rdi
  __int64 v19; // r8
  struct _RECTL *v20; // rbx
  LONG bottom; // ecx
  int v22; // eax
  SURFOBJ *psoDest; // [rsp+70h] [rbp-71h] BYREF
  char v25; // [rsp+78h] [rbp-69h]
  int v26; // [rsp+7Ch] [rbp-65h]
  LONG v27; // [rsp+80h] [rbp-61h]
  int v28; // [rsp+84h] [rbp-5Dh]
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-59h] BYREF
  XLATEOBJ *v30; // [rsp+90h] [rbp-51h] BYREF
  _DWORD v31[4]; // [rsp+98h] [rbp-49h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-39h]
  int v33; // [rsp+B0h] [rbp-31h]
  int v34; // [rsp+B4h] [rbp-2Dh]
  SIZEL *v35; // [rsp+B8h] [rbp-29h]
  RECTL prcl; // [rsp+C0h] [rbp-21h] BYREF
  RECTL v37; // [rsp+D0h] [rbp-11h] BYREF
  RECTL prclDest; // [rsp+E0h] [rbp-1h] BYREF

  *(_QWORD *)&prclDest.left = 0LL;
  v10 = (SIZEL)*a8;
  *(_QWORD *)&prclDest.right = 0LL;
  v28 = a2;
  *(_QWORD *)&v37.left = a7;
  v11 = a2 != 0 ? 3 : 0;
  v35 = (SIZEL *)a8;
  psoDest = 0LL;
  v25 = 0;
  v26 = 0;
  v31[3] = 0;
  v34 = 0;
  *(_QWORD *)&prcl.right = 0LL;
  if ( v10 )
  {
    ((void (__fastcall *)(_QWORD))GreDeleteObject)(v10);
    *a8 = 0LL;
  }
  vCalculateCursorBounds(a4, 0LL, a7);
  v13 = a4->sizlBitmap.cy >> 31;
  cy = a4->sizlBitmap.cy;
  *(_QWORD *)&prcl.left = 0LL;
  v14 = __SPAIR64__(v13, cy) / 2;
  cx = a4->sizlBitmap.cx;
  v27 = v14;
  v16 = v14;
  prcl.bottom = v14;
  prcl.right = cx;
  if ( a2 )
  {
    cx += 9;
    v16 = v14 + 7;
    prcl.right = cx;
    prcl.bottom = v14 + 7;
  }
  v31[1] = cx;
  v33 = 1;
  v31[2] = v16;
  v31[0] = 6;
  if ( psoSrc && *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc) + 128) )
    v32 = **(_QWORD **)(SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc) + 128);
  else
    v32 = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&psoDest, (struct _DEVBITMAPINFO *)v31, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
  {
    p_hdev = psoDest;
    if ( psoDest )
      p_hdev = (struct _SURFOBJ *)&psoDest->hdev;
    SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
    v18 = 0LL;
    v30 = 0LL;
    pxlo = 0LL;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&v30,
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
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v30);
        goto LABEL_22;
      }
      v18 = pxlo;
      prclDest.right = a4->sizlBitmap.cx;
      prclDest.bottom = v27;
      EngCopyBits(p_hdev, psoSrc, 0LL, pxlo, &prclDest, &gptlZero);
      v20 = *(struct _RECTL **)&v37.left;
      vCalculateCursorBounds(a4, p_hdev, *(struct _RECTL **)&v37.left);
      if ( (v18->flXlate & 1) != 0 && psoSrc->iBitmapFormat == 6 )
      {
        EngEraseSurface(p_hdev, &prcl, 0);
        v37.right = v11 + v20->right;
        bottom = v20->bottom;
        v37.left = v11;
        v37.bottom = v11 + bottom;
        v37.top = v11;
        EngCopyBits(p_hdev, psoSrc, 0LL, 0LL, &v37, &gptlZero);
      }
    }
    else
    {
      v20 = *(struct _RECTL **)&v37.left;
    }
    if ( v28 )
    {
      EngEraseSurface(p_hdev, &prcl, 0);
      v22 = bShadowAlphaCursor(p_hdev, a4, psoSrc, v30, v18, v20, a3);
    }
    else
    {
      v22 = a3;
    }
    if ( v22 )
    {
      LOBYTE(v19) = 5;
      v25 |= 1u;
      HmgSetOwner(*(_QWORD *)&psoDest->sizlBitmap, 0LL, v19);
      *v35 = psoDest->sizlBitmap;
    }
    goto LABEL_21;
  }
LABEL_22:
  SURFMEM::~SURFMEM((SURFMEM *)&psoDest);
}
