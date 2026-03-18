/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x1800171C0 (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x18001A914 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18002ADF4 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18002AEBC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18002AF70 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18002AFB0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800457F0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x18004E410 (-ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180067248 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ??0CReentrancyCheck@CDrawListCacheSet@@QEAA@PEBQEAURenderTargetEntry@1@PEAPEAU21@@Z @ 0x1800689F8 (--0CReentrancyCheck@CDrawListCacheSet@@QEAA@PEBQEAURenderTargetEntry@1@PEAPEAU21@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18006B124 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A2C30 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800A5428 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A5D9C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x1800A8C8C (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800A8E54 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A96E0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _lambda_02dc2f4d7908bb70852dff4dd76791d3_::operator() @ 0x1800EF668 (_lambda_02dc2f4d7908bb70852dff4dd76791d3_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18015ACEC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017ED50 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801B6734 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801B8154 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CVisual::OnChanged(
        CVisual *a1,
        int a2,
        void (__fastcall ***a3)(_QWORD, GUID *, struct ISwapChainContent **))
{
  __int128 v3; // xmm6
  struct TransformParentData **v4; // r15
  int v5; // r13d
  CVisual *v6; // rdi
  int v7; // esi
  int v8; // r14d
  __int64 *v9; // rcx
  __int64 v10; // rax
  char v11; // r12
  char v12; // bl
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  _BYTE *v15; // rax
  char v16; // r8
  char v17; // cl
  char v18; // dl
  void (__fastcall ***v19)(_QWORD, GUID *, struct ISwapChainContent **); // rbx
  FLOAT v20; // ebx
  __int64 v21; // rax
  _DWORD *v22; // r8
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rsi
  unsigned int v26; // edi
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // r8
  char v32; // al
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // rax
  _BYTE *v37; // rdx
  unsigned int i; // ecx
  struct CDrawListCacheSet::RenderTargetEntry *const ***v39; // rbx
  struct CDrawListCacheSet::RenderTargetEntry *const **v40; // rbx
  struct CDrawListCacheSet::RenderTargetEntry *const *j; // r12
  void (__fastcall ***v42)(_QWORD, GUID *, int *); // rcx
  void (__fastcall ***v43)(_QWORD, _QWORD, _QWORD); // r8
  void (__fastcall ***v44)(_QWORD, GUID *, struct ISwapChainContent **); // rbx
  __int64 v45; // r9
  __int64 v46; // r9
  BOOL v47; // edx
  int v48; // eax
  CSurfaceBrush *v49; // r12
  int (__fastcall **v50)(_QWORD, GUID *, __int64 *); // rax
  int v51; // eax
  unsigned int v52; // ecx
  int v53; // eax
  unsigned int v54; // ecx
  int appended; // eax
  unsigned int v56; // ecx
  FLOAT height; // xmm2_4
  int v58; // eax
  unsigned int v59; // ecx
  __m128 v60; // xmm0
  __m128 v61; // xmm1
  __m128 v62; // xmm0
  __m128 v63; // xmm1
  __m128 v64; // xmm1
  __m128 v65; // xmm1
  FLOAT width; // xmm0_4
  unsigned int v67; // ebx
  int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // r12
  unsigned __int64 v71; // r8
  __int64 v72; // r14
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  bool v76; // zf
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
  struct CDrawListCacheSet::RenderTargetEntry *v89; // rdi
  unsigned int v90; // edx
  __int64 v91; // r9
  int v92; // edx
  unsigned int v93; // r8d
  __int64 v94; // rax
  _BYTE *v95; // rdx
  unsigned int k; // ecx
  struct TransformParentData *v97; // rdx
  unsigned int v98; // ebx
  __int64 v99; // r12
  __int64 v100; // rax
  struct CDrawListCacheSet::RenderTargetEntry *v101; // r10
  CVisual *v102; // rcx
  CVisual *v103; // rcx
  char v104; // dl
  unsigned int v105; // ebx
  __int64 v106; // rsi
  __int64 v107; // rcx
  _QWORD *v108; // rcx
  int v109; // eax
  unsigned int v110; // ecx
  __int64 v111; // rcx
  _BYTE *v112; // rdx
  unsigned int m; // eax
  _QWORD ***v114; // r12
  _QWORD **v115; // r12
  _QWORD *v116; // rsi
  int v117; // eax
  unsigned int v118; // ecx
  struct CTransform3D *Transform3DEffectNoRef; // rax
  void (__fastcall ***v120)(_QWORD, GUID *, struct ISwapChainContent **); // rcx
  char SwapChainTransformForDirtyRects; // [rsp+30h] [rbp-D0h] BYREF
  char v122; // [rsp+31h] [rbp-CFh] BYREF
  int v123[3]; // [rsp+38h] [rbp-C8h] BYREF
  int v124; // [rsp+44h] [rbp-BCh] BYREF
  struct D2D_SIZE_F v125; // [rsp+48h] [rbp-B8h] BYREF
  struct ISwapChainContent *v126; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v127)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+58h] [rbp-A8h]
  struct CDrawListCacheSet::RenderTargetEntry *v128; // [rsp+60h] [rbp-A0h] BYREF
  void (__fastcall ***v129)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+68h] [rbp-98h]
  __int64 v130; // [rsp+70h] [rbp-90h] BYREF
  void (__fastcall ***v131)(_QWORD, GUID *, struct ISwapChainContent **); // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v132; // [rsp+80h] [rbp-80h]
  __int64 v133; // [rsp+88h] [rbp-78h]
  CVisual *v134; // [rsp+90h] [rbp-70h]
  _QWORD v135[3]; // [rsp+98h] [rbp-68h] BYREF
  __m256i v136; // [rsp+B0h] [rbp-50h]
  __m128 v137; // [rsp+D0h] [rbp-30h]
  float v138[10]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v139[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v140[6]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v141[4]; // [rsp+150h] [rbp+50h] BYREF
  int v142; // [rsp+190h] [rbp+90h]
  __int64 v143; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v144; // [rsp+1A8h] [rbp+A8h]
  __int64 v145; // [rsp+1B0h] [rbp+B0h]
  int v146; // [rsp+1B8h] [rbp+B8h]
  __int64 v147; // [rsp+1C0h] [rbp+C0h] BYREF
  FLOAT v148; // [rsp+1C8h] [rbp+C8h]
  FLOAT v149; // [rsp+1CCh] [rbp+CCh]
  int v150; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v151; // [rsp+1D4h] [rbp+D4h]
  int v152; // [rsp+1DCh] [rbp+DCh]
  __int128 v153; // [rsp+1E0h] [rbp+E0h] BYREF
  void *v154; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE *v155; // [rsp+1F8h] [rbp+F8h]
  int v156; // [rsp+200h] [rbp+100h]
  __int64 v157; // [rsp+204h] [rbp+104h]
  _BYTE v158[64]; // [rsp+210h] [rbp+110h] BYREF
  __int128 v159; // [rsp+260h] [rbp+160h]
  void *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v4 = 0LL;
  v134 = a1;
  v124 = 0;
  v129 = a3;
  v5 = a2;
  v130 = 0LL;
  v6 = a1;
  v126 = 0LL;
  *(float *)&v7 = 0.0;
  v127 = 0LL;
  v8 = 0;
  switch ( a2 )
  {
    case 5:
      v34 = *((_QWORD *)a1 + 57);
      if ( v34 == -1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      *((_QWORD *)a1 + 57) = -1LL;
      if ( v34 )
      {
        v70 = v34;
        do
        {
          if ( *(_QWORD *)(v70 + 16) )
            detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(v70 + 24);
          v70 = *(_QWORD *)(v70 + 80);
        }
        while ( v70 );
      }
      *((_QWORD *)v6 + 57) = v34;
      v35 = *((_QWORD *)v6 + 28);
      if ( *(int *)v35 >= 0 )
        goto LABEL_47;
      v36 = *(unsigned int *)(v35 + 4);
      v37 = (_BYTE *)(v35 + 8);
      for ( i = 0; i < (unsigned int)v36; ++v37 )
      {
        if ( *v37 == 1 )
          break;
        ++i;
      }
      if ( i >= (unsigned int)v36 )
        v39 = 0LL;
      else
        v39 = (struct CDrawListCacheSet::RenderTargetEntry *const ***)(v35 + v36
                                                                           + 15
                                                                           + 8LL * i
                                                                           - (((_BYTE)v36 + 15) & 7));
      v40 = *v39;
      if ( v40 )
      {
        for ( j = *v40;
              j != (struct CDrawListCacheSet::RenderTargetEntry *const *)v40;
              j = (struct CDrawListCacheSet::RenderTargetEntry *const *)*j )
        {
          CDrawListCacheSet::CReentrancyCheck::CReentrancyCheck(
            (CDrawListCacheSet::CReentrancyCheck *)v139,
            j - 12,
            &v128);
          v89 = v128;
          if ( v128 )
          {
            do
            {
              if ( *((_QWORD *)v89 + 2) )
                detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((char *)v89 + 24);
              v89 = (struct CDrawListCacheSet::RenderTargetEntry *)*((_QWORD *)v89 + 10);
            }
            while ( v89 );
            v128 = 0LL;
          }
          *(_QWORD *)v139[0] = v139[1];
        }
      }
      v6 = v134;
      goto LABEL_18;
    case 1:
      goto LABEL_67;
    case 3:
      v7 = 1;
      goto LABEL_8;
  }
  if ( a2 != 4 )
  {
    if ( a2 != 6 )
    {
      if ( a2 == 11 )
      {
        v7 = 2;
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    CVisual::ClearContentTreeDataCaches(a1);
    v5 = 1;
LABEL_67:
    v7 = 4;
    goto LABEL_8;
  }
  if ( qword_180308258 )
  {
    v90 = 0;
    if ( *((_DWORD *)qword_180308258 + 18) )
    {
      v91 = *((_QWORD *)qword_180308258 + 6);
      while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v91 + 8LL * v90)) )
      {
        v90 = v92 + 1;
        if ( v90 >= v93 )
          goto LABEL_149;
      }
      v8 = 2;
    }
  }
LABEL_149:
  CVisual::OnClipChanged(v6);
LABEL_7:
  v7 = 5;
LABEL_8:
  v9 = (__int64 *)*((_QWORD *)v6 + 32);
  if ( !v9 )
    goto LABEL_18;
  v10 = *v9;
  v11 = 0;
  SwapChainTransformForDirtyRects = 0;
  v12 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v10 + 48))(v9, 14LL) )
    goto LABEL_12;
  v13 = (_QWORD *)*((_QWORD *)v6 + 32);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v13 + 48LL))(v13, 163LL) )
  {
    v16 = 1;
    v12 = 0;
    SwapChainTransformForDirtyRects = 1;
    goto LABEL_13;
  }
  LOBYTE(v14) = 1;
  (*(void (__fastcall **)(_QWORD *, __int64))(*v13 + 312LL))(v13, v14);
  v15 = (_BYTE *)v13[8];
  v12 = 0;
  if ( v15 )
  {
    v16 = v15[194];
    v12 = v15[193];
    v11 = v15[192];
    SwapChainTransformForDirtyRects = v16;
  }
  else
  {
LABEL_12:
    v16 = 0;
  }
