/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C003CB30
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C003C0E0 (GreUpdateSpriteVisRgn.c)
 *     CalcVisRgn @ 0x1C003C7D0 (CalcVisRgn.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRgn @ 0x1C003C0C0 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C003CA20 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C003D8C4 (PhysicalToLogicalInPlaceRect.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C0041300 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C0041428 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C006F2D8 (IsDpiBoundaryBetweenWindows.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     GreSubtractRgnRectList @ 0x1C009E344 (GreSubtractRgnRectList.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z @ 0x1C00E7BA0 (-ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011190C (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C01159CC (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C014AE88 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C01D1058 (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1C01D2060 (DpiRectContainsRectWithSubpixel.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01D2138 (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *const a1, HRGN *a2, int a3)
{
  __int64 v3; // rax
  int v4; // r9d
  struct tagWND *v5; // r10
  BOOL v6; // r11d
  HRGN v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  unsigned __int16 v12; // ax
  __int64 v13; // r8
  LONG right; // edx
  LONG v15; // ecx
  LONG top; // ecx
  LONG bottom; // edx
  struct tagWND *v18; // rsi
  __int64 v19; // rdi
  struct tagWND *v20; // rbx
  int v21; // ecx
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned __int16 v28; // bx
  unsigned __int16 v29; // ax
  char *v30; // rbx
  LONG left; // edx
  LONG v32; // ecx
  LONG v33; // edx
  LONG v34; // ecx
  LONG v35; // ecx
  LONG v36; // edx
  LONG v37; // ecx
  LONG v38; // edx
  int v39; // edi
  _BYTE *v40; // r9
  struct tagWND *v41; // r12
  int v42; // esi
  struct tagWND *v43; // rdx
  int v44; // r15d
  struct tagWND *v45; // r13
  int v46; // eax
  __int64 v47; // rdi
  int v48; // r14d
  __int64 v49; // rdx
  LONG *v50; // rbx
  __int64 v51; // rcx
  bool v52; // zf
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rax
  char v56; // dl
  unsigned int v57; // r14d
  int v58; // r13d
  _BYTE *v59; // rbx
  _BYTE *v60; // rbx
  __int64 v61; // r12
  _QWORD *v62; // rdi
  _QWORD *v63; // rsi
  _OWORD *v64; // r15
  __int64 v65; // rcx
  __int64 v66; // r10
  __int64 v67; // r11
  _BYTE *v68; // rbx
  _QWORD *v69; // r12
  __int64 v70; // rcx
  __int64 EmptyRgn; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r12
  bool v76; // cc
  _BYTE *v77; // rbx
  __int64 v78; // r14
  __int64 TopLevelWindow; // rdi
  struct tagWND *v80; // rbx
  HRGN v81; // r15
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // rdx
  unsigned __int16 v89; // bx
  float *v90; // rax
  float v91; // xmm1_4
  float v92; // xmm3_4
  float v93; // xmm2_4
  HRGN v94; // rax
  int v95; // eax
  HRGN v96; // rbx
  HRGN *v97; // rbx
  struct tagWND *v98; // rcx
  unsigned int v99; // r12d
  __int64 v100; // r8
  struct tagWND *v101; // rbx
  int v102; // r15d
  struct tagWND *v103; // rax
  struct tagWND *v104; // r10
  struct tagWND *v105; // r13
  __int64 v106; // rdx
  __int64 v107; // rcx
  struct tagWND *v108; // r10
  struct tagWND *v109; // rdi
  int v110; // esi
  struct tagWND *v111; // rdi
  BOOL v112; // r14d
  int v114; // [rsp+38h] [rbp-D0h]
  struct tagWND *v115; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v116; // [rsp+48h] [rbp-C0h]
  __int64 v117; // [rsp+50h] [rbp-B8h]
  HRGN v118; // [rsp+58h] [rbp-B0h]
  HRGN v119[2]; // [rsp+60h] [rbp-A8h] BYREF
  HRGN v120; // [rsp+70h] [rbp-98h] BYREF
  __int64 v121; // [rsp+78h] [rbp-90h]
  HRGN *v122; // [rsp+80h] [rbp-88h]
  struct tagWND *v123; // [rsp+88h] [rbp-80h]
  __int64 v124; // [rsp+90h] [rbp-78h] BYREF
  __int64 v125; // [rsp+98h] [rbp-70h]
  _BYTE *v126; // [rsp+A0h] [rbp-68h]
  _BYTE *v127; // [rsp+A8h] [rbp-60h]
  HRGN v128; // [rsp+B0h] [rbp-58h]
  struct tagRECT v129; // [rsp+B8h] [rbp-50h] BYREF
  float v130; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v131; // [rsp+CCh] [rbp-3Ch]
  float v132; // [rsp+D4h] [rbp-34h]
  float v133; // [rsp+D8h] [rbp-30h]
  float v134; // [rsp+DCh] [rbp-2Ch]
  _BYTE v135[240]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v136[480]; // [rsp+1D8h] [rbp+D0h] BYREF

  v3 = *((_QWORD *)a1 + 10);
  v4 = a3;
  v5 = a1;
  v6 = 0;
  LODWORD(v117) = a3;
  v122 = a2;
  v7 = 0LL;
  v115 = a1;
  LODWORD(v121) = 0;
  v116 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v127 = 0LL;
  v118 = 0LL;
  v128 = 0LL;
  v114 = 0;
  if ( v3 )
  {
    v8 = *((_QWORD *)a1 + 3);
    v9 = 0LL;
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 8);
      if ( v10 )
        v9 = *(_QWORD *)(v10 + 24);
    }
    if ( v3 != v9
      && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v5);
      v12 = GetWindowCoordinateSpaceDpi(*((struct tagWND **)v115 + 10));
      v5 = v115;
      v4 = v117;
      v6 = WindowCoordinateSpaceDpi != v12;
      v114 = v6;
    }
  }
  v13 = *((_QWORD *)v5 + 5);
  LODWORD(v120) = v6;
  if ( (v4 & 1) != 0 )
  {
    v129 = *(struct tagRECT *)(v13 + 88);
  }
  else
  {
    v129 = *(struct tagRECT *)(v13 + 104);
    right = v129.right;
    v15 = _mm_cvtsi128_si32((__m128i)v129);
    if ( v15 <= *(_DWORD *)(v13 + 88) )
      v15 = *(_DWORD *)(v13 + 88);
    v129.left = v15;
    if ( v129.right >= *(_DWORD *)(v13 + 96) )
      right = *(_DWORD *)(v13 + 96);
    v129.right = right;
    if ( v15 >= right )
      goto LABEL_20;
    top = v129.top;
    bottom = v129.bottom;
    if ( v129.top <= *(_DWORD *)(v13 + 92) )
      top = *(_DWORD *)(v13 + 92);
    v129.top = top;
    if ( v129.bottom >= *(_DWORD *)(v13 + 100) )
      bottom = *(_DWORD *)(v13 + 100);
    v129.bottom = bottom;
    if ( top >= bottom )
    {
LABEL_20:
      *(_QWORD *)&v129.left = 0LL;
      *(_QWORD *)&v129.right = 0LL;
    }
  }
  v18 = v5;
  v19 = *((_QWORD *)v5 + 10);
  v20 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 3) + 8LL) + 24LL) + 80LL);
  v123 = v20;
  if ( !v19 )
    goto LABEL_219;
  if ( (struct tagWND *)v19 != v20 )
  {
    while ( 1 )
    {
      if ( *(struct tagWND **)(v19 + 80) == v20 && (*(_WORD *)(*(_QWORD *)(v19 + 40) + 42LL) & 0x2FFF) != 0x29D )
        goto LABEL_219;
      if ( (v4 & 0x1004000) != 0 && (*(_WORD *)(*(_QWORD *)(v19 + 40) + 42LL) & 0x2FFF) == 0x29D
        || (v4 & 0x4000) != 0
        && ((v21 = *(_DWORD *)(*((_QWORD *)v18 + 5) + 24LL), (v21 & 0x80000) != 0) || (v21 & 0x20000000) != 0) )
      {
LABEL_79:
        v5 = v115;
        goto LABEL_80;
      }
      if ( (v4 & 0x8000000) != 0 && (*(_WORD *)(*(_QWORD *)(v19 + 40) + 42LL) & 0x2FFF) == 0x29D )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v19) )
          goto LABEL_79;
        v6 = v114;
      }
      v22 = v121;
      v23 = *(_QWORD *)(v19 + 40);
      if ( *(_QWORD *)(v23 + 168) )
        v22 = 1;
      LODWORD(v121) = v22;
      if ( !v6 )
      {
        v24 = *(_QWORD *)(v19 + 80);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v19 + 24);
          v26 = 0LL;
          if ( v25 )
          {
            v27 = *(_QWORD *)(v25 + 8);
            if ( v27 )
              v26 = *(_QWORD *)(v27 + 24);
          }
          if ( v24 != v26
            && (((unsigned __int16)(*(_DWORD *)(v23 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v24 + 40)
                                                                                                + 288LL) >> 8)) & 0x1FF) != 0 )
          {
            v28 = GetWindowCoordinateSpaceDpi((struct tagWND *)v19);
            v29 = GetWindowCoordinateSpaceDpi(*(struct tagWND **)(v19 + 80));
            v6 = v114;
            if ( v28 != v29 )
              v6 = 1;
            v114 = v6;
            LODWORD(v120) = v6;
          }
        }
      }
      *(_OWORD *)v119 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 104LL);
      if ( v6 )
      {
        v30 = (char *)v115 + 208;
        if ( (unsigned int)DpiRectContainsRectWithSubpixel(v119, v19 + 208, v19, &v129, (char *)v115 + 208, v115) )
          goto LABEL_63;
        LogicalToPhysicalInPlaceRectWithSubpixel(v19, v119, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v115, v119, 0LL);
      }
      else
      {
        PhysicalToLogicalInPlaceRect(v18, v119);
      }
      left = v129.left;
      v32 = v129.right;
      if ( v129.left <= SLODWORD(v119[0]) )
        left = (LONG)v119[0];
      v129.left = left;
      if ( v129.right >= SLODWORD(v119[1]) )
        v32 = (LONG)v119[1];
      v129.right = v32;
      if ( left >= v32 )
        goto LABEL_217;
      v33 = v129.top;
      v34 = v129.bottom;
      if ( v129.top <= SHIDWORD(v119[0]) )
        v33 = HIDWORD(v119[0]);
      v129.top = v33;
      if ( v129.bottom >= SHIDWORD(v119[1]) )
        v34 = HIDWORD(v119[1]);
      v129.bottom = v34;
      if ( v33 >= v34 )
      {
LABEL_217:
        *(_QWORD *)&v129.left = 0LL;
        *(_QWORD *)&v129.right = 0LL;
        goto LABEL_219;
      }
      v30 = (char *)v115 + 208;
