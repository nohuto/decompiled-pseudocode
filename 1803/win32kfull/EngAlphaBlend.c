/*
 * XREFs of EngAlphaBlend @ 0x1C00A15D0
 * Callers:
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C00B24B0 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     GrePtInSprite @ 0x1C01363EC (GrePtInSprite.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01365DC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0265060 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C026B8E0 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0271260 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C0282970 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00A1C20 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C00A1F44 (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00A212C (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

BOOL __stdcall EngAlphaBlend(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  __int64 v9; // r13
  __int64 v10; // rax
  RECTL v11; // xmm0
  struct SURFACE *v12; // r15
  BOOL v13; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  signed __int32 v17; // ett
  struct SURFACE *v18; // rdx
  LONG left; // r12d
  struct _RECTL v20; // xmm6
  __m128i v21; // xmm0
  int v22; // esi
  int v23; // eax
  __int64 v24; // r15
  int v25; // r14d
  int v26; // r8d
  ULONG *pulXlate; // rax
  __int64 v28; // rbx
  ULONG *v29; // rcx
  XLATEOBJ *v30; // r13
  int v31; // eax
  int v32; // r14d
  unsigned int v33; // esi
  LONG right; // edi
  HDEV v35; // r13
  int v36; // r14d
  LONG *v37; // rdx
  int v38; // eax
  LONG v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // r9
  __int64 v43; // r8
  int v44; // eax
  __int64 v45; // rcx
  __int128 v47; // xmm0
  bool v48; // zf
  __int64 v49; // rbx
  _QWORD *v50; // rax
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v52; // rcx
  struct SURFMEM *v53; // [rsp+28h] [rbp-D8h]
  int v54; // [rsp+38h] [rbp-C8h]
  int v55; // [rsp+60h] [rbp-A0h]
  ULONG *v56; // [rsp+68h] [rbp-98h] BYREF
  int top; // [rsp+70h] [rbp-90h]
  int v58; // [rsp+74h] [rbp-8Ch]
  struct _RECTL v59; // [rsp+80h] [rbp-80h] BYREF
  int bottom; // [rsp+90h] [rbp-70h]
  XLATEOBJ *v61; // [rsp+98h] [rbp-68h]
  HDEV hdev; // [rsp+A0h] [rbp-60h] BYREF
  RECTL *v63; // [rsp+A8h] [rbp-58h] BYREF
  LONG v64; // [rsp+B0h] [rbp-50h]
  HDEV v65; // [rsp+B8h] [rbp-48h] BYREF
  struct _XLATEOBJ *v66; // [rsp+C0h] [rbp-40h]
  XCLIPOBJ *v67; // [rsp+C8h] [rbp-38h]
  __int64 v68; // [rsp+D0h] [rbp-30h] BYREF
  char v69; // [rsp+D8h] [rbp-28h]
  int v70; // [rsp+DCh] [rbp-24h]
  _DWORD v71[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v72; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v73[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v74[2]; // [rsp+F8h] [rbp-8h] BYREF
  char v75; // [rsp+100h] [rbp+0h]
  int v76; // [rsp+104h] [rbp+4h]
  _QWORD v77[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v78; // [rsp+128h] [rbp+28h]
  __int64 v79; // [rsp+130h] [rbp+30h]
  __int64 v80; // [rsp+138h] [rbp+38h]
  char v81[40]; // [rsp+140h] [rbp+40h] BYREF
  BLENDOBJ v82; // [rsp+168h] [rbp+68h]
  RECTL v83; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v84; // [rsp+180h] [rbp+80h] BYREF
  struct _RECTL v85; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v86; // [rsp+1A0h] [rbp+A0h] BYREF
  _OWORD v87[20]; // [rsp+1A4h] [rbp+A4h] BYREF

  v63 = prclSrc;
  v61 = pxlo;
  v67 = (XCLIPOBJ *)pco;
  v55 = 1;
  v80 = SURFOBJ_TO_SURFACE(psoDest);
  v9 = v80;
  v10 = SURFOBJ_TO_SURFACE(psoSrc);
  v11 = *prclDest;
  v12 = (struct SURFACE *)v10;
  v13 = 0;
  v66 = *(struct _XLATEOBJ **)&pBlendObj[2].BlendFunction.BlendOp;
  v14 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v59 = v11;
  v79 = v14;
  v78 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v58 = 0;
  v83 = *prclSrc;
  if ( v80 )
  {
    v82 = *pBlendObj;
    v68 = 0LL;
    v69 = 0;
    v70 = 0;
    *(_QWORD *)v74 = 0LL;
    v75 = 0;
    v76 = 0;
    v15 = *(_QWORD *)(v80 + 48);
    v16 = *(unsigned int *)&v82 >> 8;
    if ( v15 )
    {
      _m_prefetchw((const void *)(v15 + 40));
      do
        v17 = *(_DWORD *)(v15 + 40);
      while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 40), v17 | 0x40000, v17) );
      LOBYTE(v16) = pBlendObj->BlendFunction.BlendFlags;
    }
    if ( (v16 & 1) != 0
      && (v59.right - v59.left != v83.right - v83.left || v59.bottom - v59.top != v83.bottom - v83.top) )
    {
      LOBYTE(v13) = (unsigned int)EngHTBlt(
                                    (_DWORD)psoDest,
                                    (_DWORD)psoSrc,
                                    0,
                                    (_DWORD)v67,
                                    (__int64)v61,
                                    0LL,
                                    (__int64)&gptlZero,
                                    (__int64)prclDest,
                                    (__int64)prclSrc,
                                    0LL,
                                    512,
                                    (__int64)pBlendObj) == 1;
      goto LABEL_45;
    }
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v65 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v65, psoSrc, 0LL, 0);
    hdev = (HDEV)psSetupTransparentSrcSurface(v12, (struct SURFACE *)v9, &v59, v66, &v83, (struct SURFMEM *)v74, 0, 0);
    v18 = (struct SURFACE *)hdev;
    if ( !hdev || (left = v59.left, v59.left == v59.right) )
    {
LABEL_43:
      v31 = v55;
LABEL_44:
      v13 = v31;
LABEL_45:
      SURFMEM::~SURFMEM((SURFMEM *)v74);
      SURFMEM::~SURFMEM((SURFMEM *)&v68);
      return v13;
    }
    v20 = v59;
    v21 = _mm_srli_si128((__m128i)v59, 12);
    v22 = v59.right - v59.left;
    v23 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v59, 4));
    v24 = v9;
    v64 = v83.left;
    v25 = _mm_cvtsi128_si32(v21) - v23;
    v85 = v59;
    LODWORD(v65) = v83.top;
    bottom = _mm_cvtsi128_si32(v21);
    top = v23;
    if ( *(_WORD *)(v9 + 100) )
    {
      memset(v77, 0, sizeof(v77));
      v48 = (*(_DWORD *)(v9 + 112) & 0x40000) == 0;
      v49 = *(_QWORD *)(v9 + 48);
      v50 = *(_QWORD **)(v9 + 128);
      LODWORD(v77[0]) = *(_DWORD *)(v9 + 96);
      HIDWORD(v77[0]) = v59.right - v59.left;
      LODWORD(v77[1]) = v25;
      if ( v48 )
        LODWORD(v77[3]) = 0;
      else
        LODWORD(v77[3]) = 0x40000;
      v77[2] = 0LL;
      if ( v50 )
        v77[2] = *v50;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)v77, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_75;
      *(_QWORD *)(v68 + 48) = *(_QWORD *)(v9 + 48);
      v48 = (*(_DWORD *)(v9 + 112) & 0x400) == 0;
      v71[1] = top;
      *(_QWORD *)&v84.left = 0LL;
      *(_QWORD *)&v84.right = __PAIR64__(v25, v22);
      v71[0] = left;
      v51 = v48
          ? EngCopyBits
          : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v49 + 2832);
      v52 = v68 ? v68 + 24 : 0LL;
      v53 = (struct SURFMEM *)v71;
      if ( !((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _RECTL *))v51)(
              v52,
              v9 + 24,
              0LL,
              xloIdent,
              &v84) )
        goto LABEL_75;
      v20 = v84;
      v24 = v68;
      v18 = (struct SURFACE *)hdev;
      v59 = v84;
      left = v84.left;
      bottom = v84.bottom;
      top = v84.top;
    }
    if ( v24 )
    {
      if ( v24 == v9 )
      {
        v26 = 0;
      }
      else
      {
        v26 = 1;
        v58 = 1;
      }
      pulXlate = (ULONG *)*((_QWORD *)v18 + 16);
      v28 = *(_QWORD *)(v24 + 128);
      v29 = pulXlate;
      v56 = pulXlate;
      v72 = v28;
      if ( !pulXlate )
      {
        if ( !v61 || (pulXlate = v61[1].pulXlate, (v29 = pulXlate) == 0LL) )
        {
          pulXlate = *(ULONG **)(*((_QWORD *)v18 + 6) + 1800LL);
          v29 = pulXlate;
        }
        v56 = pulXlate;
      }
      if ( !v28 )
      {
        pulXlate = v29;
        v28 = *(_QWORD *)(*(_QWORD *)(v24 + 48) + 1800LL);
        v72 = v28;
      }
      if ( pulXlate && v28 )
      {
        v30 = 0LL;
        if ( !v26 )
          v30 = (XLATEOBJ *)v67;
        v61 = v30;
        v31 = bDetermineAlphaBlendFunction(
                (struct SURFACE *)v24,
                v18,
                (struct XEPALOBJ *)&v72,
                (struct XEPALOBJ *)&v56,
                (struct XLATE *)v66,
                (int)v53,
                (struct _ALPHA_DISPATCH_FORMAT *)v81,
                v54);
        v55 = v31;
        if ( !v31 )
          goto LABEL_44;
        LODWORD(v56) = 0;
        v32 = 0;
        v86 = 1;
        v87[0] = v20;
        if ( v30 )
        {
          if ( BYTE4(v30->pulXlate) == 1 )
          {
            v47 = *(_OWORD *)&v30->flXlate;
            LODWORD(v56) = 0;
            v86 = 1;
            v87[0] = v47;
          }
          else if ( BYTE4(v30->pulXlate) == 3 )
          {
            v32 = 1;
            LODWORD(v56) = 1;
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)v30, 0, 0, 1u, 0x14u);
          }
        }
        if ( v32 )
          goto LABEL_47;
        while ( 1 )
        {
          v33 = 0;
          if ( v86 )
          {
            right = v59.right;
            v35 = hdev;
            v36 = top;
            do
            {
              v37 = (LONG *)&v87[v33];
              if ( *v37 < left )
                *v37 = left;
              if ( v37[2] > right )
                v37[2] = right;
              v38 = v37[1];
              if ( v38 < v36 )
              {
                v37[1] = v36;
                v38 = v36;
                v39 = v36;
              }
              else
              {
                v39 = v37[1];
              }
              v40 = v37[3];
              v41 = bottom;
              if ( v40 > bottom )
              {
                v37[3] = bottom;
                v40 = v41;
              }
              if ( v38 < v40 && *v37 < v37[2] )
              {
                v42 = *((_QWORD *)v35 + 10);
                v43 = *(unsigned int *)(v24 + 88);
                v73[0] = v64 + *v37 - left;
                v44 = v39 + (_DWORD)v65 - v36;
                v45 = *(_QWORD *)(v24 + 80);
                v73[1] = v44;
                v55 = AlphaScanLineBlend(v45, v37, v43, v42, *((_DWORD *)v35 + 22), v73, v66, v79, v78, v28);
              }
              ++v33;
            }
            while ( v33 < v86 );
            v32 = (int)v56;
            v30 = v61;
          }
          if ( !v32 )
            break;
LABEL_47:
          v32 = XCLIPOBJ::bEnum((XCLIPOBJ *)v30, 0x144u, (char *)&v86, 0LL);
          LODWORD(v56) = v32;
        }
        if ( v58 )
        {
          v63 = 0LL;
          if ( (*(_DWORD *)(v80 + 112) & 0x400) != 0 )
            (*(void (__fastcall **)(__int64, __int64, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, RECTL **))(*(_QWORD *)(v80 + 48) + 2832LL))(
              v80 + 24,
              v24 + 24,
              v67,
              xloIdent,
              &v85,
              &v63);
          else
            ((void (__fastcall *)(__int64, __int64, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, RECTL **))EngCopyBits)(
              v80 + 24,
              v24 + 24,
              v67,
              xloIdent,
              &v85,
              &v63);
        }
        goto LABEL_43;
      }
    }
LABEL_75:
    v31 = 0;
    goto LABEL_44;
  }
  return 0;
}
