/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x1800193D8 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18004D25C (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180066F20 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18007DB20 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18007F808 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180080494 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180080598 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180089DA0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x18008AF5C (-ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008B108 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18008B9E4 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18008BC4C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18008CC34 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     _lambda_896d46864d60d2b7d5e734e8b1f76c71_::operator() @ 0x18008CCFC (_lambda_896d46864d60d2b7d5e734e8b1f76c71_--operator().c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18008CE68 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x1800C1398 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800C8CE8 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180180990 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1801A8FAC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801C2F28 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801C4660 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CVisual::OnChanged(
        CVisual *a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, GUID *, struct ISwapChainContent **),
        __int64 a4)
{
  __int128 v4; // xmm6
  struct TransformParentData **v5; // r12
  CVisual *v6; // rdi
  int v7; // r13d
  unsigned int v8; // esi
  __int64 v9; // rcx
  char v10; // r14
  char v11; // r15
  char v12; // bl
  __int64 v13; // rbx
  __int64 v14; // rdx
  _BYTE *v15; // rax
  char v16; // cl
  char v17; // dl
  void (__fastcall ***v18)(_QWORD, GUID *, struct ISwapChainContent **); // rbx
  FLOAT v19; // ebx
  __int64 v20; // rax
  _DWORD *v21; // r8
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rsi
  unsigned int v25; // edi
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // r8
  char v31; // al
  _QWORD *v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rax
  _BYTE *v36; // rdx
  unsigned int i; // ecx
  _QWORD ***v38; // rbx
  _QWORD **v39; // rbx
  _QWORD *j; // rsi
  BOOL v41; // edx
  int v42; // eax
  unsigned int v43; // r15d
  CSurfaceBrush *v44; // r14
  int (__fastcall **v45)(_QWORD, GUID *, __int64 *); // rax
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // ecx
  FLOAT height; // xmm2_4
  int v53; // eax
  unsigned int v54; // ecx
  __m128 v55; // xmm0
  __m128 v56; // xmm1
  __m128 v57; // xmm0
  __m128 v58; // xmm1
  __m128 v59; // xmm1
  __m128 v60; // xmm1
  FLOAT width; // xmm0_4
  unsigned int v62; // ebx
  int v63; // eax
  unsigned int v64; // ecx
  void (__fastcall ***v65)(_QWORD, GUID *, _QWORD *); // rcx
  void (__fastcall ***v66)(_QWORD, _QWORD, _QWORD); // r8
  void (__fastcall ***v67)(_QWORD, GUID *, struct ISwapChainContent **); // rbx
  __int64 v68; // r9
  __int64 v69; // r9
  _QWORD *v70; // rsi
  unsigned __int64 v71; // r8
  unsigned __int64 v72; // r13
  __int64 v73; // r15
  __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  __int64 v77; // rax
  _BYTE *v78; // rdx
  __int64 n; // rcx
  _QWORD ***v80; // rax
  _QWORD **v81; // rax
  _QWORD *v82; // rcx
  __int64 v83; // rax
  _BYTE *v84; // rdx
  __int64 ii; // rcx
  _QWORD ***v86; // rax
  _QWORD **v87; // rax
  _QWORD *v88; // rcx
  unsigned int v89; // edx
  __int64 v90; // r9
  int v91; // edx
  unsigned int v92; // r8d
  __int64 v93; // rax
  _BYTE *v94; // rdx
  unsigned int k; // ecx
  struct TransformParentData *v96; // rdx
  unsigned __int64 v97; // r14
  __int64 v98; // r15
  unsigned __int64 v99; // rax
  CVisual *v100; // rcx
  char v101; // dl
  unsigned int v102; // ebx
  __int64 v103; // rsi
  __int64 v104; // rcx
  __int64 v105; // rcx
  int v106; // eax
  unsigned int v107; // ecx
  __int64 v108; // rcx
  _BYTE *v109; // rdx
  unsigned int m; // eax
  _QWORD ***v111; // r14
  _QWORD **v112; // r14
  _QWORD *v113; // rsi
  int v114; // eax
  unsigned int v115; // ecx
  struct CTransform3D *Transform3DEffectNoRef; // rax
  void (__fastcall ***v117)(_QWORD, GUID *, struct ISwapChainContent **); // rcx
  char SwapChainTransformForDirtyRects; // [rsp+30h] [rbp-D0h] BYREF
  char v119; // [rsp+31h] [rbp-CFh] BYREF
  int v120; // [rsp+34h] [rbp-CCh] BYREF
  struct D2D_SIZE_F v121; // [rsp+38h] [rbp-C8h] BYREF
  int v122; // [rsp+40h] [rbp-C0h]
  void (__fastcall ***v123)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall ***v124)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+50h] [rbp-B0h]
  struct ISwapChainContent *v125; // [rsp+58h] [rbp-A8h] BYREF
  void (__fastcall ***v126)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+60h] [rbp-A0h]
  __int64 v127; // [rsp+68h] [rbp-98h] BYREF
  void (__fastcall ***v128)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+70h] [rbp-90h] BYREF
  __int64 v129; // [rsp+78h] [rbp-88h]
  __int64 v130; // [rsp+80h] [rbp-80h] BYREF
  CVisual *v131; // [rsp+88h] [rbp-78h]
  unsigned __int64 v132; // [rsp+90h] [rbp-70h]
  __int64 v133; // [rsp+98h] [rbp-68h]
  __m256i v134; // [rsp+A0h] [rbp-60h]
  __m128 v135; // [rsp+C0h] [rbp-40h]
  _QWORD v136[7]; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v137[4]; // [rsp+110h] [rbp+10h] BYREF
  int v138; // [rsp+150h] [rbp+50h]
  __int64 v139; // [rsp+160h] [rbp+60h] BYREF
  __int64 v140; // [rsp+168h] [rbp+68h]
  __int64 v141; // [rsp+170h] [rbp+70h]
  int v142; // [rsp+178h] [rbp+78h]
  __int64 v143; // [rsp+180h] [rbp+80h] BYREF
  FLOAT v144; // [rsp+188h] [rbp+88h]
  FLOAT v145; // [rsp+18Ch] [rbp+8Ch]
  int v146; // [rsp+190h] [rbp+90h] BYREF
  __int64 v147; // [rsp+194h] [rbp+94h]
  int v148; // [rsp+19Ch] [rbp+9Ch]
  __int128 v149; // [rsp+1A0h] [rbp+A0h] BYREF
  void *lpMem; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE *v151; // [rsp+1B8h] [rbp+B8h]
  int v152; // [rsp+1C0h] [rbp+C0h]
  __int64 v153; // [rsp+1C4h] [rbp+C4h]
  _BYTE v154[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  float v155[10]; // [rsp+210h] [rbp+110h] BYREF
  __int128 v156; // [rsp+240h] [rbp+140h]
  void *retaddr; // [rsp+288h] [rbp+188h]

  v5 = 0LL;
  v122 = a2;
  v131 = a1;
  v126 = a3;
  v6 = a1;
  v120 = 0;
  v7 = 0;
  v127 = 0LL;
  v125 = 0LL;
  v124 = 0LL;
  if ( (_DWORD)a2 == 11 )
  {
    v8 = 2;
    goto LABEL_3;
  }
  if ( (_DWORD)a2 == 1 )
  {
LABEL_71:
    v8 = 4;
    goto LABEL_3;
  }
  if ( (_DWORD)a2 != 3 )
  {
    if ( (_DWORD)a2 == 4 )
    {
      if ( g_DisplayManager )
      {
        v89 = 0;
        if ( *((_DWORD *)g_DisplayManager + 18) )
        {
          v90 = *((_QWORD *)g_DisplayManager + 6);
          while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v90 + 8LL * v89)) )
          {
            v89 = v91 + 1;
            if ( v89 >= v92 )
              goto LABEL_152;
          }
          v7 = 2;
        }
      }
