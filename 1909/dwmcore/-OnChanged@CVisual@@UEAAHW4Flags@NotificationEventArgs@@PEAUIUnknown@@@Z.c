/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800671F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x180017CA8 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180037458 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800651BC (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180066EA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180066F00 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180067EE4 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     _lambda_896d46864d60d2b7d5e734e8b1f76c71_::operator() @ 0x18006A76C (_lambda_896d46864d60d2b7d5e734e8b1f76c71_--operator().c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18006A8D8 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x180078B14 (-ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180078E34 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x18007903C (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18007BCD4 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18008C790 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A41E4 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800B9BD0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x1800C0B08 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800C85D8 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017F290 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1801A76EC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801C1788 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801C2EC0 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CVisual::OnChanged(
        CVisual *a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, GUID *, struct ISwapChainContent **))
{
  __int128 v3; // xmm6
  struct TransformParentData **v4; // r12
  CVisual *v5; // rdi
  int v6; // r13d
  unsigned int v7; // esi
  __int64 v8; // rcx
  char v9; // r14
  char v10; // r15
  char v11; // bl
  __int64 v12; // rbx
  __int64 v13; // rdx
  _BYTE *v14; // rax
  char v15; // cl
  char v16; // dl
  void (__fastcall ***v17)(_QWORD, GUID *, struct ISwapChainContent **); // rbx
  FLOAT v18; // ebx
  __int64 v19; // rax
  _DWORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rsi
  unsigned int v24; // edi
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD *v29; // r8
  char v30; // al
  _QWORD *v32; // rbx
  __int64 v33; // r8
  __int64 v34; // rax
  _BYTE *v35; // rdx
  unsigned int i; // ecx
  _QWORD ***v37; // rbx
  _QWORD **v38; // rbx
  _QWORD *j; // rsi
  BOOL v40; // edx
  int v41; // eax
  unsigned int v42; // r15d
  CSurfaceBrush *v43; // r14
  int (__fastcall **v44)(_QWORD, GUID *, __int64 *); // rax
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // eax
  unsigned int v50; // ecx
  FLOAT height; // xmm2_4
  int v52; // eax
  unsigned int v53; // ecx
  __m128 v54; // xmm0
  __m128 v55; // xmm1
  __m128 v56; // xmm0
  __m128 v57; // xmm1
  __m128 v58; // xmm1
  __m128 v59; // xmm1
  FLOAT width; // xmm0_4
  unsigned int v61; // ebx
  int v62; // eax
  unsigned int v63; // ecx
  void (__fastcall ***v64)(_QWORD, GUID *, _QWORD *); // rcx
  void (__fastcall ***v65)(_QWORD, _QWORD, _QWORD); // r8
  void (__fastcall ***v66)(_QWORD, GUID *, struct ISwapChainContent **); // rbx
  __int64 v67; // r9
  __int64 v68; // r9
  _QWORD *v69; // rsi
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // r13
  __int64 v72; // r15
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  _BYTE *v77; // rdx
  __int64 n; // rcx
  _QWORD ***v79; // rax
  _QWORD **v80; // rax
  _QWORD *v81; // rcx
  __int64 v82; // rax
  _BYTE *v83; // rdx
  __int64 ii; // rcx
  _QWORD ***v85; // rax
  _QWORD **v86; // rax
  _QWORD *v87; // rcx
  unsigned int v88; // edx
  __int64 v89; // r9
  int v90; // edx
  unsigned int v91; // r8d
  __int64 v92; // rax
  _BYTE *v93; // rdx
  unsigned int k; // ecx
  struct TransformParentData *v95; // rdx
  unsigned __int64 v96; // r14
  __int64 v97; // r15
  unsigned __int64 v98; // rax
  CVisual *v99; // rcx
  char v100; // dl
  unsigned int v101; // ebx
  __int64 v102; // rsi
  __int64 v103; // rcx
  __int64 v104; // rcx
  int v105; // eax
  unsigned int v106; // ecx
  __int64 v107; // rcx
  _BYTE *v108; // rdx
  unsigned int m; // eax
  _QWORD ***v110; // r14
  _QWORD **v111; // r14
  _QWORD *v112; // rsi
  int v113; // eax
  unsigned int v114; // ecx
  struct CTransform3D *Transform3DEffectNoRef; // rax
  void (__fastcall ***v116)(_QWORD, GUID *, struct ISwapChainContent **); // rcx
  char SwapChainTransformForDirtyRects; // [rsp+30h] [rbp-D0h] BYREF
  char v118; // [rsp+31h] [rbp-CFh] BYREF
  int v119; // [rsp+34h] [rbp-CCh] BYREF
  struct D2D_SIZE_F v120; // [rsp+38h] [rbp-C8h] BYREF
  int v121; // [rsp+40h] [rbp-C0h]
  void (__fastcall ***v122)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall ***v123)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+50h] [rbp-B0h]
  struct ISwapChainContent *v124; // [rsp+58h] [rbp-A8h] BYREF
  void (__fastcall ***v125)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+60h] [rbp-A0h]
  __int64 v126; // [rsp+68h] [rbp-98h] BYREF
  void (__fastcall ***v127)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+70h] [rbp-90h] BYREF
  __int64 v128; // [rsp+78h] [rbp-88h]
  __int64 v129; // [rsp+80h] [rbp-80h] BYREF
  CVisual *v130; // [rsp+88h] [rbp-78h]
  unsigned __int64 v131; // [rsp+90h] [rbp-70h]
  __int64 v132; // [rsp+98h] [rbp-68h]
  __m256i v133; // [rsp+A0h] [rbp-60h]
  __m128 v134; // [rsp+C0h] [rbp-40h]
  _QWORD v135[7]; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v136[4]; // [rsp+110h] [rbp+10h] BYREF
  int v137; // [rsp+150h] [rbp+50h]
  __int64 v138; // [rsp+160h] [rbp+60h] BYREF
  __int64 v139; // [rsp+168h] [rbp+68h]
  __int64 v140; // [rsp+170h] [rbp+70h]
  int v141; // [rsp+178h] [rbp+78h]
  __int64 v142; // [rsp+180h] [rbp+80h] BYREF
  FLOAT v143; // [rsp+188h] [rbp+88h]
  FLOAT v144; // [rsp+18Ch] [rbp+8Ch]
  int v145; // [rsp+190h] [rbp+90h] BYREF
  __int64 v146; // [rsp+194h] [rbp+94h]
  int v147; // [rsp+19Ch] [rbp+9Ch]
  __int128 v148; // [rsp+1A0h] [rbp+A0h] BYREF
  void *lpMem; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE *v150; // [rsp+1B8h] [rbp+B8h]
  int v151; // [rsp+1C0h] [rbp+C0h]
  __int64 v152; // [rsp+1C4h] [rbp+C4h]
  _BYTE v153[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  float v154[10]; // [rsp+210h] [rbp+110h] BYREF
  __int128 v155; // [rsp+240h] [rbp+140h]
  void *retaddr; // [rsp+288h] [rbp+188h]

  v4 = 0LL;
  v121 = a2;
  v130 = a1;
  v125 = a3;
  v5 = a1;
  v119 = 0;
  v6 = 0;
  v126 = 0LL;
  v124 = 0LL;
  v123 = 0LL;
  if ( (_DWORD)a2 == 11 )
  {
    v7 = 2;
    goto LABEL_3;
  }
  if ( (_DWORD)a2 == 1 )
  {
LABEL_71:
    v7 = 4;
    goto LABEL_3;
  }
  if ( (_DWORD)a2 != 3 )
  {
    if ( (_DWORD)a2 == 4 )
    {
      if ( g_DisplayManager )
      {
        v88 = 0;
        if ( *((_DWORD *)g_DisplayManager + 18) )
        {
          v89 = *((_QWORD *)g_DisplayManager + 6);
          while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v89 + 8LL * v88)) )
          {
            v88 = v90 + 1;
            if ( v88 >= v91 )
              goto LABEL_152;
          }
          v6 = 2;
        }
      }
