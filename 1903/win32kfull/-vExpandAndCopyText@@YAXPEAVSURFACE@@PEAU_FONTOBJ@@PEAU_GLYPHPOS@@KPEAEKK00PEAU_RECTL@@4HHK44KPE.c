/*
 * XREFs of ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0056510
 * Callers:
 *     EngTextOut @ 0x1C0055580 (EngTextOut.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00F31F8 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C01650B8 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C0165138 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vExpandAndCopyText(
        struct SURFACE *a1,
        struct _FONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned int a6,
        unsigned int a7,
        struct SURFACE *a8,
        struct SURFACE *a9,
        struct _RECTL *a10,
        struct _RECTL *a11,
        int a12,
        int a13,
        unsigned int a14,
        struct _RECTL *a15,
        struct _RECTL *a16,
        unsigned int a17,
        struct _BRUSHOBJ *a18,
        struct _POINTL *a19)
{
  struct SURFACE *v22; // rdi
  unsigned int v23; // eax
  GLYPHDEF **p_pgdf; // rdx
  LONG top; // edx
  int v26; // ecx
  unsigned int v27; // edi
  unsigned int v28; // esi
  struct _RECTL *v29; // r13
  struct _RECTL *v30; // r10
  int v31; // eax
  int v32; // r11d
  __int64 (__fastcall *v33)(int, int, int, int, int, int, int, int); // r13
  LONG *i; // rbx
  LONG v35; // edx
  LONG v36; // ecx
  LONG v37; // r14d
  LONG v38; // r15d
  LONG v39; // r8d
  LONG v40; // r12d
  LONG v41; // edi
  int v42; // r9d
  LONG v43; // edx
  void (__fastcall *v44)(struct BLTINFO *); // rbx
  LONG left; // r8d
  LONG right; // edx
  signed int v47; // r8d
  signed int v48; // edx
  LONG v49; // r9d
  LONG v50; // ecx
  int v51; // r9d
  LONG bottom; // r10d
  int v53; // r10d
  int v54; // [rsp+74h] [rbp-414h]
  LONG v55; // [rsp+A8h] [rbp-3E0h]
  int v56; // [rsp+B8h] [rbp-3D0h]
  __int64 v57; // [rsp+C0h] [rbp-3C8h] BYREF
  struct _RECTL *v58; // [rsp+C8h] [rbp-3C0h]
  struct _POINTL v59; // [rsp+D0h] [rbp-3B8h] BYREF
  struct _RECTL v60; // [rsp+D8h] [rbp-3B0h] BYREF
  int v61; // [rsp+E8h] [rbp-3A0h]
  void * near *v62; // [rsp+F0h] [rbp-398h]
  struct _RECTL *v63; // [rsp+F8h] [rbp-390h]
  __int64 v64; // [rsp+100h] [rbp-388h] BYREF
  struct _POINTL *v65; // [rsp+108h] [rbp-380h]
  struct _BRUSHOBJ *v66; // [rsp+110h] [rbp-378h]
  struct SURFACE *v67; // [rsp+118h] [rbp-370h]
  _QWORD v68[2]; // [rsp+120h] [rbp-368h]
  __int64 v69; // [rsp+130h] [rbp-358h]
  _BYTE v70[80]; // [rsp+140h] [rbp-348h] BYREF
  char v71[56]; // [rsp+190h] [rbp-2F8h] BYREF
  unsigned int v72; // [rsp+1C8h] [rbp-2C0h]
  int v73; // [rsp+1CCh] [rbp-2BCh]
  unsigned __int8 *v74; // [rsp+1E0h] [rbp-2A8h]
  unsigned int v75; // [rsp+1E8h] [rbp-2A0h]
  int v76; // [rsp+1F0h] [rbp-298h]
  __int16 v77; // [rsp+1F4h] [rbp-294h]

  v22 = a9;
  v63 = a15;
  v58 = a16;
  v66 = a18;
  v65 = a19;
  v23 = 0;
  v57 = 0LL;
  p_pgdf = &a3->pgdf;
  while ( v23 < a4 )
  {
    if ( !(*p_pgdf)->pgb )
      goto LABEL_48;
    ++v23;
    p_pgdf += 3;
  }
  if ( (a14 & 1) != 0 || a4 <= 1 || (unsigned int)(a3->ptl.x - a3[a4 - 1].ptl.x + 0x8000000) <= 0x10000000 )
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v70, a1, a2, 1);
    top = a10->top;
    if ( !a9 )
      v22 = a8;
    v67 = v22;
    if ( (a14 & 8) != 0 )
    {
      v27 = a14 & 0x20;
      v26 = 3;
      if ( (a14 & 0x20) == 0 )
        v26 = 7;
    }
    else
    {
      v26 = 31;
      v27 = a14 & 0x20;
    }
    v56 = v26 & a10->left;
    v28 = a10->left - v56;
    if ( v27 )
    {
      v68[0] = draw_clrt_nf_ntb_o_to_temp_start;
      v68[1] = draw_clrt_f_ntb_o_to_temp_start;
      v62 = (void * near *)v68[a14 & 1];
      ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v62)(
        a3,
        a4,
        a5,
        v28,
        a6,
        a7,
        top);
    }
    else
    {
      v62 = (&MastertextTypeTabel)[a14 & 0xFFFFFF4F];
      ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v62)(
        a3,
        a4,
        a5,
        v28,
        a6,
        a7,
        top);
    }
    v29 = v58;
    v30 = a10;
    if ( v58 )
    {
      if ( (a14 & 8) != 0 )
      {
        v44 = vSrcCopyDummy;
        if ( !v27 )
          v44 = vSrcCopyDummy;
      }
      else
      {
        v44 = (void (__fastcall *)(struct BLTINFO *))vRectBlt;
      }
      while ( 1 )
      {
        left = v29->left;
        right = v29->right;
        if ( v29->left == right )
          break;
        if ( left <= v30->left )
          left = v30->left;
        v47 = left - v28;
        if ( right >= v30->right )
          right = v30->right;
        v48 = right - v28;
        v49 = v29->top;
        v50 = v30->top;
        if ( v49 <= v50 )
          v49 = v30->top;
        v51 = v49 - v50;
        bottom = v29->bottom;
        if ( bottom >= a10->bottom )
          bottom = a10->bottom;
        v53 = bottom - v50;
        if ( v47 >= v48 || v51 >= v53 )
        {
          v30 = a10;
        }
        else
        {
          ((void (__fastcall *)(unsigned __int8 *, _QWORD))v44)(a5, a6);
          v30 = a10;
        }
        ++v29;
      }
    }
    if ( *((_DWORD *)a8 + 24) > 6u )
    {
      if ( (unsigned int)bUMPDSecurityGateEx() )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:vExpandAndCopyText:Invalid pSurf->iFormat().\n",
            1836);
        goto LABEL_39;
      }
      v30 = a10;
    }
    v31 = *((_DWORD *)a8 + 24);
    v32 = a13;
    if ( a13 == -1 )
      v31 += 8;
    if ( (a14 & 0x80u) != 0 )
    {
      if ( v27 )
        v33 = vSrcAlphaCopyS8D32;
      else
        v33 = vSrcAlphaCopyS4D32;
    }
    else
    {
      if ( (a14 & 8) != 0 )
      {
        v31 += 16;
        if ( v27 )
          v31 += 16;
      }
      v33 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int))(&SrcCopyTextFunctionTable)[v31];
    }
    for ( i = &v63->left; ; i += 4 )
    {
      v35 = i[3];
      if ( !v35 )
        break;
      v36 = v30->left;
      v37 = v30->left;
      if ( v30->left <= *i )
        v37 = *i;
      v38 = v30->right;
      if ( v38 >= i[2] )
        v38 = i[2];
      v39 = v30->top;
      v40 = v39;
      if ( v39 <= i[1] )
        v40 = i[1];
      v41 = v30->bottom;
      if ( v41 >= v35 )
        v41 = i[3];
      v42 = v37 - v36;
      v54 = v37 - v36;
      v43 = v40 - v39;
      v55 = v40 - v39;
      if ( (a14 & 0x10) != 0 )
      {
        v37 -= v28;
        v38 -= v28;
        v40 -= v39;
        v41 -= v39;
      }
      else
      {
        v64 = *((_QWORD *)a8 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v64, (struct _SURFOBJ *)((char *)a8 + 24), 0LL, 0);
        v32 = a13;
        v43 = v55;
        v42 = v54;
        v30 = a10;
      }
      if ( v37 < v38 && v40 < v41 )
      {
        if ( a12 == -1 )
        {
          v60.left = v37;
          v60.top = v40;
          v60.right = v38;
          v60.bottom = v41;
          v76 = 1;
          v77 = 0;
          v74 = a5;
          v75 = a6;
          v72 = 8 * a6;
          v73 = v30->bottom - v30->top;
          v59.x = v42 + v56;
          v59.y = v43;
          BltLnk(a8, 0LL, (struct SURFACE *)v71, 0LL, 0LL, &v60, 0LL, &v59, v66, v65, 0xAAF0u);
        }
        else
        {
          v69 = *((_QWORD *)a8 + 10);
          v61 = *((_DWORD *)a8 + 22);
          LODWORD(v58) = v61;
          ((void (__fastcall *)(unsigned __int8 *, _QWORD, _QWORD, __int64, LONG, LONG, int, int, int, int, struct SURFACE *))v33)(
            &a5[v43 * a6],
            (unsigned int)(v56 + v54),
            a6,
            v69 + v40 * v61,
            v37,
            v38,
            v61,
            v41 - v40,
            a12,
            v32,
            v67);
        }
        v30 = a10;
      }
      v32 = a13;
    }
LABEL_39:
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v70);
    return;
  }
LABEL_48:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v57);
}