LABEL_152:
      CVisual::OnClipChanged(v6);
LABEL_56:
      v8 = 5;
      goto LABEL_3;
    }
    if ( (_DWORD)a2 == 5 )
    {
      v33 = (_QWORD *)*((_QWORD *)a1 + 57);
      if ( v33 == (_QWORD *)-1LL )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
      *((_QWORD *)a1 + 57) = -1LL;
      if ( v33 )
      {
        v70 = v33;
        do
        {
          if ( v70[2] )
          {
            v71 = (__int64)(v70[4] - v70[3]) >> 4;
            if ( v71 )
              detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
                (__int64)(v70 + 3),
                a2,
                v71);
          }
          v70 = (_QWORD *)v70[10];
        }
        while ( v70 );
      }
      *((_QWORD *)v6 + 57) = v33;
      v34 = *((_QWORD *)v6 + 28);
      if ( *(int *)v34 < 0 )
      {
        v35 = *(unsigned int *)(v34 + 4);
        v36 = (_BYTE *)(v34 + 8);
        for ( i = 0; i < (unsigned int)v35; ++v36 )
        {
          if ( *v36 == 1 )
            break;
          ++i;
        }
        if ( i >= (unsigned int)v35 )
          v38 = 0LL;
        else
          v38 = (_QWORD ***)(v35 + 15 + v34 + 8LL * i - (((_BYTE)v35 + 15) & 7));
        v39 = *v38;
        if ( v39 )
        {
          for ( j = *v39; j != v39; j = (_QWORD *)*j )
            CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(j - 12));
        }
      }
      goto LABEL_42;
    }
    if ( (_DWORD)a2 != 6 )
      goto LABEL_56;
    CVisual::ClearContentTreeDataCaches(a1);
    v122 = 1;
    goto LABEL_71;
  }
  v8 = 1;
