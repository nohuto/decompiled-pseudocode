/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00C4E50
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C00C4520 (GreUpdateSpriteVisRgn.c)
 *     CalcVisRgn @ 0x1C00C4BF0 (CalcVisRgn.c)
 * Callees:
 *     GreSubtractRgnRectList @ 0x1C0058234 (GreSubtractRgnRectList.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00C43B4 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C00C43CC (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C00C59FC (PhysicalToLogicalInPlaceRect.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C00C6554 (IsDpiBoundaryBetweenWindows.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z @ 0x1C00C70C0 (-ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00ED568 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00ED5A8 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011AFC8 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C011E0B0 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C014F488 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1C01E6C70 (DpiRectContainsRectWithSubpixel.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01E6D48 (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *const a1, HRGN *a2, int a3)
{
  HRGN v3; // r13
  struct tagWND *v4; // r12
  int v6; // r11d
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  struct tagWND *v12; // r14
  __int64 v13; // rdi
  struct tagWND *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r8d
  int v23; // ecx
  int v24; // eax
  LONG left; // edx
  LONG v26; // ecx
  LONG v27; // edx
  LONG v28; // ecx
  char *v29; // rbx
  LONG v30; // ecx
  LONG v31; // r8d
  LONG v32; // ecx
  LONG v33; // r8d
  struct tagWND *v34; // r9
  _BYTE *v35; // rbx
  char v36; // dl
  struct tagWND *v37; // r15
  int v38; // r8d
  HRGN v39; // rdx
  int v40; // r10d
  struct tagWND *v41; // rsi
  _BYTE *v42; // r13
  int v43; // eax
  __int64 v44; // rbx
  int v45; // r14d
  __int64 v46; // rdx
  LONG *v47; // rdi
  __int64 v48; // rax
  char v49; // dl
  __int64 v50; // rcx
  unsigned int v51; // r8d
  unsigned int v52; // r9d
  int v53; // ecx
  int v54; // eax
  __int64 v55; // rax
  HRGN *v56; // r14
  __int64 v57; // r8
  unsigned int v58; // ebx
  LONG right; // r8d
  LONG v61; // ecx
  unsigned int v62; // r8d
  unsigned int v63; // edx
  int v64; // ecx
  int v65; // eax
  LONG top; // ecx
  LONG bottom; // r8d
  int v68; // r12d
  int v69; // r15d
  _BYTE *v70; // rax
  _QWORD *v71; // rdi
  __int64 v72; // r14
  _QWORD *v73; // rsi
  __int64 v74; // rbx
  __int64 v75; // rcx
  _QWORD *v76; // rdi
  HRGN v77; // rcx
  __int64 EmptyRgn; // rax
  _BYTE *v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r13
  __int64 v83; // rbx
  int v84; // r15d
  struct tagWND *v85; // rax
  __int64 v86; // rdi
  int v87; // r13d
  __int64 v88; // rdx
  __int64 v89; // r8
  int v90; // esi
  HRGN v91; // rcx
  struct tagWND *v92; // r14
  BOOL v93; // edi
  int v94; // eax
  _BYTE *v95; // rdi
  __int64 v96; // rbx
  HRGN *v97; // r12
  __int64 v98; // r10
  struct tagWND *v99; // rsi
  __int64 v100; // r8
  __int64 v101; // rcx
  unsigned int v102; // edx
  unsigned int v103; // r9d
  int v104; // ecx
  int v105; // eax
  int v106; // ecx
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  unsigned __int16 v108; // bx
  unsigned __int16 v109; // ax
  int v110; // eax
  __int64 v111; // rbx
  HRGN v112; // rdi
  int v113; // eax
  HRGN v114; // rsi
  struct tagWND *v115; // rdi
  int v116; // [rsp+38h] [rbp-D0h]
  HRGN v117; // [rsp+40h] [rbp-C8h] BYREF
  int v118[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v119; // [rsp+58h] [rbp-B0h]
  struct tagWND *v120; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v121; // [rsp+68h] [rbp-A0h]
  HRGN *v122; // [rsp+70h] [rbp-98h]
  __int64 v123; // [rsp+78h] [rbp-90h]
  struct tagWND *v124; // [rsp+80h] [rbp-88h]
  HRGN v125; // [rsp+88h] [rbp-80h]
  __int64 v126; // [rsp+90h] [rbp-78h] BYREF
  __int64 v127; // [rsp+98h] [rbp-70h]
  _BYTE *v128; // [rsp+A0h] [rbp-68h]
  _BYTE *v129; // [rsp+A8h] [rbp-60h]
  HRGN v130; // [rsp+B0h] [rbp-58h]
  struct tagRECT v131; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v132[240]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v133[480]; // [rsp+1B8h] [rbp+B0h] BYREF

  v3 = 0LL;
  v4 = a1;
  v6 = 0;
  LODWORD(v121) = a3;
  v7 = *((_QWORD *)a1 + 13);
  v119 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v129 = 0LL;
  v125 = 0LL;
  v130 = 0LL;
  v122 = a2;
  v120 = a1;
  LODWORD(v123) = 0;
  v116 = 0;
  if ( v7 )
  {
    v8 = *((_QWORD *)a1 + 3);
    v9 = 0LL;
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 8);
      if ( v10 )
        v9 = *(_QWORD *)(v10 + 24);
    }
    if ( v7 != v9 )
    {
      v62 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
      v63 = *(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL);
      if ( (((unsigned __int16)(v63 >> 8) ^ (unsigned __int16)(v62 >> 8)) & 0x1FF) != 0
        || ((v63 & 0xF) == 2 && (v63 & 0x20000000) != 0 ? (v64 = 1) : (v64 = 0),
            (v62 & 0xF) == 2 && (v62 & 0x20000000) != 0 ? (v65 = 1) : (v65 = 0),
            v64 != v65) )
      {
        WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v4);
        v6 = WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((struct tagWND **)v4 + 13));
        v116 = v6;
      }
    }
  }
  v11 = *((_QWORD *)v4 + 5);
  LODWORD(v117) = v6;
  if ( (a3 & 1) != 0 )
  {
    v131 = *(struct tagRECT *)(v11 + 88);
  }
  else
  {
    v131 = *(struct tagRECT *)(v11 + 104);
    right = v131.right;
    v61 = _mm_cvtsi128_si32((__m128i)v131);
    if ( v61 <= *(_DWORD *)(v11 + 88) )
      v61 = *(_DWORD *)(v11 + 88);
    v131.left = v61;
    if ( v131.right >= *(_DWORD *)(v11 + 96) )
      right = *(_DWORD *)(v11 + 96);
    v131.right = right;
    if ( v61 >= right )
      goto LABEL_114;
    top = v131.top;
    bottom = v131.bottom;
    if ( v131.top <= *(_DWORD *)(v11 + 92) )
      top = *(_DWORD *)(v11 + 92);
    v131.top = top;
    if ( v131.bottom >= *(_DWORD *)(v11 + 100) )
      bottom = *(_DWORD *)(v11 + 100);
    v131.bottom = bottom;
    if ( top >= bottom )
    {
LABEL_114:
      *(_QWORD *)&v131.left = 0LL;
      *(_QWORD *)&v131.right = 0LL;
    }
  }
  v12 = v4;
  v13 = *((_QWORD *)v4 + 13);
  v14 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 3) + 8LL) + 24LL) + 104LL);
  v124 = v14;
  if ( !v13 )
    goto LABEL_163;
  if ( (struct tagWND *)v13 != v14 )
  {
    do
    {
      if ( *(struct tagWND **)(v13 + 104) == v14 && (*(_WORD *)(*(_QWORD *)(v13 + 40) + 42LL) & 0x3FFF) != 0x29D )
        goto LABEL_163;
      if ( (a3 & 0x1004000) != 0 && (*(_WORD *)(*(_QWORD *)(v13 + 40) + 42LL) & 0x3FFF) == 0x29D )
        goto LABEL_57;
      if ( (a3 & 0x4000) != 0 )
      {
        v106 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 24LL);
        if ( (v106 & 0x80000) != 0 || (v106 & 0x20000000) != 0 )
          goto LABEL_57;
      }
      if ( (a3 & 0x8000000) != 0 && (*(_WORD *)(*(_QWORD *)(v13 + 40) + 42LL) & 0x3FFF) == 0x29D )
      {
        v94 = IsWindowDesktopComposed(v13);
        v6 = v116;
        if ( v94 )
          goto LABEL_57;
      }
      v15 = *(_QWORD *)(v13 + 40);
      if ( *(_QWORD *)(v15 + 168) )
        LODWORD(v123) = 1;
      if ( !v6 )
      {
        v16 = *(_QWORD *)(v13 + 104);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v13 + 24);
          v18 = 0LL;
          if ( v17 )
          {
            v19 = *(_QWORD *)(v17 + 8);
            if ( v19 )
              v18 = *(_QWORD *)(v19 + 24);
          }
          if ( v16 != v18 )
          {
            v20 = *(_QWORD *)(v16 + 40);
            v21 = *(_DWORD *)(v15 + 288);
            v22 = *(_DWORD *)(v20 + 288);
            if ( (((unsigned __int16)(v21 >> 8) ^ (unsigned __int16)(v22 >> 8)) & 0x1FF) != 0
              || ((v21 & 0xF) != 2 || (v21 & 0x20000000) == 0 ? (v23 = 0) : (v23 = 1),
                  (v22 & 0xF) != 2 || (v22 & 0x20000000) == 0 ? (v24 = 0) : (v24 = 1),
                  v23 != v24) )
            {
              v108 = GetWindowCoordinateSpaceDpi((struct tagWND *)v13);
              v109 = GetWindowCoordinateSpaceDpi(*(struct tagWND **)(v13 + 104));
              v6 = v116;
              if ( v108 != v109 )
                v6 = 1;
              v116 = v6;
              LODWORD(v117) = v6;
            }
          }
        }
      }
      *(_OWORD *)v118 = *(_OWORD *)(*(_QWORD *)(v13 + 40) + 104LL);
      if ( v6 )
      {
        v29 = (char *)v4 + 224;
        if ( (unsigned int)DpiRectContainsRectWithSubpixel(v118, v13 + 224, v13, &v131, (char *)v4 + 224, v4) )
          goto LABEL_42;
        LogicalToPhysicalInPlaceRectWithSubpixel(v13, v118, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v4, v118, 0LL);
      }
      else
      {
        PhysicalToLogicalInPlaceRect(v12, v118);
      }
      left = v131.left;
      v26 = v131.right;
      if ( v131.left <= v118[0] )
        left = v118[0];
      v131.left = left;
      if ( v131.right >= v118[2] )
        v26 = v118[2];
      v131.right = v26;
      if ( left >= v26 )
        goto LABEL_162;
      v27 = v131.top;
      v28 = v131.bottom;
      if ( v131.top <= v118[1] )
        v27 = v118[1];
      v131.top = v27;
      if ( v131.bottom >= v118[3] )
        v28 = v118[3];
      v131.bottom = v28;
      if ( v27 >= v28 )
      {
LABEL_162:
        *(_QWORD *)&v131.right = 0LL;
        *(_QWORD *)&v131.left = 0LL;
        goto LABEL_163;
      }
      v29 = (char *)v4 + 224;
