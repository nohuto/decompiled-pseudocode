/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C002B770
 * Callers:
 *     CalcVisRgn @ 0x1C002B5D0 (CalcVisRgn.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0034050 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C002A5A8 (IsChildWindowDpiBoundary.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C002A600 (-ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C002AE38 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C002C04C (PhysicalToLogicalInPlaceRect.c)
 *     GreSubtractRgnRectList @ 0x1C0078120 (GreSubtractRgnRectList.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C00FAA00 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C00FC95C (LogicalToPhysicalInPlaceRgn.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C012A498 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1C01AF210 (DpiRectContainsRectWithSubpixel.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01AF2E8 (DpiRectIntersectsRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C01AF81C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C01AF920 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *const a1, HRGN *a2, int a3)
{
  int v3; // r12d
  struct tagWND *v4; // r15
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  LONG right; // edx
  LONG v13; // ecx
  LONG top; // ecx
  LONG bottom; // edx
  struct tagWND *v16; // rdi
  __int64 v17; // rbx
  struct tagWND *v18; // r13
  unsigned __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rax
  LONG left; // edx
  LONG v23; // ecx
  LONG v24; // edx
  LONG v25; // ecx
  char *v26; // rsi
  LONG v27; // ecx
  LONG v28; // edx
  LONG v29; // ecx
  LONG v30; // edx
  struct tagWND *v31; // r14
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  int v34; // r10d
  struct tagWND *v35; // rsi
  int v36; // r13d
  __int64 v37; // rbx
  int v38; // r12d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  LONG *v43; // rdi
  __int64 v44; // rax
  _QWORD *v45; // r13
  HRGN v46; // rbx
  __int64 v47; // r8
  unsigned int v48; // edi
  __int64 v50; // rax
  unsigned int v51; // r12d
  int v52; // r14d
  _BYTE *v53; // rbx
  _QWORD *v54; // rdi
  _OWORD *v55; // r13
  _QWORD *v56; // rsi
  __int64 v57; // r15
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 EmptyRgn; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // r14
  __int64 v65; // rdi
  __int64 v66; // rdi
  int v67; // r12d
  struct tagWND *v68; // r13
  __int64 v69; // rsi
  int v70; // ebx
  __int64 v71; // rdx
  __int64 v72; // r8
  int v73; // r14d
  HRGN v74; // r15
  BOOL v75; // esi
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  unsigned __int16 v77; // ax
  unsigned __int16 v78; // di
  unsigned __int16 v79; // ax
  int v80; // eax
  _BYTE *v81; // rbx
  __int64 v82; // rcx
  HRGN v83; // r14
  int v84; // eax
  HRGN v85; // r15
  HRGN v86; // rsi
  unsigned __int64 v87; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v88; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v89; // [rsp+50h] [rbp-B8h]
  HRGN *v90; // [rsp+58h] [rbp-B0h]
  __int64 v91; // [rsp+60h] [rbp-A8h]
  struct tagWND *v92; // [rsp+68h] [rbp-A0h]
  _QWORD v93[5]; // [rsp+70h] [rbp-98h] BYREF
  HRGN v94; // [rsp+98h] [rbp-70h] BYREF
  _BYTE *v95; // [rsp+A0h] [rbp-68h]
  struct tagWND *v96; // [rsp+A8h] [rbp-60h]
  struct tagRECT v97; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v98[240]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v99[480]; // [rsp+1B8h] [rbp+B0h] BYREF

  v3 = a3;
  v90 = a2;
  v4 = a1;
  LODWORD(v89) = a3;
  v92 = a1;
  LODWORD(v91) = 0;
  memset(v93, 0, sizeof(v93));
  v5 = *((_QWORD *)v4 + 10);
  v6 = 0;
  v7 = 1LL;
  if ( v5 )
  {
    v8 = *((_QWORD *)v4 + 3);
    v9 = 0LL;
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 8);
      if ( v10 )
        v9 = *(_QWORD *)(v10 + 24);
    }
    if ( v5 != v9
      && (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v5 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) >> 8)) & 0x1FF) != 0 )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v4);
      v77 = GetWindowCoordinateSpaceDpi(*((struct tagWND **)v4 + 10));
      v7 = 1LL;
      if ( WindowCoordinateSpaceDpi != v77 )
        v6 = 1;
    }
  }
  v11 = *((_QWORD *)v4 + 5);
  if ( (v3 & 1) != 0 )
  {
    v97 = *(struct tagRECT *)(v11 + 88);
  }
  else
  {
    v97 = *(struct tagRECT *)(v11 + 104);
    right = v97.right;
    v13 = _mm_cvtsi128_si32((__m128i)v97);
    if ( v13 <= *(_DWORD *)(v11 + 88) )
      v13 = *(_DWORD *)(v11 + 88);
    v97.left = v13;
    if ( v97.right >= *(_DWORD *)(v11 + 96) )
      right = *(_DWORD *)(v11 + 96);
    v97.right = right;
    if ( v13 >= right )
      goto LABEL_18;
    top = v97.top;
    bottom = v97.bottom;
    if ( v97.top <= *(_DWORD *)(v11 + 92) )
      top = *(_DWORD *)(v11 + 92);
    v97.top = top;
    if ( v97.bottom >= *(_DWORD *)(v11 + 100) )
      bottom = *(_DWORD *)(v11 + 100);
    v97.bottom = bottom;
    if ( top >= bottom )
    {
LABEL_18:
      *(_QWORD *)&v97.left = 0LL;
      *(_QWORD *)&v97.right = 0LL;
    }
  }
  v16 = v4;
  v17 = *((_QWORD *)v4 + 10);
  v18 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 3) + 8LL) + 24LL) + 80LL);
  v96 = v18;
  if ( !v17 || (struct tagWND *)v17 == v18 && (*(_WORD *)(v11 + 42) & 0x3FFF) != 0x29D )
    goto LABEL_152;
  v19 = v6;
  v87 = v6;
  if ( (struct tagWND *)v17 != v18 )
  {
    while ( 1 )
    {
      if ( *(struct tagWND **)(v17 + 80) == v18 && (*(_WORD *)(*(_QWORD *)(v17 + 40) + 42LL) & 0x3FFF) != 0x29D )
        goto LABEL_152;
      if ( (v3 & 0x1004000) != 0 && (*(_WORD *)(*(_QWORD *)(v17 + 40) + 42LL) & 0x3FFF) == 0x29D )
        break;
      if ( (v3 & 0x4000) != 0 )
      {
        v20 = *(_DWORD *)(*((_QWORD *)v16 + 5) + 24LL);
        if ( (v20 & 0x80000) != 0 || (v20 & 0x20000000) != 0 )
          break;
      }
      if ( (v3 & 0x8000000) != 0 && (*(_WORD *)(*(_QWORD *)(v17 + 40) + 42LL) & 0x3FFF) == 0x29D )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v17) )
          break;
        v19 = v87;
      }
      v21 = *(_QWORD *)(v17 + 40);
      if ( *(_QWORD *)(v21 + 168) )
        LODWORD(v91) = 1;
      v88 = *(_OWORD *)(v21 + 104);
      if ( v19 )
      {
        v26 = (char *)v4 + 208;
        if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v88, v17 + 208, v17, &v97, (char *)v4 + 208, v4) )
          goto LABEL_46;
        LogicalToPhysicalInPlaceRectWithSubpixel(v17, &v88, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v4, &v88, 0LL);
      }
      else
      {
        PhysicalToLogicalInPlaceRect(v16, &v88, v11);
      }
      left = v97.left;
      v23 = v97.right;
      if ( v97.left <= (int)v88 )
        left = v88;
      v97.left = left;
      if ( v97.right >= SDWORD2(v88) )
        v23 = DWORD2(v88);
      v97.right = v23;
      if ( left >= v23 )
        goto LABEL_151;
      v24 = v97.top;
      v25 = v97.bottom;
      if ( v97.top <= SDWORD1(v88) )
        v24 = DWORD1(v88);
      v97.top = v24;
      if ( v97.bottom >= SHIDWORD(v88) )
        v25 = HIDWORD(v88);
      v97.bottom = v25;
      if ( v24 >= v25 )
      {
LABEL_151:
        *(_QWORD *)&v97.left = 0LL;
        *(_QWORD *)&v97.right = 0LL;
        goto LABEL_152;
      }
      v26 = (char *)v4 + 208;
