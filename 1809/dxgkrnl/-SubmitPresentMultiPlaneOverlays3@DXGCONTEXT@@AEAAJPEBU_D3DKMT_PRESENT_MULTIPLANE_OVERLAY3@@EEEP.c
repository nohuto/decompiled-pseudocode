/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C024C1C4
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A648 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011958 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C013E22C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C013EBDC (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01DEB48 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0226FA0 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C0249E18 (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 *     ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C024BF40 (-ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefC.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C024C0C4 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
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
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 ContextCount; // rsi
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v20; // r10
  _QWORD *v21; // rax
  unsigned int v22; // edx
  struct DXGADAPTER *v23; // r9
  int v24; // r12d
  char *v25; // rcx
  int v26; // r8d
  CRefCountedBuffer *v27; // r15
  unsigned int PresentPlaneCount; // r8d
  __int64 v29; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // r10
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v31; // rdx
  __int64 v32; // rax
  CRefCountedBuffer *v33; // rbx
  const struct DXGADAPTER *v34; // rcx
  __int64 v35; // r10
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rax
  int v44; // ecx
  __int64 v45; // rcx
  struct _DXGKARG_PRESENT *v46; // r8
  __int64 v47; // rax
  struct _DXGKARG_PRESENT *v48; // r15
  __int64 v49; // rax
  unsigned __int8 v50; // r13
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // r12d
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v55; // r9
  bool v56; // cf
  __int64 v57; // r8
  unsigned int v58; // eax
  __int64 v59; // r10
  D3DKMT_MULTIPLANE_OVERLAY3 *v60; // rdx
  __int64 LayerIndex; // rcx
  int v62; // edx
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // r15
  D3DKMT_MULTIPLANE_OVERLAY3 *v67; // r13
  __int64 v68; // r11
  int v69; // eax
  unsigned int v70; // edx
  __int64 v71; // rcx
  int v72; // edx
  unsigned int v73; // esi
  unsigned int v74; // ecx
  unsigned int v75; // edx
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // r10d
  struct CRefCountedBuffer *v79; // r8
  struct CRefCountedBuffer *v80; // r11
  __int64 v81; // rax
  __int64 v82; // r13
  char *v83; // rdx
  __int64 v84; // r9
  __int64 v85; // r8
  char *v86; // rdx
  char *v87; // r8
  __int64 v88; // r15
  int v89; // eax
  __int64 v90; // rcx
  unsigned __int8 IsDxgmms2; // al
  __int64 v92; // r10
  struct CRefCountedBuffer *v93; // rsi
  int v94; // r8d
  unsigned int v95; // r10d
  unsigned int v96; // r9d
  char *v97; // rdx
  unsigned __int64 v98; // rcx
  bool v99; // al
  __int64 v100; // r8
  int v101; // ecx
  __int64 v102; // rax
  struct CRefCountedBuffer *v103; // r13
  struct _VIDSCH_LAYER_ATTRIBUTE *v104; // rsi
  const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v105; // r8
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned int v108; // r8d
  unsigned __int64 v109; // rcx
  unsigned __int8 *v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // rax
  struct CRefCountedBuffer *v115; // rdx
  unsigned __int64 v116; // rcx
  unsigned int v117; // r13d
  D3DKMT_MULTIPLANE_OVERLAY3 *v118; // rsi
  __int64 v119; // rax
  UINT DirtyRectCount; // ecx
  unsigned int v121; // r12d
  _QWORD *v122; // rax
  __int64 v123; // r8
  DXGK_ALLOCATIONLIST *v124; // r15
  unsigned int v125; // esi
  struct CRefCountedBuffer *v126; // rdx
  char *v127; // r12
  __int64 v128; // r13
  __int64 v129; // rcx
  char *v130; // rax
  __int16 v131; // dx
  struct _DXGKARG_PRESENT *v132; // r8
  __int64 v133; // rax
  __int64 v134; // r8
  __int64 v135; // r9
  void *v136; // rdx
  ADAPTER_RENDER *v137; // rcx
  unsigned int v138; // r15d
  DXGCONTEXT **v139; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v141; // rax
  unsigned int v142; // r13d
  __int64 v143; // r15
  unsigned int v144; // eax
  unsigned int v145; // r12d
  int v146; // ecx
  __int64 v147; // rdx
  char *v148; // rdx
  __int64 v149; // r8
  __int64 v150; // rax
  unsigned int v151; // [rsp+30h] [rbp-D0h]
  UINT DriverPrivateDataSize; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v154; // [rsp+3Ch] [rbp-C4h]
  unsigned int v155; // [rsp+40h] [rbp-C0h]
  unsigned int v156; // [rsp+44h] [rbp-BCh]
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v157; // [rsp+48h] [rbp-B8h]
  struct CRefCountedBuffer *v158; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v159; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_PRESENT *v160; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v161; // [rsp+68h] [rbp-98h]
  struct CRefCountedBuffer *v162; // [rsp+70h] [rbp-90h] BYREF
  int v163; // [rsp+78h] [rbp-88h]
  int v164; // [rsp+7Ch] [rbp-84h]
  const struct DXGALLOCATIONREFERENCE *v165; // [rsp+80h] [rbp-80h]
  struct CRefCountedBuffer *v166; // [rsp+88h] [rbp-78h]
  int v167; // [rsp+90h] [rbp-70h]
  __int64 v168; // [rsp+98h] [rbp-68h] BYREF
  __int64 v169; // [rsp+A0h] [rbp-60h]
  CRefCountedBuffer *v170; // [rsp+A8h] [rbp-58h]
  _QWORD v171[12]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID P; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v173[128]; // [rsp+118h] [rbp+18h] BYREF
  int v174; // [rsp+198h] [rbp+98h]
  _DWORD v175[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v176; // [rsp+1A8h] [rbp+A8h]
  _DWORD v177[2]; // [rsp+1B0h] [rbp+B0h]
  _QWORD v178[37]; // [rsp+1B8h] [rbp+B8h]

  v160 = a8;
  v165 = a6;
  v157 = a2;
  v166 = (struct CRefCountedBuffer *)a10;
  if ( !a3 && !a4 && !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 1513LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a5 + a4 + (unsigned int)a3;
  if ( (unsigned int)v15 > a2->PresentPlaneCount )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 1516LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v18 + 24) = 1517LL;
    WdLogEvent5_WdAssertion(v18);
  }
  ContextCount = a2->ContextCount;
  v20 = a2;
  v151 = ContextCount;
  if ( (unsigned int)ContextCount > 0x40 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v21[4] = ContextCount;
    LODWORD(ContextCount) = -1073741811;
    v21[6] = -1073741811LL;
    v21[5] = 64LL;
    goto LABEL_11;
  }
  v22 = 1;
  v23 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v159 = *((_DWORD *)v23 + 592);
  v24 = *((_DWORD *)*a10 + 97);
  if ( (unsigned int)ContextCount > 1 )
  {
    v25 = (char *)v166 + 8;
    while ( 1 )
    {
      v26 = *(_DWORD *)(*(_QWORD *)v25 + 388LL);
      if ( (v26 & v24) != 0 )
        break;
      v24 |= v26;
      ++v22;
      v25 += 8;
      if ( v22 >= (unsigned int)ContextCount )
        goto LABEL_16;
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    LODWORD(ContextCount) = -1073741811;
    v21[4] = -1073741811LL;
LABEL_11:
    v21[3] = this;
    WdLogEvent5_WdError(v21);
    return (unsigned int)ContextCount;
  }
LABEL_16:
  DriverPrivateDataSize = 0;
  v27 = 0LL;
  PresentPlaneCount = v20->PresentPlaneCount;
  v29 = 0LL;
  v162 = 0LL;
  if ( PresentPlaneCount )
  {
    ppPresentPlanes = v20->ppPresentPlanes;
    while ( 1 )
    {
      v31 = ppPresentPlanes[v29];
      v161 = (unsigned int)v29;
      if ( (v31->InputFlags.Value & 1) != 0 && !v31->LayerIndex )
        break;
      v29 = (unsigned int)(v29 + 1);
      if ( (unsigned int)v29 >= PresentPlaneCount )
        goto LABEL_21;
    }
    v39 = ReadPresentPrivateDriverData(v23, v31, &v162);
    v41 = v39;
    if ( v39 < 0 )
    {
      v42 = WdLogNewEntry5_WdError(v40);
      *(_QWORD *)(v42 + 24) = v41;
      WdLogEvent5_WdError(v42);
      return (unsigned int)v41;
    }
    v27 = v162;
    DriverPrivateDataSize = v157->ppPresentPlanes[v161]->DriverPrivateDataSize;
  }
LABEL_21:
  v32 = *((_QWORD *)this + 2);
  v33 = 0LL;
  v170 = v27;
  v158 = 0LL;
  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v32 + 16) + 16LL)) >= 2500 )
  {
    v36 = ReadPresentDirtyRectsData(
            v34,
            *(_DWORD *)(v35 + 28),
            *(struct _D3DKMT_MULTIPLANE_OVERLAY3 ***)(v35 + 32),
            &v158);
    ContextCount = v36;
    if ( v36 < 0 )
    {
      v38 = WdLogNewEntry5_WdError(v37);
      *(_QWORD *)(v38 + 24) = ContextCount;
      WdLogEvent5_WdError(v38);
      goto LABEL_178;
    }
    v33 = v158;
    LODWORD(ContextCount) = v151;
  }
  *((_DWORD *)a9 + 37) = ContextCount;
  *((_DWORD *)a9 + 36) = v24;
  v44 = 2048;
  if ( (unsigned int)ContextCount > 1 )
    v44 = 3072;
  *(_DWORD *)a9 = *(_DWORD *)a9 & 0xFFFFFBFF | v44;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    if ( v27 )
    {
      v46 = v160;
      v160->PrivateDriverDataSize = DriverPrivateDataSize;
      v46->pPrivateDriverData = (char *)v27 + 8;
    }
    *((_QWORD *)a9 + 3) = v27;
    *((_QWORD *)a9 + 5) = v33;
  }
  if ( *((_DWORD *)a9 + 32) != 5 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v45);
    *(_QWORD *)(v47 + 24) = 1624LL;
    WdLogEvent5_WdAssertion(v47);
  }
  v48 = v160;
  if ( v160->pDmaBuffer )
  {
    v49 = WdLogNewEntry5_WdAssertion(v45);
    *(_QWORD *)(v49 + 24) = 1629LL;
    WdLogEvent5_WdAssertion(v49);
  }
  v50 = a4 + a3;
  v51 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  LOBYTE(v51) = *(_BYTE *)(*(_QWORD *)(v51 + 16) + 2466LL);
  v52 = (unsigned __int8)(a5 + v50);
  if ( !(_BYTE)v51 )
    v52 = v50;
  v164 = v52;
  if ( (unsigned __int8)v52 > 0xAu )
  {
    v53 = WdLogNewEntry5_WdAssertion(v51);
    *(_QWORD *)(v53 + 24) = 1647LL;
    WdLogEvent5_WdAssertion(v53);
  }
  v54 = 0;
  v55 = v157;
  v56 = *((_BYTE *)a9 + 356) != 0;
  v155 = 0;
  v57 = 0LL;
  v58 = v157->PresentPlaneCount;
  v59 = v56 ? 560LL : 488LL;
  v169 = v59;
  if ( v58 )
  {
    while ( 1 )
    {
      v60 = v55->ppPresentPlanes[v57];
      LayerIndex = v60->LayerIndex;
      if ( (v60->InputFlags.Value & 1) != 0 )
        break;
      if ( a7[LayerIndex] )
      {
        v62 = *(_DWORD *)((char *)a9 + v59);
        v63 = (v62 ^ (v62 | (1024 << LayerIndex))) & 0xFFC00;
        goto LABEL_48;
      }
LABEL_49:
      v58 = v55->PresentPlaneCount;
      v57 = (unsigned int)(v57 + 1);
      if ( (unsigned int)v57 >= v58 )
        goto LABEL_50;
    }
    v62 = *(_DWORD *)((char *)a9 + v59);
    v63 = ((unsigned __int16)v62 ^ (unsigned __int16)(v62 | (1 << LayerIndex))) & 0x3FF;
LABEL_48:
    *(_DWORD *)((char *)a9 + v59) = v62 ^ v63;
    goto LABEL_49;
  }