LABEL_13:
  v17 = *((_BYTE *)v6 + 94);
  if ( v12 != ((v17 & 0x20) != 0) )
    *((_BYTE *)v6 + 94) = v17 ^ (v17 ^ (32 * v12)) & 0x20;
  v18 = *((_BYTE *)v6 + 272);
  if ( v11 != (v18 & 1) )
  {
    v102 = (CVisual *)*((_QWORD *)v6 + 10);
    if ( v11 )
    {
      if ( v102 )
      {
        CVisual::PropagateBackdropUpdates(v102, 1, 0);
        v18 = *((_BYTE *)v6 + 272);
        v16 = SwapChainTransformForDirtyRects;
      }
      v18 |= 1u;
    }
    else
    {
      if ( v102 )
      {
        CVisual::PropagateBackdropUpdates(v102, -1, 0);
        v18 = *((_BYTE *)v6 + 272);
        v16 = SwapChainTransformForDirtyRects;
      }
      v18 &= ~1u;
    }
    *((_BYTE *)v6 + 272) = v18;
  }
  if ( v16 != ((v18 & 2) != 0) )
  {
    v103 = (CVisual *)*((_QWORD *)v6 + 10);
    if ( v16 )
    {
      if ( v103 )
      {
        CVisual::PropagateBackdropUpdates(v103, 0, 1);
        v18 = *((_BYTE *)v6 + 272);
      }
      v104 = v18 | 2;
    }
    else
    {
      if ( v103 )
      {
        CVisual::PropagateBackdropUpdates(v103, 0, -1);
        v18 = *((_BYTE *)v6 + 272);
      }
      v104 = v18 & 0xFD;
    }
    *((_BYTE *)v6 + 272) = v104;
  }
  v127 = (void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **))*((_QWORD *)v6 + 32);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **)))(*v127)[1])(v127);
  v19 = v129;
  if ( v129 == v127 )
  {
    v47 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 32) + 192LL))(*((_QWORD *)v6 + 32)) == 0;
    v48 = v7 | 0x10;
    if ( ((*((_DWORD *)v6 + 22) >> 10) & 1) == v47 )
      v48 = v7;
    v123[0] = v48;
    v7 = v48;
    if ( v5 == 1 )
    {
      v49 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v6 + 32) + 48LL))(
             *((_QWORD *)v6 + 32),
             145LL) )
      {
        v49 = (CSurfaceBrush *)*((_QWORD *)v6 + 32);
        v19 = (void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **))*((_QWORD *)v49 + 11);
      }
      if ( v19 )
        (**v19)(v19, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v126);
      if ( v126
        && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v126 + 216LL))(v126)
        && CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
             *(CRenderTargetManager **)(*((_QWORD *)v6 + 2) + 64LL),
             v6,
             v126) )
      {
        CVisual::DirtySecondaryRepresentations(v6);
        v105 = 0;
        v106 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 64LL);
        if ( *(_DWORD *)(v106 + 48) )
        {
          do
          {
            v107 = *(_QWORD *)(*(_QWORD *)(v106 + 24) + 8LL * v105);
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v107 + 48LL))(v107, 76LL) )
            {
              v108 = *(_QWORD **)(*(_QWORD *)(v106 + 24) + 8LL * v105);
              if ( *(_QWORD *)(v108[21] + 152LL) != v108[21] )
                (*(void (__fastcall **)(_QWORD *))(*v108 + 184LL))(v108);
            }
            ++v105;
          }
          while ( v105 < *(_DWORD *)(v106 + 48) );
        }