LABEL_3:
  v9 = *((_QWORD *)v6 + 32);
  if ( !v9 )
    goto LABEL_16;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 14LL) )
  {
    v13 = *((_QWORD *)v6 + 32);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, 196LL) )
    {
      v11 = 1;
      v12 = 0;
    }
    else
    {
      if ( *(_BYTE *)(v13 + 72) && !*(_QWORD *)(v13 + 64) )
      {
        LOBYTE(v14) = 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 376LL))(v13, v14);
      }
      v15 = *(_BYTE **)(v13 + 64);
      v12 = 0;
      if ( v15 )
      {
        v12 = v15[197];
        v10 = v15[196];
        v11 = v15[198];
      }
    }
  }
  v16 = *((_BYTE *)v6 + 94);
  if ( v12 != ((v16 & 0x10) != 0) )
    *((_BYTE *)v6 + 94) = v16 ^ (v16 ^ (16 * v12)) & 0x10;
  v17 = *((_BYTE *)v6 + 272);
  if ( v10 != (v17 & 1) )
  {
    if ( v10 )
    {
      if ( *((_QWORD *)v6 + 10) )
      {
        CVisual::PropagateBackdropUpdates(*((CVisual **)v6 + 10), 1, 0);
        v17 = *((_BYTE *)v6 + 272);
      }
      v17 |= 1u;
    }
    else
    {
      if ( *((_QWORD *)v6 + 10) )
      {
        CVisual::PropagateBackdropUpdates(*((CVisual **)v6 + 10), -1, 0);
        v17 = *((_BYTE *)v6 + 272);
      }
      v17 &= ~1u;
    }
    *((_BYTE *)v6 + 272) = v17;
  }
  if ( v11 != ((v17 & 2) != 0) )
  {
    v100 = (CVisual *)*((_QWORD *)v6 + 10);
    if ( v11 )
    {
      if ( v100 )
      {
        CVisual::PropagateBackdropUpdates(v100, 0, 1);
        v17 = *((_BYTE *)v6 + 272);
      }
      v101 = v17 | 2;
    }
    else
    {
      if ( v100 )
      {
        CVisual::PropagateBackdropUpdates(v100, 0, -1);
        v17 = *((_BYTE *)v6 + 272);
      }
      v101 = v17 & 0xFD;
    }
    *((_BYTE *)v6 + 272) = v101;
  }
  v124 = (void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **))*((_QWORD *)v6 + 32);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **)))(*v124)[1])(v124);
  v18 = v126;
  if ( v126 != v124 )
    goto LABEL_16;
  v41 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 32) + 232LL))(*((_QWORD *)v6 + 32)) == 0;
  v42 = v8 | 0x10;
  if ( ((*((_DWORD *)v6 + 22) >> 7) & 1) == v41 )
    v42 = v8;
  v8 = v42;
  v43 = v42;
  if ( v122 != 1 )
    goto LABEL_16;
  v44 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v6 + 32) + 48LL))(*((_QWORD *)v6 + 32), 176LL) )
  {
    v44 = (CSurfaceBrush *)*((_QWORD *)v6 + 32);
    v18 = (void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **))*((_QWORD *)v44 + 12);
  }
  if ( v18 )
    (**v18)(v18, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v125);
  if ( v125
    && (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *, CVisual *))(*(_QWORD *)v125 + 216LL))(v125, v6) )
  {
    CVisual::DirtySecondaryRepresentations(v6);
    v102 = 0;
    v103 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 64LL);
    if ( *(_DWORD *)(v103 + 48) )
    {
      do
      {
        v104 = *(_QWORD *)(*(_QWORD *)(v103 + 24) + 8LL * v102);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v104 + 240LL))(v104) )
        {
          v105 = *(_QWORD *)(*(_QWORD *)(v103 + 24) + 8LL * v102);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 224LL))(v105);
        }
        ++v102;
      }
      while ( v102 < *(_DWORD *)(v103 + 48) );
    }
