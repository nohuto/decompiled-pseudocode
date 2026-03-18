/*
 * XREFs of ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C009FD70
 * Callers:
 *     EngTextOut @ 0x1C009EDE0 (EngTextOut.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00D32E8 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D5048 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C0166658 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C01666D8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
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
  struct _SURFOBJ *v44; // rdx
  void (__fastcall *v45)(struct BLTINFO *); // rbx
  LONG left; // r8d
  LONG right; // edx
  signed int v48; // r8d
  signed int v49; // edx
  LONG v50; // r9d
  LONG v51; // ecx
  int v52; // r9d
  LONG bottom; // r10d
  int v54; // r10d
  int v55; // [rsp+74h] [rbp-414h]
  LONG v56; // [rsp+A8h] [rbp-3E0h]
  int v57; // [rsp+B8h] [rbp-3D0h]
  __int64 v58; // [rsp+C0h] [rbp-3C8h] BYREF
  struct _RECTL *v59; // [rsp+C8h] [rbp-3C0h]
  struct _POINTL v60; // [rsp+D0h] [rbp-3B8h] BYREF
  struct _RECTL v61; // [rsp+D8h] [rbp-3B0h] BYREF
  int v62; // [rsp+E8h] [rbp-3A0h]
  void * near *v63; // [rsp+F0h] [rbp-398h]
  struct _RECTL *v64; // [rsp+F8h] [rbp-390h]
  struct SURFACE *v65; // [rsp+100h] [rbp-388h]
  __int64 v66; // [rsp+108h] [rbp-380h] BYREF
  struct _POINTL *v67; // [rsp+110h] [rbp-378h]
  struct _BRUSHOBJ *v68; // [rsp+118h] [rbp-370h]
  struct SURFACE *v69; // [rsp+120h] [rbp-368h]
  _QWORD v70[2]; // [rsp+128h] [rbp-360h]
  __int64 v71; // [rsp+138h] [rbp-350h]
  _BYTE v72[80]; // [rsp+140h] [rbp-348h] BYREF
  char v73[56]; // [rsp+190h] [rbp-2F8h] BYREF
  unsigned int v74; // [rsp+1C8h] [rbp-2C0h]
  int v75; // [rsp+1CCh] [rbp-2BCh]
  unsigned __int8 *v76; // [rsp+1E0h] [rbp-2A8h]
  unsigned int v77; // [rsp+1E8h] [rbp-2A0h]
  int v78; // [rsp+1F0h] [rbp-298h]
  __int16 v79; // [rsp+1F4h] [rbp-294h]

  v65 = a8;
  v22 = a9;
  v64 = a15;
  v59 = a16;
  v68 = a18;
  v67 = a19;
  v23 = 0;
  v58 = 0LL;
  p_pgdf = &a3->pgdf;
  while ( v23 < a4 )
  {
    if ( !(*p_pgdf)->pgb )
      goto LABEL_50;
    ++v23;
    p_pgdf += 3;
  }
  if ( (a14 & 1) != 0 || a4 <= 1 || (unsigned int)(a3->ptl.x - a3[a4 - 1].ptl.x + 0x8000000) <= 0x10000000 )
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v72, a1, a2, 1);
    top = a10->top;
    if ( !a9 )
      v22 = a8;
    v69 = v22;
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
    v57 = v26 & a10->left;
    v28 = a10->left - v57;
    if ( v27 )
    {
      v70[0] = draw_clrt_nf_ntb_o_to_temp_start;
      v70[1] = draw_clrt_f_ntb_o_to_temp_start;
      v63 = (void * near *)v70[a14 & 1];
      ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v63)(
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
      v63 = (&MastertextTypeTabel)[a14 & 0xFFFFFF4F];
      ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v63)(
        a3,
        a4,
        a5,
        v28,
        a6,
        a7,
        top);
    }
    v29 = v59;
    v30 = a10;
    if ( v59 )
    {
      if ( (a14 & 8) != 0 )
      {
        v45 = vSrcCopyDummy;
        if ( !v27 )
          v45 = vSrcCopyDummy;
      }
      else
      {
        v45 = (void (__fastcall *)(struct BLTINFO *))vRectBlt;
      }
      while ( 1 )
      {
        left = v29->left;
        right = v29->right;
        if ( v29->left == right )
          break;
        if ( left <= v30->left )
          left = v30->left;
        v48 = left - v28;
        if ( right >= v30->right )
          right = v30->right;
        v49 = right - v28;
        v50 = v29->top;
        v51 = v30->top;
        if ( v50 <= v51 )
          v50 = v30->top;
        v52 = v50 - v51;
        bottom = v29->bottom;
        if ( bottom >= a10->bottom )
          bottom = a10->bottom;
        v54 = bottom - v51;
        if ( v48 >= v49 || v52 >= v54 )
        {
          v30 = a10;
        }
        else
        {
          ((void (__fastcall *)(unsigned __int8 *, _QWORD))v45)(a5, a6);
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
        goto LABEL_41;
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
    for ( i = &v64->left; ; i += 4 )
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
      v55 = v37 - v36;
      v43 = v40 - v39;
      v56 = v40 - v39;
      if ( (a14 & 0x10) != 0 )
      {
        v37 -= v28;
        v38 -= v28;
        v40 -= v39;
        v41 -= v39;
      }
      else
      {
        v66 = *((_QWORD *)a8 + 6);
        v44 = 0LL;
        if ( v65 )
          v44 = (struct _SURFOBJ *)((char *)v65 + 24);
        PDEVOBJ::vSync((PDEVOBJ *)&v66, v44, 0LL, 0);
        v32 = a13;
        v43 = v56;
        v42 = v55;
        v30 = a10;
      }
      if ( v37 < v38 && v40 < v41 )
      {
        if ( a12 == -1 )
        {
          v61.left = v37;
          v61.top = v40;
          v61.right = v38;
          v61.bottom = v41;
          v78 = 1;
          v79 = 0;
          v76 = a5;
          v77 = a6;
          v74 = 8 * a6;
          v75 = v30->bottom - v30->top;
          v60.x = v42 + v57;
          v60.y = v43;
          BltLnk(a8, 0LL, (struct SURFACE *)v73, 0LL, 0LL, &v61, 0LL, &v60, v68, v67, 0xAAF0u);
        }
        else
        {
          v71 = *((_QWORD *)a8 + 10);
          v62 = *((_DWORD *)a8 + 22);
          LODWORD(v59) = v62;
          ((void (__fastcall *)(unsigned __int8 *, _QWORD, _QWORD, __int64, LONG, LONG, int, int, int, int, struct SURFACE *))v33)(
            &a5[v43 * a6],
            (unsigned int)(v57 + v55),
            a6,
            v71 + v40 * v62,
            v37,
            v38,
            v62,
            v41 - v40,
            a12,
            v32,
            v69);
        }
        v30 = a10;
      }
      v32 = a13;
    }
LABEL_41:
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v72);
    return;
  }
LABEL_50:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v58);
}
