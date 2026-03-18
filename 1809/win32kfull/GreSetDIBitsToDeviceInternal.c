/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C00524A0
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C004F9E0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreSetDIBitsInternal @ 0x1C0100230 (GreSetDIBitsInternal.c)
 * Callees:
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C004AB70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005426C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C0055B3C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0099C60 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C011EC64 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011EE18 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0143190 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C0252DEC (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C029F094 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C029F150 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02A13BC (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02A28E0 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C02A2914 (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        unsigned int a4,
        unsigned int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        __int64 a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        void *a16)
{
  int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // r15
  int v22; // edx
  unsigned int v23; // esi
  __int64 v24; // rdi
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // r12d
  unsigned int v29; // r14d
  unsigned int v30; // ecx
  unsigned int v31; // r15d
  unsigned __int64 v32; // rcx
  ULONG v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  unsigned __int64 v38; // rcx
  ULONG v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  DC *v42; // rbx
  unsigned int v43; // edx
  LONG v44; // edi
  __int64 v45; // rsi
  unsigned __int64 v46; // rcx
  int v47; // edi
  int v48; // ecx
  unsigned int v49; // eax
  unsigned int v50; // edx
  LONG v51; // r10d
  LONG v52; // r9d
  LONG v53; // ecx
  LONG v54; // eax
  __int64 v55; // r13
  void *v56; // rax
  __int64 v57; // rdi
  struct PALETTE *v58; // rbx
  int v59; // eax
  bool v60; // zf
  HDC v61; // rsi
  int v62; // ebx
  __int64 v63; // r8
  unsigned int v64; // r8d
  HDC XlateObject; // rax
  DC *v66; // rdi
  int *v67; // rcx
  __int64 v68; // r10
  __int64 v69; // r9
  LONG left; // r12d
  int right; // r14d
  __int64 v72; // rbx
  struct REGION *v73; // rax
  struct ECLIPOBJ *v74; // rdx
  struct _SURFOBJ *v75; // rdx
  __int16 v76; // r8
  BOOL (__stdcall *v77)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v78; // rdx
  BOOL (__stdcall *v79)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v80; // rdx
  LONG v81; // esi
  int v82; // ecx
  int v83; // r9d
  int v84; // eax
  int v85; // edx
  int v86; // r8d
  LONG v87; // r12d
  LONG v88; // ecx
  int v89; // edx
  struct REGION *v90; // rax
  struct ECLIPOBJ *v91; // rdx
  LONG v92; // edi
  __int64 v93; // rsi
  struct _RECTL v94; // xmm6
  __int64 v95; // rax
  unsigned int v96; // edx
  unsigned int v97; // r8d
  _DWORD *v98; // rax
  unsigned int v99; // ecx
  __int64 v100; // rax
  unsigned int v101; // edx
  unsigned int v102; // r8d
  _DWORD *v103; // rax
  int v104; // ecx
  DC *v105; // rsi
  int v106; // r12d
  float v107; // xmm2_4
  int v108; // edi
  struct _RECTL v109; // xmm6
  __int32 v110; // edx
  __int32 v111; // r8d
  int v112; // ecx
  struct _RECTL v113; // xmm0
  int v114; // eax
  BOOL v115; // eax
  int v116; // ecx
  BOOL (__stdcall *v117)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v118; // rdx
  BOOL (__stdcall *v119)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v120; // rdx
  struct _CLIPOBJ *v122; // [rsp+20h] [rbp-E0h]
  int v124; // [rsp+60h] [rbp-A0h]
  LONG v125; // [rsp+70h] [rbp-90h]
  int v126; // [rsp+70h] [rbp-90h]
  unsigned int v127; // [rsp+80h] [rbp-80h]
  unsigned int v128; // [rsp+90h] [rbp-70h]
  unsigned int v129; // [rsp+90h] [rbp-70h]
  LONG v130; // [rsp+90h] [rbp-70h]
  unsigned int v131; // [rsp+90h] [rbp-70h]
  HDC v132; // [rsp+A0h] [rbp-60h] BYREF
  HDC v133; // [rsp+A8h] [rbp-58h] BYREF
  int v134; // [rsp+B0h] [rbp-50h]
  int v135; // [rsp+B4h] [rbp-4Ch]
  void *v136; // [rsp+C0h] [rbp-40h] BYREF
  int v137; // [rsp+C8h] [rbp-38h]
  int v138; // [rsp+CCh] [rbp-34h]
  int v139; // [rsp+D0h] [rbp-30h]
  __int64 v140; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v141; // [rsp+E0h] [rbp-20h]
  __int64 v142; // [rsp+E8h] [rbp-18h]
  __int64 v143; // [rsp+F0h] [rbp-10h]
  unsigned int v144; // [rsp+F8h] [rbp-8h]
  unsigned int v145; // [rsp+FCh] [rbp-4h]
  unsigned int v146; // [rsp+100h] [rbp+0h]
  int v147; // [rsp+104h] [rbp+4h]
  unsigned int v148; // [rsp+108h] [rbp+8h]
  LONG v149; // [rsp+10Ch] [rbp+Ch]
  __int64 v150; // [rsp+110h] [rbp+10h] BYREF
  char v151; // [rsp+118h] [rbp+18h]
  int v152; // [rsp+11Ch] [rbp+1Ch]
  unsigned int v153; // [rsp+120h] [rbp+20h]
  unsigned int v154; // [rsp+124h] [rbp+24h]
  __int64 v155; // [rsp+128h] [rbp+28h] BYREF
  int v156; // [rsp+130h] [rbp+30h]
  DC *v157[2]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v158[32]; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v159; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v160; // [rsp+170h] [rbp+70h]
  unsigned int v161; // [rsp+174h] [rbp+74h]
  DC *v162[2]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v163[40]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v164[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v165[80]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _RECTL v166; // [rsp+220h] [rbp+120h] BYREF
  struct _RECTL v167; // [rsp+230h] [rbp+130h] BYREF
  __m128i v168; // [rsp+240h] [rbp+140h] BYREF
  struct _RECTL v169; // [rsp+250h] [rbp+150h] BYREF
  struct _RECTL v170; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v171[4]; // [rsp+270h] [rbp+170h] BYREF
  struct _RECTL v172; // [rsp+274h] [rbp+174h] BYREF
  __int64 v173; // [rsp+2A8h] [rbp+1A8h]
  __int64 v174; // [rsp+2C0h] [rbp+1C0h]
  int v175; // [rsp+2C8h] [rbp+1C8h]
  int v176; // [rsp+2F0h] [rbp+1F0h]
  __int64 v177; // [rsp+300h] [rbp+200h]
  unsigned int v178; // [rsp+3D8h] [rbp+2D8h]

  v149 = a6;
  LOBYTE(v19) = -1;
  v136 = a16;
  v133 = a1;
  v157[0] = 0LL;
  v157[1] = 0LL;
  v153 = a4;
  v125 = a2;
  v168.m128i_i64[0] = a10;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v158);
  XDCOBJ::vLock((XDCOBJ *)v157, a1);
  if ( v157[0] )
    v19 = *(_DWORD *)(*((_QWORD *)v157[0] + 122) + 108LL);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v157);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v158);
  if ( (v19 & 1) != 0 )
    v125 = a4 + a2 - 1;
  if ( !a11 )
    goto LABEL_270;
  if ( !a10 )
    goto LABEL_270;
  if ( a12 > 2 )
    goto LABEL_270;
  if ( a14 < 0x28 )
    goto LABEL_270;
  v20 = *a11;
  v139 = v20;
  if ( (unsigned int)v20 < 0x28 )
    goto LABEL_270;
  v21 = a11[1];
  v154 = v21;
  if ( (int)v21 <= 0 )
    goto LABEL_270;
  v22 = a11[2];
  v134 = v22;
  if ( !v22 )
    goto LABEL_270;
  v23 = a11[4];
  v24 = *((unsigned __int16 *)a11 + 7);
  v143 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v128 = a11[8];
  *(_QWORD *)&v166.left = (char *)a11 + v20;
  v142 = 0LL;
  v148 = v23;
  if ( v22 < 0 )
  {
    LODWORD(v143) = 1;
    if ( v23 > 0xC )
      goto LABEL_270;
    v25 = 7225;
    if ( !_bittest(&v25, v23) )
      goto LABEL_270;
    v22 = -v22;
    v134 = v22;
  }
  v147 = 0;
  if ( v23 == 3 )
  {
    if ( a14 >= 0x34 )
    {
      v26 = 0;
      if ( a12 != 1 )
        v26 = a12;
      a12 = v26;
      if ( (_DWORD)v24 == 16 )
      {
        LODWORD(v140) = 4;
        goto LABEL_24;
      }
      if ( (_DWORD)v24 == 32 )
      {
        LODWORD(v140) = 6;
LABEL_24:
        v146 = a11[10];
        v27 = a11[11];
        *(_QWORD *)&v166.left = a11 + 10;
        v28 = 0;
        v145 = v27;
        v29 = 2;
        v30 = v24 * v21;
        v144 = a11[12];
        v127 = 512;
        if ( (unsigned __int64)(v24 * v21) <= 0xFFFFFFFF && v30 + 31 >= v30 )
        {
          v31 = a9;
          v32 = a9 * (((unsigned __int64)(v30 + 31) >> 3) & 0x1FFFFFFC);
          if ( v32 <= 0xFFFFFFFF )
          {
            v22 = v134;
            v135 = a8;
LABEL_95:
            HIDWORD(v141) = v32;
LABEL_96:
            v178 = a14 - v139;
            v40 = v128;
            if ( v128 )
            {
              if ( v128 > v28 )
                v40 = v28;
              v129 = v40;
            }
            else
            {
              v129 = v28;
            }
            if ( a13 >= (unsigned int)v32 )
            {
              v41 = v22;
              HIDWORD(v140) = v154;
              v162[0] = 0LL;
              v162[1] = 0LL;
              if ( v23 - 4 > 1 )
                v41 = v31;
              LODWORD(v141) = v41;
              UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v163);
              XDCOBJ::vLock((XDCOBJ *)v162, v133);
              v42 = v162[0];
              if ( !v162[0] || (*((_DWORD *)v162[0] + 9) & 0x10000) != 0 )
              {
                EngSetLastError(0x57u);
                v31 = 0;
                goto LABEL_269;
              }
              v43 = a11[4];
              v44 = v125;
              v45 = *((_QWORD *)v162[0] + 6);
              v133 = (HDC)__PAIR64__(a3, v125);
              if ( v43 - 4 <= 1
                && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v162, v43) || a12 || v136) )
              {
                v31 = 0;
              }
              if ( a15 )
              {
                v169.right = *(_DWORD *)(*((_QWORD *)v42 + 122) + 208LL);
                v169.bottom = *(_DWORD *)(*((_QWORD *)v42 + 122) + 108LL) & 1;
                if ( (*(_DWORD *)(*((_QWORD *)v42 + 122) + 340LL) & 0x1E000) != 0 )
                {
                  EXFORMOBJ::vInit((EXFORMOBJ *)&v169, (struct XDCOBJ *)v162, 0x204u, 0);
                  v46 = *(_QWORD *)&v169.left;
                  v42 = v162[0];
                }
                else
                {
                  v46 = (unsigned __int64)v42 + 320;
                  *(_QWORD *)&v169.left = (char *)v42 + 320;
                }
                v47 = *(_DWORD *)(v46 + 32);
                if ( (*(_BYTE *)(v46 + 32) & 0x43) != 0x43 )
                {
                  bCvtPts1(v46, &v133, 1LL);
                  a3 = HIDWORD(v133);
                  v125 = (int)v133;
                }
                if ( v31 && a11[4] - 4 <= 1 && (v47 & 1) == 0 )
                  v31 = 0;
                v44 = v125;
              }
              v48 = *((_DWORD *)v42 + 130);
              v49 = v153;
              v50 = a5;
              v133 = (HDC)__PAIR64__(a5, v153);
              if ( (v48 & 1) != 0 && (v48 & 2) == 0 )
              {
                v132 = *(HDC *)((char *)v42 + 524);
                EPOINTL::vScale((EPOINTL *)&v133, (const struct POINTFL *)&v132);
                v50 = HIDWORD(v133);
                v49 = (unsigned int)v133;
              }
              v51 = a3;
              v52 = v49 + v44;
              v167.left = v44;
              v53 = v52;
              v167.top = a3;
              v167.right = v49 + v44;
              v54 = v50 + a3;
              v167.bottom = v50 + a3;
              if ( v44 > v52 )
              {
                v53 = v44;
                v167.left = v52;
                v167.right = v44;
                v44 = v52;
              }
              if ( a3 > (int)(v50 + a3) )
              {
                v54 = a3;
                v167.top = v50 + a3;
                v167.bottom = a3;
                v51 = v50 + a3;
              }
              if ( v44 == v53 || v51 == v54 || !v31 )
                goto LABEL_269;
              if ( (*((_DWORD *)v42 + 9) & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)v162, (struct ERECTL *)&v167);
              DCOBJ::DCOBJ((DCOBJ *)v165);
              DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v164, (struct XDCOBJ *)v162, 0);
              v55 = *((_QWORD *)v162[0] + 62);
              if ( !v55 )
              {
LABEL_267:
                DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v164);
                DCOBJ::~DCOBJ((DCOBJ *)v165);
LABEL_269:
                MDCOBJ::~MDCOBJ((MDCOBJ *)v162);
                UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v163);
                return v31;
              }
              v56 = v136;
              if ( !v136 )
              {
                v56 = *(void **)(*((_QWORD *)v162[0] + 122) + 248LL);
                v136 = v56;
              }
              v139 = *((_DWORD *)v162[0] + 30);
              if ( (v139 & 0x10000000) != 0 && (!v56 || v148 - 10 > 2) )
                v139 = v139 & 0xFFFFFFF | 0x20000000;
              v57 = *(_QWORD *)(v55 + 128);
              v156 = 0;
              v155 = 0LL;
              v58 = (struct PALETTE *)*((_QWORD *)v162[0] + 11);
              if ( v58 != ppalDefault )
                *(_QWORD *)(v55 + 176) = *(_QWORD *)v58;
              v126 = 1;
              v133 = 0LL;
              v124 = 0;
              v132 = 0LL;
              if ( a12 )
              {
                if ( a12 != 1 )
                {
                  v59 = *(_DWORD *)(v55 + 96);
                  if ( v59 != (_DWORD)v140 )
                  {
                    if ( v59 == 2 )
                    {
                      v60 = (_DWORD)v140 == 7;
                    }
                    else
                    {
                      if ( v59 != 3 )
                      {
LABEL_151:
                        EngSetLastError(0x57u);
LABEL_152:
                        v126 = 0;
                        v61 = 0LL;
                        v62 = 0;
                        goto LABEL_176;
                      }
                      v60 = (_DWORD)v140 == 8;
                    }
                    if ( !v60 )
                      goto LABEL_151;
                  }
                  v61 = (HDC)xloIdent;
                  v62 = 0;
                  v132 = (HDC)xloIdent;
LABEL_176:
                  v150 = 0LL;
                  v151 = 0;
                  v152 = 0;
                  SURFMEM::bCreateDIB(
                    (SURFMEM *)&v150,
                    (struct _DEVBITMAPINFO *)&v140,
                    (void *)v168.m128i_i64[0],
                    0LL,
                    0,
                    0LL,
                    0LL,
                    0,
                    1,
                    0,
                    0);
                  if ( v126 && v150 )
                  {
                    *(_DWORD *)(v150 + 92) = 0;
                    if ( (v164[24] & 1) != 0 )
                    {
                      v66 = v162[0];
                      v67 = (int *)((char *)v162[0] + 1024);
                      if ( (*((_DWORD *)v162[0] + 10) & 1) == 0 )
                        v67 = (int *)((char *)v162[0] + 1016);
                      v68 = *v67;
                      if ( (unsigned __int64)(v68 + v167.left + 0x80000000LL) <= 0xFFFFFFFF
                        && (unsigned __int64)(v68 + v167.right + 0x80000000LL) <= 0xFFFFFFFF )
                      {
                        v69 = v67[1];
                        if ( (unsigned __int64)(v69 + v167.top + 0x80000000LL) <= 0xFFFFFFFF
                          && (unsigned __int64)(v69 + v167.bottom + 0x80000000LL) <= 0xFFFFFFFF )
                        {
                          left = v68 + v167.left;
                          v167.left += v68;
                          right = *v67 + v167.right;
                          v167.right = right;
                          v167.top += v67[1];
                          v167.bottom += v67[1];
                          if ( v62 )
                          {
                            *(_QWORD *)(v150 + 128) = v155;
                            v66 = v162[0];
                            right = v167.right;
                            left = v167.left;
                          }
                          v72 = *(_QWORD *)(v55 + 48);
                          v166.right = v149 + v153;
                          v166.left = v149;
                          v166.bottom = v134 - a7;
                          v166.top = v134 - a5 - a7;
                          if ( v147 )
                          {
                            v73 = XDCOBJ::prgnEffRao((XDCOBJ *)v162);
                            v176 = 1;
                            v173 = 0LL;
                            v174 = 0LL;
                            v175 = 0;
                            v177 = 0LL;
                            XCLIPOBJ::vSetup((XCLIPOBJ *)v171, v73, (struct ERECTL *)&v167, 0);
                            if ( !ERECTL::bEmpty((ERECTL *)&v172) )
                            {
                              if ( (*((_DWORD *)v162[0] + 9) & 0xE0) != 0 )
                              {
                                v169 = v172;
                                XDCOBJ::vAccumulateTight((XDCOBJ *)v162, v74, (struct ERECTL *)&v169);
                              }
                              ++*(_DWORD *)(v55 + 92);
                              v75 = 0LL;
                              if ( v150 )
                                v75 = (struct _SURFOBJ *)(v150 + 24);
                              if ( bClipSrcDstRectsAndValidate(
                                     (struct _SURFOBJ *)(v55 + 24),
                                     v75,
                                     (struct DCOBJ *)v162,
                                     0LL,
                                     v122,
                                     &v167,
                                     &v166) )
                              {
                                if ( (unsigned int)DC::bDpiScaleTransform(v162[0]) )
                                {
                                  if ( (v76 & 2) != 0 )
                                    v77 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v72 + 2848);
                                  else
                                    v77 = EngStretchBlt;
                                  v78 = 0LL;
                                  if ( v150 )
                                    v78 = v150 + 24;
                                  ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, HDC, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))v77)(
                                    v55 + 24,
                                    v78,
                                    0LL,
                                    v171,
                                    v61,
                                    0LL,
                                    0LL,
                                    &v167,
                                    &v166,
                                    0LL,
                                    3);
                                }
                                else
                                {
                                  v136 = *(void **)&v166.left;
                                  if ( (v76 & 0x400) != 0 )
                                    v79 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v72 + 2840);
                                  else
                                    v79 = EngCopyBits;
                                  v80 = 0LL;
                                  if ( v150 )
                                    v80 = v150 + 24;
                                  ((void (__fastcall *)(__int64, __int64, _BYTE *, HDC, struct _RECTL *, void **))v79)(
                                    v55 + 24,
                                    v80,
                                    v171,
                                    v61,
                                    &v167,
                                    &v136);
                                }
                              }
                            }
                          }
                          else
                          {
                            v81 = v134 - v135 - v31;
                            v169.bottom = v134 - v135;
                            *(_QWORD *)&v169.top = __PAIR64__(v154, v81);
                            v169.left = 0;
                            v170 = v166;
                            ERECTL::operator*=(&v166, &v169);
                            if ( v166.left != v166.right && v166.top != v166.bottom )
                            {
                              v82 = v166.left - v170.left;
                              v83 = *((_DWORD *)v66 + 130);
                              v84 = v166.right - v170.right;
                              v85 = v166.top - v170.top;
                              v86 = v166.bottom - v170.bottom;
                              LODWORD(v136) = v166.left - v170.left;
                              v137 = v166.right - v170.right;
                              HIDWORD(v136) = v166.top - v170.top;
                              v138 = v166.bottom - v170.bottom;
                              if ( (v83 & 1) != 0 && (v83 & 2) == 0 )
                              {
                                v168.m128i_i64[0] = *(_QWORD *)((char *)v66 + 524);
                                ERECTL::vScale((ERECTL *)&v136, (const struct POINTFL *)&v168);
                                v86 = v138;
                                v84 = v137;
                                v85 = HIDWORD(v136);
                                v82 = (int)v136;
                              }
                              v87 = v82 + left;
                              v88 = v85 + v167.top;
                              v167.left = v87;
                              v89 = v86 + v167.bottom;
                              v167.right = v84 + right;
                              v167.top = v88;
                              v167.bottom += v86;
                              if ( v87 != v84 + right && v88 != v89 )
                              {
                                v90 = DC::prgnRao(v66) ? DC::prgnRao(v66) : DC::prgnVisSnap(v66);
                                v176 = 1;
                                v173 = 0LL;
                                v174 = 0LL;
                                v175 = 0;
                                v177 = 0LL;
                                XCLIPOBJ::vSetup((XCLIPOBJ *)v171, v90, (struct ERECTL *)&v167, 0);
                                if ( v172.left != v172.right && v172.top != v172.bottom )
                                {
                                  if ( (*((_DWORD *)v162[0] + 9) & 0xE0) != 0 )
                                  {
                                    v169 = v172;
                                    XDCOBJ::vAccumulateTight((XDCOBJ *)v162, v91, (struct ERECTL *)&v169);
                                  }
                                  if ( v148 - 4 <= 1 )
                                  {
                                    v92 = v81;
                                    v166.bottom += v81 - v166.top;
                                    v166.top = v81;
                                  }
                                  else
                                  {
                                    v166.bottom -= v81;
                                    v92 = v166.top - v81;
                                    v166.top -= v81;
                                  }
                                  ++*(_DWORD *)(v55 + 92);
                                  if ( v150 )
                                    v93 = v150 + 24;
                                  else
                                    v93 = 0LL;
                                  v94 = v167;
                                  v169 = v167;
                                  v130 = v166.left;
                                  v159 = 0LL;
                                  v95 = SURFOBJ_TO_SURFACE_NOT_NULL(v55 + 24);
                                  v96 = 0;
                                  v97 = 0;
                                  if ( *(int *)(v95 + 112) < 0 )
                                  {
                                    v98 = *(_DWORD **)(v55 + 48);
                                    if ( v98 )
                                    {
                                      if ( (v98[10] & 0x20000) != 0 )
                                      {
                                        v96 = v98[646];
                                        v97 = v98[647];
                                        v159 = __PAIR64__(v97, v96);
                                      }
                                    }
                                  }
                                  v99 = v96 + *(_DWORD *)(v55 + 56);
                                  *(_QWORD *)&v170.left = 0LL;
                                  v160 = v99;
                                  v161 = v97 + *(_DWORD *)(v55 + 60);
                                  v100 = SURFOBJ_TO_SURFACE_NOT_NULL(v93);
                                  v101 = 0;
                                  v102 = 0;
                                  if ( *(int *)(v100 + 112) < 0 )
                                  {
                                    v103 = *(_DWORD **)(v93 + 24);
                                    if ( v103 )
                                    {
                                      if ( (v103[10] & 0x20000) != 0 )
                                      {
                                        v101 = v103[646];
                                        v102 = v103[647];
                                        *(_QWORD *)&v170.left = __PAIR64__(v102, v101);
                                      }
                                    }
                                  }
                                  v170.right = v101 + *(_DWORD *)(v93 + 32);
                                  v104 = *(_DWORD *)(v93 + 36);
                                  v105 = v162[0];
                                  v170.bottom = v102 + v104;
                                  v106 = *((_DWORD *)v162[0] + 130);
                                  v149 = v106 & 1;
                                  if ( (v106 & 1) != 0 && (v106 & 2) == 0 )
                                  {
                                    v107 = 1.0 / *((float *)v162[0] + 132);
                                    *(float *)&v136 = 1.0 / *((float *)v162[0] + 131);
                                    *((float *)&v136 + 1) = v107;
                                    ERECTL::vScale((ERECTL *)&v159, (const struct POINTFL *)&v136);
                                    ERECTL::vScale((ERECTL *)&v169, (const struct POINTFL *)&v136);
                                    v94 = v169;
                                  }
                                  v168 = (__m128i)v94;
                                  v131 = v130 - _mm_cvtsi128_si32((__m128i)v94);
                                  v108 = v92 - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v94, 4));
                                  ERECTL::operator*=(&v168, &v159);
                                  v168.m128i_i32[0] += v131;
                                  v168.m128i_i32[2] += v131;
                                  v168.m128i_i32[1] += v108;
                                  v168.m128i_i32[3] += v108;
                                  ERECTL::operator*=(&v168, &v170);
                                  v109 = (struct _RECTL)v168;
                                  v110 = v168.m128i_i32[1] - v108;
                                  v111 = v168.m128i_i32[3] - v108;
                                  v112 = _mm_cvtsi128_si32(v168);
                                  v168.m128i_i32[2] -= v131;
                                  v168.m128i_i32[1] -= v108;
                                  v168.m128i_i32[0] = v112 - v131;
                                  v168.m128i_i32[3] -= v108;
                                  v113 = (struct _RECTL)v168;
                                  v169 = (struct _RECTL)v168;
                                  v170 = v109;
                                  if ( (int)(v112 - v131) < v168.m128i_i32[2] && v110 < v111 )
                                  {
                                    if ( v149 && (v106 & 2) == 0 )
                                    {
                                      v168.m128i_i64[0] = *(_QWORD *)((char *)v105 + 524);
                                      ERECTL::vScale((ERECTL *)&v169, (const struct POINTFL *)&v168);
                                      v113 = v169;
                                    }
                                    v166 = v109;
                                    v167 = v113;
                                    v114 = *((_DWORD *)v105 + 130);
                                    v115 = (v114 & 1) != 0 && (v114 & 2) == 0;
                                    v116 = *(_DWORD *)(v55 + 112);
                                    if ( v115 )
                                    {
                                      if ( (v116 & 2) != 0 )
                                        v117 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v72 + 2848);
                                      else
                                        v117 = EngStretchBlt;
                                      v118 = 0LL;
                                      if ( v150 )
                                        v118 = v150 + 24;
                                      if ( !((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, HDC, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))v117)(
                                              v55 + 24,
                                              v118,
                                              0LL,
                                              v171,
                                              v132,
                                              0LL,
                                              0LL,
                                              &v167,
                                              &v166,
                                              0LL,
                                              3) )
                                        v31 = 0;
                                    }
                                    else
                                    {
                                      v136 = *(void **)&v170.left;
                                      if ( (v116 & 0x400) != 0 )
                                        v119 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v72 + 2840);
                                      else
                                        v119 = EngCopyBits;
                                      v120 = 0LL;
                                      if ( v150 )
                                        v120 = v150 + 24;
                                      if ( !((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, HDC, struct _RECTL *, void **))v119)(
                                              v55 + 24,
                                              v120,
                                              v171,
                                              v132,
                                              &v167,
                                              &v136) )
                                        v31 = 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          if ( v124 )
                            *(_QWORD *)(v150 + 128) = 0LL;
                        }
                      }
                    }
                  }
                  else
                  {
                    v31 = 0;
                  }
                  SURFMEM::~SURFMEM((SURFMEM *)&v150);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v133);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v155);
                  goto LABEL_267;
                }
                if ( v178 >= 2 * (unsigned __int64)v129 )
                {
                  if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v133, *(_QWORD *)&v166.left, v58, v55, v129, v28) )
                  {
                    v132 = v133;
                    if ( gbMultiMonMismatchColor && (*(_DWORD *)(v45 + 40) & 1) != 0 )
                    {
                      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v155, v29, v28, 0LL, v146, v145, v144, v127, 1) )
                      {
                        v63 = *(_QWORD *)(v55 + 128);
                        if ( !v63 )
                          v63 = *(_QWORD *)(v45 + 1808);
                        XEPALOBJ::vGetEntriesFrom(&v155, v58, v63, *(_QWORD *)&v166.left, v129);
                        v62 = 1;
                        v124 = 1;
                      }
                      else
                      {
                        v62 = 0;
                      }
                      v61 = v132;
                    }
                    else
                    {
                      v62 = 0;
                      v61 = v133;
                    }
                  }
                  else
                  {
                    v126 = 0;
                    v61 = 0LL;
                    v62 = 0;
                  }
                  goto LABEL_176;
                }