LABEL_42:
    if ( v126 )
    {
      v30 = (_DWORD *)*((_QWORD *)v6 + 28);
      if ( (*v30 & 0x800000) != 0 )
      {
        v93 = (unsigned int)v30[1];
        v94 = v30 + 2;
        for ( k = 0; k < (unsigned int)v93; ++v94 )
        {
          if ( *v94 == 9 )
            break;
          ++k;
        }
        if ( k < (unsigned int)v93 )
          v5 = (struct TransformParentData **)((char *)v30 + 8LL * k - (((_BYTE)v93 + 15) & 7) + v93 + 15);
        v96 = *v5;
        if ( *v5 && v126 == *(void (__fastcall ****)(_QWORD, GUID *, struct ISwapChainContent **))v96 )
        {
          CVisual::ManageTransformParentChildList(v6, v96, (__int64)v30, a4);
          CVisual::OnOuterTransformChanged(v6);
        }
      }
    }
    goto LABEL_44;
  }
  if ( !v18 )
    goto LABEL_16;
  v152 = 4;
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0;
  lpMem = v154;
  v151 = v154;
  v45 = (int (__fastcall **)(_QWORD, GUID *, __int64 *))*v18;
  v153 = 4LL;
  if ( (*v45)(v18, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, &v127) >= 0 )
  {
    v46 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v127 + 24LL))(v127, &v130);
    v120 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x1F2u, 0LL);
    }
    else
    {
      v48 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v127 + 32LL))(v127, &v139);
      v120 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x1F3u, 0LL);
      }
      else
      {
        if ( !v130 )
          goto LABEL_86;
        HIDWORD(v153) = 0;
        v50 = CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
                v130,
                &lpMem);
        v120 = v50;
        if ( v50 >= 0 )
          goto LABEL_86;
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x1F7u, 0LL);
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&lpMem);
    goto LABEL_16;
  }