LABEL_152:
      CVisual::OnClipChanged(v5);
LABEL_56:
      v7 = 5;
      goto LABEL_3;
    }
    if ( (_DWORD)a2 == 5 )
    {
      v32 = (_QWORD *)*((_QWORD *)a1 + 57);
      if ( v32 == (_QWORD *)-1LL )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
      *((_QWORD *)a1 + 57) = -1LL;
      if ( v32 )
      {
        v69 = v32;
        do
        {
          if ( v69[2] )
          {
            v70 = (__int64)(v69[4] - v69[3]) >> 4;
            if ( v70 )
              detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
                (__int64)(v69 + 3),
                a2,
                v70);
          }
          v69 = (_QWORD *)v69[10];
        }
        while ( v69 );
      }
      *((_QWORD *)v5 + 57) = v32;
      v33 = *((_QWORD *)v5 + 28);
      if ( *(int *)v33 < 0 )
      {
        v34 = *(unsigned int *)(v33 + 4);
        v35 = (_BYTE *)(v33 + 8);
        for ( i = 0; i < (unsigned int)v34; ++v35 )
        {
          if ( *v35 == 1 )
            break;
          ++i;
        }
        if ( i >= (unsigned int)v34 )
          v37 = 0LL;
        else
          v37 = (_QWORD ***)(v34 + 15 + v33 + 8LL * i - (((_BYTE)v34 + 15) & 7));
        v38 = *v37;
        if ( v38 )
        {
          for ( j = *v38; j != v38; j = (_QWORD *)*j )
            CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(j - 12));
        }
      }
      goto LABEL_42;
    }
    if ( (_DWORD)a2 != 6 )
      goto LABEL_56;
    CVisual::ClearContentTreeDataCaches(a1);
    v121 = 1;
    goto LABEL_71;
  }
  v7 = 1;
