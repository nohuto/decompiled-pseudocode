/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0281E68
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA08 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C014EEA4 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C0150A74 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C020DC10 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@_N@Z @ 0x1C025B92C (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C027FA28 (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 *     ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0281B78 (-ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefC.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0281D68 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int8 *a7,
        struct _DXGKARG_PRESENT *a8,
        struct VIDSCH_SUBMIT_DATA_BASE *a9,
        struct DXGCONTEXT **a10)
{
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 ContextCount; // rsi
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v22; // r10
  _QWORD *v23; // rax
  __int64 v24; // rdx
  struct DXGADAPTER *v25; // r9
  int v26; // r15d
  char *v27; // rcx
  __int64 v28; // r8
  CRefCountedBuffer *v29; // r14
  unsigned int PresentPlaneCount; // r8d
  __int64 v31; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // r10
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v33; // rdx
  __int64 v34; // rax
  CRefCountedBuffer *v35; // rbx
  const struct DXGADAPTER *v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rbx
  __int64 v47; // rax
  int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _DXGKARG_PRESENT *v52; // r8
  __int64 v53; // rax
  struct _DXGKARG_PRESENT *v54; // r14
  __int64 v55; // rax
  unsigned __int8 v56; // r12
  __int64 v57; // rcx
  unsigned __int8 v58; // r11
  __int64 v59; // rax
  unsigned int v60; // r15d
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v61; // rsi
  __int64 v62; // r8
  unsigned int v63; // eax
  __int64 v64; // r9
  D3DKMT_MULTIPLANE_OVERLAY3 *v65; // rdx
  __int64 LayerIndex; // rcx
  int v67; // edx
  int v68; // eax
  __int64 v69; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 **v70; // rax
  __int64 v71; // rsi
  __int64 v72; // r14
  struct CRefCountedBuffer *v73; // r12
  __int64 v74; // r10
  unsigned int v75; // edx
  __int64 v76; // rcx
  struct CRefCountedBuffer *v77; // rdx
  unsigned int v78; // esi
  unsigned int v79; // ecx
  int v80; // edx
  unsigned int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned int v84; // r10d
  struct CRefCountedBuffer *v85; // r8
  struct CRefCountedBuffer *v86; // r11
  __int64 v87; // rax
  __int64 v88; // r12
  char *v89; // rdx
  __int64 v90; // r9
  __int64 v91; // r8
  char *v92; // rdx
  char *v93; // r8
  __int64 v94; // r14
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  unsigned __int8 IsDxgmms2; // al
  __int64 v100; // r10
  struct CRefCountedBuffer *v101; // rsi
  int v102; // r8d
  unsigned int v103; // r10d
  unsigned __int64 v104; // rcx
  bool v105; // al
  __int64 v106; // r8
  int v107; // ecx
  __int64 v108; // rax
  struct CRefCountedBuffer *v109; // r12
  struct _VIDSCH_LAYER_ATTRIBUTE *v110; // rsi
  const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v111; // r8
  __int64 v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // rcx
  unsigned __int8 *v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  _QWORD *v120; // rax
  struct CRefCountedBuffer *v121; // rdx
  char *v122; // rdx
  unsigned __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  unsigned int v128; // r12d
  D3DKMT_MULTIPLANE_OVERLAY3 *v129; // rsi
  __int64 v130; // rax
  UINT DirtyRectCount; // ecx
  unsigned int v132; // r15d
  _QWORD *v133; // rax
  DXGK_ALLOCATIONLIST *v134; // r14
  unsigned int v135; // esi
  struct CRefCountedBuffer *v136; // rdx
  char *v137; // r15
  __int64 v138; // r12
  __int64 v139; // rcx
  char *v140; // rax
  __int16 v141; // dx
  struct _DXGKARG_PRESENT *v142; // r8
  __int64 v143; // rax
  __int64 v144; // r9
  void *v145; // rdx
  ADAPTER_RENDER *v146; // rcx
  unsigned int v147; // r14d
  DXGCONTEXT **v148; // r12
  DXGCONTEXT *v149; // rcx
  __int64 v150; // rax
  __int64 v151; // r14
  unsigned int v152; // eax
  unsigned int v153; // r15d
  int v154; // ecx
  __int64 v155; // rdx
  char *v156; // rdx
  __int64 v157; // rax
  unsigned int v158; // [rsp+30h] [rbp-D0h]
  UINT DriverPrivateDataSize; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v161; // [rsp+38h] [rbp-C8h]
  unsigned int v162; // [rsp+3Ch] [rbp-C4h]
  unsigned int v163; // [rsp+40h] [rbp-C0h]
  unsigned int v164; // [rsp+44h] [rbp-BCh]
  struct CRefCountedBuffer *v165; // [rsp+48h] [rbp-B8h] BYREF
  int v166; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v167; // [rsp+54h] [rbp-ACh]
  struct _DXGKARG_PRESENT *v168; // [rsp+58h] [rbp-A8h]
  struct CRefCountedBuffer *v169; // [rsp+60h] [rbp-A0h]
  struct CRefCountedBuffer *v170; // [rsp+68h] [rbp-98h] BYREF
  int v171; // [rsp+70h] [rbp-90h]
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v172; // [rsp+78h] [rbp-88h]
  __int64 v173; // [rsp+80h] [rbp-80h] BYREF
  const struct DXGALLOCATIONREFERENCE *v174; // [rsp+88h] [rbp-78h]
  struct CRefCountedBuffer *v175; // [rsp+90h] [rbp-70h]
  int v176; // [rsp+98h] [rbp-68h]
  __int64 v177; // [rsp+A0h] [rbp-60h]
  CRefCountedBuffer *v178; // [rsp+A8h] [rbp-58h]
  _QWORD v179[12]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID P; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v181[128]; // [rsp+118h] [rbp+18h] BYREF
  int v182; // [rsp+198h] [rbp+98h]
  _DWORD v183[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v184; // [rsp+1A8h] [rbp+A8h]
  _DWORD v185[2]; // [rsp+1B0h] [rbp+B0h]
  _QWORD v186[37]; // [rsp+1B8h] [rbp+B8h]

  v168 = a8;
  v174 = a6;
  v172 = a2;
  v175 = (struct CRefCountedBuffer *)a10;
  if ( !a3 && !a4 && !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 1521LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a5 + a4 + (unsigned int)a3;
  if ( (unsigned int)v15 > a2->PresentPlaneCount )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15, a2);
    *(_QWORD *)(v16 + 24) = 1524LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v20 + 24) = 1525LL;
    WdLogEvent5_WdAssertion(v20);
  }
  ContextCount = a2->ContextCount;
  v22 = a2;
  v158 = ContextCount;
  if ( (unsigned int)ContextCount > 0x40 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
    v23[4] = ContextCount;
    LODWORD(ContextCount) = -1073741811;
    v23[6] = -1073741811LL;
    v23[5] = 64LL;
    goto LABEL_11;
  }
  v24 = 1LL;
  v25 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v167 = *((_DWORD *)v25 + 598);
  v26 = *((_DWORD *)*a10 + 101);
  if ( (unsigned int)ContextCount > 1 )
  {
    v27 = (char *)v175 + 8;
    while ( 1 )
    {
      v28 = *(unsigned int *)(*(_QWORD *)v27 + 404LL);
      if ( ((unsigned int)v28 & v26) != 0 )
        break;
      v26 |= v28;
      v24 = (unsigned int)(v24 + 1);
      v27 += 8;
      if ( (unsigned int)v24 >= (unsigned int)ContextCount )
        goto LABEL_16;
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v27, v24, v28);
    LODWORD(ContextCount) = -1073741811;
    v23[4] = -1073741811LL;
LABEL_11:
    v23[3] = this;
    WdLogEvent5_WdError(v23);
    return (unsigned int)ContextCount;
  }
LABEL_16:
  DriverPrivateDataSize = 0;
  v29 = 0LL;
  PresentPlaneCount = v22->PresentPlaneCount;
  v31 = 0LL;
  v170 = 0LL;
  if ( PresentPlaneCount )
  {
    ppPresentPlanes = v22->ppPresentPlanes;
    while ( 1 )
    {
      v33 = ppPresentPlanes[v31];
      v169 = (struct CRefCountedBuffer *)(unsigned int)v31;
      if ( (v33->InputFlags.Value & 1) != 0 && !v33->LayerIndex )
        break;
      v31 = (unsigned int)(v31 + 1);
      if ( (unsigned int)v31 >= PresentPlaneCount )
      {
        v22 = v172;
        goto LABEL_22;
      }
    }
    v42 = ReadPresentPrivateDriverData(v25, v33, &v170);
    v46 = v42;
    if ( v42 < 0 )
    {
      v47 = WdLogNewEntry5_WdError(v44, v43, v45);
      *(_QWORD *)(v47 + 24) = v46;
      WdLogEvent5_WdError(v47);
      return (unsigned int)v46;
    }
    v22 = v172;
    v29 = v170;
    DriverPrivateDataSize = v172->ppPresentPlanes[(_QWORD)v169]->DriverPrivateDataSize;
  }
LABEL_22:
  v34 = *((_QWORD *)this + 2);
  v35 = 0LL;
  v178 = v29;
  v165 = 0LL;
  v36 = *(const struct DXGADAPTER **)(v34 + 16);
  if ( *(int *)(*((_QWORD *)v36 + 2) + 2452LL) >= 2500 )
  {
    v37 = ReadPresentDirtyRectsData(v36, v22->PresentPlaneCount, v22->ppPresentPlanes, &v165);
    ContextCount = v37;
    if ( v37 < 0 )
    {
      v41 = WdLogNewEntry5_WdError(v39, v38, v40);
      *(_QWORD *)(v41 + 24) = ContextCount;
      WdLogEvent5_WdError(v41);
      goto LABEL_178;
    }
    v35 = v165;
    LODWORD(ContextCount) = v158;
  }
  *((_DWORD *)a9 + 37) = ContextCount;
  *((_DWORD *)a9 + 36) = v26;
  v49 = 2048;
  if ( (unsigned int)ContextCount > 1 )
    v49 = 3072;
  *(_DWORD *)a9 = *(_DWORD *)a9 & 0xFFFFFBFF | v49;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    if ( v29 )
    {
      v52 = v168;
      v168->PrivateDriverDataSize = DriverPrivateDataSize;
      v52->pPrivateDriverData = (char *)v29 + 8;
    }
    *((_QWORD *)a9 + 3) = v29;
    *((_QWORD *)a9 + 5) = v35;
  }
  if ( *((_DWORD *)a9 + 32) != 5 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v51, v50);
    *(_QWORD *)(v53 + 24) = 1632LL;
    WdLogEvent5_WdAssertion(v53);
  }
  v54 = v168;
  if ( v168->pDmaBuffer )
  {
    v55 = WdLogNewEntry5_WdAssertion(v51, v50);
    *(_QWORD *)(v55 + 24) = 1637LL;
    WdLogEvent5_WdAssertion(v55);
  }
  v56 = a4 + a3;
  v57 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  LOBYTE(v57) = *(_BYTE *)(*(_QWORD *)(v57 + 16) + 2498LL);
  v58 = a5 + v56;
  if ( !(_BYTE)v57 )
    v58 = v56;
  v161 = v58;
  if ( v58 > 0xAu )
  {
    v59 = WdLogNewEntry5_WdAssertion(v57, v56);
    *(_QWORD *)(v59 + 24) = 1655LL;
    WdLogEvent5_WdAssertion(v59);
    v58 = v161;
  }
  v60 = 0;
  v61 = v172;
  v163 = 0;
  v62 = 0LL;
  v63 = v172->PresentPlaneCount;
  v64 = *((_BYTE *)a9 + 356) != 0 ? 552LL : 488LL;
  v177 = v64;
  if ( v63 )
  {
    while ( 1 )
    {
      v65 = v61->ppPresentPlanes[v62];
      LayerIndex = v65->LayerIndex;
      if ( (v65->InputFlags.Value & 1) != 0 )
        break;
      if ( a7[LayerIndex] )
      {
        v67 = *(_DWORD *)((char *)a9 + v64);
        v68 = (v67 ^ (v67 | (1024 << LayerIndex))) & 0xFFC00;
        goto LABEL_49;
      }
LABEL_50:
      v63 = v61->PresentPlaneCount;
      v62 = (unsigned int)(v62 + 1);
      if ( (unsigned int)v62 >= v63 )
        goto LABEL_51;
    }
    v67 = *(_DWORD *)((char *)a9 + v64);
    v68 = ((unsigned __int16)v67 ^ (unsigned __int16)(v67 | (1 << LayerIndex))) & 0x3FF;
LABEL_49:
    *(_DWORD *)((char *)a9 + v64) = v67 ^ v68;
    goto LABEL_50;
  }