LABEL_86:
  if ( HIDWORD(v153) || (_DWORD)v139 )
  {
    v138 = 0;
    SwapChainTransformForDirtyRects = 0;
    v119 = 0;
    if ( v44 )
    {
      height = 0.0;
      if ( CVisual::GetEffectiveSize(v6, (float *)&v121, &v121.height) )
      {
        v53 = CSurfaceBrush::ComputeLayout(v44, &v121, 1, (struct CContent::LayoutData *)v155, 0LL);
        v120 = v53;
        if ( v53 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x210u, 0LL);
LABEL_212:
          DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&lpMem);
          v8 = v43;
          goto LABEL_16;
        }
        if ( D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)v155) )
        {
          height = v121.height;
          width = v121.width;
        }
        else
        {
          *(_OWORD *)&v134.m256i_u64[1] = 0LL;
          v133 = 0LL;
          v55 = (__m128)v132;
          v135.m128_u64[1] = 0x3F80000000000000LL;
          v156 = v4;
          v55.m128_f32[0] = v155[0];
          v56 = *(__m128 *)v134.m256i_i8;
          v57 = _mm_shuffle_ps(v55, v55, 225);
          v56.m128_f32[0] = v155[2];
          v134.m256i_i64[3] = 1065353216LL;
          v58 = _mm_shuffle_ps(v56, v56, 225);
          v57.m128_f32[0] = v155[1];
          height = v121.height;
          v58.m128_f32[0] = v155[3];
          v137[1] = _mm_shuffle_ps(v58, v58, 225);
          v59 = v135;
          v138 = 0;
          v59.m128_f32[0] = v155[4];
          v137[0] = _mm_shuffle_ps(v57, v57, 225);
          SwapChainTransformForDirtyRects = 1;
          v60 = _mm_shuffle_ps(v59, v59, 225);
          v60.m128_f32[0] = v155[5];
          v137[2] = *(_OWORD *)&v134.m256i_u64[2];
          width = v121.width;
          v137[3] = _mm_shuffle_ps(v60, v60, 225);
        }
      }
      else
      {
        width = 0.0;
      }
      v144 = width;
      v145 = height;
      v143 = 0LL;
      v119 = 1;
    }
    else if ( v125 )
    {
      v149 = 0LL;
      SwapChainTransformForDirtyRects = CVisual::GetSwapChainTransformForDirtyRects(v125, (struct CMILMatrix *)v137);
      if ( CVisual::GetEffectiveSize(v6, (float *)&v149 + 2, (float *)&v149 + 3) )
        SwapChainTransformForDirtyRects |= (*(__int64 (__fastcall **)(struct ISwapChainContent *, __int128 *, _OWORD *))(*(_QWORD *)v125 + 200LL))(
                                             v125,
                                             &v149,
                                             v137);
    }
    v136[5] = v6;
    v136[0] = &SwapChainTransformForDirtyRects;
    v136[1] = v137;
    v136[2] = &v119;
    v136[3] = &v143;
    v136[4] = &v120;
    if ( (_DWORD)v139 )
    {
      v146 = HIDWORD(v139);
      v147 = v140;
      v148 = v141;
      v106 = lambda_896d46864d60d2b7d5e734e8b1f76c71_::operator()(v136, &v146);
      v120 = v106;
      if ( v106 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v107, 0LL, 0, v106, 0x245u, 0LL);
        goto LABEL_212;
      }
    }
    v62 = 0;
    if ( HIDWORD(v153) )
    {
      while ( 1 )
      {
        v63 = lambda_896d46864d60d2b7d5e734e8b1f76c71_::operator()(v136, (char *)lpMem + 16 * v62);
        v120 = v63;
        if ( v63 < 0 )
          break;
        if ( ++v62 >= HIDWORD(v153) )
          goto LABEL_97;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x24Au, 0LL);
      goto LABEL_212;
    }
LABEL_97:
    v8 = v43 & 0xFFFFFFF3 | 8;
  }
  if ( lpMem != v151 )
    operator delete(lpMem);