LABEL_63:
      *(_OWORD *)v119 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 88LL);
      if ( v114 )
      {
        if ( (unsigned int)DpiRectContainsRectWithSubpixel(v119, v19 + 208, v19, &v129, v30, v115) )
          goto LABEL_77;
        LogicalToPhysicalInPlaceRectWithSubpixel(v19, v119, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v115, v119, 0LL);
      }
      else
      {
        PhysicalToLogicalInPlaceRect(v18, v119);
      }
      v35 = v129.left;
      v36 = v129.right;
      if ( v129.left <= SLODWORD(v119[0]) )
        v35 = (LONG)v119[0];
      v129.left = v35;
      if ( v129.right >= SLODWORD(v119[1]) )
        v36 = (LONG)v119[1];
      v129.right = v36;
      if ( v35 >= v36 )
        goto LABEL_217;
      v37 = v129.top;
      v38 = v129.bottom;
      if ( v129.top <= SHIDWORD(v119[0]) )
        v37 = HIDWORD(v119[0]);
      v129.top = v37;
      if ( v129.bottom >= SHIDWORD(v119[1]) )
        v38 = HIDWORD(v119[1]);
      v129.bottom = v38;
      if ( v37 >= v38 )
        goto LABEL_217;
LABEL_77:
      v20 = v123;
      v18 = (struct tagWND *)v19;
      v19 = *(_QWORD *)(v19 + 80);
      if ( (struct tagWND *)v19 == v123 )
        goto LABEL_79;
      v6 = v114;
      v4 = v117;
    }
  }
  if ( (*(_WORD *)(v13 + 42) & 0x2FFF) != 0x29D )
  {
LABEL_219:
    v60 = v116;
    goto LABEL_220;
  }
