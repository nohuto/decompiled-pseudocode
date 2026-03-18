/*
 * XREFs of ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C027FFB0 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02818B8 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C0284140 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001908 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Valid@CVidSchSubmitData@@QEBAEXZ @ 0x1C00037A4 (-Valid@CVidSchSubmitData@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1C000C190 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x1C000C2A8 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000C2D0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C4A4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x1C003CB0C (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0047660 (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0qqqpqddddddddddddqqqqqq @ 0x1C00476F4 (McTemplateK0qqqpqddddddddddddqqqqqq.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00FFBE0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0101DA0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0101F50 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01025B4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0121F80 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01375C0 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C013EB3C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C014F834 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C014FD2C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01506E8 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z @ 0x1C01F2294 (-GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z.c)
 *     ?ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1C027F8B8 (-ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVE.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027FBA0 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 *     InverseXformMPORect3 @ 0x1C027FE04 (InverseXformMPORect3.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0281E68 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C0282F40 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // r15
  __int64 VidPnSourceId; // r12
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v27; // rdx
  __int64 left; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 Height; // r8
  LONG v32; // r9d
  int v33; // r13d
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rdx
  _QWORD *v35; // rax
  __int64 Rotation; // rdx
  int right; // r10d
  LONG bottom; // eax
  __int64 v39; // rcx
  RECT SrcRect; // xmm0
  __int64 v41; // rdx
  int v42; // r9d
  unsigned __int64 v43; // rdx
  unsigned __int8 v44; // r11
  char v45; // r10
  __int64 PresentPlaneCount; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  int v48; // eax
  UINT v49; // r15d
  __int64 v50; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v51; // r13
  __int64 LayerIndex; // r8
  __int64 v53; // r14
  __int64 v54; // r12
  __int64 v55; // r8
  __int64 v56; // r15
  D3DKMT_HANDLE v57; // ebx
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // r8
  int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rax
  struct _EX_RUNDOWN_REF *v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct DXGALLOCATIONREFERENCE *v72; // rdx
  bool v73; // zf
  const struct DXGALLOCATION *v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  const GUID *v77; // r8
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rbx
  __int64 v82; // rcx
  int v83; // eax
  __int64 FlipInterval; // rcx
  int top; // r11d
  int v86; // r15d
  int v87; // r9d
  int v88; // r10d
  D3DDDI_ROTATION v89; // eax
  UINT DirtyRectCount; // r12d
  UINT v91; // r15d
  LONG v92; // r9d
  LONG v93; // r11d
  BOOL v94; // eax
  unsigned __int8 v95; // r10
  BOOL v96; // eax
  int v97; // r9d
  int v98; // edx
  char v99; // r8
  __int64 v100; // rcx
  __int64 v101; // r15
  __int64 v102; // rdx
  __int64 v103; // rdx
  int v104; // r14d
  unsigned int v105; // r8d
  __int64 v106; // rdx
  D3DDDI_FLIPINTERVAL_TYPE v107; // r15d
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  int v111; // ecx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  int v117; // ecx
  int v118; // ecx
  int v119; // ecx
  int v120; // eax
  int v121; // ecx
  int v122; // ecx
  UINT v123; // ecx
  UINT v124; // ecx
  UINT v125; // ecx
  UINT v126; // edx
  UINT Duration; // eax
  int v128; // ecx
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321 Value; // eax
  _OWORD *v130; // rax
  _QWORD *pHDRMetaData; // rax
  bool IsFullWDDMDevice; // al
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rax
  int v137; // eax
  __int64 v138; // rcx
  __int64 v139; // r14
  __int64 v140; // rax
  int v141; // eax
  __int64 v142; // rcx
  __int64 v143; // rax
  int v144; // eax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rax
  int v148; // eax
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rax
  int v152; // r9d
  int v153; // r8d
  __int64 v154; // rdx
  D3DKMT_MULTIPLANE_OVERLAY3 **v155; // rax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v156; // rbx
  __int64 v157; // rax
  int v158; // eax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  char v165; // [rsp+D0h] [rbp-80h]
  unsigned __int8 v166; // [rsp+D1h] [rbp-7Fh]
  unsigned __int8 v167; // [rsp+D2h] [rbp-7Eh]
  bool v168; // [rsp+D3h] [rbp-7Dh]
  char v169; // [rsp+D4h] [rbp-7Ch]
  UINT v170; // [rsp+D8h] [rbp-78h]
  int v171; // [rsp+DCh] [rbp-74h]
  char v172; // [rsp+E0h] [rbp-70h]
  int v173; // [rsp+E8h] [rbp-68h]
  int v174; // [rsp+ECh] [rbp-64h]
  int v175; // [rsp+F0h] [rbp-60h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v176; // [rsp+F4h] [rbp-5Ch]
  int v177; // [rsp+100h] [rbp-50h]
  D3DKMT_MULTIPLANE_OVERLAY3 *v178; // [rsp+108h] [rbp-48h]
  signed int v179; // [rsp+108h] [rbp-48h]
  signed int Width; // [rsp+118h] [rbp-38h]
  unsigned int v182; // [rsp+120h] [rbp-30h]
  int v183; // [rsp+130h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v184; // [rsp+140h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v185; // [rsp+148h] [rbp-8h] BYREF
  __int64 v186; // [rsp+150h] [rbp+0h]
  __int64 v187; // [rsp+158h] [rbp+8h]
  struct DXGCONTEXT **v188; // [rsp+160h] [rbp+10h]
  struct VIDSCH_SUBMIT_DATA_BASE *v189[2]; // [rsp+168h] [rbp+18h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v190; // [rsp+178h] [rbp+28h] BYREF
  RECT v191; // [rsp+1B0h] [rbp+60h]
  struct DXGALLOCATIONREFERENCE *v192[6]; // [rsp+1C0h] [rbp+70h] BYREF
  RECT v193; // [rsp+1F0h] [rbp+A0h] BYREF
  struct _DXGKARG_PRESENT v194; // [rsp+200h] [rbp+B0h] BYREF
  _D3DKMT_PRESENT v195; // [rsp+2B0h] [rbp+160h] BYREF
  enum _D3DDDIFORMAT v196[10]; // [rsp+890h] [rbp+740h] BYREF
  unsigned __int8 v197[16]; // [rsp+8B8h] [rbp+768h] BYREF

  v4 = *((_QWORD *)this + 2);
  v188 = a4;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(v4 + 16)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v10 + 24) = 2780LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 1728) != v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 2781LL;
    WdLogEvent5_WdAssertion(v13);
    v11 = *((_QWORD *)this + 2);
  }
  v14 = 1;
  *((_BYTE *)this + 450) = 1;
  VidPnSourceId = a2->VidPnSourceId;
  v176 = a2->VidPnSourceId;
  v16 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  v17 = *(unsigned int *)(v16 + 2392);
  v173 = v17;
  if ( a2->PresentPlaneCount > (unsigned int)v17 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v11, v9);
    v18[3] = a2->PresentPlaneCount;
    v18[4] = v17;
LABEL_260:
    LODWORD(v24) = -1073741811;
    v18[5] = -1073741811LL;
LABEL_261:
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)v24;
  }
  v19 = *(_DWORD *)(v11 + 4 * VidPnSourceId + 1088) >> 9;
  v187 = a2->VidPnSourceId;
  if ( (v19 & 1) == 0 )
  {
    v20 = DXGCONTEXT::CheckDevicePresentSettings(this, 1LL, 0LL, VidPnSourceId);
    v24 = v20;
    if ( v20 >= 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
      v24 = -1071775739LL;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    }
    v18[3] = v24;
    v18[4] = this;
    v18[5] = VidPnSourceId;
    goto LABEL_261;
  }
  if ( (a2->Flags.Value & 3) != 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v11, v9);
    v18[3] = this;
    v18[4] = a2->Flags.Value;
    goto LABEL_260;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(
    (__int64)v192,
    v17 * a2->ContextCount);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(*((DXGDEVICE **)this + 2), VidPnSourceId, v192[0], v17);
  v25 = *((_QWORD *)this + 2);
  v186 = *(_QWORD *)v192[0];
  ADAPTER_DISPLAY::GetDDIEnabledPlanes(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v25 + 1728) + 2552LL), VidPnSourceId, v197);
  memset(v196, 0, sizeof(v196));
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
    v14 = !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
  v168 = v14;
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
                      VidPnSourceId);
  if ( DisplayModeInfo )
  {
    Height = *(unsigned int *)DisplayModeInfo;
    v32 = *((_DWORD *)DisplayModeInfo + 1);
    v33 = 0;
    pPostComposition = a2->pPostComposition;
    *(_QWORD *)&v191.left = 0LL;
    *(_QWORD *)&v191.right = __PAIR64__(v32, Height);
    v169 = 0;
    v175 = 0;
    v177 = 0;
    if ( pPostComposition )
    {
      if ( pPostComposition->Flags.Value )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdWarning(left, pPostComposition, Height);
        v35[3] = this;
        Rotation = (__int64)a2->pPostComposition->Flags.0;
LABEL_20:
        v35[4] = Rotation;
        goto LABEL_198;
      }
      if ( pPostComposition->Rotation != D3DDDI_ROTATION_IDENTITY )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdWarning(left, pPostComposition, Height);
        v35[3] = this;
        Rotation = a2->pPostComposition->Rotation;
        goto LABEL_20;
      }
      if ( pPostComposition->SrcRect.left >= pPostComposition->SrcRect.right
        || pPostComposition->SrcRect.top >= pPostComposition->SrcRect.bottom
        || (left = (unsigned int)pPostComposition->DstRect.left,
            right = pPostComposition->DstRect.right,
            (int)left >= right)
        || (bottom = pPostComposition->DstRect.bottom, pPostComposition->DstRect.top >= bottom)
        || (int)left < 0
        || (int)Height < right
        || pPostComposition->DstRect.top < 0
        || v32 < bottom )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdWarning(left, pPostComposition, Height);
        LODWORD(v24) = -1073741811;
        v35[3] = this;
        v35[4] = -1073741811LL;
        goto LABEL_199;
      }
      v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_BYTE *)(*(_QWORD *)(v39 + 16) + 2498LL) || v14 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, pPostComposition, Height);
        LODWORD(v24) = -1073741811;
        v35[3] = -1073741811LL;
        v35[4] = this;
        goto LABEL_199;
      }
      SrcRect = pPostComposition->SrcRect;
      v41 = *(_QWORD *)&pPostComposition->SrcRect.left;
      v191 = SrcRect;
      left = *(_QWORD *)&SrcRect.right;
      v183 = v41;
      if ( (_DWORD)v41 || SrcRect.right != (_DWORD)Height || HIDWORD(v41) || SrcRect.bottom != v32 )
      {
        v169 = 1;
        left = (unsigned int)(SrcRect.bottom - HIDWORD(v41));
        v175 = SrcRect.right - v41;
        v177 = SrcRect.bottom - HIDWORD(v41);
        v33 = SrcRect.bottom - HIDWORD(v41);
      }
    }
    else
    {
      v183 = v191.left;
    }
    v42 = -1;
    v166 = 0;
    v167 = 0;
    v43 = 0LL;
    v165 = 0;
    v44 = 0;
    v171 = -1;
    v45 = 0;
    v172 = 0;
    if ( v14 )
    {
      if ( a2->PresentPlaneCount != 1
        || (ppPresentPlanes = a2->ppPresentPlanes, left = (__int64)*ppPresentPlanes, (*ppPresentPlanes)->LayerIndex)
        || (v48 = *(_DWORD *)(left + 4), left = 1LL, (v48 & 1) == 0) )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(left, 0LL, Height);
        LODWORD(v24) = -1073741811;
        v30[3] = -1073741811LL;
        v30[4] = this;
        PresentPlaneCount = a2->PresentPlaneCount;
        goto LABEL_44;
      }
    }
    v49 = 0;
    v174 = 0;
    v170 = 0;
    if ( a2->PresentPlaneCount )
    {
      while ( 1 )
      {
        v50 = v49;
        v51 = a2->ppPresentPlanes[v49];
        v178 = v51;
        LayerIndex = v51->LayerIndex;
        v53 = (unsigned int)LayerIndex;
        if ( (unsigned int)LayerIndex >= (unsigned int)v17
          || (_mm_lfence(), v50 = (unsigned int)LayerIndex, ((1 << LayerIndex) & (unsigned int)v43) != 0) )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v43, LayerIndex);
          v35[4] = v53;
          v35[3] = this;
LABEL_198:
          LODWORD(v24) = -1073741811;
          v35[5] = -1073741811LL;
LABEL_199:
          WdLogEvent5_WdWarning(v35);
          goto LABEL_258;
        }
        v182 = (1 << LayerIndex) | v43;
        if ( (v51->InputFlags.Value & 1) == 0 )
        {
          if ( *((_QWORD *)v192[0] + LayerIndex) || v197[LayerIndex] )
            v165 = v45 + 1;
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v185, 0LL);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v192[0] + v53, &v185);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v185, v103);
          goto LABEL_170;
        }
        if ( *((_QWORD *)v192[0] + LayerIndex) || v197[LayerIndex] )
          v166 = v44 + 1;
        else
          ++v167;
        v54 = 0LL;
        if ( v51->AllocationCount )
        {
          v55 = *((_QWORD *)this + 2);
          while ( 1 )
          {
            v56 = *(_QWORD *)(v55 + 40);
            v57 = v51->pAllocationList[v54];
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v56 + 184, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v58 = *(_DWORD *)(v56 + 200);
                if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v58);
              }
              ExAcquirePushLockSharedEx(v56 + 184, 0LL);
            }
            v59 = (v57 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v59 >= *(_DWORD *)(v56 + 224) )
              goto LABEL_69;
            v60 = *(_QWORD *)(v56 + 208);
            v61 = *(_DWORD *)(v60 + 16 * v59 + 8);
            if ( ((v57 >> 25) & 0x60) != (*(_BYTE *)(v60 + 16 * v59 + 8) & 0x60)
              || (v61 & 0x2000) != 0
              || (v61 & 0x1F) == 0 )
            {
              goto LABEL_69;
            }
            v62 = v61 & 0x1F;
            if ( (_BYTE)v62 != 5 )
              break;
            v64 = *(struct _EX_RUNDOWN_REF **)(v60 + 16LL * (unsigned int)v59);
LABEL_70:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v184, v64);
            ExReleasePushLockSharedEx(v56 + 184, 0LL);
            KeLeaveCriticalRegion();
            v24 = (unsigned int)(v53 + v173 * v54);
            DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v192[0] + v24, &v184);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v184, v65);
            v69 = *((_QWORD *)v192[0] + v24);
            if ( !v69 )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, v66, v68);
              LODWORD(v24) = -1073741811;
              v35[3] = -1073741811LL;
              v35[4] = this;
              v35[5] = v178->pAllocationList[(unsigned int)v54];
              goto LABEL_199;
            }
            v55 = *((_QWORD *)this + 2);
            v70 = *(_QWORD *)(*(_QWORD *)(v69 + 8) + 16LL);
            v71 = *(_QWORD *)(*(_QWORD *)(v55 + 16) + 16LL);
            if ( *(_QWORD *)(v70 + 16) != v71 )
            {
              v30 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70, v55);
              v30[3] = *((_QWORD *)this + 2);
              v106 = *((_QWORD *)v192[0] + v24);
              LODWORD(v24) = -1073741811;
              v30[5] = -1073741811LL;
              v30[4] = v106;
              goto LABEL_192;
            }
            v51 = v178;
            v54 = (unsigned int)(v54 + 1);
            if ( (unsigned int)v54 >= v178->AllocationCount )
            {
              v49 = v170;
              LayerIndex = (unsigned int)v53;
              v42 = v171;
              goto LABEL_75;
            }
          }
          v63 = WdLogNewEntry5_WdError(v62, 2LL * (unsigned int)v59, v60);
          *(_QWORD *)(v63 + 24) = 267LL;
          WdLogEvent5_WdError(v63);
LABEL_69:
          v64 = 0LL;
          goto LABEL_70;
        }
LABEL_75:
        _mm_lfence();
        v72 = v192[0];
        v73 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v192[0] + v53) + 48LL) + 4LL) & 0x2000) == 0;
        _mm_lfence();
        if ( v73 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v192[0] + v53) + 48LL) + 4LL) & 8) == 0 )
          {
            _mm_lfence();
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v192[0] + v53) + 48LL) + 4LL) & 1) == 0 )
            {
              _mm_lfence();
              v75 = *(_QWORD *)(*((_QWORD *)v192[0] + v53) + 48LL);
              if ( (*(_DWORD *)(v75 + 4) & 2) == 0 )
              {
LABEL_78:
                _mm_lfence();
                v30 = (_QWORD *)WdLogNewEntry5_WdError(v75, v72, LayerIndex);
                LODWORD(v24) = -1073741811;
                v30[3] = -1073741811LL;
                v30[4] = this;
                v30[5] = *((_QWORD *)v192[0] + v53);
                v30[6] = *(_QWORD *)(*((_QWORD *)v192[0] + v53) + 48LL);
                v30[7] = *v51->pAllocationList;
                goto LABEL_192;
              }
            }
          }
          _mm_lfence();
          if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v192[0] + v53) + 48LL) + 4LL) & 1) != 0 )
            v42 = LayerIndex;
          v171 = v42;
        }
        else
        {
          v74 = (const struct DXGALLOCATION *)*((_QWORD *)v192[0] + v53);
          if ( (*(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) & 0x20) == 0
            && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v74) )
          {
            goto LABEL_78;
          }
        }
        _mm_lfence();
        memset(&v190, 0, sizeof(v190));
        v76 = *((_QWORD *)this + 2);
        v190.hAllocation = *(HANDLE *)(*(_QWORD *)(*((_QWORD *)v192[0] + v53) + 48LL) + 16LL);
        v78 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v76 + 16), &v190, v77);
        v24 = v78;
        if ( v78 < 0 )
        {
          _mm_lfence();
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79, Height);
          v30[3] = v24;
          v30[4] = this;
          v30[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v192[0] + v53) + 48LL) + 16LL);
          v102 = *((_QWORD *)v192[0] + v53);
          goto LABEL_191;
        }
        v196[v53] = v190.Format;
        pPlaneAttributes = v51->pPlaneAttributes;
        v82 = (unsigned int)pPlaneAttributes->SrcRect.left;
        v43 = (unsigned int)pPlaneAttributes->SrcRect.right;
        if ( (int)v82 >= (int)v43
          || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
          || (Height = v190.Height, Width = v190.Width, v179 = v190.Height, (int)v82 < 0)
          || (int)v190.Width < (int)v43
          || pPlaneAttributes->SrcRect.top < 0
          || (int)v190.Height < pPlaneAttributes->SrcRect.bottom )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v82, v43, Height);
          LODWORD(v24) = -1073741811;
          PresentPlaneCount = v49;
          v30[3] = -1073741811LL;
          v30[4] = this;
LABEL_44:
          v30[5] = PresentPlaneCount;
          goto LABEL_192;
        }
        v83 = pPlaneAttributes->ClipRect.left;
        FlipInterval = (unsigned int)pPlaneAttributes->ClipRect.right;
        if ( v83 >= (int)FlipInterval )
          goto LABEL_188;
        top = pPlaneAttributes->ClipRect.top;
        v86 = pPlaneAttributes->ClipRect.bottom;
        if ( top >= v86 )
          goto LABEL_188;
        v43 = (unsigned int)pPlaneAttributes->DstRect.left;
        v87 = pPlaneAttributes->DstRect.right;
        if ( (int)v43 >= v87 )
          goto LABEL_188;
        Height = (unsigned int)pPlaneAttributes->DstRect.top;
        v88 = pPlaneAttributes->DstRect.bottom;
        if ( (int)Height >= v88
          || v183 > v83
          || v191.right < (int)FlipInterval
          || v191.top > top
          || v191.bottom < v86
          || (int)v43 > v83
          || v87 < (int)FlipInterval
          || (int)Height > top
          || v88 < v86 )
        {
          goto LABEL_188;
        }
        v89 = pPlaneAttributes->Rotation;
        if ( v89 )
        {
          if ( (unsigned int)(v89 - 1) > 3 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval, v43, Height);
            LODWORD(v24) = -1073741811;
            v30[3] = -1073741811LL;
            v30[4] = this;
            v30[5] = v170;
            v102 = v51->pPlaneAttributes->Rotation;
            goto LABEL_191;
          }
        }
        else
        {
          pPlaneAttributes->Rotation = D3DDDI_ROTATION_IDENTITY;
        }
        DirtyRectCount = pPlaneAttributes->DirtyRectCount;
        v91 = 0;
        LOBYTE(v43) = 1;
        if ( DirtyRectCount )
        {
          while ( (_BYTE)v43 )
          {
            Height = (__int64)pPlaneAttributes->pDirtyRects;
            v92 = *(_DWORD *)(Height + 16LL * v91);
            v93 = *(_DWORD *)(Height + 16LL * v91 + 8);
            v94 = v92 < v93 && *(_DWORD *)(Height + 16LL * v91 + 4) < *(_DWORD *)(Height + 16LL * v91 + 12);
            v95 = v94 ? v43 : 0;
            v96 = pPlaneAttributes->SrcRect.left <= v92
               && pPlaneAttributes->SrcRect.right >= v93
               && pPlaneAttributes->SrcRect.top <= *(_DWORD *)(Height + 16LL * v91 + 4)
               && pPlaneAttributes->SrcRect.bottom >= *(_DWORD *)(Height + 16LL * v91 + 12);
            ++v91;
            LOBYTE(v43) = v96 ? v95 : 0;
            if ( v91 >= DirtyRectCount )
            {
              if ( (_BYTE)v43 )
                goto LABEL_123;
              break;
            }
          }
          pPlaneAttributes->DirtyRectCount = 0;
        }
LABEL_123:
        FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL);
        if ( *(_BYTE *)(FlipInterval + 2466) )
        {
          v43 = (unsigned __int64)v51->pPlaneAttributes;
          Height = v43 + 36;
          if ( *(_DWORD *)(v43 + 20) != *(_DWORD *)(v43 + 36)
            || *(_DWORD *)(v43 + 28) != *(_DWORD *)(v43 + 44)
            || *(_DWORD *)(v43 + 24) != *(_DWORD *)(v43 + 40)
            || *(_DWORD *)(v43 + 32) != *(_DWORD *)(v43 + 48) )
          {
            v193 = (RECT)0LL;
            InverseXformMPORect3(&v193, (_DWORD *)v43, (int *)Height);
            pPlaneAttributes->SrcRect = v193;
            pPlaneAttributes->DstRect = v51->pPlaneAttributes->ClipRect;
            Height = (unsigned int)pPlaneAttributes->SrcRect.left;
            v97 = pPlaneAttributes->SrcRect.right;
            if ( (int)Height >= v97
              || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
              || (FlipInterval = (unsigned int)pPlaneAttributes->DstRect.left,
                  v43 = (unsigned int)pPlaneAttributes->DstRect.right,
                  (int)FlipInterval >= (int)v43)
              || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
              || (int)Height < 0
              || Width < v97
              || pPlaneAttributes->SrcRect.top < 0
              || v179 < pPlaneAttributes->SrcRect.bottom
              || v183 > (int)FlipInterval
              || v191.right < (int)v43
              || v191.top > pPlaneAttributes->DstRect.top
              || v191.bottom < pPlaneAttributes->DstRect.bottom )
            {
LABEL_188:
              v30 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval, v43, Height);
              PresentPlaneCount = v170;
              LODWORD(v24) = -1073741811;
              v30[3] = -1073741811LL;
              v30[4] = this;
              goto LABEL_44;
            }
          }
        }
        if ( !(_DWORD)v53 )
          break;
LABEL_153:
        if ( v168 )
        {
          v100 = (unsigned int)pPlaneAttributes->DstRect.left;
          if ( (_DWORD)v100 != pPlaneAttributes->SrcRect.left
            || pPlaneAttributes->DstRect.right != pPlaneAttributes->SrcRect.right
            || pPlaneAttributes->DstRect.top != pPlaneAttributes->SrcRect.top
            || *(_QWORD *)&pPlaneAttributes->SrcRect.bottom != *(_QWORD *)&pPlaneAttributes->DstRect.bottom
            || pPlaneAttributes->DstRect.right != pPlaneAttributes->ClipRect.right
            || pPlaneAttributes->DstRect.top != pPlaneAttributes->ClipRect.top
            || pPlaneAttributes->DstRect.bottom != pPlaneAttributes->ClipRect.bottom )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(v100, v43, Height);
            LODWORD(v24) = -1073741811;
            v30[3] = -1073741811LL;
            v30[4] = this;
            goto LABEL_192;
          }
          if ( v51->pPlaneAttributes->Rotation != D3DDDI_ROTATION_IDENTITY )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(v100, v43, Height);
            LODWORD(v24) = -1073741811;
            v30[3] = -1073741811LL;
            v30[4] = this;
            v30[5] = (unsigned int)v51->pPlaneAttributes->Rotation;
            goto LABEL_192;
          }
          _mm_lfence();
          LODWORD(VidPnSourceId) = v176;
          FlipInterval = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v192[0] + v53) + 48LL) + 4LL) >> 6) & 0xF;
          if ( v176 != (_DWORD)FlipInterval )
          {
            _mm_lfence();
            v30 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval, v43, Height);
            v101 = v187;
            LODWORD(v24) = -1073741811;
            v30[3] = -1073741811LL;
            v30[4] = this;
            v30[5] = v101;
            v102 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v192[0] + v53) + 48LL) + 4LL) >> 6) & 0xF;
LABEL_191:
            v30[6] = v102;
            goto LABEL_192;
          }
        }
        else
        {
          LODWORD(VidPnSourceId) = v176;
        }
        LODWORD(v17) = v173;
        v49 = v170;
LABEL_170:
        if ( (v51->InputFlags.Value & 1) != 0 && (FlipInterval = (unsigned int)v51->FlipInterval, (_DWORD)FlipInterval) )
        {
          if ( (_DWORD)FlipInterval != 1 )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdWarning(FlipInterval, v43, Height);
            v35[3] = this;
            v35[4] = v51->FlipInterval;
            goto LABEL_198;
          }
          v104 = 1;
          v174 = 1;
        }
        else
        {
          v104 = v174;
        }
        if ( bTracingEnabled )
        {
          v105 = *v51->pAllocationList;
          Height = v105
                 ? VIDMM_EXPORT::VidMmETWAllocationHandle(
                     *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
                     *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                     v105)
                 : 0LL;
          v43 = (unsigned __int64)v51->pPlaneAttributes;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqqpqddddddddddddqqqqqq(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&FlipMultiPlaneOverlay,
              0LL,
              VidPnSourceId,
              v51->LayerIndex,
              v51->InputFlags.Value & 1,
              Height,
              *(_DWORD *)v43,
              *(_DWORD *)(v43 + 4),
              *(_DWORD *)(v43 + 12),
              *(_DWORD *)(v43 + 8),
              *(_DWORD *)(v43 + 16),
              *(_DWORD *)(v43 + 20),
              *(_DWORD *)(v43 + 28),
              *(_DWORD *)(v43 + 24),
              *(_DWORD *)(v43 + 32),
              *(_DWORD *)(v43 + 36),
              *(_DWORD *)(v43 + 44),
              *(_DWORD *)(v43 + 40),
              *(_DWORD *)(v43 + 48),
              *(_DWORD *)(v43 + 52),
              *(_DWORD *)(v43 + 56),
              0,
              *(_DWORD *)(v43 + 72),
              a2->HDRMetaDataType,
              *(_DWORD *)(v43 + 80));
        }
        v170 = ++v49;
        if ( v49 >= a2->PresentPlaneCount )
        {
          v33 = v177;
          if ( !v104 )
            goto LABEL_195;
LABEL_201:
          v107 = D3DDDI_FLIPINTERVAL_ONE;
          goto LABEL_202;
        }
        v43 = v182;
        v42 = v171;
        v45 = v165;
        v44 = v166;
      }
      if ( v186 )
      {
        v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v192[0] + 48LL) + 4LL) & 0x2000;
        if ( v98 && (*(_DWORD *)(*(_QWORD *)(v186 + 48) + 4LL) & 0x2000) == 0 )
        {
          Height = 1LL;
          v172 = 1;
LABEL_150:
          v43 = (unsigned int)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
          FlipInterval = (unsigned int)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left);
          if ( (_DWORD)FlipInterval != (_DWORD)v43 )
          {
            FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL);
            if ( *(_BYTE *)(FlipInterval + 2418) )
            {
              FlipInterval = (unsigned int)(pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top);
              v177 = pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top;
              v169 = 1;
              v175 = pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left;
            }
          }
          goto LABEL_153;
        }
        if ( !v98 )
        {
          v99 = v172;
          if ( (*(_DWORD *)(*(_QWORD *)(v186 + 48) + 4LL) & 0x2000) != 0 )
            v99 = 1;
          v172 = v99;
          Height = 1LL;
          goto LABEL_150;
        }
      }
      Height = 1LL;
      goto LABEL_150;
    }
LABEL_195:
    FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_BYTE *)(*(_QWORD *)(FlipInterval + 16) + 2498LL) )
    {
      v108 = WdLogNewEntry5_WdWarning(FlipInterval, v43, Height);
      *(_QWORD *)(v108 + 24) = 3357LL;
      WdLogEvent5_WdWarning(v108);
      goto LABEL_201;
    }
    v107 = D3DDDI_FLIPINTERVAL_IMMEDIATE;
LABEL_202:
    if ( !v167 && !v166 && !v165 )
    {
      v109 = WdLogNewEntry5_WdEvent(FlipInterval);
      *(_QWORD *)(v109 + 24) = 0LL;
      *(_QWORD *)(v109 + 32) = this;
      WdLogEvent5_WdEvent(v109);
      LODWORD(v24) = 0;
      goto LABEL_258;
    }
    memset(&v194, 0, sizeof(v194));
    v110 = *((_QWORD *)this + 2);
    v111 = 4;
    v194.FlipInterval = v107;
    if ( !v168 )
      v111 = 4100;
    v194.Flags.Value = v111 ^ ((unsigned __int16)v111 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&a2->Flags.0 << 8)) & 0x700 | 8;
    CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)v189, *(struct ADAPTER_RENDER **)(v110 + 16), 1);
    if ( !CVidSchSubmitData::Valid((CVidSchSubmitData *)v189) )
    {
      v116 = WdLogNewEntry5_WdLowResource(v113, v112, v114, v115);
      *(_QWORD *)(v116 + 24) = 3393LL;
      WdLogEvent5_WdLowResource(v116);
      LODWORD(v24) = -1073741801;
LABEL_257:
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v189);
      goto LABEL_258;
    }
    v24 = (__int64)v189[0];
    v117 = *(_DWORD *)v189[0] | 0x30020;
    *(_DWORD *)v189[0] = v117;
    v118 = v117 | 1;
    *(_DWORD *)(v24 + 120) = a2->PresentCount;
    if ( v172 )
      v118 |= 0x400000u;
    v119 = v118 | 4;
    *(_DWORD *)v24 = v119;
    v120 = v119;
    if ( !v168 && a2->ContextCount <= 1 )
    {
      v120 = v119 | 0x800000;
      *(_DWORD *)v24 = v119 | 0x800000;
    }
    v121 = v120 ^ ((unsigned __int8)v120 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 8;
    *(_DWORD *)v24 = v121;
    v122 = ((unsigned __int8)v121 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v121;
    *(_DWORD *)v24 = v122;
    v123 = (v122 ^ (a2->Flags.Value << 19)) & 0x80000 ^ v122;
    *(_DWORD *)v24 = v123;
    v124 = (v123 ^ (a2->Flags.Value << 19)) & 0x100000 ^ v123;
    *(_DWORD *)v24 = v124;
    v125 = (v124 ^ (a2->Flags.Value << 19)) & 0x200000 ^ v124;
    *(_DWORD *)v24 = v125;
    v126 = v125 ^ (v125 ^ (a2->Flags.Value << 21)) & 0x20000000;
    *(_DWORD *)v24 = v126;
    if ( (a2->Flags.Value & 0x40) != 0 )
      Duration = a2->Duration;
    else
      Duration = 0;
    *(_DWORD *)(v24 + 152) = Duration;
    v128 = v126;
    *(_DWORD *)(v24 + 124) = VidPnSourceId;
    *(_DWORD *)(v24 + 132) = v107;
    *(_DWORD *)(v24 + 128) = 5;
    Value = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321)a2->Flags.Value;
    if ( (*(_WORD *)&Value & 0x200) != 0 && v107 == D3DDDI_FLIPINTERVAL_IMMEDIATE )
    {
      v128 = v126 | 0x10000000;
      *(_DWORD *)v24 = v126 | 0x10000000;
      Value = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321)a2->Flags.Value;
    }
    if ( *(_BYTE *)&Value < 0 )
    {
      v128 |= 0x40000000u;
      *(_DWORD *)v24 = v128;
      *(_DWORD *)(v24 + 360) = a2->HDRMetaDataType;
      if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
      {
        pHDRMetaData = a2->pHDRMetaData;
        *(_OWORD *)(v24 + 364) = *(_OWORD *)pHDRMetaData;
        *(_QWORD *)(v24 + 380) = pHDRMetaData[2];
        *(_DWORD *)(v24 + 388) = *((_DWORD *)pHDRMetaData + 6);
      }
      else if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        v130 = a2->pHDRMetaData;
        *(_OWORD *)(v24 + 364) = *v130;
        *(_OWORD *)(v24 + 380) = v130[1];
        *(_OWORD *)(v24 + 396) = v130[2];
        *(_OWORD *)(v24 + 412) = v130[3];
        *(_QWORD *)(v24 + 428) = *((_QWORD *)v130 + 8);
      }
    }
    if ( a2->pPostComposition )
    {
      *(_DWORD *)v24 = v128 | 0x80000000;
      *(RECT *)(v24 + 436) = a2->pPostComposition->SrcRect;
      *(RECT *)(v24 + 452) = a2->pPostComposition->DstRect;
    }
    IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
    v134 = *((_QWORD *)this + 2);
    if ( IsFullWDDMDevice )
    {
      if ( *(_DWORD *)(v24 + 128) != *(_DWORD *)(v134 + 4LL * (unsigned int)VidPnSourceId + 1664) )
      {
        if ( (a2->Flags.Value & 8) != 0 )
        {
          v135 = WdLogNewEntry5_WdEvent(v134);
          LODWORD(v24) = -1071775739;
          *(_QWORD *)(v135 + 24) = -1071775739LL;
          WdLogEvent5_WdEvent(v135);
          goto LABEL_257;
        }
        v136 = WdLogNewEntry5_WdEvent(v134);
        *(_QWORD *)(v136 + 24) = *((_QWORD *)this + 2);
        WdLogEvent5_WdEvent(v136);
        COREDEVICEACCESS::Release(a3);
        DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3u);
        v137 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
        v139 = v137;
        if ( v137 < 0 )
        {
          v140 = WdLogNewEntry5_WdEvent(v138);
          *(_QWORD *)(v140 + 24) = v139;
          WdLogEvent5_WdEvent(v140);
          COREDEVICEACCESS::AcquireSharedUncheck((__int64)a3);
LABEL_234:
          LODWORD(v24) = v139;
          goto LABEL_257;
        }
      }
      v141 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (a2->Flags.Value & 8) == 0, a3);
      v139 = v141;
      if ( v141 < 0 )
      {
        v143 = WdLogNewEntry5_WdEvent(v142);
        *(_QWORD *)(v143 + 24) = v139;
        *(_QWORD *)(v143 + 32) = this;
        WdLogEvent5_WdEvent(v143);
        goto LABEL_234;
      }
      v144 = DXGCONTEXT::CheckDevicePresentSettings(this, 1LL, 0LL, VidPnSourceId);
      v139 = v144;
      if ( v144 < 0 )
      {
        v147 = WdLogNewEntry5_WdEvent(v146);
        *(_QWORD *)(v147 + 24) = v139;
        *(_QWORD *)(v147 + 32) = this;
        WdLogEvent5_WdEvent(v147);
        if ( (_DWORD)v139 == -1071774920 )
        {
          DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v192[0], v196, v171, *(_DWORD *)(v24 + 144));
          v148 = *(_DWORD *)(v24 + 128);
          LODWORD(v24) = 0;
          *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 1664) = v148;
          goto LABEL_257;
        }
        goto LABEL_234;
      }
      if ( *((_QWORD *)this + 46) )
      {
        v149 = WdLogNewEntry5_WdAssertion(v146, v145);
        *(_QWORD *)(v149 + 24) = 3536LL;
        WdLogEvent5_WdAssertion(v149);
      }
      LODWORD(v139) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                        this,
                        a2,
                        v167,
                        v166,
                        v165,
                        v192[0],
                        v197,
                        &v194,
                        (struct VIDSCH_SUBMIT_DATA_BASE *)v24,
                        v188);
      if ( (int)v139 < 0 )
      {
LABEL_251:
        if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
          && (_DWORD)v139 != -1073741130 )
        {
          v161 = WdLogNewEntry5_WdAssertion(v160, v159);
          *(_QWORD *)(v161 + 24) = 3599LL;
          WdLogEvent5_WdAssertion(v161);
        }
        if ( *((_QWORD *)this + 46) )
        {
          v162 = WdLogNewEntry5_WdAssertion(v160, v159);
          *(_QWORD *)(v162 + 24) = 3600LL;
          WdLogEvent5_WdAssertion(v162);
        }
        goto LABEL_234;
      }
      v150 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL) + 112LL);
      if ( *(_DWORD *)(v150 + 3968LL * (unsigned int)VidPnSourceId + 1068) == -1 )
      {
        v151 = WdLogNewEntry5_WdAssertion(v150, 3968LL * (unsigned int)VidPnSourceId);
        *(_QWORD *)(v151 + 24) = 3553LL;
        WdLogEvent5_WdAssertion(v151);
      }
      DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v192[0], v196, v171, *(_DWORD *)(v24 + 144));
      v152 = v33;
      v153 = v175;
      LOBYTE(v154) = v169;
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 1664) = *(_DWORD *)(v24 + 128);
    }
    else
    {
      if ( !*(_QWORD *)(v134 + 1728) )
      {
        v163 = WdLogNewEntry5_WdAssertion(v134, v133);
        *(_QWORD *)(v163 + 24) = *((_QWORD *)this + 2);
        *(_QWORD *)(v163 + 32) = -1073741822LL;
        WdLogEvent5_WdAssertion(v163);
        LODWORD(v24) = -1073741811;
        goto LABEL_257;
      }
      v155 = a2->ppPresentPlanes;
      v156 = *v155;
      if ( (*v155)->LayerIndex )
      {
        v157 = WdLogNewEntry5_WdAssertion(v134, v133);
        *(_QWORD *)(v157 + 24) = 3577LL;
        WdLogEvent5_WdAssertion(v157);
      }
      memset(&v195, 0, sizeof(v195));
      ConvertMPOThunkToLegacyPresentThunk(&v195, a2, v156);
      v158 = DXGCONTEXT::DisplayOnlyPresent(this, &v195, *(struct DXGALLOCATION **)v192[0], VidPnSourceId, &v194, a3);
      v152 = 0;
      v153 = 0;
      v154 = 0LL;
      LODWORD(v139) = v158;
    }
    UpdatePostComposition(
      (unsigned int)VidPnSourceId,
      v154,
      v153,
      v152,
      *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL));
    goto LABEL_251;
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdError(left, v27, v29);
  LODWORD(v24) = -1073741811;
  v30[3] = -1073741811LL;
  v30[4] = this;
  v30[5] = VidPnSourceId;
LABEL_192:
  WdLogEvent5_WdError(v30);
LABEL_258:
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v192);
  return (unsigned int)v24;
}