LABEL_50:
  v64 = 0LL;
  v163 = 0;
  if ( !v58 )
  {
LABEL_121:
    P = 0LL;
    v174 = 0;
    v117 = v159;
    if ( v159 >= 2 )
    {
      LODWORD(v171[0]) = v55->VidPnSourceId;
      HIDWORD(v171[0]) = v54;
      v121 = v151;
      v171[1] = v175;
    }
    else
    {
      _mm_lfence();
      v118 = *v55->ppPresentPlanes;
      if ( (v118->InputFlags.Value & 1) == 0 )
      {
        v119 = WdLogNewEntry5_WdAssertion(v64);
        *(_QWORD *)(v119 + 24) = 1894LL;
        WdLogEvent5_WdAssertion(v119);
      }
      v48->Flags.Value &= ~0x1000u;
      DirtyRectCount = v118->pPlaneAttributes->DirtyRectCount;
      v48->SubRectCnt = DirtyRectCount;
      if ( DirtyRectCount )
        v48->pDstSubRects = v118->pPlaneAttributes->pDirtyRects;
      v121 = v151;
      if ( v151 > 1 )
      {
        v122 = PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&P, v151);
        v124 = (DXGK_ALLOCATIONLIST *)v122;
        if ( !v122 )
        {
          LODWORD(ContextCount) = -1073741801;
LABEL_129:
          v116 = (unsigned __int64)P;
          if ( P != v173 && P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_165;
        }
        v125 = 0;
        v126 = v166;
        v127 = (char *)(v122 + 2);
        v161 = (unsigned __int64)v166;
        do
        {
          v128 = *((_QWORD *)v165 + v117 * v125);
          v129 = (*(_DWORD *)(v128 + 72) >> 12) & 0x3F;
          if ( (_DWORD)v129 != *(_DWORD *)(*(_QWORD *)v126 + 392LL) )
          {
            v133 = WdLogNewEntry5_WdError(v129);
            *(_QWORD *)(v133 + 24) = v128;
            WdLogEvent5_WdError(v133);
            LODWORD(ContextCount) = -1073741811;
            goto LABEL_129;
          }
          *((_QWORD *)v127 - 2) = *(_QWORD *)(v128 + 32);
          LOBYTE(v123) = *((_BYTE *)this + 431);
          *((_QWORD *)v127 - 1) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                             + 248LL))(
                                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                                    *(_QWORD *)(v128 + 24),
                                    v123,
                                    *(unsigned int *)(*(_QWORD *)v126 + 392LL));
          if ( *((_BYTE *)a9 + 356) )
            v130 = (char *)a9
                 + 64 * (unsigned __int64)(v125 * *((_DWORD *)a9 + 141))
                 + *((_DWORD *)a9 + 141) * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8)
                 + 600;
          else
            v130 = (char *)a9 + 512;
          *(_QWORD *)v127 = *(_QWORD *)v130;
          if ( *((_BYTE *)a9 + 356) )
            v131 = *(_WORD *)((char *)a9
                            + 64 * (unsigned __int64)(v125 * *((_DWORD *)a9 + 141))
                            + *((_DWORD *)a9 + 141) * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8)
                            + 592);
          else
            v131 = (*((_DWORD *)a9 + 137) >> 17) & 0x1F;
          v117 = v159;
          ++v125;
          *((_WORD *)v127 + 4) = v131;
          v127 += 32;
          v126 = (struct CRefCountedBuffer *)(v161 + 8);
          v161 += 8LL;
        }
        while ( v125 < v151 );
        v121 = v151;
        v132 = v160;
        v160->NumSrcAllocations = v151;