LABEL_16:
  LODWORD(v19) = v8 | 0x10;
  LODWORD(v123) = !(v8 & 1);
  v20 = *((_QWORD *)v6 + 3);
  if ( (v8 & 1) == 0 )
    v19 = *(float *)&v8;
  v121.width = v19;
  if ( (v20 & 2) != 0 )
    v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v20) = v20 & 1;
  if ( (_DWORD)v20 )
  {
    v97 = 0LL;
    v98 = (unsigned int)v20;
    do
    {
      v99 = CPtrArrayBase::operator[]((__int64 *)v6 + 3, v97);
      if ( v99 != *((_QWORD *)v6 + 10) )
        (*(void (__fastcall **)(unsigned __int64, bool, CVisual *))(*(_QWORD *)v99 + 64LL))(v99, !(v8 & 1), v6);
      ++v97;
      --v98;
    }
    while ( v98 );
    v19 = v121.width;
  }
  if ( (LOBYTE(v19) & 7) != 0 )
  {
    v21 = (_DWORD *)*((_QWORD *)v6 + 28);
    if ( (*v21 & 0x40000000) != 0 )
    {
      v108 = (unsigned int)v21[1];
      v109 = v21 + 2;
      for ( m = 0; m < (unsigned int)v108; ++v109 )
      {
        if ( *v109 == 2 )
          break;
        ++m;
      }
      v111 = m >= (unsigned int)v108 ? 0LL : (_QWORD ***)((char *)v21 + v108 + 8LL * m - (((_BYTE)v108 + 15) & 7) + 15);
      v112 = *v111;
      if ( v112 )
      {
        v113 = *v112;
        if ( *v112 != v112 )
        {
          while ( 1 )
          {
            v114 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(v113 - 11));
            if ( v114 < 0 )
              break;
            CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(v113 - 11));
            v113 = (_QWORD *)*v113;
            if ( v113 == v112 )
              goto LABEL_23;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v115, 0LL, 0, v114, 0x1424u, 0LL);
        }
      }
    }