LABEL_51:
  v69 = 0LL;
  v171 = 0;
  if ( !v63 )
  {
LABEL_121:
    P = 0LL;
    v182 = 0;
    memset(v179, 0, sizeof(v179));
    v128 = v167;
    if ( v167 >= 2 )
    {
      LODWORD(v179[0]) = v61->VidPnSourceId;
      HIDWORD(v179[0]) = v60;
      v132 = v158;
      v179[1] = v183;
    }
    else
    {
      _mm_lfence();
      v129 = *v61->ppPresentPlanes;
      if ( (v129->InputFlags.Value & 1) == 0 )
      {
        v130 = WdLogNewEntry5_WdAssertion(v126, v125);
        *(_QWORD *)(v130 + 24) = 1902LL;
        WdLogEvent5_WdAssertion(v130);
      }
      v54->Flags.Value &= ~0x1000u;
      DirtyRectCount = v129->pPlaneAttributes->DirtyRectCount;
      v54->SubRectCnt = DirtyRectCount;
      if ( DirtyRectCount )
        v54->pDstSubRects = v129->pPlaneAttributes->pDirtyRects;
      v132 = v158;
      if ( v158 > 1 )
      {
        v133 = PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&P, v158);
        v134 = (DXGK_ALLOCATIONLIST *)v133;
        if ( !v133 )
        {
          LODWORD(ContextCount) = -1073741801;
LABEL_129:
          v123 = (unsigned __int64)P;
          if ( P != v181 && P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_165;
        }
        v135 = 0;
        v136 = v175;
        v137 = (char *)(v133 + 2);
        v169 = v175;
        do
        {
          v138 = *((_QWORD *)v174 + v128 * v135);
          v139 = (*(_DWORD *)(v138 + 72) >> 12) & 0x3F;
          if ( (_DWORD)v139 != *(_DWORD *)(*(_QWORD *)v136 + 408LL) )
          {
            v143 = WdLogNewEntry5_WdError(v139, v136, v124);
            *(_QWORD *)(v143 + 24) = v138;
            WdLogEvent5_WdError(v143);
            LODWORD(ContextCount) = -1073741811;
            goto LABEL_129;
          }
          *((_QWORD *)v137 - 2) = *(_QWORD *)(v138 + 32);
          LOBYTE(v124) = *((_BYTE *)this + 447);
          *((_QWORD *)v137 - 1) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                             + 248LL))(
                                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                                    *(_QWORD *)(v138 + 24),
                                    v124,
                                    *(unsigned int *)(*(_QWORD *)v136 + 408LL));
          if ( *((_BYTE *)a9 + 356) )
            v140 = (char *)a9
                 + 64 * (unsigned __int64)(v135 * *((_DWORD *)a9 + 139))
                 + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8)
                 + 592;
          else
            v140 = (char *)a9 + 512;
          *(_QWORD *)v137 = *(_QWORD *)v140;
          if ( *((_BYTE *)a9 + 356) )
            v141 = *(_WORD *)((char *)a9
                            + 64 * (unsigned __int64)(v135 * *((_DWORD *)a9 + 139))
                            + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8)
                            + 584);
          else
            v141 = (*((_DWORD *)a9 + 137) >> 17) & 0x1F;
          v128 = v167;
          ++v135;
          *((_WORD *)v137 + 4) = v141;
          v137 += 32;
          v136 = (struct CRefCountedBuffer *)((char *)v169 + 8);
          v169 = (struct CRefCountedBuffer *)((char *)v169 + 8);
        }
        while ( v135 < v158 );
        v132 = v158;
        v142 = v168;
        v168->NumSrcAllocations = v158;