LABEL_3:
  v8 = *((_QWORD *)v5 + 32);
  if ( !v8 )
    goto LABEL_16;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, 14LL) )
  {
    v12 = *((_QWORD *)v5 + 32);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 48LL))(v12, 196LL) )
    {
      v10 = 1;
      v11 = 0;
    }
    else
    {
      if ( *(_BYTE *)(v12 + 72) && !*(_QWORD *)(v12 + 64) )
      {
        LOBYTE(v13) = 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 376LL))(v12, v13);
      }
      v14 = *(_BYTE **)(v12 + 64);
      v11 = 0;
      if ( v14 )
      {
        v11 = v14[197];
        v9 = v14[196];
        v10 = v14[198];
      }
    }
  }
  v15 = *((_BYTE *)v5 + 94);
  if ( v11 != ((v15 & 0x10) != 0) )
    *((_BYTE *)v5 + 94) = v15 ^ (v15 ^ (16 * v11)) & 0x10;
  v16 = *((_BYTE *)v5 + 272);
  if ( v9 != (v16 & 1) )
  {
    if ( v9 )
    {
      if ( *((_QWORD *)v5 + 10) )
      {
        CVisual::PropagateBackdropUpdates(*((CVisual **)v5 + 10), 1, 0);
        v16 = *((_BYTE *)v5 + 272);
      }
      v16 |= 1u;
    }
    else
    {
      if ( *((_QWORD *)v5 + 10) )
      {
        CVisual::PropagateBackdropUpdates(*((CVisual **)v5 + 10), -1, 0);
        v16 = *((_BYTE *)v5 + 272);
      }
      v16 &= ~1u;
    }
    *((_BYTE *)v5 + 272) = v16;
  }
  if ( v10 != ((v16 & 2) != 0) )
  {
    v99 = (CVisual *)*((_QWORD *)v5 + 10);
    if ( v10 )
    {
      if ( v99 )
      {
        CVisual::PropagateBackdropUpdates(v99, 0, 1);
        v16 = *((_BYTE *)v5 + 272);
      }
      v100 = v16 | 2;
    }
    else
    {
      if ( v99 )
      {
        CVisual::PropagateBackdropUpdates(v99, 0, -1);
        v16 = *((_BYTE *)v5 + 272);
      }
      v100 = v16 & 0xFD;
    }
    *((_BYTE *)v5 + 272) = v100;
  }
  v123 = (void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **))*((_QWORD *)v5 + 32);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **)))(*v123)[1])(v123);
  v17 = v125;
  if ( v125 != v123 )
    goto LABEL_16;
  v40 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 32) + 232LL))(*((_QWORD *)v5 + 32)) == 0;
  v41 = v7 | 0x10;
  if ( ((*((_DWORD *)v5 + 22) >> 7) & 1) == v40 )
    v41 = v7;
  v7 = v41;
  v42 = v41;
  if ( v121 != 1 )
    goto LABEL_16;
  v43 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v5 + 32) + 48LL))(*((_QWORD *)v5 + 32), 176LL) )
  {
    v43 = (CSurfaceBrush *)*((_QWORD *)v5 + 32);
    v17 = (void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **))*((_QWORD *)v43 + 12);
  }
  if ( v17 )
    (**v17)(v17, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v124);
  if ( v124
    && (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *, CVisual *))(*(_QWORD *)v124 + 216LL))(v124, v5) )
  {
    CVisual::DirtySecondaryRepresentations(v5);
    v101 = 0;
    v102 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 64LL);
    if ( *(_DWORD *)(v102 + 48) )
    {
      do
      {
        v103 = *(_QWORD *)(*(_QWORD *)(v102 + 24) + 8LL * v101);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v103 + 240LL))(v103) )
        {
          v104 = *(_QWORD *)(*(_QWORD *)(v102 + 24) + 8LL * v101);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 224LL))(v104);
        }
        ++v101;
      }
      while ( v101 < *(_DWORD *)(v102 + 48) );
    }