LABEL_80:
  v39 = v117;
  v40 = v135;
  v41 = (struct tagWND *)*((_QWORD *)v5 + 10);
  v42 = 0;
  v127 = v135;
  v116 = v135;
  v43 = (struct tagWND *)(v117 & 0x10);
  v126 = v135;
  HIDWORD(v124) = 0;
  v44 = 30;
  LODWORD(v125) = 30;
  v45 = v5;
  if ( v41 == v20 )
  {
    v7 = v118;
    goto LABEL_118;
  }
  v46 = v117 & 0x4000;
  LODWORD(v118) = v46;
  do
  {
    if ( v46 && (*(_BYTE *)(*((_QWORD *)v45 + 5) + 27LL) & 0x20) != 0 )
      break;
    if ( !(_DWORD)v43 )
      goto LABEL_115;
    v47 = *((_QWORD *)v41 + 11);
    if ( (struct tagWND *)v47 == v45 )
      goto LABEL_115;
    v48 = 0;
    if ( !v47 )
      goto LABEL_115;
    while ( (struct tagWND *)v47 != v45 )
    {
      v49 = *(_QWORD *)(v47 + 40);
      v50 = (LONG *)(v49 + 88);
      if ( !v48 )
      {
        v51 = *((_QWORD *)v5 + 5);
        v13 = *(unsigned int *)(v51 + 288);
        if ( *(_QWORD *)(v51 + 256) == *(_QWORD *)(v49 + 256) )
        {
          v13 = (unsigned int)v13 >> 8;
          LOWORD(v13) = v13 & 0x1FF;
          v52 = (_WORD)v13 == ((*(_DWORD *)(v49 + 288) >> 8) & 0x1FF);
        }
        else
        {
          LOBYTE(v13) = v13 & 0xF;
          if ( (_BYTE)v13 != 2 )
            goto LABEL_94;
          v52 = (*(_DWORD *)(v49 + 288) & 0xF) == 2;
        }
        if ( !v52 )
LABEL_94:
          v48 = 1;
      }
      if ( (*(_BYTE *)(v49 + 31) & 0x10) != 0 && (*(_BYTE *)(v49 + 26) & 8) == 0 && (*(_BYTE *)(v49 + 24) & 0x20) == 0 )
      {
        if ( v48 )
        {
          if ( (unsigned int)DpiRectIntersectsRectWithSubpixel(v50, v47 + 208, v47, &v129, (char *)v5 + 208, v5) )
          {
            v40 = v116;
LABEL_105:
            if ( *v50 < v50[2] && v50[1] < v50[3] )
            {
              if ( v42 == v44 )
              {
                if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v124) )
                  goto LABEL_125;
                v40 = v126;
                v44 = v125;
                v42 = HIDWORD(v124);
                v116 = v126;
              }
              v53 = v42++;
              HIDWORD(v124) = v42;
              *(_QWORD *)&v40[8 * v53] = v47;
            }
          }
        }
        else if ( v129.left < *(_DWORD *)(v49 + 96)
               && *v50 < v129.right
               && v129.top < *(_DWORD *)(v49 + 100)
               && *(_DWORD *)(v49 + 92) < v129.bottom )
        {
          goto LABEL_105;
        }
      }
      v47 = *(_QWORD *)(v47 + 64);
      v5 = v115;
      v40 = v116;
      if ( !v47 )
        break;
    }
    v54 = v114;
    v20 = v123;
    if ( v48 )
      v54 = 1;
    v114 = v54;
    LODWORD(v120) = v54;