LABEL_150:
        v132->pAllocationList = v124;
        v136 = 0LL;
        v137 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
        if ( !*(_BYTE *)(*((_QWORD *)v137 + 2) + 2474LL) )
          v136 = (void *)*((_QWORD *)this + 23);
        LODWORD(ContextCount) = ADAPTER_RENDER::DdiPresent(v137, v136, (const GUID *)v132);
        if ( (int)ContextCount >= 0 )
        {
          v138 = 0;
          if ( v121 )
          {
            v139 = (DXGCONTEXT **)v166;
            do
            {
              CurrentThread = KeGetCurrentThread();
              if ( *((struct _KTHREAD **)*v139 + 56) != CurrentThread )
              {
                v141 = WdLogNewEntry5_WdAssertion(CurrentThread);
                *(_QWORD *)(v141 + 24) = 2017LL;
                WdLogEvent5_WdAssertion(v141);
              }
              if ( (*((_DWORD *)this + 99) & 0x10) != 0 )
                DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(this, 0LL, 0, a9);
              LODWORD(ContextCount) = DXGCONTEXT::SubmitCommandToImplicitQueue(*v139, a9);
              if ( (int)ContextCount < 0 )
                break;
              *(_DWORD *)a9 &= ~0x800u;
              ++v138;
              ++v139;
            }
            while ( v138 < v121 );
          }
        }
        v116 = (unsigned __int64)P;
        if ( P != v173 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_164;
      }
      if ( *((_BYTE *)this + 430) )
      {
        memset(v171, 0, sizeof(v171));
        LOBYTE(v134) = *((_BYTE *)this + 431);
        v135 = *((unsigned int *)this + 98);
        v171[4] = v176;
        v171[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                    *(_QWORD *)(*(_QWORD *)v165 + 24LL),
                    v134,
                    v135);
        v171[6] = v178[0];
        LOWORD(v171[7]) = v177[0] & 0x1F;
      }
      else
      {
        memset(v171, 0, 0x48uLL);
        v171[3] = v176;
        v171[5] = v178[0];
        LODWORD(v171[4]) = v171[4] & 0xFFFFFFC0 | (2 * (v177[0] & 0x1F));
      }
    }
    v132 = v160;
    v124 = (DXGK_ALLOCATIONLIST *)v171;
    goto LABEL_150;
  }
  while ( 1 )
  {
    v65 = 8LL * v54;
    v66 = (unsigned int)v64;
    v67 = v55->ppPresentPlanes[v64];
    v161 = (unsigned __int64)v67;
    v68 = v67->LayerIndex;
    v175[v65] = v68;
    v69 = v67->InputFlags.Value & 1;
    v167 = v68;
    v175[v65 + 1] = v69;
    if ( (v67->InputFlags.Value & 1) != 0 )
      break;
    v110 = a7;
    if ( a7[v68] )
    {
      if ( ((unsigned __int16)(*(_DWORD *)((char *)a9 + v59) >> 10) & (unsigned __int16)(1 << v68) & 0x3FF) == 0 )
      {
        v111 = WdLogNewEntry5_WdAssertion(a7);
        *(_QWORD *)(v111 + 24) = 1855LL;
        WdLogEvent5_WdAssertion(v111);
        v55 = v157;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 192LL) + 64LL)
                                 + 40LL)
                     + 28LL) >= 0x4002u )
      {
        *(_QWORD *)&v177[8 * v54 - 2] = 0LL;
        v177[8 * v54] &= 0xFFFFFFE0;
        v178[4 * v54++] = 0LL;
        v155 = v54;
      }
    }
    else
    {
      if ( ((unsigned __int16)(*(_DWORD *)((char *)a9 + v59) >> 10) & (unsigned __int16)(1 << v68) & 0x3FF) != 0 )
      {
        v112 = WdLogNewEntry5_WdAssertion(a7);
        *(_QWORD *)(v112 + 24) = 1872LL;
        WdLogEvent5_WdAssertion(v112);
        v55 = v157;
      }
      if ( *((_QWORD *)v165 + v66) )
      {
        v113 = WdLogNewEntry5_WdAssertion(v110);
        *(_QWORD *)(v113 + 24) = 1873LL;
        WdLogEvent5_WdAssertion(v113);
        goto LABEL_107;
      }
    }