LABEL_150:
        v142->pAllocationList = v134;
        v145 = 0LL;
        v146 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
        if ( !*(_BYTE *)(*((_QWORD *)v146 + 2) + 2506LL) )
          v145 = (void *)*((_QWORD *)this + 23);
        LODWORD(ContextCount) = ADAPTER_RENDER::DdiPresent(v146, v145, (const GUID *)v142);
        if ( (int)ContextCount >= 0 )
        {
          v147 = 0;
          if ( v132 )
          {
            v148 = (DXGCONTEXT **)v175;
            do
            {
              v149 = *v148;
              if ( *((struct _KTHREAD **)*v148 + 58) != KeGetCurrentThread() )
              {
                v150 = WdLogNewEntry5_WdAssertion(v149, v122);
                *(_QWORD *)(v150 + 24) = 2025LL;
                WdLogEvent5_WdAssertion(v150);
                v149 = *v148;
              }
              if ( (*((_DWORD *)this + 103) & 0x10) != 0 )
              {
                DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v149, 0LL, 0, a9, 0);
                v149 = *v148;
              }
              LODWORD(ContextCount) = DXGCONTEXT::SubmitCommandToImplicitQueue(v149, a9);
              if ( (int)ContextCount < 0 )
                break;
              *(_DWORD *)a9 &= ~0x800u;
              ++v147;
              ++v148;
            }
            while ( v147 < v132 );
          }
        }
        v123 = (unsigned __int64)P;
        if ( P != v181 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_164;
      }
      if ( *((_BYTE *)this + 446) )
      {
        LOBYTE(v127) = *((_BYTE *)this + 447);
        v144 = *((unsigned int *)this + 102);
        v179[4] = v184;
        v179[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                    *(_QWORD *)(*(_QWORD *)v174 + 24LL),
                    v127,
                    v144);
        v179[6] = v186[0];
        LOWORD(v179[7]) = v185[0] & 0x1F;
      }
      else
      {
        v179[3] = v184;
        v179[5] = v186[0];
        LODWORD(v179[4]) = v179[4] & 0xFFFFFFC0 | (2 * (v185[0] & 0x1F));
      }
    }
    v142 = v168;
    v134 = (DXGK_ALLOCATIONLIST *)v179;
    goto LABEL_150;
  }
  while ( 1 )
  {
    v70 = v61->ppPresentPlanes;
    v71 = 8LL * v60;
    v72 = (unsigned int)v69;
    v73 = (struct CRefCountedBuffer *)v70[v69];
    v169 = v73;
    v74 = *(unsigned int *)v73;
    v183[v71] = v74;
    LODWORD(v70) = *((_DWORD *)v73 + 1) & 1;
    v176 = v74;
    v183[v71 + 1] = (_DWORD)v70;
    if ( (*((_DWORD *)v73 + 1) & 1) != 0 )
      break;
    v115 = a7;
    v116 = (unsigned __int16)(*(_DWORD *)((char *)a9 + v64) >> 10) & (unsigned __int16)(1 << v74) & 0x3FF;
    if ( a7[v74] )
    {
      if ( ((unsigned __int16)(*(_DWORD *)((char *)a9 + v64) >> 10) & (unsigned __int16)(1 << v74) & 0x3FF) == 0 )
      {
        v117 = WdLogNewEntry5_WdAssertion(a7, v116);
        *(_QWORD *)(v117 + 24) = 1863LL;
        WdLogEvent5_WdAssertion(v117);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 192LL) + 64LL)
                                 + 40LL)
                     + 28LL) >= 0x4002u )
      {
        *(_QWORD *)&v185[8 * v60 - 2] = 0LL;
        v185[8 * v60] &= 0xFFFFFFE0;
        v186[4 * v60++] = 0LL;
        v163 = v60;
      }
    }
    else
    {
      if ( ((unsigned __int16)(*(_DWORD *)((char *)a9 + v64) >> 10) & (unsigned __int16)(1 << v74) & 0x3FF) != 0 )
      {
        v118 = WdLogNewEntry5_WdAssertion(a7, v116);
        *(_QWORD *)(v118 + 24) = 1880LL;
        WdLogEvent5_WdAssertion(v118);
      }
      if ( *((_QWORD *)v174 + v72) )
      {
        v119 = WdLogNewEntry5_WdAssertion(v115, v116);
        *(_QWORD *)(v119 + 24) = 1881LL;
        WdLogEvent5_WdAssertion(v119);
      }
    }
