/*
 * XREFs of EngAlphaBlend @ 0x1C005B220
 * Callers:
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C003F9A0 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     GrePtInSprite @ 0x1C0046454 (GrePtInSprite.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00FC3A8 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C028EEE0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0295AE0 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029A4C0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AB240 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     EngHTBlt @ 0x1C0036378 (EngHTBlt.c)
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C005B8B0 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C005BAC8 (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C005BCE8 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00F5428 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  BLENDOBJ v14; // eax
  __int64 v15; // rcx
  signed __int32 v16; // ett
  unsigned int v17; // eax
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
  XCLIPOBJ *v29; // r13
  int v30; // eax
  int v31; // r14d
  unsigned int v32; // esi
  LONG right; // edi
  HDEV v34; // r13
  int v35; // r14d
  LONG *v36; // rdx
  int v37; // ecx
  LONG v38; // eax
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // rcx
  __int128 v45; // xmm0
  bool v46; // zf
  __int64 v47; // rbx
  __int64 *v48; // rax
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v50; // rcx
  struct SURFMEM *v51; // [rsp+28h] [rbp-D8h]
  int v52; // [rsp+38h] [rbp-C8h]
  int v53; // [rsp+60h] [rbp-A0h]
  ULONG *v54; // [rsp+68h] [rbp-98h] BYREF
  int top; // [rsp+70h] [rbp-90h]
  int v56; // [rsp+74h] [rbp-8Ch]
  struct _RECTL v57; // [rsp+80h] [rbp-80h] BYREF
  int bottom; // [rsp+90h] [rbp-70h]
  RECTL *v59; // [rsp+98h] [rbp-68h]
  XLATEOBJ *v60; // [rsp+A0h] [rbp-60h]
  HDEV hdev; // [rsp+A8h] [rbp-58h] BYREF
  HDEV v62; // [rsp+B0h] [rbp-50h] BYREF
  struct _XLATEOBJ *v63; // [rsp+B8h] [rbp-48h]
  XCLIPOBJ *v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h] BYREF
  char v66; // [rsp+D0h] [rbp-30h]
  int v67; // [rsp+D4h] [rbp-2Ch]
  _DWORD v68[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v70[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-10h] BYREF
  int v72[2]; // [rsp+F8h] [rbp-8h] BYREF
  char v73; // [rsp+100h] [rbp+0h]
  int v74; // [rsp+104h] [rbp+4h]
  _DWORD v75[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v76; // [rsp+118h] [rbp+18h]
  int v77; // [rsp+120h] [rbp+20h]
  int v78; // [rsp+124h] [rbp+24h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  __int64 v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]
  _DWORD v82[12]; // [rsp+140h] [rbp+40h] BYREF
  RECTL v83; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v84; // [rsp+180h] [rbp+80h] BYREF
  struct _RECTL v85; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v86; // [rsp+1A0h] [rbp+A0h] BYREF
  _OWORD v87[20]; // [rsp+1A4h] [rbp+A4h] BYREF

  v59 = prclSrc;
  v60 = pxlo;
  v64 = (XCLIPOBJ *)pco;
  v53 = 1;
  v81 = SURFOBJ_TO_SURFACE(psoDest);
  v9 = v81;
  v10 = SURFOBJ_TO_SURFACE(psoSrc);
  v11 = *prclDest;
  v12 = (struct SURFACE *)v10;
  v13 = 0;
  v63 = *(struct _XLATEOBJ **)&pBlendObj[2].BlendFunction.BlendOp;
  v80 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v79 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v56 = 0;
  v57 = v11;
  v83 = *prclSrc;
  memset(v82, 0, sizeof(v82));
  if ( v81 )
  {
    v14 = *pBlendObj;
    v65 = 0LL;
    v66 = 0;
    v67 = 0;
    *(_QWORD *)v72 = 0LL;
    v73 = 0;
    v74 = 0;
    v15 = *(_QWORD *)(v81 + 48);
    v82[10] = v14;
    if ( v15 )
    {
      _m_prefetchw((const void *)(v15 + 40));
      do
        v16 = *(_DWORD *)(v15 + 40);
      while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 40), v16 | 0x40000, v16) );
      LOBYTE(v17) = pBlendObj->BlendFunction.BlendFlags;
    }
    else
    {
      v17 = *(unsigned int *)&v14 >> 8;
    }
    if ( (v17 & 1) != 0
      && (v57.right - v57.left != v83.right - v83.left || v57.bottom - v57.top != v83.bottom - v83.top) )
    {
      LOBYTE(v13) = (unsigned int)EngHTBlt(
                                    psoDest,
                                    psoSrc,
                                    0LL,
                                    (CLIPOBJ *)v64,
                                    (struct XLATE *)v60,
                                    0LL,
                                    (RECTL *)&gptlZero,
                                    (XLATEOBJ *)prclDest,
                                    (XLATEOBJ *)v59,
                                    0LL,
                                    512,
                                    (XLATEOBJ *)pBlendObj) == 1;
      goto LABEL_45;
    }
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v62 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v62, psoSrc, 0LL, 0);
    hdev = (HDEV)psSetupTransparentSrcSurface(v12, (struct SURFACE *)v9, &v57, v63, &v83, (struct SURFMEM *)v72, 0, 0);
    v18 = (struct SURFACE *)hdev;
    if ( !hdev || (left = v57.left, v57.left == v57.right) )
    {
LABEL_43:
      v30 = v53;
LABEL_44:
      v13 = v30;
LABEL_45:
      SURFMEM::~SURFMEM((SURFMEM *)v72);
      SURFMEM::~SURFMEM((SURFMEM *)&v65);
      return v13;
    }
    v20 = v57;
    v21 = _mm_srli_si128((__m128i)v57, 12);
    v22 = v57.right - v57.left;
    v23 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v57, 4));
    v24 = v9;
    LODWORD(v62) = v83.left;
    v25 = _mm_cvtsi128_si32(v21) - v23;
    v85 = v57;
    LODWORD(v59) = v83.top;
    bottom = _mm_cvtsi128_si32(v21);
    top = v23;
    if ( *(_WORD *)(v9 + 100) )
    {
      v46 = (*(_DWORD *)(v9 + 112) & 0x40000) == 0;
      v47 = *(_QWORD *)(v9 + 48);
      v48 = *(__int64 **)(v9 + 128);
      v75[0] = *(_DWORD *)(v9 + 96);
      v75[3] = 0;
      v78 = 0;
      v75[1] = v57.right - v57.left;
      v75[2] = v25;
      if ( v46 )
        v77 = 0;
      else
        v77 = 0x40000;
      v76 = 0LL;
      if ( v48 )
        v76 = *v48;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)v75, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_76;
      *(_QWORD *)(v65 + 48) = *(_QWORD *)(v9 + 48);
      v46 = (*(_DWORD *)(v9 + 112) & 0x400) == 0;
      v68[1] = top;
      *(_QWORD *)&v84.left = 0LL;
      *(_QWORD *)&v84.right = __PAIR64__(v25, v22);
      v68[0] = left;
      v49 = v46
          ? EngCopyBits
          : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v47 + 2840);
      v50 = v65 ? v65 + 24 : 0LL;
      v51 = (struct SURFMEM *)v68;
      if ( !((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _RECTL *))v49)(
              v50,
              v9 + 24,
              0LL,
              xloIdent,
              &v84) )
        goto LABEL_76;
      v20 = v84;
      v24 = v65;
      v18 = (struct SURFACE *)hdev;
      v57 = v84;
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
        v56 = 1;
      }
      pulXlate = (ULONG *)*((_QWORD *)v18 + 16);
      v28 = *(_QWORD *)(v24 + 128);
      v54 = pulXlate;
      v69 = v28;
      if ( !pulXlate )
      {
        if ( !v60 || (pulXlate = v60[1].pulXlate) == 0LL )
          pulXlate = *(ULONG **)(*((_QWORD *)v18 + 6) + 1808LL);
        v54 = pulXlate;
      }
      if ( !v28 )
      {
        v28 = *(_QWORD *)(*(_QWORD *)(v24 + 48) + 1808LL);
        v69 = v28;
      }
      if ( pulXlate && v28 )
      {
        v29 = 0LL;
        if ( !v26 )
          v29 = v64;
        v60 = (XLATEOBJ *)v29;
        v30 = bDetermineAlphaBlendFunction(
                (struct SURFACE *)v24,
                v18,
                (struct XEPALOBJ *)&v69,
                (struct XEPALOBJ *)&v54,
                (struct XLATE *)v63,
                (int)v51,
                (struct _ALPHA_DISPATCH_FORMAT *)v82,
                v52);
        v53 = v30;
        if ( !v30 )
          goto LABEL_44;
        memset(&v87[1], 0, 0x130uLL);
        LODWORD(v54) = 0;
        v31 = 0;
        v86 = 1;
        v87[0] = v20;
        if ( v29 )
        {
          if ( *((_BYTE *)v29 + 20) == 1 )
          {
            v45 = *(_OWORD *)((char *)v29 + 4);
            LODWORD(v54) = 0;
            v87[0] = v45;
          }
          else if ( *((_BYTE *)v29 + 20) == 3 )
          {
            v31 = 1;
            LODWORD(v54) = 1;
            XCLIPOBJ::cEnumStart(v29, 0, 0, 1u, 0x14u);
          }
        }
        if ( v31 )
          goto LABEL_47;
        while ( 1 )
        {
          v32 = 0;
          if ( v86 )
          {
            right = v57.right;
            v34 = hdev;
            v35 = top;
            do
            {
              v36 = (LONG *)&v87[v32];
              if ( *v36 < left )
                *v36 = left;
              if ( v36[2] > right )
                v36[2] = right;
              v37 = v36[1];
              if ( v37 < v35 )
              {
                v36[1] = v35;
                v37 = v35;
                v38 = v35;
              }
              else
              {
                v38 = v36[1];
              }
              v39 = v36[3];
              v40 = bottom;
              if ( v39 > bottom )
              {
                v36[3] = bottom;
                v39 = v40;
              }
              if ( v37 < v39 && *v36 < v36[2] )
              {
                v41 = *((_QWORD *)v34 + 10);
                v42 = *(unsigned int *)(v24 + 88);
                v70[0] = (_DWORD)v62 + *v36 - left;
                v43 = *(_QWORD *)(v24 + 80);
                v70[1] = (_DWORD)v59 + v38 - v35;
                v53 = AlphaScanLineBlend(v43, v36, v42, v41, *((_DWORD *)v34 + 22), v70, v63, v80, v79, v28);
              }
              ++v32;
            }
            while ( v32 < v86 );
            v31 = (int)v54;
            v29 = (XCLIPOBJ *)v60;
          }
          if ( !v31 )
            break;
LABEL_47:
          v31 = XCLIPOBJ::bEnum(v29, 0x144u, &v86, 0LL);
          LODWORD(v54) = v31;
        }
        if ( v56 )
        {
          v71 = 0LL;
          if ( (*(_DWORD *)(v81 + 112) & 0x400) != 0 )
            (*(void (__fastcall **)(__int64, __int64, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, __int64 *))(*(_QWORD *)(v81 + 48) + 2840LL))(
              v81 + 24,
              v24 + 24,
              v64,
              xloIdent,
              &v85,
              &v71);
          else
            ((void (__fastcall *)(__int64, __int64, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, __int64 *))EngCopyBits)(
              v81 + 24,
              v24 + 24,
              v64,
              xloIdent,
              &v85,
              &v71);
        }
        goto LABEL_43;
      }
    }
LABEL_76:
    v30 = 0;
    goto LABEL_44;
  }
  return 0;
}