LABEL_23:
    if ( v7 )
      CVisual::ResetVisibleRegionForAllInSubtree(v6);
  }
  v22 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 160LL))(v6);
  *((_DWORD *)v6 + 22) |= LODWORD(v19);
  v23 = v22;
  if ( (LOBYTE(v19) & 0xC) != 0 )
  {
    LODWORD(v19) = LODWORD(v19) & 0xFFFFFFB3 | 0x40;
    if ( v22 )
      ++*(_DWORD *)(v22 + 28);
  }
  if ( (LOBYTE(v19) & 2) != 0 )
    LODWORD(v19) = LODWORD(v19) & 0xFFFFFFDD | 0x20;
  v24 = *((_QWORD *)v6 + 10);
  if ( (*((_BYTE *)v6 + 95) & 4) != 0 )
  {
    v25 = (unsigned int)v123;
    do
    {
      if ( !v24 || (LODWORD(v19) & ((int)(*(_DWORD *)(v24 + 88) << 25) >> 25)) == LODWORD(v19) )
        break;
      *(_DWORD *)(v24 + 88) |= LODWORD(v19);
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 160LL))(v24);
      v27 = v26;
      if ( v26 )
      {
        if ( (LOBYTE(v19) & 0x40) != 0 && v26 != v23 )
          ++*(_DWORD *)(v26 + 24);
      }
      else
      {
        v27 = v23;
      }
      v28 = *(_QWORD *)(v24 + 24);
      if ( (v28 & 2) != 0 )
        v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v28) = v28 & 1;
      if ( (_DWORD)v28 )
      {
        v72 = 0LL;
        v129 = (unsigned int)v28;
        v73 = 16LL;
        do
        {
          v74 = *(_QWORD *)(v24 + 24);
          if ( (v74 & 2) != 0 )
            v75 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v75 = *(_QWORD *)(v24 + 24) & 1LL;
          if ( v72 >= v75 )
          {
            v76 = 0LL;
          }
          else if ( v75 == 1 )
          {
            v76 = v74 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            _mm_lfence();
            v76 = *(_QWORD *)((*(_QWORD *)(v24 + 24) & 0xFFFFFFFFFFFFFFFCuLL) + v73);
          }
          if ( v76 != *(_QWORD *)(v24 + 80) )
            (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(*(_QWORD *)v76 + 64LL))(v76, v25, v24);
          ++v72;
          v73 += 8LL;
          --v129;
        }
        while ( v129 );
      }
      v29 = v24;
      v23 = v27;
      v24 = *(_QWORD *)(v24 + 80);
    }
    while ( (*(_BYTE *)(v29 + 95) & 4) != 0 );
    v6 = v131;
  }
  if ( v122 != 2 )
    goto LABEL_42;
  v65 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)v6 + 30);
  if ( v65 )
  {
    v123 = 0LL;
    (**v65)(v65, &GUID_00000000_0000_0000_c000_000000000046, &v123);
    v66 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v123;
    v67 = v126;
    if ( v126 == v123 )
    {
      *((_QWORD *)v6 + 56) = 0LL;
      v68 = *((_QWORD *)v6 + 28);
      if ( *(int *)v68 < 0 )
      {
        v77 = *(unsigned int *)(v68 + 4);
        v78 = (_BYTE *)(v68 + 8);
        for ( n = 0LL; (unsigned int)n < (unsigned int)v77; ++v78 )
        {
          if ( *v78 == 1 )
            break;
          n = (unsigned int)(n + 1);
        }
        if ( (unsigned int)n >= (unsigned int)v77 )
          v80 = 0LL;
        else
          v80 = (_QWORD ***)(v77 + 15 + v68 + 8 * n - (((_BYTE)v77 + 15) & 7));
        v81 = *v80;
        if ( v81 )
        {
          v82 = *v81;
          if ( *v81 != v81 )
          {
            do
            {
              *(v82 - 13) = 0LL;
              v82 = (_QWORD *)*v82;
            }
            while ( v82 != v81 );
            v66 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v123;
          }
        }
      }
      *((_QWORD *)v6 + 63) = 0LL;
      v69 = *((_QWORD *)v6 + 28);
      if ( *(int *)v69 < 0 )
      {
        v83 = *(unsigned int *)(v69 + 4);
        v84 = (_BYTE *)(v69 + 8);
        for ( ii = 0LL; (unsigned int)ii < (unsigned int)v83; ++v84 )
        {
          if ( *v84 == 1 )
            break;
          ii = (unsigned int)(ii + 1);
        }
        if ( (unsigned int)ii >= (unsigned int)v83 )
          v86 = 0LL;
        else
          v86 = (_QWORD ***)(v69 + v83 + 15 + 8 * ii - (((_BYTE)v83 + 15) & 7));
        v87 = *v86;
        if ( v87 )
        {
          v88 = *v87;
          if ( *v87 != v87 )
          {
            do
            {
              *(v88 - 6) = 0LL;
              v88 = (_QWORD *)*v88;
            }
            while ( v88 != v87 );
            v66 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v123;
          }
        }
      }
    }
    if ( v66 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v66)[2])(v66);
  }
  else
  {
    v67 = v126;
  }
  if ( CVisual::GetTransform3DEffectNoRef(v6) )
  {
    v128 = 0LL;
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(v6);
    (**(void (__fastcall ***)(struct CTransform3D *, GUID *, _QWORD *))Transform3DEffectNoRef)(
      Transform3DEffectNoRef,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v128);
    v117 = v128;
    if ( v67 == v128 )
    {
      CVisual::OnInnerTransformChanged(v6);
      v117 = v128;
    }
    if ( v117 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **)))(*v117)[2])(v117);
  }
LABEL_44:
  v31 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 376LL))(v6);
  *((_BYTE *)v6 + 92) &= ~1u;
  *((_BYTE *)v6 + 92) |= v31 & 1;
  if ( v127 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v127 + 16LL))(v127);
  if ( v125 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v125 + 16LL))(v125);
  if ( v124 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **)))(*v124)[2])(v124);
  return 0LL;
}