LABEL_108:
    v61 = v172;
    v69 = (unsigned int)(v171 + 1);
    v171 = v69;
    if ( (unsigned int)v69 >= v172->PresentPlaneCount )
    {
      v54 = v168;
      goto LABEL_121;
    }
    v64 = v177;
    v58 = v161;
  }
  v75 = *(_DWORD *)((char *)a9 + v64);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2498LL) )
    v75 = *(_DWORD *)((char *)a9 + v64) | (v75 >> 10);
  v76 = (unsigned int)v74;
  v77 = (struct CRefCountedBuffer *)(v75 & 0x3FF);
  if ( ((unsigned int)v77 & (1 << v74)) != 0 )
  {
    v79 = ((unsigned int)v77 & ((1 << v74) - 1) & 0x55555555)
        + ((((unsigned int)v77 & ((1 << v74) - 1)) >> 1) & 0x55555555);
    v80 = (v79 & 0x33333333) + ((v79 >> 2) & 0x33333333);
    v76 = 252645135LL;
    v81 = v80;
    v77 = (struct CRefCountedBuffer *)(v80 & 0xF0F0F0F);
    v78 = (((_DWORD)v77 + ((v81 >> 4) & 0xF0F0F0F)) & 0xFF00FF) + (((unsigned int)v77 + ((v81 >> 4) & 0xF0F0F0F)) >> 8);
  }
  else
  {
    v78 = -1;
  }
  v164 = v78;
  if ( v78 >= v58 )
  {
    v82 = WdLogNewEntry5_WdAssertion(v76, v77);
    *(_QWORD *)(v82 + 24) = 1727LL;
    WdLogEvent5_WdAssertion(v82);
  }
  if ( v78 >= 0xA )
  {
    v83 = WdLogNewEntry5_WdAssertion(v76, v77);
    *(_QWORD *)(v83 + 24) = 1734LL;
    WdLogEvent5_WdAssertion(v83);
  }
  v84 = 0;
  v162 = 0;
  if ( !v158 )
  {
LABEL_107:
    v60 = v163;
    goto LABEL_108;
  }
  v85 = v175;
  v170 = v175;
  while ( 1 )
  {
    v86 = (struct CRefCountedBuffer *)*((_QWORD *)v174 + v176 + v167 * v84);
    v165 = v86;
    if ( !v86 )
    {
      v87 = WdLogNewEntry5_WdAssertion(v174, v77);
      *(_QWORD *)(v87 + 24) = 1748LL;
      WdLogEvent5_WdAssertion(v87);
      v84 = v162;
      v86 = v165;
      v85 = v170;
    }
    v88 = v78;
    if ( *((_BYTE *)a9 + 356) )
      v89 = (char *)a9
          + 64 * (unsigned __int64)(v78 + v84 * *((_DWORD *)a9 + 139))
          + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8)
          + 576;
    else
      v89 = (char *)a9 + 80 * v78 + 504;
    *(_QWORD *)v89 = *(_QWORD *)(*((_QWORD *)v86 + 6) + 16LL);
    v90 = *((_QWORD *)this + 2);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v90 + 16) + 16LL) + 2506LL) )
    {
      v91 = *(_QWORD *)(*(_QWORD *)v85 + 184LL);
      if ( *((_BYTE *)a9 + 356) )
        v92 = (char *)a9
            + 64 * (unsigned __int64)(v78 + v84 * *((_DWORD *)a9 + 139))
            + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8)
            + 568;
      else
        v92 = (char *)a9 + 80 * v78 + 560;
      *(_QWORD *)v92 = v91;
      v90 = *((_QWORD *)this + 2);
    }
    if ( *((_BYTE *)a9 + 356) )
    {
      v93 = (char *)a9
          + 64 * (unsigned __int64)(v78 + v84 * *((_DWORD *)a9 + 139))
          + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8)
          + 600;
      v94 = 80LL * v78;
    }
    else
    {
      v94 = 80LL * v78;
      v93 = (char *)a9 + v94 + 496;
    }
    v95 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v90 + 16) + 544LL)
                                                                        + 8LL)
                                                            + 408LL))(
            *(_QWORD *)(v90 + 648),
            *((_QWORD *)v86 + 3),
            v93);
    ContextCount = v95;
    if ( v95 < 0 )
      break;
    v173 = 0LL;
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
    v101 = v165;
    if ( IsDxgmms2 )
    {
      v173 = -1LL;
      v102 = 0xFFFF;
      v166 = 0xFFFF;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v100 + 544) + 8LL)
                                                                       + 216LL))(
        *(_QWORD *)(v100 + 552),
        *(_QWORD *)(*((_QWORD *)v165 + 6) + 8LL),
        &v166,
        &v173,
        0LL);
      v102 = v166;
    }
    v103 = v162;
    if ( *((_BYTE *)a9 + 356) )
      *(_WORD *)((char *)a9
               + 64 * (unsigned __int64)(v164 + v162 * *((_DWORD *)a9 + 139))
               + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8)
               + 584) = v102;
    else
      *(_DWORD *)((char *)a9 + v94 + 548) ^= ((v102 << 17) ^ *(_DWORD *)((char *)a9 + v94 + 548)) & 0x3E0000;
    if ( *((_BYTE *)a9 + 356) )
      v77 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                             + 64 * (unsigned __int64)(v164 + v162 * *((_DWORD *)a9 + 139))
                                             + *((_DWORD *)a9 + 139) * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8)
                                             + 592);
    else
      v77 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + v94 + 512);
    *(_QWORD *)v77 = v173;
    v104 = *((_QWORD *)v101 + 5);
    if ( v104 )
      v105 = (*(_DWORD *)(v104 + 4) & 8) != 0;
    else
      v105 = 0;
    if ( v105 )
      v106 = *(_QWORD *)(*(_QWORD *)(v104 + 56) + 176LL);
    else
      v106 = 0LL;
    if ( *((_BYTE *)a9 + 356) )
    {
      v107 = *((_DWORD *)a9 + 139);
      v108 = v107 * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8) + 552LL;
      v104 = (unsigned __int64)(v164 + v162 * v107) << 6;
      *(_QWORD *)((char *)a9 + v108 + v104 + 56) = v106;
    }
    else
    {
      *((_QWORD *)a9 + 10 * v88 + 71) = v106;
    }
    if ( !v162 )
    {
      v109 = v169;
      if ( *((_BYTE *)a9 + 356)
        && (v104 = v164 * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8),
            *(_DWORD *)((char *)a9 + v104 + 592) = *((_DWORD *)v169 + 3),
            *((_BYTE *)a9 + 356)) )
      {
        v110 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                                + v164 * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8)
                                                + 712);
      }
      else
      {
        v110 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + v94 + 520);
      }
      v111 = (const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)*((_QWORD *)v109 + 6);
      if ( v111->SrcRect.right <= v111->SrcRect.left )
      {
        v112 = WdLogNewEntry5_WdAssertion(v104, v77);
        *(_QWORD *)(v112 + 24) = 1838LL;
        WdLogEvent5_WdAssertion(v112);
        v111 = (const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)*((_QWORD *)v109 + 6);
      }
      if ( v111->SrcRect.bottom <= v111->SrcRect.top )
      {
        v113 = WdLogNewEntry5_WdAssertion(v104, v77);
        *(_QWORD *)(v113 + 24) = 1839LL;
        WdLogEvent5_WdAssertion(v113);
        v111 = (const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)*((_QWORD *)v109 + 6);
      }
      DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3((DXGCONTEXT *)v104, v110, v111);
      v77 = v165;
      v103 = v162;
      v114 = 32LL * v163;
      *(_QWORD *)&v185[v114 / 4 - 2] = *((_QWORD *)v165 + 4);
      v185[v114 / 4] ^= (v185[v114 / 4] ^ v166) & 0x1F;
      ++v163;
      v186[v114 / 8] = v173;
    }
    v84 = v103 + 1;
    v78 = v164;
    v85 = (struct CRefCountedBuffer *)((char *)v170 + 8);
    v162 = v84;
    v170 = (struct CRefCountedBuffer *)((char *)v170 + 8);
    if ( v84 >= v158 )
      goto LABEL_107;
  }
  v120 = (_QWORD *)WdLogNewEntry5_WdError(v97, v96, v98);
  v121 = v165;
  v120[3] = this;
  v120[4] = v121;
  v120[5] = ContextCount;
  WdLogEvent5_WdError(v120);