LABEL_46:
      v88 = *(_OWORD *)(*(_QWORD *)(v17 + 40) + 88LL);
      if ( v87 )
      {
        if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v88, v17 + 208, v17, &v97, v26, v4) )
          goto LABEL_58;
        LogicalToPhysicalInPlaceRectWithSubpixel(v17, &v88, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v4, &v88, 0LL);
      }
      else
      {
        PhysicalToLogicalInPlaceRect(v16, &v88, v11);
      }
      v27 = v97.left;
      v28 = v97.right;
      if ( v97.left <= (int)v88 )
        v27 = v88;
      v97.left = v27;
      if ( v97.right >= SDWORD2(v88) )
        v28 = DWORD2(v88);
      v97.right = v28;
      if ( v27 >= v28 )
        goto LABEL_151;
      v29 = v97.top;
      v30 = v97.bottom;
      if ( v97.top <= SDWORD1(v88) )
        v29 = DWORD1(v88);
      v97.top = v29;
      if ( v97.bottom >= SHIDWORD(v88) )
        v30 = HIDWORD(v88);
      v97.bottom = v30;
      if ( v29 >= v30 )
        goto LABEL_151;
LABEL_58:
      v16 = (struct tagWND *)v17;
      v17 = *(_QWORD *)(v17 + 80);
      if ( (struct tagWND *)v17 == v18 )
        break;
      v19 = v87;
      v7 = 1LL;
    }
  }
  v31 = (struct tagWND *)*((_QWORD *)v4 + 10);
  v32 = 0LL;
  v93[3] = v98;
  HIDWORD(v93[0]) = 0;
  v33 = v3 & 0x10;
  v93[2] = v98;
  v34 = 30;
  LODWORD(v93[1]) = 30;
  v35 = v4;
  if ( v31 != v18 )
  {
    v36 = v3 & 0x4000;
    while ( !v36 || (*(_BYTE *)(*((_QWORD *)v35 + 5) + 27LL) & 0x20) == 0 )
    {
      if ( (_DWORD)v33 )
      {
        v37 = *((_QWORD *)v31 + 11);
        if ( (struct tagWND *)v37 != v35 )
        {
          v11 = *((_QWORD *)v4 + 10);
          v38 = 0;
          if ( v11 )
          {
            v39 = *((_QWORD *)v4 + 3);
            v40 = 0LL;
            if ( v39 )
            {
              v41 = *(_QWORD *)(v39 + 8);
              if ( v41 )
                v40 = *(_QWORD *)(v41 + 24);
            }
            if ( v11 != v40
              && (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) >> 8)) & 0x1FF) != 0 )
            {
              v78 = GetWindowCoordinateSpaceDpi(v4);
              v79 = GetWindowCoordinateSpaceDpi(*((struct tagWND **)v4 + 10));
              v32 = HIDWORD(v93[0]);
              v34 = v93[1];
              if ( v78 != v79 )
                v38 = 1;
            }
          }
          for ( ; v37; v37 = *(_QWORD *)(v37 + 64) )
          {
            if ( (struct tagWND *)v37 == v35 )
              break;
            v42 = *(_QWORD *)(v37 + 40);
            v43 = (LONG *)(v42 + 88);
            if ( (*(_BYTE *)(v42 + 31) & 0x10) != 0
              && (*(_BYTE *)(v42 + 26) & 8) == 0
              && (*(_BYTE *)(v42 + 24) & 0x20) == 0 )
            {
              if ( v38 )
              {
                v80 = DpiRectIntersectsRectWithSubpixel(v42 + 88, v37 + 208, v37, &v97, (char *)v4 + 208, v4);
                v32 = HIDWORD(v93[0]);
                v34 = v93[1];
                if ( !v80 )
                  continue;
              }
              else if ( v97.left >= *(_DWORD *)(v42 + 96)
                     || *v43 >= v97.right
                     || v97.top >= *(_DWORD *)(v42 + 100)
                     || *(_DWORD *)(v42 + 92) >= v97.bottom )
              {
                continue;
              }
              if ( *v43 < v43[2] && v43[1] < v43[3] )
              {
                if ( (_DWORD)v32 == v34 )
                {
                  if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)v93) )
                    goto LABEL_152;
                  LODWORD(v32) = HIDWORD(v93[0]);
                  v34 = v93[1];
                }
                v50 = (int)v32;
                v32 = (unsigned int)(v32 + 1);
                HIDWORD(v93[0]) = v32;
                *(_QWORD *)(v93[2] + 8 * v50) = v37;
              }
            }
          }
        }
      }
      v44 = *((_QWORD *)v31 + 5);
      v35 = v31;
      v31 = (struct tagWND *)*((_QWORD *)v31 + 10);
      v33 = *(_BYTE *)(v44 + 31) & 4;
      if ( v31 == v96 )
        break;
    }
    LOBYTE(v3) = v89;
  }
  if ( (v3 & 8) != 0 )
  {
    v33 = *((_QWORD *)v4 + 11);
    if ( v33 )
    {
      if ( !(unsigned int)ExcludeWindowRects(v4, (struct tagWND *)v33, 0LL, &v97, (struct _CalcVisRgnData *)v93) )
        goto LABEL_152;
      v32 = HIDWORD(v93[0]);
    }
  }
  if ( (int)v32 <= 0 )
  {
    if ( *(char *)(*((_QWORD *)v4 + 5) + 19LL) < 0 )
    {
      *(_QWORD *)&v97.left = 0LL;
      *(_QWORD *)&v97.right = 0LL;
    }
    v45 = v90;
    if ( !(unsigned int)SetOrCreateRectRgnIndirectPublic(v90, &v97, v11, v32) )
      goto LABEL_153;
    v46 = (HRGN)v93[4];
    *(_QWORD *)&v88 = v93[4];
    goto LABEL_84;
  }
  v51 = 0;
  v52 = 0;
  if ( (int)v32 <= 30 )
  {
    v53 = v99;
    v95 = v99;
LABEL_109:
    if ( (int)v32 > 0 )
    {
      v54 = (_QWORD *)v93[2];
      v55 = v53;
      v56 = (_QWORD *)v93[2];
      v57 = (unsigned int)v32;
      do
      {
        v33 = (int)v51;
        v58 = *(_QWORD *)(*v54 + 40LL);
        if ( *(_QWORD *)(v58 + 168) )
        {
          ++v52;
          *v56++ = *v54;
        }
        else
        {
          ++v51;
          *v55++ = *(_OWORD *)(v58 + 88);
          if ( v87 )
          {
            v81 = &v53[16 * v33];
            LogicalToPhysicalInPlaceRectWithSubpixel(*v54, v81, 0LL);
            PhysicalToLogicalInPlaceRectWithSubpixel(v92, v81, 0LL);
            v53 = v95;
          }
        }
        ++v54;
        --v57;
      }
      while ( v57 );
      v4 = v92;
    }
    v45 = v90;
    v59 = (__int64)*v90;
    if ( !*v90 )
    {
      EmptyRgn = CreateEmptyRgn(0LL, v33);
      *v45 = EmptyRgn;
      v59 = EmptyRgn;
    }
    if ( v51 )
      GreSubtractRgnRectList(v59, &v97, v53, v51);
    else
      SetRectRgnIndirect(v59, &v97);
    v46 = (HRGN)v93[4];
    *(_QWORD *)&v88 = v93[4];
    if ( !v93[4] )
    {
      v46 = (HRGN)CreateEmptyRgn(v62, v61);
      *(_QWORD *)&v88 = v46;
    }
    v63 = v52;
    if ( v52 > 0 )
    {
      v64 = v93[2];
      v65 = 0LL;
      do
      {
        SetRectRgnIndirect(v46, *(_QWORD *)(*(_QWORD *)(v64 + 8 * v65) + 40LL) + 88LL);
        GreCombineRgn(v46, v46, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 8 * v65) + 40LL) + 168LL), 1LL);
        if ( v87 )
        {
          v82 = *(_QWORD *)(v64 + 8 * v65);
          v94 = v46;
          v83 = 0LL;
          if ( (unsigned int)LogicalToPhysicalInPlaceRgn(v82, &v94) )
            v83 = v94;
          v84 = PhysicalToLogicalInPlaceRgn((__int64)v4, &v94);
          v85 = 0LL;
          if ( v84 )
            v85 = v94;
          if ( v94 != v46 )
            GreCombineRgn(v46, v94, 0LL, 5LL);
          if ( v83 )
            GreDeleteObject(v83);
          if ( v85 )
            GreDeleteObject(v85);
          v64 = v93[2];
          v4 = v92;
        }
        if ( (unsigned int)GreCombineRgn(*v45, *v45, v46, 4LL) == 1 )
          break;
        ++v65;
      }
      while ( v65 < v63 );
    }
    if ( v95 != v99 )
      Win32FreePool(v95);