LABEL_108:
    v64 = (unsigned int)(v163 + 1);
    v163 = v64;
    if ( (unsigned int)v64 >= v55->PresentPlaneCount )
    {
      v48 = v160;
      goto LABEL_121;
    }
    v59 = v169;
  }
  v70 = *(_DWORD *)((char *)a9 + v59);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2466LL) )
    v70 = *(_DWORD *)((char *)a9 + v59) | (v70 >> 10);
  v71 = (unsigned int)v68;
  v72 = v70 & 0x3FF;
  if ( (v72 & (1 << v68)) != 0 )
  {
    v74 = (v72 & ((1 << v68) - 1) & 0x55555555) + (((v72 & (unsigned int)((1 << v68) - 1)) >> 1) & 0x55555555);
    v75 = (v74 & 0x33333333) + ((v74 >> 2) & 0x33333333);
    v71 = 252645135LL;
    v73 = (((v75 & 0xF0F0F0F) + ((v75 >> 4) & 0xF0F0F0F)) & 0xFF00FF)
        + (((v75 & 0xF0F0F0F) + ((v75 >> 4) & 0xF0F0F0F)) >> 8);
  }
  else
  {
    v73 = -1;
  }
  v156 = v73;
  if ( v73 >= (unsigned __int8)v164 )
  {
    v76 = WdLogNewEntry5_WdAssertion(v71);
    *(_QWORD *)(v76 + 24) = 1719LL;
    WdLogEvent5_WdAssertion(v76);
  }
  if ( v73 >= 0xA )
  {
    v77 = WdLogNewEntry5_WdAssertion(v71);
    *(_QWORD *)(v77 + 24) = 1726LL;
    WdLogEvent5_WdAssertion(v77);
  }
  v78 = 0;
  v154 = 0;
  if ( !v151 )
  {
LABEL_106:
    v54 = v155;
LABEL_107:
    v55 = v157;
    goto LABEL_108;
  }
  v79 = v166;
  v162 = v166;
  while ( 1 )
  {
    v80 = (struct CRefCountedBuffer *)*((_QWORD *)v165 + v167 + v159 * v78);
    v158 = v80;
    if ( !v80 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v165);
      *(_QWORD *)(v81 + 24) = 1740LL;
      WdLogEvent5_WdAssertion(v81);
      v78 = v154;
      v80 = v158;
      v79 = v162;
    }
    v82 = v73;
    if ( *((_BYTE *)a9 + 356) )
      v83 = (char *)a9
          + 64 * (unsigned __int64)(v73 + v78 * *((_DWORD *)a9 + 141))
          + *((_DWORD *)a9 + 141) * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8)
          + 584;
    else
      v83 = (char *)a9 + 80 * v73 + 504;
    *(_QWORD *)v83 = *(_QWORD *)(*((_QWORD *)v80 + 6) + 16LL);
    v84 = *((_QWORD *)this + 2);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v84 + 16) + 16LL) + 2474LL) )
    {
      v85 = *(_QWORD *)(*(_QWORD *)v79 + 184LL);
      if ( *((_BYTE *)a9 + 356) )
        v86 = (char *)a9
            + 64 * (unsigned __int64)(v73 + v78 * *((_DWORD *)a9 + 141))
            + *((_DWORD *)a9 + 141) * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8)
            + 576;
      else
        v86 = (char *)a9 + 80 * v73 + 560;
      *(_QWORD *)v86 = v85;
      v84 = *((_QWORD *)this + 2);
    }
    if ( *((_BYTE *)a9 + 356) )
    {
      v87 = (char *)a9
          + 64 * (unsigned __int64)(v73 + v78 * *((_DWORD *)a9 + 141))
          + *((_DWORD *)a9 + 141) * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8)
          + 608;
      v88 = 80LL * v73;
    }
    else
    {
      v88 = 80LL * v73;
      v87 = (char *)a9 + v88 + 496;
    }
    v89 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v84 + 16) + 544LL)
                                                                        + 8LL)
                                                            + 408LL))(
            *(_QWORD *)(v84 + 648),
            *((_QWORD *)v80 + 3),
            v87);
    ContextCount = v89;
    if ( v89 < 0 )
      break;
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
    v93 = v158;
    if ( IsDxgmms2 )
    {
      v168 = -1LL;
      v94 = 0xFFFF;
      DriverPrivateDataSize = 0xFFFF;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v92 + 544) + 8LL) + 216LL))(
        *(_QWORD *)(v92 + 552),
        *(_QWORD *)(*((_QWORD *)v158 + 6) + 8LL),
        &DriverPrivateDataSize,
        &v168);
      v94 = DriverPrivateDataSize;
    }
    v95 = v154;
    v96 = v156;
    if ( *((_BYTE *)a9 + 356) )
      *(_WORD *)((char *)a9
               + 64 * (unsigned __int64)(v156 + v154 * *((_DWORD *)a9 + 141))
               + *((_DWORD *)a9 + 141) * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8)
               + 592) = v94;
    else
      *(_DWORD *)((char *)a9 + v88 + 548) ^= ((v94 << 17) ^ *(_DWORD *)((char *)a9 + v88 + 548)) & 0x3E0000;
    if ( *((_BYTE *)a9 + 356) )
      v97 = (char *)a9
          + 64 * (unsigned __int64)(v96 + v95 * *((_DWORD *)a9 + 141))
          + *((_DWORD *)a9 + 141) * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8)
          + 600;
    else
      v97 = (char *)a9 + v88 + 512;
    *(_QWORD *)v97 = v168;
    v98 = *((_QWORD *)v93 + 5);
    if ( v98 )
      v99 = (*(_DWORD *)(v98 + 4) & 8) != 0;
    else
      v99 = 0;
    if ( v99 )
      v100 = *(_QWORD *)(*(_QWORD *)(v98 + 56) + 176LL);
    else
      v100 = 0LL;
    if ( *((_BYTE *)a9 + 356) )
    {
      v101 = *((_DWORD *)a9 + 141);
      v102 = v101 * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8);
      v98 = (unsigned __int64)(v96 + v95 * v101) << 6;
      *(_QWORD *)((char *)a9 + v102 + v98 + 616) = v100;
    }
    else
    {
      *((_QWORD *)a9 + 10 * v82 + 71) = v100;
    }
    if ( !v95 )
    {
      v103 = (struct CRefCountedBuffer *)v161;
      if ( *((_BYTE *)a9 + 356)
        && (v98 = v96 * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8),
            *(_DWORD *)((char *)a9 + v98 + 600) = *(_DWORD *)(v161 + 12),
            *((_BYTE *)a9 + 356)) )
      {
        v104 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                                + v96 * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8)
                                                + 720);
      }
      else
      {
        v104 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9 + v88 + 520);
      }
      v105 = (const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)*((_QWORD *)v103 + 6);
      if ( v105->SrcRect.right <= v105->SrcRect.left )
      {
        v106 = WdLogNewEntry5_WdAssertion(v98);
        *(_QWORD *)(v106 + 24) = 1830LL;
        WdLogEvent5_WdAssertion(v106);
        v105 = (const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)*((_QWORD *)v103 + 6);
      }
      if ( v105->SrcRect.bottom <= v105->SrcRect.top )
      {
        v107 = WdLogNewEntry5_WdAssertion(v98);
        *(_QWORD *)(v107 + 24) = 1831LL;
        WdLogEvent5_WdAssertion(v107);
        v105 = (const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)*((_QWORD *)v103 + 6);
      }
      DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3((DXGCONTEXT *)v98, v104, v105);
      v108 = v155;
      v95 = v154;
      v109 = 32LL * v155;
      *(_QWORD *)&v177[v109 / 4 - 2] = *((_QWORD *)v158 + 4);
      v177[v109 / 4] ^= ((unsigned __int8)DriverPrivateDataSize ^ (unsigned __int8)v177[v109 / 4]) & 0x1F;
      v155 = v108 + 1;
      v178[v109 / 8] = v168;
    }
    v78 = v95 + 1;
    v73 = v156;
    v79 = (struct CRefCountedBuffer *)((char *)v162 + 8);
    v154 = v78;
    v162 = (struct CRefCountedBuffer *)((char *)v162 + 8);
    if ( v78 >= v151 )
      goto LABEL_106;
  }
  v114 = (_QWORD *)WdLogNewEntry5_WdError(v90);
  v115 = v158;
  v114[3] = this;
  v114[4] = v115;
  v114[5] = ContextCount;
  WdLogEvent5_WdError(v114);