LABEL_42:
    if ( v125 )
    {
      v29 = (_DWORD *)*((_QWORD *)v5 + 28);
      if ( (*v29 & 0x800000) != 0 )
      {
        v92 = (unsigned int)v29[1];
        v93 = v29 + 2;
        for ( k = 0; k < (unsigned int)v92; ++v93 )
        {
          if ( *v93 == 9 )
            break;
          ++k;
        }
        if ( k < (unsigned int)v92 )
          v4 = (struct TransformParentData **)((char *)v29 + 8LL * k - (((_BYTE)v92 + 15) & 7) + v92 + 15);
        v95 = *v4;
        if ( *v4 && v125 == *(void (__fastcall ****)(_QWORD, GUID *, struct ISwapChainContent **))v95 )
        {
          CVisual::ManageTransformParentChildList(v5, v95);
          CVisual::OnOuterTransformChanged(v5);
        }
      }
    }
    goto LABEL_44;
  }
  if ( !v17 )
    goto LABEL_16;
  v151 = 4;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0;
  lpMem = v153;
  v150 = v153;
  v44 = (int (__fastcall **)(_QWORD, GUID *, __int64 *))*v17;
  v152 = 4LL;
  if ( (*v44)(v17, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, &v126) >= 0 )
  {
    v45 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v126 + 24LL))(v126, &v129);
    v119 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x1F2u, 0LL);
    }
    else
    {
      v47 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v126 + 32LL))(v126, &v138);
      v119 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x1F3u, 0LL);
      }
      else
      {
        if ( !v129 )
          goto LABEL_86;
        HIDWORD(v152) = 0;
        v49 = CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
                v129,
                &lpMem);
        v119 = v49;
        if ( v49 >= 0 )
          goto LABEL_86;
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x1F7u, 0LL);
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&lpMem);
    goto LABEL_16;
  }