LABEL_42:
      *(_OWORD *)v118 = *(_OWORD *)(*(_QWORD *)(v13 + 40) + 88LL);
      if ( v116 )
      {
        if ( (unsigned int)DpiRectContainsRectWithSubpixel(v118, v13 + 224, v13, &v131, v29, v4) )
          goto LABEL_54;
        LogicalToPhysicalInPlaceRectWithSubpixel(v13, v118, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v4, v118, 0LL);
      }
      else
      {
        PhysicalToLogicalInPlaceRect(v12, v118);
      }
      v30 = v131.left;
      v31 = v131.right;
      if ( v131.left <= v118[0] )
        v30 = v118[0];
      v131.left = v30;
      if ( v131.right >= v118[2] )
        v31 = v118[2];
      v131.right = v31;
      if ( v30 >= v31 )
        goto LABEL_162;
      v32 = v131.top;
      v33 = v131.bottom;
      if ( v131.top <= v118[1] )
        v32 = v118[1];
      v131.top = v32;
      if ( v131.bottom >= v118[3] )
        v33 = v118[3];
      v131.bottom = v33;
      if ( v32 >= v33 )
        goto LABEL_162;
LABEL_54:
      v14 = v124;
      v12 = (struct tagWND *)v13;
      v13 = *(_QWORD *)(v13 + 104);
      v6 = v116;
    }
    while ( (struct tagWND *)v13 != v124 );
  }
  if ( (*(_WORD *)(v11 + 42) & 0x3FFF) != 0x29D )
    goto LABEL_163;