LABEL_164:
  if ( (int)ContextCount < 0 )
  {
LABEL_165:
    v142 = (unsigned __int8)v164;
    v143 = 0LL;
    if ( (_BYTE)v164 )
    {
      v144 = v151;
      do
      {
        v145 = 0;
        if ( v144 )
        {
          do
          {
            if ( *((_BYTE *)a9 + 356) )
            {
              v146 = *((_DWORD *)a9 + 141);
              v147 = v146 * ((8 * *((_DWORD *)a9 + 142) + 191) & 0xFFFFFFF8) + 608LL;
              v116 = (unsigned __int64)((unsigned int)v143 + v145 * v146) << 6;
              v148 = (char *)a9 + v147;
            }
            else
            {
              v116 = 80 * v143;
              v148 = (char *)a9 + 496;
            }
            v149 = *(_QWORD *)&v148[v116];
            if ( v149 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 424LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                *((unsigned int *)a9 + 36),
                v149,
                0LL);
            v144 = v151;
            ++v145;
          }
          while ( v145 < v151 );
        }
        v143 = (unsigned int)(v143 + 1);
      }
      while ( (unsigned int)v143 < v142 );
    }
    v150 = WdLogNewEntry5_WdError(v116);
    *(_QWORD *)(v150 + 32) = (int)ContextCount;
    *(_QWORD *)(v150 + 24) = this;
    WdLogEvent5_WdError(v150);
  }
  if ( v33 )
    CRefCountedBuffer::RefCountedBufferRelease(v33);
LABEL_178:
  if ( v170 )
    CRefCountedBuffer::RefCountedBufferRelease(v170);
  return (unsigned int)ContextCount;
}