LABEL_47:
        if ( v129 )
        {
          v31 = (_DWORD *)*((_QWORD *)v6 + 28);
          if ( (*v31 & 0x800000) != 0 )
          {
            v94 = (unsigned int)v31[1];
            v95 = v31 + 2;
            for ( k = 0; k < (unsigned int)v94; ++v95 )
            {
              if ( *v95 == 9 )
                break;
              ++k;
            }
            if ( k < (unsigned int)v94 )
              v4 = (struct TransformParentData **)((char *)v31 + v94 + 8LL * k - (((_BYTE)v94 + 15) & 7) + 15);
            v97 = *v4;
            if ( *v4 && v129 == *(void (__fastcall ****)(_QWORD, GUID *, struct ISwapChainContent **))v97 )
            {
              CVisual::ManageTransformParentChildList(v6, v97);
              CVisual::OnOuterTransformChanged(v6);
            }
          }
        }
        goto LABEL_49;
      }
      if ( v19 )
      {
        v156 = 4;
        v143 = 0LL;
        v144 = 0LL;
        v145 = 0LL;
        v146 = 0;
        v154 = v158;
        v155 = v158;
        v50 = (int (__fastcall **)(_QWORD, GUID *, __int64 *))*v19;
        v157 = 4LL;
        if ( (*v50)(v19, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, &v130) < 0 )
          goto LABEL_90;
        v51 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v130 + 24LL))(v130, v135);
        v124 = v51;
        if ( v51 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x1D9u);
        }
        else
        {
          v53 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v130 + 32LL))(v130, &v143);
          v124 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x1DAu);
          }
          else
          {
            if ( !v135[0]
              || (HIDWORD(v157) = 0,
                  appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(v135[0], &v154),
                  v124 = appended,
                  appended >= 0) )
            {
LABEL_90:
              if ( HIDWORD(v157) || (_DWORD)v143 )
              {
                v142 = 0;
                SwapChainTransformForDirtyRects = 0;
                v122 = 0;
                if ( v49 )
                {
                  height = 0.0;
                  if ( CVisual::GetEffectiveSize(v6, (float *)&v125, &v125.height) )
                  {
                    v58 = CSurfaceBrush::ComputeLayout(v49, &v125, 1, (struct CContent::LayoutData *)v138, 0LL);
                    v124 = v58;
                    if ( v58 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x1F7u);
LABEL_215:
                      DynArrayImpl<1>::~DynArrayImpl<1>(&v154);
                      goto LABEL_18;
                    }
                    if ( D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)v138) )
                    {
                      height = v125.height;
                      width = v125.width;
                    }
                    else
                    {
                      *(_OWORD *)&v136.m256i_u64[1] = 0LL;
                      v135[2] = 0LL;
                      v60 = (__m128)v135[1];
                      v137.m128_u64[1] = 0x3F80000000000000LL;
                      v159 = v3;
                      v60.m128_f32[0] = v138[0];
                      v61 = *(__m128 *)v136.m256i_i8;
                      v62 = _mm_shuffle_ps(v60, v60, 225);
                      v61.m128_f32[0] = v138[2];
                      v136.m256i_i64[3] = 1065353216LL;
                      v63 = _mm_shuffle_ps(v61, v61, 225);
                      v62.m128_f32[0] = v138[1];
                      height = v125.height;
                      v63.m128_f32[0] = v138[3];
                      v141[1] = _mm_shuffle_ps(v63, v63, 225);
                      v64 = v137;
                      v142 = 0;
                      v64.m128_f32[0] = v138[4];
                      v141[0] = _mm_shuffle_ps(v62, v62, 225);
                      SwapChainTransformForDirtyRects = 1;
                      v65 = _mm_shuffle_ps(v64, v64, 225);
                      v65.m128_f32[0] = v138[5];
                      v141[2] = *(_OWORD *)&v136.m256i_u64[2];
                      width = v125.width;
                      v141[3] = _mm_shuffle_ps(v65, v65, 225);
                    }
                  }
                  else
                  {
                    width = 0.0;
                  }
                  v148 = width;
                  v149 = height;
                  v147 = 0LL;
                  v122 = 1;
                }
                else if ( v126 )
                {
                  v153 = 0LL;
                  SwapChainTransformForDirtyRects = CVisual::GetSwapChainTransformForDirtyRects(
                                                      v126,
                                                      (struct CMILMatrix *)v141);
                  if ( CVisual::GetEffectiveSize(v6, (float *)&v153 + 2, (float *)&v153 + 3) )
                    SwapChainTransformForDirtyRects |= (*(__int64 (__fastcall **)(struct ISwapChainContent *, __int128 *, _OWORD *))(*(_QWORD *)v126 + 200LL))(
                                                         v126,
                                                         &v153,
                                                         v141);
                }
                v140[5] = v6;
                v140[0] = &SwapChainTransformForDirtyRects;
                v140[1] = v141;
                v140[2] = &v122;
                v140[3] = &v147;
                v140[4] = &v124;
                if ( (_DWORD)v143 )
                {
                  v150 = HIDWORD(v143);
                  v151 = v144;
                  v152 = v145;
                  v109 = lambda_02dc2f4d7908bb70852dff4dd76791d3_::operator()(v140, &v150);
                  v124 = v109;
                  if ( v109 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v110, 0LL, 0, v109, 0x22Cu);
                    goto LABEL_215;
                  }
                }
                v67 = 0;
                if ( HIDWORD(v157) )
                {
                  while ( 1 )
                  {
                    v68 = lambda_02dc2f4d7908bb70852dff4dd76791d3_::operator()(v140, (char *)v154 + 16 * v67);
                    v124 = v68;
                    if ( v68 < 0 )
                      break;
                    if ( ++v67 >= HIDWORD(v157) )
                      goto LABEL_101;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x231u);
                  DynArrayImpl<1>::~DynArrayImpl<1>(&v154);
                  v7 = v123[0];
                  goto LABEL_18;
                }