LABEL_164:
  if ( (int)ContextCount < 0 )
  {
LABEL_165:
    v151 = 0LL;
    if ( v161 )
    {
      v152 = v158;
      do
      {
        v153 = 0;
        if ( v152 )
        {
          do
          {
            if ( *((_BYTE *)a9 + 356) )
            {
              v154 = *((_DWORD *)a9 + 139);
              v155 = v154 * ((8 * *((_DWORD *)a9 + 140) + 191) & 0xFFFFFFF8) + 600LL;
              v123 = (unsigned __int64)((unsigned int)v151 + v153 * v154) << 6;
              v156 = (char *)a9 + v155;
            }
            else
            {
              v123 = 80 * v151;
              v156 = (char *)a9 + 496;
            }
            v122 = &v156[v123];
            v124 = *(_QWORD *)v122;
            if ( *(_QWORD *)v122 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 424LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                *((unsigned int *)a9 + 36),
                v124,
                0LL);
            v152 = v158;
            ++v153;
          }
          while ( v153 < v158 );
        }
        v151 = (unsigned int)(v151 + 1);
      }
      while ( (unsigned int)v151 < v161 );
    }
    v157 = WdLogNewEntry5_WdError(v123, v122, v124);
    *(_QWORD *)(v157 + 32) = (int)ContextCount;
    *(_QWORD *)(v157 + 24) = this;
    WdLogEvent5_WdError(v157);
  }
  if ( v35 )
    CRefCountedBuffer::RefCountedBufferRelease(v35);
LABEL_178:
  if ( v178 )
    CRefCountedBuffer::RefCountedBufferRelease(v178);
  return (unsigned int)ContextCount;
}