LABEL_115:
    v55 = *((_QWORD *)v41 + 5);
    v45 = v41;
    v41 = (struct tagWND *)*((_QWORD *)v41 + 10);
    v56 = *(_BYTE *)(v55 + 31);
    v46 = (int)v118;
    v43 = (struct tagWND *)(v56 & 4);
  }
  while ( v41 != v20 );
  v7 = v128;
  v39 = v117;
  v118 = v128;
LABEL_118:
  if ( (v39 & 8) == 0 || (v43 = (struct tagWND *)*((_QWORD *)v5 + 11)) == 0LL )
  {
LABEL_122:
    if ( v42 <= 0 )
    {
      if ( *(char *)(*((_QWORD *)v115 + 5) + 19LL) < 0 )
      {
        *(_QWORD *)&v129.left = 0LL;
        *(_QWORD *)&v129.right = 0LL;
      }
      v97 = v122;
      if ( !(unsigned int)SetOrCreateRectRgnIndirectPublic(v122, &v129) )
        goto LABEL_219;
    }
    else
    {
      v57 = 0;
      v58 = 0;
      if ( v42 > 30 )
      {
        v119[0] = (HRGN)Win32AllocPoolWithQuota(16LL * v42, 1769370453LL);
        v59 = v119[0];
        if ( !v119[0] )
        {
          v7 = v118;
          goto LABEL_219;
        }
        v40 = v116;
      }
      else
      {
        v59 = v136;
        v119[0] = (HRGN)v136;
      }
      v61 = (unsigned int)v42;
      v62 = v40;
      v63 = v40;
      v64 = v59;
      do
      {
        v65 = *(_QWORD *)(*v62 + 40LL);
        if ( *(_QWORD *)(v65 + 168) )
        {
          ++v58;
          *v63++ = *v62;
        }
        else
        {
          ++v57;
          *v64++ = *(_OWORD *)(v65 + 88);
          if ( v114 && (unsigned int)IsDpiBoundaryBetweenWindows(v115, *v62) )
          {
            v68 = &v59[16 * v67];
            LogicalToPhysicalInPlaceRectWithSubpixel(v66, v68, 0LL);
            PhysicalToLogicalInPlaceRectWithSubpixel(v115, v68, 0LL);
            v59 = v119[0];
          }
        }
        ++v62;
        --v61;
      }
      while ( v61 );
      v69 = v122;
      v70 = (__int64)*v122;
      if ( !*v122 )
      {
        EmptyRgn = CreateEmptyRgn(0LL, v43, v13);
        *v69 = EmptyRgn;
        v70 = EmptyRgn;
      }
      if ( v57 )
        GreSubtractRgnRectList(v70, &v129, v59, v57);
      else
        SetRectRgnIndirect(v70, &v129);
      if ( !v118 )
        v118 = (HRGN)CreateEmptyRgn(v73, v72, v74);
      v75 = v58;
      v76 = v58 <= 0;
      v7 = v118;
      if ( !v76 )
      {
        v77 = v116;
        v78 = 0LL;
        do
        {
          SetRectRgnIndirect(v118, *(_QWORD *)(*(_QWORD *)&v77[8 * v78] + 40LL) + 88LL);
          GreCombineRgn(v118, v118, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v77[8 * v78] + 40LL) + 168LL), 1LL);
          if ( v114 )
          {
            TopLevelWindow = *(_QWORD *)&v77[8 * v78];
            v80 = v115;
            if ( (unsigned int)IsDpiBoundaryBetweenWindows(v115, TopLevelWindow) )
            {
              v81 = 0LL;
              v120 = v118;
              if ( gfDwmChildWindowDpiIsolationEnabled )
              {
                if ( TopLevelWindow )
                {
                  do
                  {
                    v82 = *(_QWORD *)(TopLevelWindow + 80);
                    if ( v82 )
                    {
                      v83 = *(_QWORD *)(TopLevelWindow + 24);
                      v84 = 0LL;
                      if ( v83 )
                      {
                        v85 = *(_QWORD *)(v83 + 8);
                        if ( v85 )
                          v84 = *(_QWORD *)(v85 + 24);
                      }
                      if ( v82 == v84 )
                        break;
                      v86 = *(_QWORD *)(TopLevelWindow + 24);
                      v87 = 0LL;
                      if ( v86 )
                      {
                        v88 = *(_QWORD *)(v86 + 8);
                        if ( v88 )
                          v87 = *(_QWORD *)(v88 + 24);
                      }
                      if ( v82 != v87
                        && (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v82 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
                      {
                        v89 = GetWindowCoordinateSpaceDpi((struct tagWND *)TopLevelWindow);
                        if ( v89 != GetWindowCoordinateSpaceDpi(*(struct tagWND **)(TopLevelWindow + 80)) )
                          break;
                      }
                    }
                    TopLevelWindow = *(_QWORD *)(TopLevelWindow + 80);
                  }
                  while ( TopLevelWindow );
                  v80 = v115;
                }
              }
              else
              {
                TopLevelWindow = GetTopLevelWindow(TopLevelWindow);
              }
              if ( (unsigned __int64)v118 > 2 )
              {
                if ( TopLevelWindow )
                {
                  if ( *(_QWORD *)(TopLevelWindow + 200) )
                  {
                    if ( (unsigned int)IsWindowDesktopComposed(TopLevelWindow) )
                    {
                      v90 = *(float **)(TopLevelWindow + 200);
                      v131 = 0LL;
                      v130 = *v90;
                      v91 = v90[5];
                      v132 = v91;
                      v92 = v90[12];
                      v133 = v92;
                      v93 = v90[13];
                      v134 = v93;
                      if ( v130 != 1.0 || v91 != 1.0 || v93 != 0.0 || v92 != 0.0 )
                      {
                        v94 = TransformRgn(v118, (struct tagXFORM *)&v130);
                        if ( v94 )
                        {
                          v120 = v94;
                          v81 = v94;
                        }
                      }
                    }
                  }
                }
              }
              v95 = PhysicalToLogicalInPlaceRgnWorker(v80, &v120, 1);
              v96 = 0LL;
              if ( v95 )
                v96 = v120;
              if ( v120 != v118 )
                GreCombineRgn(v118, v120, 0LL, 5LL);
              if ( v81 )
                GreDeleteObject(v81);
              if ( v96 )
                GreDeleteObject(v96);
            }
            v77 = v116;
          }
          if ( (unsigned int)GreCombineRgn(*v122, *v122, v118, 4LL) == 1 )
            break;
          ++v78;
        }
        while ( v78 < v75 );
      }
      if ( v119[0] != (HRGN)v136 )
        Win32FreePool(v119[0]);
      v97 = v122;
      v39 = v117;
    }
    v98 = v115;
    v99 = 1;
    v100 = *(_QWORD *)(*((_QWORD *)v115 + 5) + 168LL);
    if ( v100 )
    {
      GreCombineRgn(*v97, *v97, v100, 1LL);
      v98 = v115;
    }
    if ( !(_DWORD)v121
      || (v101 = (struct tagWND *)*((_QWORD *)v98 + 10), v102 = 0, v103 = v123, v104 = v98, v101 == v123) )
    {
LABEL_216:
      v60 = v116;
      goto LABEL_221;
    }
    v105 = v115;
    while ( 1 )
    {
      v106 = *((_QWORD *)v101 + 5);
      if ( !*(_QWORD *)(v106 + 168) )
        goto LABEL_214;
      v107 = *((_QWORD *)v104 + 5);
      if ( (*(_BYTE *)(v107 + 26) & 8) != 0 && (*(_DWORD *)(v107 + 232) & 0x20) == 0 )
        break;
      if ( (v39 & 0x1000000) != 0 )
      {
        v102 = 1;
LABEL_202:
        if ( (*(_WORD *)(v106 + 42) & 0x2FFF) == 0x29D )
          goto LABEL_215;
        goto LABEL_203;
      }
      if ( v102 )
        goto LABEL_202;
LABEL_203:
      v115 = *(struct tagWND **)(v106 + 168);
      if ( (unsigned int)IsDpiBoundaryBetweenWindows(v105, v101) )
      {
        v109 = 0LL;
        if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v101, &v115, 1LL) )
          v109 = v115;
        v110 = PhysicalToLogicalInPlaceRgnWorker(v105, (HRGN *)&v115, 1);
        if ( v110 && v109 )
          GreDeleteObject(v109);
      }
      else
      {
        v110 = PhysicalToLogicalInPlaceRgn(v108);
      }
      v111 = v115;
      v112 = GreCombineRgn(*v122, *v122, v115, 1LL) == 1;
      if ( v110 )
        GreDeleteObject(v111);
      if ( v112 )
      {
LABEL_215:
        v7 = v118;
        goto LABEL_216;
      }
      v103 = v123;
LABEL_214:
      v39 = v117;
      v104 = v101;
      v101 = (struct tagWND *)*((_QWORD *)v101 + 10);
      if ( v101 == v103 )
        goto LABEL_215;
    }
    v102 = 1;
    goto LABEL_202;
  }
  if ( (unsigned int)ExcludeWindowRects(v5, v43, 0LL, &v129, (struct _CalcVisRgnData *)&v124, (int *)&v120) )
  {
    v7 = v128;
    v40 = v126;
    v42 = HIDWORD(v124);
    v118 = v128;
    v116 = v126;
    v114 = (int)v120;
    goto LABEL_122;
  }
LABEL_125:
  v7 = v128;
  v60 = v126;
LABEL_220:
  SetOrCreateRectRgnIndirectPublic(v122, gZero);
  v99 = 0;
LABEL_221:
  if ( v7 )
    GreDeleteObject(v7);
  if ( (_DWORD)v124 )
    Win32FreePool(v60);
  return v99;
}