LABEL_101:
                v7 = v123[0] & 0xFFFFFFF3 | 8;
              }
              if ( v154 != v155 )
                WPF::ProcessHeapImpl::Free(v154);
              goto LABEL_18;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, appended, 0x1DEu);
          }
        }
        DynArrayImpl<1>::~DynArrayImpl<1>(&v154);
      }
    }
  }
LABEL_18:
  if ( *(float *)&v7 != 0.0 )
  {
    LODWORD(v20) = v7 | 0x10;
    if ( (v7 & 1) == 0 )
      v20 = *(float *)&v7;
    v123[0] = !(v7 & 1);
    v21 = *((_QWORD *)v6 + 3);
    v125.width = v20;
    if ( (v21 & 2) != 0 )
      v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v21) = v21 & 1;
    if ( (_DWORD)v21 )
    {
      v98 = v123[0];
      v99 = 0LL;
      v128 = (struct CDrawListCacheSet::RenderTargetEntry *)(unsigned int)v21;
      do
      {
        v100 = CPtrArrayBase::operator[]((char *)v6 + 24, v99);
        if ( v100 != *((_QWORD *)v6 + 10) )
        {
          (*(void (__fastcall **)(__int64, _QWORD, CVisual *))(*(_QWORD *)v100 + 64LL))(v100, v98, v6);
          v101 = v128;
        }
        ++v99;
        v128 = (struct CDrawListCacheSet::RenderTargetEntry *)((char *)v101 - 1);
      }
      while ( v101 != (struct CDrawListCacheSet::RenderTargetEntry *)1 );
      v20 = v125.width;
    }
    if ( (LOBYTE(v20) & 7) != 0 )
    {
      v22 = (_DWORD *)*((_QWORD *)v6 + 28);
      if ( (*v22 & 0x40000000) != 0 )
      {
        v111 = (unsigned int)v22[1];
        v112 = v22 + 2;
        for ( m = 0; m < (unsigned int)v111; ++v112 )
        {
          if ( *v112 == 2 )
            break;
          ++m;
        }
        v114 = m >= (unsigned int)v111
             ? 0LL
             : (_QWORD ***)((char *)v22 + v111 + 8LL * m - (((_BYTE)v111 + 15) & 7) + 15);
        v115 = *v114;
        if ( v115 )
        {
          v116 = *v115;
          if ( *v115 != v115 )
          {
            while ( 1 )
            {
              v117 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(v116 - 11));
              if ( v117 < 0 )
                break;
              CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(v116 - 11));
              v116 = (_QWORD *)*v116;
              if ( v116 == v115 )
                goto LABEL_26;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, v117, 0x133Bu);
          }
        }
      }