LABEL_57:
  v34 = v124;
  v35 = v132;
  v36 = a3;
  v119 = v132;
  v37 = (struct tagWND *)*((_QWORD *)v4 + 13);
  v38 = 0;
  v129 = v132;
  v39 = (HRGN)(v36 & 0x10);
  v128 = v132;
  HIDWORD(v126) = 0;
  v40 = 30;
  LODWORD(v127) = 30;
  v41 = v4;
  if ( v37 != v124 )
  {
    v42 = v132;
    v43 = v121 & 0x4000;
    v118[0] = v43;
    while ( 1 )
    {
      if ( v43 && (*(_BYTE *)(*((_QWORD *)v41 + 5) + 27LL) & 0x20) != 0 )
        goto LABEL_94;
      if ( !(_DWORD)v39 )
        goto LABEL_70;
      v44 = *((_QWORD *)v37 + 14);
      if ( (struct tagWND *)v44 == v41 )
        goto LABEL_70;
      v45 = 0;
      if ( !v44 )
        goto LABEL_70;
      while ( (struct tagWND *)v44 != v41 )
      {
        v46 = *(_QWORD *)(v44 + 40);
        v47 = (LONG *)(v46 + 88);
        if ( !v45 )
        {
          v50 = *((_QWORD *)v4 + 5);
          v51 = *(_DWORD *)(v50 + 288);
          if ( *(_QWORD *)(v50 + 256) == *(_QWORD *)(v46 + 256) )
          {
            v52 = *(_DWORD *)(v46 + 288);
            if ( (((unsigned __int16)(v52 >> 8) ^ (unsigned __int16)(v51 >> 8)) & 0x1FF) == 0 )
            {
              v53 = (v51 & 0xF) == 2 && (v51 & 0x20000000) != 0;
              v54 = (v52 & 0xF) == 2 && (v52 & 0x20000000) != 0;
              if ( v53 == v54 )
                goto LABEL_81;
            }
LABEL_128:
            v45 = 1;
          }
          else if ( (v51 & 0xF) != 2 || (*(_DWORD *)(v46 + 288) & 0xF) != 2 )
          {
            goto LABEL_128;
          }
LABEL_81:
          v38 = HIDWORD(v126);
        }
        if ( (*(_BYTE *)(v46 + 31) & 0x10) == 0 || (*(_BYTE *)(v46 + 26) & 8) != 0 || (*(_BYTE *)(v46 + 24) & 0x20) != 0 )
          goto LABEL_66;
        if ( v45 )
        {
          v110 = DpiRectIntersectsRectWithSubpixel(v47, v44 + 224, v44, &v131, (char *)v4 + 224, v4);
          v38 = HIDWORD(v126);
          v40 = v127;
          if ( !v110 )
            goto LABEL_66;
        }
        else if ( v131.left >= *(_DWORD *)(v46 + 96)
               || *v47 >= v131.right
               || v131.top >= *(_DWORD *)(v46 + 100)
               || *(_DWORD *)(v46 + 92) >= v131.bottom )
        {
          goto LABEL_66;
        }
        if ( *v47 < v47[2] && v47[1] < v47[3] )
        {
          if ( v38 == v40 )
          {
            if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v126) )
              goto LABEL_218;
            v38 = HIDWORD(v126);
            v42 = v128;
            v40 = v127;
            v119 = v128;
          }
          v55 = v38++;
          HIDWORD(v126) = v38;
          *(_QWORD *)&v42[8 * v55] = v44;
        }
LABEL_66:
        v44 = *(_QWORD *)(v44 + 88);
        if ( !v44 )
          break;
      }
      v6 = v116;
      v34 = v124;
      if ( v45 )
        v6 = 1;
      v116 = v6;
      LODWORD(v117) = v6;