LABEL_86:
  if ( HIDWORD(v152) || (_DWORD)v138 )
  {
    v137 = 0;
    SwapChainTransformForDirtyRects = 0;
    v118 = 0;
    if ( v43 )
    {
      height = 0.0;
      if ( CVisual::GetEffectiveSize(v5, (float *)&v120, &v120.height) )
      {
        v52 = CSurfaceBrush::ComputeLayout(v43, &v120, 1, (struct CContent::LayoutData *)v154, 0LL);
        v119 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x210u, 0LL);
LABEL_212:
          DynArrayImpl<0>::~DynArrayImpl<0>(&lpMem);
          v7 = v42;
          goto LABEL_16;
        }
        if ( D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)v154) )
        {
          height = v120.height;
          width = v120.width;
        }
        else
        {
          *(_OWORD *)&v133.m256i_u64[1] = 0LL;
          v132 = 0LL;
          v54 = (__m128)v131;
          v134.m128_u64[1] = 0x3F80000000000000LL;
          v155 = v3;
          v54.m128_f32[0] = v154[0];
          v55 = *(__m128 *)v133.m256i_i8;
          v56 = _mm_shuffle_ps(v54, v54, 225);
          v55.m128_f32[0] = v154[2];
          v133.m256i_i64[3] = 1065353216LL;
          v57 = _mm_shuffle_ps(v55, v55, 225);
          v56.m128_f32[0] = v154[1];
          height = v120.height;
          v57.m128_f32[0] = v154[3];
          v136[1] = _mm_shuffle_ps(v57, v57, 225);
          v58 = v134;
          v137 = 0;
          v58.m128_f32[0] = v154[4];
          v136[0] = _mm_shuffle_ps(v56, v56, 225);
          SwapChainTransformForDirtyRects = 1;
          v59 = _mm_shuffle_ps(v58, v58, 225);
          v59.m128_f32[0] = v154[5];
          v136[2] = *(_OWORD *)&v133.m256i_u64[2];
          width = v120.width;
          v136[3] = _mm_shuffle_ps(v59, v59, 225);
        }
      }
      else
      {
        width = 0.0;
      }
      v143 = width;
      v144 = height;
      v142 = 0LL;
      v118 = 1;
    }
    else if ( v124 )
    {
      v148 = 0LL;
      SwapChainTransformForDirtyRects = CVisual::GetSwapChainTransformForDirtyRects(v124, (struct CMILMatrix *)v136);
      if ( CVisual::GetEffectiveSize(v5, (float *)&v148 + 2, (float *)&v148 + 3) )
        SwapChainTransformForDirtyRects |= (*(__int64 (__fastcall **)(struct ISwapChainContent *, __int128 *, _OWORD *))(*(_QWORD *)v124 + 200LL))(
                                             v124,
                                             &v148,
                                             v136);
    }
    v135[5] = v5;
    v135[0] = &SwapChainTransformForDirtyRects;
    v135[1] = v136;
    v135[2] = &v118;
    v135[3] = &v142;
    v135[4] = &v119;
    if ( (_DWORD)v138 )
    {
      v145 = HIDWORD(v138);
      v146 = v139;
      v147 = v140;
      v105 = lambda_896d46864d60d2b7d5e734e8b1f76c71_::operator()(v135, &v145);
      v119 = v105;
      if ( v105 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v106, 0LL, 0, v105, 0x245u, 0LL);
        goto LABEL_212;
      }
    }
    v61 = 0;
    if ( HIDWORD(v152) )
    {
      while ( 1 )
      {
        v62 = lambda_896d46864d60d2b7d5e734e8b1f76c71_::operator()(v135, (char *)lpMem + 16 * v61);
        v119 = v62;
        if ( v62 < 0 )
          break;
        if ( ++v61 >= HIDWORD(v152) )
          goto LABEL_97;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x24Au, 0LL);
      goto LABEL_212;
    }
LABEL_97:
    v7 = v42 & 0xFFFFFFF3 | 8;
  }
  if ( lpMem != v150 )
    operator delete(lpMem);