LABEL_84:
    v47 = *(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL);
    if ( v47 )
      GreCombineRgn(*v45, *v45, v47, 1LL);
    if ( !(_DWORD)v91
      || (v66 = *((_QWORD *)v4 + 10), v67 = 0, v68 = v96, v69 = (__int64)v4, (struct tagWND *)v66 == v96) )
    {
LABEL_87:
      v48 = 1;
      goto LABEL_88;
    }
    v70 = v89;
    while ( 1 )
    {
      v71 = *(_QWORD *)(v66 + 40);
      if ( !*(_QWORD *)(v71 + 168) )
        goto LABEL_140;
      v72 = *(_QWORD *)(v69 + 40);
      if ( (*(_BYTE *)(v72 + 26) & 8) != 0 && (*(_DWORD *)(v72 + 232) & 0x20) == 0 )
        break;
      if ( (v70 & 0x1000000) != 0 )
      {
        v67 = 1;
LABEL_184:
        if ( (*(_WORD *)(v71 + 42) & 0x3FFF) == 0x29D )
          goto LABEL_141;
        goto LABEL_145;
      }
      if ( v67 )
        goto LABEL_184;
LABEL_145:
      v87 = *(_QWORD *)(v71 + 168);
      if ( (unsigned int)IsChildWindowDpiBoundary(v4) )
      {
        v86 = 0LL;
        if ( (unsigned int)LogicalToPhysicalInPlaceRgn(v66, &v87) )
          v86 = (HRGN)v87;
        v73 = PhysicalToLogicalInPlaceRgn((__int64)v4, (HRGN *)&v87);
        if ( v73 && v86 )
          GreDeleteObject(v86);
      }
      else
      {
        v73 = PhysicalToLogicalInPlaceRgn(v69, (HRGN *)&v87);
      }
      v74 = (HRGN)v87;
      v75 = GreCombineRgn(*v90, *v90, v87, 1LL) == 1;
      if ( v73 )
        GreDeleteObject(v74);
      if ( v75 )
      {
LABEL_141:
        v46 = (HRGN)v88;
        goto LABEL_87;
      }
      v4 = v92;
LABEL_140:
      v69 = v66;
      v66 = *(_QWORD *)(v66 + 80);
      if ( (struct tagWND *)v66 == v68 )
        goto LABEL_141;
    }
    v67 = 1;
    goto LABEL_184;
  }
  v95 = (_BYTE *)Win32AllocPoolWithQuota(16LL * (int)v32, 1769370453LL);
  v53 = v95;
  if ( v95 )
  {
    LODWORD(v32) = HIDWORD(v93[0]);
    goto LABEL_109;
  }
LABEL_152:
  v45 = v90;
LABEL_153:
  SetOrCreateRectRgnIndirectPublic(v45, gZero, v11, v7);
  v46 = (HRGN)v93[4];
  v48 = 0;
LABEL_88:
  if ( v46 )
    GreDeleteObject(v46);
  if ( LODWORD(v93[0]) )
    Win32FreePool(v93[2]);
  return v48;
}