LABEL_70:
      v48 = *((_QWORD *)v37 + 5);
      v41 = v37;
      v37 = (struct tagWND *)*((_QWORD *)v37 + 13);
      v49 = *(_BYTE *)(v48 + 31);
      v43 = v118[0];
      v39 = (HRGN)(v49 & 4);
      if ( v37 == v34 )
      {
LABEL_94:
        v3 = v130;
        v35 = v119;
        v125 = v130;
        break;
      }
    }
  }
  if ( (v121 & 8) != 0 )
  {
    v39 = (HRGN)*((_QWORD *)v4 + 14);
    if ( v39 )
    {
      if ( !(unsigned int)ExcludeWindowRects(
                            v4,
                            (struct tagWND *)v39,
                            0LL,
                            &v131,
                            (struct _CalcVisRgnData *)&v126,
                            (int *)&v117) )
      {
LABEL_218:
        v3 = v130;
        v119 = v128;
        goto LABEL_163;
      }
      v3 = v130;
      v35 = v128;
      v6 = (int)v117;
      v38 = HIDWORD(v126);
      v125 = v130;
      v119 = v128;
      v116 = (int)v117;
    }
  }
  if ( v38 > 0 )
  {
    v68 = 0;
    v69 = 0;
    if ( v38 > 30 )
    {
      v70 = (_BYTE *)Win32AllocPoolWithQuota(16LL * v38, 1769370453LL);
      *(_QWORD *)v118 = v70;
      if ( !v70 )
        goto LABEL_163;
      v38 = HIDWORD(v126);
      v6 = v116;
    }
    else
    {
      v70 = v133;
      *(_QWORD *)v118 = v133;
    }
    if ( v38 > 0 )
    {
      v71 = v35;
      v72 = (unsigned int)v38;
      v39 = (HRGN)v70;
      v73 = v35;
      do
      {
        v74 = v68;
        v75 = *(_QWORD *)(*v71 + 40LL);
        if ( *(_QWORD *)(v75 + 168) )
        {
          ++v69;
          *v73++ = *v71;
        }
        else
        {
          ++v68;
          *(_OWORD *)v39 = *(_OWORD *)(v75 + 88);
          v39 += 4;
          v117 = v39;
          if ( v6 )
          {
            v82 = *v71;
            if ( (unsigned int)IsDpiBoundaryBetweenWindows(v120, *v71) )
            {
              v111 = *(_QWORD *)v118 + 16 * v74;
              LogicalToPhysicalInPlaceRectWithSubpixel(v82, v111, 0LL);
              PhysicalToLogicalInPlaceRectWithSubpixel(v120, v111, 0LL);
            }
            v39 = v117;
          }
        }
        v6 = v116;
        ++v71;
        --v72;
      }
      while ( v72 );
      v3 = v125;
    }
    v76 = v122;
    v77 = *v122;
    if ( !*v122 )
    {
      EmptyRgn = CreateEmptyRgn(0LL, v39);
      *v76 = EmptyRgn;
      v77 = (HRGN)EmptyRgn;
    }
    if ( v68 )
    {
      v79 = *(_BYTE **)v118;
      GreSubtractRgnRectList(v77, (struct _RECTL *)&v131, *(struct _RECTL **)v118, v68);
    }
    else
    {
      SetRectRgnIndirect(v77, &v131);
      v79 = *(_BYTE **)v118;
    }
    if ( !v3 )
    {
      v3 = (HRGN)CreateEmptyRgn(v81, v80);
      v125 = v3;
    }
    if ( v69 <= 0 )
    {
LABEL_153:
      if ( v79 != v133 )
        Win32FreePool(v79);
      v56 = v122;
      v4 = v120;
      goto LABEL_100;
    }
    v95 = v119;
    v96 = 0LL;
    v97 = v122;
    while ( 1 )
    {
      SetRectRgnIndirect(v3, *(_QWORD *)(*(_QWORD *)&v95[8 * v96] + 40LL) + 88LL);
      GreCombineRgn(v3, v3, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v95[8 * v96] + 40LL) + 168LL), 1LL);
      if ( v116 )
      {
        v98 = *(_QWORD *)&v95[8 * v96];
        v99 = v120;
        v100 = *(_QWORD *)(v98 + 40);
        v101 = *((_QWORD *)v120 + 5);
        v102 = *(_DWORD *)(v101 + 288);
        if ( *(_QWORD *)(v101 + 256) == *(_QWORD *)(v100 + 256) )
        {
          v103 = *(_DWORD *)(v100 + 288);
          if ( (((unsigned __int16)(v103 >> 8) ^ (unsigned __int16)(v102 >> 8)) & 0x1FF) != 0
            || ((v102 & 0xF) != 2 || (v102 & 0x20000000) == 0 ? (v104 = 0) : (v104 = 1),
                (v103 & 0xF) != 2 || (v103 & 0x20000000) == 0 ? (v105 = 0) : (v105 = 1),
                v104 != v105) )
          {
LABEL_225:
            v117 = v3;
            v112 = 0LL;
            if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v98, &v117, 1LL) )
              v112 = v117;
            v113 = PhysicalToLogicalInPlaceRgnWorker(v99, &v117, 1);
            v114 = 0LL;
            if ( v113 )
              v114 = v117;
            if ( v117 != v3 )
              GreCombineRgn(v3, v117, 0LL, 5LL);
            if ( v112 )
              GreDeleteObject(v112);
            if ( v114 )
              GreDeleteObject(v114);
            v95 = v119;
          }
        }
        else if ( (v102 & 0xF) != 2 || (*(_DWORD *)(v100 + 288) & 0xF) != 2 )
        {
          goto LABEL_225;
        }
      }
      if ( (unsigned int)GreCombineRgn(*v97, *v97, v3, 4LL) != 1 && ++v96 < v69 )
        continue;
      v79 = *(_BYTE **)v118;
      goto LABEL_153;
    }
  }
  if ( *(char *)(*((_QWORD *)v4 + 5) + 19LL) < 0 )
  {
    *(_QWORD *)&v131.left = 0LL;
    *(_QWORD *)&v131.right = 0LL;
  }
  v56 = v122;
  if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v122, &v131) )
  {
LABEL_100:
    v57 = *(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL);
    if ( v57 )
      GreCombineRgn(*v56, *v56, v57, 1LL);
    if ( !(_DWORD)v123
      || (v83 = *((_QWORD *)v4 + 13), v84 = 0, v85 = v124, v86 = (__int64)v4, (struct tagWND *)v83 == v124) )
    {
LABEL_103:
      v58 = 1;
      goto LABEL_104;
    }
    v87 = v121;
    while ( 1 )
    {
      v88 = *(_QWORD *)(v83 + 40);
      if ( !*(_QWORD *)(v88 + 168) )
        goto LABEL_167;
      v89 = *(_QWORD *)(v86 + 40);
      if ( (*(_BYTE *)(v89 + 26) & 8) != 0 && (*(_DWORD *)(v89 + 232) & 0x20) == 0 )
        break;
      if ( (v87 & 0x1000000) != 0 )
      {
        v84 = 1;
LABEL_239:
        if ( (*(_WORD *)(v88 + 42) & 0x3FFF) == 0x29D )
          goto LABEL_168;
        goto LABEL_172;
      }
      if ( v84 )
        goto LABEL_239;
LABEL_172:
      v120 = *(struct tagWND **)(v88 + 168);
      if ( (unsigned int)IsDpiBoundaryBetweenWindows(v4, v83) )
      {
        v115 = 0LL;
        if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v83, &v120, 1LL) )
          v115 = v120;
        v90 = PhysicalToLogicalInPlaceRgnWorker(v4, (HRGN *)&v120, 1);
        if ( v90 && v115 )
          GreDeleteObject(v115);
      }
      else
      {
        v90 = PhysicalToLogicalInPlaceRgn(v86, (__int64)&v120);
      }
      v91 = *v56;
      v92 = v120;
      v93 = GreCombineRgn(v91, v91, v120, 1LL) == 1;
      if ( v90 )
        GreDeleteObject(v92);
      if ( v93 )
      {
LABEL_168:
        v3 = v125;
        goto LABEL_103;
      }
      v85 = v124;
LABEL_167:
      v56 = v122;
      v86 = v83;
      v83 = *(_QWORD *)(v83 + 104);
      if ( (struct tagWND *)v83 == v85 )
        goto LABEL_168;
    }
    v84 = 1;
    goto LABEL_239;
  }
LABEL_163:
  SetOrCreateRectRgnIndirectPublic(v122, gZero);
  v58 = 0;
LABEL_104:
  if ( v3 )
    GreDeleteObject(v3);
  if ( (_DWORD)v126 )
    Win32FreePool(v119);
  return v58;
}