LABEL_16:
  LODWORD(v18) = v7 | 0x10;
  LODWORD(v122) = !(v7 & 1);
  v19 = *((_QWORD *)v5 + 3);
  if ( (v7 & 1) == 0 )
    v18 = *(float *)&v7;
  v120.width = v18;
  if ( (v19 & 2) != 0 )
    v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v19) = v19 & 1;
  if ( (_DWORD)v19 )
  {
    v96 = 0LL;
    v97 = (unsigned int)v19;
    do
    {
      v98 = CPtrArrayBase::operator[]((__int64 *)v5 + 3, v96);
      if ( v98 != *((_QWORD *)v5 + 10) )
        (*(void (__fastcall **)(unsigned __int64, bool, CVisual *))(*(_QWORD *)v98 + 64LL))(v98, !(v7 & 1), v5);
      ++v96;
      --v97;
    }
    while ( v97 );
    v18 = v120.width;
  }
  if ( (LOBYTE(v18) & 7) != 0 )
  {
    v20 = (_DWORD *)*((_QWORD *)v5 + 28);
    if ( (*v20 & 0x40000000) != 0 )
    {
      v107 = (unsigned int)v20[1];
      v108 = v20 + 2;
      for ( m = 0; m < (unsigned int)v107; ++v108 )
      {
        if ( *v108 == 2 )
          break;
        ++m;
      }
      v110 = m >= (unsigned int)v107 ? 0LL : (_QWORD ***)((char *)v20 + v107 + 8LL * m - (((_BYTE)v107 + 15) & 7) + 15);
      v111 = *v110;
      if ( v111 )
      {
        v112 = *v111;
        if ( *v111 != v111 )
        {
          while ( 1 )
          {
            v113 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(v112 - 11));
            if ( v113 < 0 )
              break;
            CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(v112 - 11));
            v112 = (_QWORD *)*v112;
            if ( v112 == v111 )
              goto LABEL_23;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, v113, 0x1424u, 0LL);
        }
      }
    }