LABEL_155:
                EngSetLastError(0x57u);
                v126 = 0;
                v61 = 0LL;
                v62 = 0;
                goto LABEL_176;
              }
              if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v155, v29, v28, 0LL, v146, v145, v144, v127, 1) )
                goto LABEL_152;
              if ( v129 )
              {
                if ( v178 < 4 * v129 )
                  goto LABEL_155;
                if ( v148 - 10 <= 2 )
                  XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v155, *(const unsigned int **)&v166.left, v64, v129);
                else
                  XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v155, *(struct tagRGBQUAD **)&v166.left, 0, v129);
              }
              v61 = 0LL;
              XlateObject = (HDC)CreateXlateObject(
                                   v136,
                                   v139,
                                   v155,
                                   v57,
                                   (__int64)v58,
                                   (__int64)v58,
                                   0,
                                   0,
                                   0xFFFFFFu,
                                   0);
              v133 = XlateObject;
              if ( XlateObject )
              {
                v62 = 0;
                v61 = XlateObject;
                v132 = XlateObject;
              }
              else
              {
                v126 = 0;
                v62 = 0;
              }
              goto LABEL_176;
            }
            goto LABEL_270;
          }
          HIDWORD(v141) = -1;
        }
LABEL_29:
        v33 = 534;
LABEL_271:
        EngSetLastError(v33);
        return 0LL;
      }
    }