LABEL_26:
      if ( v8 )
        CVisual::ResetVisibleRegionForAllInSubtree(v6);
    }
    v23 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 128LL))(v6);
    *((_DWORD *)v6 + 22) |= LODWORD(v20);
    v24 = v23;
    if ( (LOBYTE(v20) & 0xC) != 0 )
    {
      LODWORD(v20) = LODWORD(v20) & 0xFFFFFFB3 | 0x40;
      if ( v23 )
        ++*(_DWORD *)(v23 + 28);
    }
    if ( (LOBYTE(v20) & 2) != 0 )
      LODWORD(v20) = LODWORD(v20) & 0xFFFFFFDD | 0x20;
    v25 = *((_QWORD *)v6 + 10);
    if ( (*((_BYTE *)v6 + 95) & 8) != 0 )
    {
      v26 = v123[0];
      do
      {
        if ( !v25 || (LODWORD(v20) & ((int)(*(_DWORD *)(v25 + 88) << 25) >> 25)) == LODWORD(v20) )
          break;
        *(_DWORD *)(v25 + 88) |= LODWORD(v20);
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 128LL))(v25);
        v28 = v27;
        if ( v27 )
        {
          if ( (LOBYTE(v20) & 0x40) != 0 && v27 != v24 )
            ++*(_DWORD *)(v27 + 24);
        }
        else
        {
          v28 = v24;
        }
        v29 = *(_QWORD *)(v25 + 24);
        if ( (v29 & 2) != 0 )
          v29 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v29) = v29 & 1;
        if ( (_DWORD)v29 )
        {
          v71 = 0LL;
          v133 = (unsigned int)v29;
          v72 = 16LL;
          v132 = 0LL;
          do
          {
            v73 = *(_QWORD *)(v25 + 24);
            if ( (v73 & 2) != 0 )
              v74 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v74 = *(_QWORD *)(v25 + 24) & 1LL;
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
              v75 = *(_QWORD *)((*(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFFFFFFCuLL) + v72);
            }
            if ( v75 != *(_QWORD *)(v25 + 80) )
            {
              (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(*(_QWORD *)v75 + 64LL))(v75, v26, v25);
              v71 = v132;
            }
            ++v71;
            v72 += 8LL;
            v76 = v133-- == 1;
            v132 = v71;
          }
          while ( !v76 );
        }
        v30 = v25;
        v24 = v28;
        v25 = *(_QWORD *)(v25 + 80);
      }
      while ( (*(_BYTE *)(v30 + 95) & 8) != 0 );
      v6 = v134;
    }
  }
  if ( v5 != 2 )
    goto LABEL_47;
  v42 = (void (__fastcall ***)(_QWORD, GUID *, int *))*((_QWORD *)v6 + 30);
  if ( v42 )
  {
    *(_QWORD *)v123 = 0LL;
    (**v42)(v42, &GUID_00000000_0000_0000_c000_000000000046, v123);
    v43 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))v123;
    v44 = v129;
    if ( v129 == *(void (__fastcall ****)(_QWORD, GUID *, struct ISwapChainContent **))v123 )
    {
      v45 = *((_QWORD *)v6 + 28);
      *((_QWORD *)v6 + 56) = 0LL;
      if ( *(int *)v45 < 0 )
      {
        v77 = *(unsigned int *)(v45 + 4);
        v78 = (_BYTE *)(v45 + 8);
        for ( n = 0LL; (unsigned int)n < (unsigned int)v77; ++v78 )
        {
          if ( *v78 == 1 )
            break;
          n = (unsigned int)(n + 1);
        }
        if ( (unsigned int)n >= (unsigned int)v77 )
          v80 = 0LL;
        else
          v80 = (_QWORD ***)(v45 + v77 + 15 + 8 * n - (((_BYTE)v77 + 15) & 7));
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
            v43 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))v123;
          }
        }
      }
      v46 = *((_QWORD *)v6 + 28);
      *((_QWORD *)v6 + 63) = 0LL;
      if ( *(int *)v46 < 0 )
      {
        v83 = *(unsigned int *)(v46 + 4);
        v84 = (_BYTE *)(v46 + 8);
        for ( ii = 0LL; (unsigned int)ii < (unsigned int)v83; ++v84 )
        {
          if ( *v84 == 1 )
            break;
          ii = (unsigned int)(ii + 1);
        }
        if ( (unsigned int)ii >= (unsigned int)v83 )
          v86 = 0LL;
        else
          v86 = (_QWORD ***)(v46 + v83 + 15 + 8 * ii - (((_BYTE)v83 + 15) & 7));
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
            v43 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))v123;
          }
        }
      }
    }
    if ( v43 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v43)[2])(v43);
  }
  else
  {
    v44 = v129;
  }
  if ( CVisual::GetTransform3DEffectNoRef(v6) )
  {
    v131 = 0LL;
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(v6);
    (**(void (__fastcall ***)(struct CTransform3D *, GUID *, _QWORD *))Transform3DEffectNoRef)(
      Transform3DEffectNoRef,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v131);
    v120 = v131;
    if ( v44 == v131 )
    {
      CVisual::OnInnerTransformChanged(v6);
      v120 = v131;
    }
    if ( v120 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **)))(*v120)[2])(v120);
  }
LABEL_49:
  v32 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 336LL))(v6);
  *((_BYTE *)v6 + 92) &= ~1u;
  *((_BYTE *)v6 + 92) |= v32 & 1;
  if ( v130 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v130 + 16LL))(v130);
  if ( v126 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v126 + 16LL))(v126);
  if ( v127 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **)))(*v127)[2])(v127);
  return 0LL;
}