LABEL_23:
    if ( v6 )
      CVisual::ResetVisibleRegionForAllInSubtree(v5);
  }
  v21 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v5 + 160LL))(v5);
  *((_DWORD *)v5 + 22) |= LODWORD(v18);
  v22 = v21;
  if ( (LOBYTE(v18) & 0xC) != 0 )
  {
    LODWORD(v18) = LODWORD(v18) & 0xFFFFFFB3 | 0x40;
    if ( v21 )
      ++*(_DWORD *)(v21 + 28);
  }
  if ( (LOBYTE(v18) & 2) != 0 )
    LODWORD(v18) = LODWORD(v18) & 0xFFFFFFDD | 0x20;
  v23 = *((_QWORD *)v5 + 10);
  if ( (*((_BYTE *)v5 + 95) & 4) != 0 )
  {
    v24 = (unsigned int)v122;
    do
    {
      if ( !v23 || (LODWORD(v18) & ((int)(*(_DWORD *)(v23 + 88) << 25) >> 25)) == LODWORD(v18) )
        break;
      *(_DWORD *)(v23 + 88) |= LODWORD(v18);
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 160LL))(v23);
      v26 = v25;
      if ( v25 )
      {
        if ( (LOBYTE(v18) & 0x40) != 0 && v25 != v22 )
          ++*(_DWORD *)(v25 + 24);
      }
      else
      {
        v26 = v22;
      }
      v27 = *(_QWORD *)(v23 + 24);
      if ( (v27 & 2) != 0 )
        v27 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v27) = v27 & 1;
      if ( (_DWORD)v27 )
      {
        v71 = 0LL;
        v128 = (unsigned int)v27;
        v72 = 16LL;
        do
        {
          v73 = *(_QWORD *)(v23 + 24);
          if ( (v73 & 2) != 0 )
            v74 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v74 = *(_QWORD *)(v23 + 24) & 1LL;
          if ( v71 >= v74 )
          {
            v75 = 0LL;
          }
          else if ( v74 == 1 )
          {
            v75 = v73 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            _mm_lfence();
            v75 = *(_QWORD *)((*(_QWORD *)(v23 + 24) & 0xFFFFFFFFFFFFFFFCuLL) + v72);
          }
          if ( v75 != *(_QWORD *)(v23 + 80) )
            (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(*(_QWORD *)v75 + 64LL))(v75, v24, v23);
          ++v71;
          v72 += 8LL;
          --v128;
        }
        while ( v128 );
      }
      v28 = v23;
      v22 = v26;
      v23 = *(_QWORD *)(v23 + 80);
    }
    while ( (*(_BYTE *)(v28 + 95) & 4) != 0 );
    v5 = v130;
  }
  if ( v121 != 2 )
    goto LABEL_42;
  v64 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)v5 + 30);
  if ( v64 )
  {
    v122 = 0LL;
    (**v64)(v64, &GUID_00000000_0000_0000_c000_000000000046, &v122);
    v65 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v122;
    v66 = v125;
    if ( v125 == v122 )
    {
      *((_QWORD *)v5 + 56) = 0LL;
      v67 = *((_QWORD *)v5 + 28);
      if ( *(int *)v67 < 0 )
      {
        v76 = *(unsigned int *)(v67 + 4);
        v77 = (_BYTE *)(v67 + 8);
        for ( n = 0LL; (unsigned int)n < (unsigned int)v76; ++v77 )
        {
          if ( *v77 == 1 )
            break;
          n = (unsigned int)(n + 1);
        }
        if ( (unsigned int)n >= (unsigned int)v76 )
          v79 = 0LL;
        else
          v79 = (_QWORD ***)(v76 + 15 + v67 + 8 * n - (((_BYTE)v76 + 15) & 7));
        v80 = *v79;
        if ( v80 )
        {
          v81 = *v80;
          if ( *v80 != v80 )
          {
            do
            {
              *(v81 - 13) = 0LL;
              v81 = (_QWORD *)*v81;
            }
            while ( v81 != v80 );
            v65 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v122;
          }
        }
      }
      *((_QWORD *)v5 + 63) = 0LL;
      v68 = *((_QWORD *)v5 + 28);
      if ( *(int *)v68 < 0 )
      {
        v82 = *(unsigned int *)(v68 + 4);
        v83 = (_BYTE *)(v68 + 8);
        for ( ii = 0LL; (unsigned int)ii < (unsigned int)v82; ++v83 )
        {
          if ( *v83 == 1 )
            break;
          ii = (unsigned int)(ii + 1);
        }
        if ( (unsigned int)ii >= (unsigned int)v82 )
          v85 = 0LL;
        else
          v85 = (_QWORD ***)(v68 + v82 + 15 + 8 * ii - (((_BYTE)v82 + 15) & 7));
        v86 = *v85;
        if ( v86 )
        {
          v87 = *v86;
          if ( *v86 != v86 )
          {
            do
            {
              *(v87 - 6) = 0LL;
              v87 = (_QWORD *)*v87;
            }
            while ( v87 != v86 );
            v65 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v122;
          }
        }
      }
    }
    if ( v65 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v65)[2])(v65);
  }
  else
  {
    v66 = v125;
  }
  if ( CVisual::GetTransform3DEffectNoRef(v5) )
  {
    v127 = 0LL;
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(v5);
    (**(void (__fastcall ***)(struct CTransform3D *, GUID *, _QWORD *))Transform3DEffectNoRef)(
      Transform3DEffectNoRef,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v127);
    v116 = v127;
    if ( v66 == v127 )
    {
      CVisual::OnInnerTransformChanged(v5);
      v116 = v127;
    }
    if ( v116 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **)))(*v116)[2])(v116);
  }
LABEL_44:
  v30 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v5 + 376LL))(v5);
  *((_BYTE *)v5 + 92) &= ~1u;
  *((_BYTE *)v5 + 92) |= v30 & 1;
  if ( v126 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v126 + 16LL))(v126);
  if ( v124 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v124 + 16LL))(v124);
  if ( v123 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **)))(*v123)[2])(v123);
  return 0LL;
}