LABEL_270:
    v33 = 87;
    goto LABEL_271;
  }
  if ( !v23 )
  {
    if ( (unsigned int)v24 <= 8 )
    {
      switch ( (_DWORD)v24 )
      {
        case 1:
          LODWORD(v140) = 1;
          v28 = 2;
          v29 = 1;
          v127 = 1024;
          goto LABEL_47;
        case 4:
          v127 = 1024;
          LODWORD(v140) = 2;
          v28 = 16;
          v29 = 1;
          goto LABEL_47;
        case 8:
          LODWORD(v140) = 3;
          v28 = 256;
          v29 = 1;
          v127 = 1024;
          goto LABEL_47;
      }
    }
    v34 = 0;
    v28 = 0;
    if ( a12 != 1 )
      v34 = a12;
    v127 = 512;
    a12 = v34;
    switch ( (_DWORD)v24 )
    {
      case 0x20:
        LODWORD(v140) = 6;
        a12 = v34;
        break;
      case 0x10:
        LODWORD(v140) = 4;
        v29 = 2;
        a12 = v34;
        goto LABEL_47;
      case 0x18:
        LODWORD(v140) = 5;
        break;
      default:
        goto LABEL_270;
    }
    v29 = 8;
LABEL_47:
    v35 = v24 * v21;
    if ( (unsigned __int64)(v24 * v21) <= 0xFFFFFFFF && v35 + 31 >= v35 )
    {
      v31 = a9;
      v32 = a9 * (((unsigned __int64)(v35 + 31) >> 3) & 0x1FFFFFFC);
      if ( v32 > 0xFFFFFFFF )
      {
        LODWORD(v32) = -1;
        HIDWORD(v141) = -1;
        v36 = -2147024362;
      }
      else
      {
        HIDWORD(v141) = v32;
        v36 = 0;
      }
      v146 = 31744;
      v145 = 992;
      v144 = 31;
      if ( v36 >= 0 )
      {
        v22 = v134;
        v135 = a8;
        goto LABEL_96;
      }
    }
    goto LABEL_29;
  }
  if ( v23 != 10 )
  {
    if ( v23 != 2 )
    {
      if ( v23 != 12 )
      {
        if ( v23 != 1 )
        {
          if ( v23 != 11 )
          {
            if ( v23 == 4 )
            {
              LODWORD(v140) = 9;
            }
            else
            {
              if ( v23 != 5 )
                goto LABEL_270;
              LODWORD(v140) = 10;
            }
            v31 = a9;
            v127 = 512;
            v28 = 0;
            v29 = 8;
LABEL_94:
            LODWORD(v32) = a11[5];
            v135 = 0;
            goto LABEL_95;
          }
          DCOBJ::DCOBJ((DCOBJ *)v157, a1);
          if ( !v157[0] || !(unsigned int)DC::bIsCMYKColor(v157[0]) )
            goto LABEL_72;
          MDCOBJ::~MDCOBJ((MDCOBJ *)v157);
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v158);
          v22 = v134;
        }
        if ( (_DWORD)v24 != 8 )
          goto LABEL_270;
        LODWORD(v140) = 8;
        v28 = 256;
LABEL_93:
        v147 = 1;
        v31 = v22;
        v127 = 1024;
        v29 = 1;
        goto LABEL_94;
      }
      DCOBJ::DCOBJ((DCOBJ *)v157, a1);
      if ( !v157[0] || !(unsigned int)DC::bIsCMYKColor(v157[0]) )
        goto LABEL_72;
      MDCOBJ::~MDCOBJ((MDCOBJ *)v157);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v158);
      v22 = v134;
    }
    if ( (_DWORD)v24 != 4 )
      goto LABEL_270;
    LODWORD(v140) = 7;
    v28 = 16;
    goto LABEL_93;
  }
  DCOBJ::DCOBJ((DCOBJ *)v157, a1);
  if ( !v157[0] || !(unsigned int)DC::bIsCMYKColor(v157[0]) )
    goto LABEL_72;
  switch ( (_DWORD)v24 )
  {
    case 1:
      LODWORD(v140) = 1;
      v28 = 2;
      break;
    case 4:
      LODWORD(v140) = 2;
      v28 = 16;
      break;
    case 8:
      LODWORD(v140) = 3;
      v28 = 256;
      break;
    case 0x20:
      LODWORD(v140) = 6;
      v29 = 16;
      v28 = 0;
      v127 = 512;
      goto LABEL_66;
    default:
LABEL_72:
      v39 = 87;
      goto LABEL_73;
  }
  v29 = 1;
  v127 = 1024;
LABEL_66:
  v37 = v24 * v21;
  if ( (unsigned __int64)(v24 * v21) <= 0xFFFFFFFF && v37 + 31 >= v37 )
  {
    v31 = a9;
    v38 = a9 * (((unsigned __int64)(v37 + 31) >> 3) & 0x1FFFFFFC);
    if ( v38 <= 0xFFFFFFFF )
    {
      HIDWORD(v141) = v38;
      MDCOBJ::~MDCOBJ((MDCOBJ *)v157);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v158);
      LODWORD(v32) = HIDWORD(v141);
      v22 = v134;
      v135 = a8;
      goto LABEL_96;
    }
    HIDWORD(v141) = -1;
  }
  v39 = 534;
LABEL_73:
  EngSetLastError(v39);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v157);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v158);
  return 0LL;
}
