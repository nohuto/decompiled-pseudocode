/*
 * XREFs of ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A648
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A3A4 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024BC7C (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C024E4A0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0011E90 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x1C0013960 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1C0016338 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     McTemplateK0qqqpqddddddddddddqqqqqq @ 0x1C00227F0 (McTemplateK0qqqpqddddddddddddqqqqqq.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x1C0036724 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?Valid@CVidSchSubmitData@@QEBAEXZ @ 0x1C0036A24 (-Valid@CVidSchSubmitData@@QEBAEXZ.c)
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0040B24 (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA9E0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF21C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C01298F0 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0129D58 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C012E988 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C013EB64 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C013EC38 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013FE84 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z @ 0x1C01C2FB8 (-GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z.c)
 *     ?ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1C0249CA8 (-ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVE.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0249F94 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 *     InverseXformMPORect3 @ 0x1C024A1F8 (InverseXformMPORect3.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C024C1C4 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C024D2A8 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  UINT v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 VidPnSourceId; // r12
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  char v25; // bl
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  unsigned __int64 left; // rcx
  _QWORD *v28; // rax
  __int64 v29; // r8
  int v30; // r13d
  LONG v31; // r9d
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rdx
  _QWORD *v33; // rax
  __int64 Rotation; // rdx
  int right; // r10d
  LONG bottom; // eax
  __int64 v37; // rcx
  RECT SrcRect; // xmm0
  __int64 v39; // rdx
  __int64 pDirtyRects; // r8
  unsigned __int64 v41; // rdx
  unsigned __int8 v42; // r10
  unsigned __int8 v43; // r11
  char v44; // r9
  __int64 PresentPlaneCount; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  __int64 v47; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v48; // r13
  __int64 LayerIndex; // rbx
  __int64 v50; // r14
  int v51; // r12d
  __int64 v52; // r8
  __int64 v53; // r15
  D3DKMT_HANDLE v54; // ebx
  int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rax
  struct _EX_RUNDOWN_REF *v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rcx
  bool v67; // zf
  const struct DXGALLOCATION *v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  const GUID *v71; // r8
  int v72; // eax
  __int64 v73; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rbx
  __int64 v75; // rcx
  int v76; // edx
  int v77; // eax
  __int64 FlipInterval; // rcx
  int top; // r11d
  int v80; // r15d
  int v81; // r9d
  int v82; // r10d
  D3DDDI_ROTATION v83; // eax
  UINT DirtyRectCount; // r12d
  UINT v85; // r15d
  LONG v86; // r9d
  LONG v87; // r11d
  BOOL v88; // eax
  unsigned __int8 v89; // r10
  BOOL v90; // eax
  int v91; // r9d
  int v92; // edx
  char v93; // r8
  __int64 v94; // rcx
  __int64 v95; // r15
  __int64 v96; // rdx
  int v97; // r14d
  unsigned int v98; // r8d
  __int64 v99; // rdx
  D3DDDI_FLIPINTERVAL_TYPE v100; // r15d
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  int v104; // ecx
  __int64 v105; // rcx
  __int64 v106; // rax
  int v107; // ecx
  int v108; // ecx
  int v109; // ecx
  int v110; // eax
  int v111; // ecx
  int v112; // ecx
  UINT v113; // ecx
  UINT v114; // ecx
  UINT v115; // ecx
  UINT v116; // edx
  UINT Duration; // eax
  int v118; // ecx
  _OWORD *v119; // rax
  _QWORD *pHDRMetaData; // rax
  bool IsFullWDDMDevice; // al
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rax
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r14
  __int64 v130; // rax
  int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  int v135; // eax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rax
  int v139; // eax
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rax
  int v143; // r9d
  int v144; // r8d
  char v145; // dl
  D3DKMT_MULTIPLANE_OVERLAY3 **v146; // rax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v147; // rbx
  __int64 v148; // rax
  int v149; // eax
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  char v155; // [rsp+D0h] [rbp-80h]
  unsigned __int8 v156; // [rsp+D1h] [rbp-7Fh]
  unsigned __int8 v157; // [rsp+D2h] [rbp-7Eh]
  char v158; // [rsp+D3h] [rbp-7Dh]
  char v159; // [rsp+D4h] [rbp-7Ch]
  UINT v160; // [rsp+D8h] [rbp-78h]
  unsigned int v161; // [rsp+DCh] [rbp-74h]
  char v162; // [rsp+E0h] [rbp-70h]
  int v163; // [rsp+E8h] [rbp-68h]
  int v164; // [rsp+ECh] [rbp-64h]
  unsigned int v165; // [rsp+F0h] [rbp-60h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v166; // [rsp+F4h] [rbp-5Ch]
  int v167; // [rsp+100h] [rbp-50h]
  signed int Width; // [rsp+110h] [rbp-40h]
  signed int Height; // [rsp+118h] [rbp-38h]
  unsigned int v171; // [rsp+120h] [rbp-30h]
  int v172; // [rsp+130h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v173; // [rsp+140h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v174; // [rsp+148h] [rbp-8h] BYREF
  __int64 v175; // [rsp+150h] [rbp+0h]
  __int64 v176; // [rsp+158h] [rbp+8h]
  struct DXGCONTEXT **v177; // [rsp+160h] [rbp+10h]
  struct VIDSCH_SUBMIT_DATA_BASE *v178[2]; // [rsp+168h] [rbp+18h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v179; // [rsp+178h] [rbp+28h] BYREF
  RECT v180; // [rsp+1B0h] [rbp+60h]
  struct DXGALLOCATIONREFERENCE *v181[6]; // [rsp+1C0h] [rbp+70h] BYREF
  RECT v182; // [rsp+1F0h] [rbp+A0h] BYREF
  struct _DXGKARG_PRESENT v183; // [rsp+200h] [rbp+B0h] BYREF
  _D3DKMT_PRESENT v184; // [rsp+2B0h] [rbp+160h] BYREF
  enum _D3DDDIFORMAT v185[10]; // [rsp+890h] [rbp+740h] BYREF
  unsigned __int8 v186[16]; // [rsp+8B8h] [rbp+768h] BYREF

  v4 = *((_QWORD *)this + 2);
  v177 = a4;
  v9 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(v4 + 16)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 2855LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 1728) != v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 2856LL;
    WdLogEvent5_WdAssertion(v13);
    v11 = *((_QWORD *)this + 2);
  }
  *((_BYTE *)this + 434) = 1;
  VidPnSourceId = a2->VidPnSourceId;
  v166 = a2->VidPnSourceId;
  v15 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  v16 = *(unsigned int *)(v15 + 2368);
  v165 = v16;
  if ( a2->PresentPlaneCount > (unsigned int)v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v11, v8);
    v17[3] = a2->PresentPlaneCount;
    v17[4] = v16;
LABEL_261:
    LODWORD(v23) = -1073741811;
    v17[5] = -1073741811LL;
LABEL_262:
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)v23;
  }
  v18 = *(_DWORD *)(v11 + 4 * VidPnSourceId + 1088) >> 9;
  v176 = a2->VidPnSourceId;
  if ( (v18 & 1) == 0 )
  {
    v19 = DXGCONTEXT::CheckDevicePresentSettings(this, 1LL, 0LL, VidPnSourceId);
    v23 = v19;
    if ( v19 >= 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      v23 = -1071775739LL;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    }
    v17[3] = v23;
    v17[4] = this;
    v17[5] = VidPnSourceId;
    goto LABEL_262;
  }
  if ( (a2->Flags.Value & 3) != 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v11, v8);
    v17[3] = this;
    v17[4] = a2->Flags.Value;
    goto LABEL_261;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(
    (__int64)v181,
    v16 * a2->ContextCount);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(*((DXGDEVICE **)this + 2), VidPnSourceId, v181[0], v16);
  v24 = *((_QWORD *)this + 2);
  v175 = *(_QWORD *)v181[0];
  ADAPTER_DISPLAY::GetDDIEnabledPlanes(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v24 + 1728) + 2520LL), VidPnSourceId, v186);
  memset(v185, 0, sizeof(v185));
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
    || (v25 = 0, !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2))) )
  {
    v25 = 1;
  }
  v158 = v25;
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
                      VidPnSourceId);
  if ( DisplayModeInfo )
  {
    v29 = *(unsigned int *)DisplayModeInfo;
    v30 = 0;
    v31 = *((_DWORD *)DisplayModeInfo + 1);
    pPostComposition = a2->pPostComposition;
    v180.right = *(_DWORD *)DisplayModeInfo;
    v180.bottom = v31;
    *(_QWORD *)&v180.left = 0LL;
    v159 = 0;
    v164 = 0;
    v167 = 0;
    if ( pPostComposition )
    {
      if ( pPostComposition->Flags.Value )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(left, pPostComposition, v29);
        v33[3] = this;
        Rotation = (__int64)a2->pPostComposition->Flags.0;
LABEL_21:
        v33[4] = Rotation;
        goto LABEL_199;
      }
      if ( pPostComposition->Rotation != D3DDDI_ROTATION_IDENTITY )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(left, pPostComposition, v29);
        v33[3] = this;
        Rotation = a2->pPostComposition->Rotation;
        goto LABEL_21;
      }
      if ( pPostComposition->SrcRect.left >= pPostComposition->SrcRect.right
        || pPostComposition->SrcRect.top >= pPostComposition->SrcRect.bottom
        || (left = (unsigned int)pPostComposition->DstRect.left,
            right = pPostComposition->DstRect.right,
            (int)left >= right)
        || (bottom = pPostComposition->DstRect.bottom, pPostComposition->DstRect.top >= bottom)
        || (left & 0x80000000) != 0LL
        || (int)v29 < right
        || pPostComposition->DstRect.top < 0
        || v31 < bottom )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(left, pPostComposition, v29);
        LODWORD(v23) = -1073741811;
        v33[3] = this;
        v33[4] = -1073741811LL;
        goto LABEL_200;
      }
      v37 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_BYTE *)(*(_QWORD *)(v37 + 16) + 2466LL) || v25 )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, pPostComposition, v29);
        LODWORD(v23) = -1073741811;
        v33[3] = -1073741811LL;
        v33[4] = this;
        goto LABEL_200;
      }
      SrcRect = pPostComposition->SrcRect;
      v39 = *(_QWORD *)&pPostComposition->SrcRect.left;
      v180 = SrcRect;
      left = *(_QWORD *)&SrcRect.right;
      v172 = v39;
      if ( (_DWORD)v39 || SrcRect.right != (_DWORD)v29 || HIDWORD(v39) || SrcRect.bottom != v31 )
      {
        v159 = 1;
        v164 = SrcRect.right - v39;
        left = (unsigned int)(SrcRect.bottom - HIDWORD(v39));
        v167 = SrcRect.bottom - HIDWORD(v39);
        v30 = SrcRect.bottom - HIDWORD(v39);
      }
    }
    else
    {
      v172 = v180.left;
    }
    pDirtyRects = 0xFFFFFFFFLL;
    v156 = 0;
    v157 = 0;
    v41 = 0LL;
    v155 = 0;
    v42 = 0;
    v161 = -1;
    v43 = 0;
    v44 = 0;
    v162 = 0;
    if ( v25 )
    {
      if ( a2->PresentPlaneCount != 1
        || (ppPresentPlanes = a2->ppPresentPlanes,
            left = (unsigned __int64)*ppPresentPlanes,
            (*ppPresentPlanes)->LayerIndex)
        || (*(_DWORD *)(left + 4) & 1) == 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(left);
        LODWORD(v23) = -1073741811;
        v28[3] = -1073741811LL;
        v28[4] = this;
        PresentPlaneCount = a2->PresentPlaneCount;
        goto LABEL_45;
      }
    }
    LODWORD(v23) = 0;
    v163 = 0;
    v160 = 0;
    if ( a2->PresentPlaneCount )
    {
      while ( 1 )
      {
        v47 = v9;
        v48 = a2->ppPresentPlanes[v9];
        LayerIndex = v48->LayerIndex;
        if ( (unsigned int)LayerIndex >= v165
          || (_mm_lfence(), v47 = (unsigned int)LayerIndex, ((1 << LayerIndex) & (unsigned int)v41) != 0) )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v41, pDirtyRects);
          v33[4] = LayerIndex;
          v33[3] = this;
LABEL_199:
          LODWORD(v23) = -1073741811;
          v33[5] = -1073741811LL;
LABEL_200:
          WdLogEvent5_WdWarning(v33);
          goto LABEL_259;
        }
        v50 = (unsigned int)LayerIndex;
        v171 = (1 << LayerIndex) | v41;
        if ( (v48->InputFlags.Value & 1) == 0 )
        {
          if ( *((_QWORD *)v181[0] + LayerIndex) || v186[LayerIndex] )
            v155 = v44 + 1;
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v174, 0LL);
          DXGALLOCATIONREFERENCE::MoveAssign(
            (struct DXGALLOCATION **)v181[0] + LayerIndex,
            (struct DXGALLOCATION **)&v174);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v174);
          goto LABEL_171;
        }
        if ( *((_QWORD *)v181[0] + LayerIndex) || v186[LayerIndex] )
          v156 = v42 + 1;
        else
          v157 = v43 + 1;
        v51 = 0;
        if ( v48->AllocationCount )
        {
          v52 = *((_QWORD *)this + 2);
          while ( 1 )
          {
            v53 = *(_QWORD *)(v52 + 40);
            v54 = v48->pAllocationList[v51];
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v53 + 208, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v55 = *(_DWORD *)(v53 + 224);
                if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v55);
              }
              ExAcquirePushLockSharedEx(v53 + 208, 0LL);
            }
            v56 = (v54 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v56 >= *(_DWORD *)(v53 + 248) )
              goto LABEL_70;
            v57 = *(_QWORD *)(v53 + 232);
            v58 = *(_DWORD *)(v57 + 16 * v56 + 8);
            if ( ((v54 >> 25) & 0x60) != (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60)
              || (v58 & 0x2000) != 0
              || (v58 & 0x1F) == 0 )
            {
              goto LABEL_70;
            }
            v59 = v58 & 0x1F;
            if ( (_BYTE)v59 != 5 )
              break;
            v61 = *(struct _EX_RUNDOWN_REF **)(v57 + 16LL * (unsigned int)v56);
LABEL_71:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v173, v61);
            ExReleasePushLockSharedEx(v53 + 208, 0LL);
            KeLeaveCriticalRegion();
            v23 = (unsigned int)v50 + v165 * v51;
            DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)v181[0] + v23, (struct DXGALLOCATION **)&v173);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v173);
            v65 = *((_QWORD *)v181[0] + v23);
            if ( !v65 )
            {
              v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v63, v62, v64);
              LODWORD(v23) = -1073741811;
              v33[3] = -1073741811LL;
              v33[4] = this;
              v33[5] = v48->pAllocationList[v51];
              goto LABEL_200;
            }
            v52 = *((_QWORD *)this + 2);
            v66 = *(_QWORD *)(*(_QWORD *)(v52 + 16) + 16LL);
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) + 16LL) + 16LL) != v66 )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdError(v66);
              v28[3] = *((_QWORD *)this + 2);
              v99 = *((_QWORD *)v181[0] + v23);
              LODWORD(v23) = -1073741811;
              v28[5] = -1073741811LL;
              v28[4] = v99;
              goto LABEL_193;
            }
            if ( ++v51 >= v48->AllocationCount )
            {
              v9 = v160;
              LODWORD(LayerIndex) = v50;
              LODWORD(pDirtyRects) = v161;
              goto LABEL_76;
            }
          }
          v60 = WdLogNewEntry5_WdError(v59);
          *(_QWORD *)(v60 + 24) = 316LL;
          WdLogEvent5_WdError(v60);
LABEL_70:
          v61 = 0LL;
          goto LABEL_71;
        }
LABEL_76:
        _mm_lfence();
        v67 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v181[0] + v50) + 48LL) + 4LL) & 0x2000) == 0;
        _mm_lfence();
        if ( v67 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v181[0] + v50) + 48LL) + 4LL) & 8) == 0 )
          {
            _mm_lfence();
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v181[0] + v50) + 48LL) + 4LL) & 1) == 0 )
            {
              _mm_lfence();
              v69 = *(_QWORD *)(*((_QWORD *)v181[0] + v50) + 48LL);
              if ( (*(_DWORD *)(v69 + 4) & 2) == 0 )
              {
LABEL_79:
                _mm_lfence();
                v28 = (_QWORD *)WdLogNewEntry5_WdError(v69);
                LODWORD(v23) = -1073741811;
                v28[3] = -1073741811LL;
                v28[4] = this;
                v28[5] = *((_QWORD *)v181[0] + v50);
                v28[6] = *(_QWORD *)(*((_QWORD *)v181[0] + v50) + 48LL);
                v28[7] = *v48->pAllocationList;
                goto LABEL_193;
              }
            }
          }
          _mm_lfence();
          if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v181[0] + v50) + 48LL) + 4LL) & 1) != 0 )
            LODWORD(pDirtyRects) = LayerIndex;
          v161 = pDirtyRects;
        }
        else
        {
          v68 = (const struct DXGALLOCATION *)*((_QWORD *)v181[0] + v50);
          if ( (*(_DWORD *)(*((_QWORD *)v68 + 6) + 4LL) & 0x20) == 0
            && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v68) )
          {
            goto LABEL_79;
          }
        }
        _mm_lfence();
        memset(&v179, 0, sizeof(v179));
        v70 = *((_QWORD *)this + 2);
        v179.hAllocation = *(HANDLE *)(*(_QWORD *)(*((_QWORD *)v181[0] + v50) + 48LL) + 16LL);
        v72 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v70 + 16), &v179, v71);
        v23 = v72;
        if ( v72 < 0 )
        {
          _mm_lfence();
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v73);
          v28[3] = v23;
          v28[4] = this;
          v28[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v181[0] + v50) + 48LL) + 16LL);
          v96 = *((_QWORD *)v181[0] + v50);
          goto LABEL_192;
        }
        v185[v50] = v179.Format;
        pPlaneAttributes = v48->pPlaneAttributes;
        v75 = (unsigned int)pPlaneAttributes->SrcRect.left;
        v76 = pPlaneAttributes->SrcRect.right;
        if ( (int)v75 >= v76
          || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
          || (Width = v179.Width, Height = v179.Height, (int)v75 < 0)
          || (int)v179.Width < v76
          || pPlaneAttributes->SrcRect.top < 0
          || (int)v179.Height < pPlaneAttributes->SrcRect.bottom )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v75);
          LODWORD(v23) = -1073741811;
          PresentPlaneCount = v9;
          v28[3] = -1073741811LL;
          v28[4] = this;
LABEL_45:
          v28[5] = PresentPlaneCount;
          goto LABEL_193;
        }
        v77 = pPlaneAttributes->ClipRect.left;
        FlipInterval = (unsigned int)pPlaneAttributes->ClipRect.right;
        if ( v77 >= (int)FlipInterval )
          goto LABEL_189;
        top = pPlaneAttributes->ClipRect.top;
        v80 = pPlaneAttributes->ClipRect.bottom;
        if ( top >= v80 )
          goto LABEL_189;
        v41 = (unsigned int)pPlaneAttributes->DstRect.left;
        v81 = pPlaneAttributes->DstRect.right;
        if ( (int)v41 >= v81 )
          goto LABEL_189;
        pDirtyRects = (unsigned int)pPlaneAttributes->DstRect.top;
        v82 = pPlaneAttributes->DstRect.bottom;
        if ( (int)pDirtyRects >= v82
          || v172 > v77
          || v180.right < (int)FlipInterval
          || v180.top > top
          || v180.bottom < v80
          || (int)v41 > v77
          || v81 < (int)FlipInterval
          || (int)pDirtyRects > top
          || v82 < v80 )
        {
          goto LABEL_189;
        }
        v83 = pPlaneAttributes->Rotation;
        if ( v83 )
        {
          if ( (unsigned int)(v83 - 1) > 3 )
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
            LODWORD(v23) = -1073741811;
            v28[3] = -1073741811LL;
            v28[4] = this;
            v28[5] = v160;
            v96 = v48->pPlaneAttributes->Rotation;
            goto LABEL_192;
          }
        }
        else
        {
          pPlaneAttributes->Rotation = D3DDDI_ROTATION_IDENTITY;
        }
        DirtyRectCount = pPlaneAttributes->DirtyRectCount;
        v85 = 0;
        LOBYTE(v41) = 1;
        if ( DirtyRectCount )
        {
          while ( (_BYTE)v41 )
          {
            pDirtyRects = (__int64)pPlaneAttributes->pDirtyRects;
            v86 = *(_DWORD *)(pDirtyRects + 16LL * v85);
            v87 = *(_DWORD *)(pDirtyRects + 16LL * v85 + 8);
            v88 = v86 < v87 && *(_DWORD *)(pDirtyRects + 16LL * v85 + 4) < *(_DWORD *)(pDirtyRects + 16LL * v85 + 12);
            v89 = v88 ? v41 : 0;
            v90 = pPlaneAttributes->SrcRect.left <= v86
               && pPlaneAttributes->SrcRect.right >= v87
               && pPlaneAttributes->SrcRect.top <= *(_DWORD *)(pDirtyRects + 16LL * v85 + 4)
               && pPlaneAttributes->SrcRect.bottom >= *(_DWORD *)(pDirtyRects + 16LL * v85 + 12);
            ++v85;
            LOBYTE(v41) = v90 ? v89 : 0;
            if ( v85 >= DirtyRectCount )
            {
              if ( (_BYTE)v41 )
                goto LABEL_124;
              break;
            }
          }
          pPlaneAttributes->DirtyRectCount = 0;
        }
LABEL_124:
        FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL);
        if ( *(_BYTE *)(FlipInterval + 2430) )
        {
          v41 = (unsigned __int64)v48->pPlaneAttributes;
          pDirtyRects = v41 + 36;
          if ( *(_DWORD *)(v41 + 20) != *(_DWORD *)(v41 + 36)
            || *(_DWORD *)(v41 + 28) != *(_DWORD *)(v41 + 44)
            || *(_DWORD *)(v41 + 24) != *(_DWORD *)(v41 + 40)
            || *(_DWORD *)(v41 + 32) != *(_DWORD *)(v41 + 48) )
          {
            InverseXformMPORect3(&v182, (_DWORD *)v41, (int *)pDirtyRects);
            pPlaneAttributes->SrcRect = v182;
            pPlaneAttributes->DstRect = v48->pPlaneAttributes->ClipRect;
            v41 = (unsigned int)pPlaneAttributes->SrcRect.left;
            v91 = pPlaneAttributes->SrcRect.right;
            if ( (int)v41 >= v91
              || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
              || (FlipInterval = (unsigned int)pPlaneAttributes->DstRect.left,
                  pDirtyRects = (unsigned int)pPlaneAttributes->DstRect.right,
                  (int)FlipInterval >= (int)pDirtyRects)
              || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
              || (v41 & 0x80000000) != 0LL
              || Width < v91
              || pPlaneAttributes->SrcRect.top < 0
              || Height < pPlaneAttributes->SrcRect.bottom
              || v172 > (int)FlipInterval
              || v180.right < (int)pDirtyRects
              || v180.top > pPlaneAttributes->DstRect.top
              || v180.bottom < pPlaneAttributes->DstRect.bottom )
            {
LABEL_189:
              v28 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
              PresentPlaneCount = v160;
              LODWORD(v23) = -1073741811;
              v28[3] = -1073741811LL;
              v28[4] = this;
              goto LABEL_45;
            }
          }
        }
        if ( !(_DWORD)v50 )
          break;
LABEL_154:
        if ( v158 )
        {
          v94 = (unsigned int)pPlaneAttributes->DstRect.left;
          if ( (_DWORD)v94 != pPlaneAttributes->SrcRect.left
            || pPlaneAttributes->DstRect.right != pPlaneAttributes->SrcRect.right
            || pPlaneAttributes->DstRect.top != pPlaneAttributes->SrcRect.top
            || *(_QWORD *)&pPlaneAttributes->SrcRect.bottom != *(_QWORD *)&pPlaneAttributes->DstRect.bottom
            || pPlaneAttributes->DstRect.right != pPlaneAttributes->ClipRect.right
            || pPlaneAttributes->DstRect.top != pPlaneAttributes->ClipRect.top
            || pPlaneAttributes->DstRect.bottom != pPlaneAttributes->ClipRect.bottom )
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdError(v94);
            LODWORD(v23) = -1073741811;
            v28[3] = -1073741811LL;
            v28[4] = this;
            goto LABEL_193;
          }
          if ( v48->pPlaneAttributes->Rotation != D3DDDI_ROTATION_IDENTITY )
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdError(v94);
            LODWORD(v23) = -1073741811;
            v28[3] = -1073741811LL;
            v28[4] = this;
            v28[5] = (unsigned int)v48->pPlaneAttributes->Rotation;
            goto LABEL_193;
          }
          _mm_lfence();
          LODWORD(VidPnSourceId) = v166;
          FlipInterval = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v181[0] + v50) + 48LL) + 4LL) >> 6) & 0xF;
          if ( v166 != (_DWORD)FlipInterval )
          {
            _mm_lfence();
            v28 = (_QWORD *)WdLogNewEntry5_WdError(FlipInterval);
            v95 = v176;
            LODWORD(v23) = -1073741811;
            v28[3] = -1073741811LL;
            v28[4] = this;
            v28[5] = v95;
            v96 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v181[0] + v50) + 48LL) + 4LL) >> 6) & 0xF;
LABEL_192:
            v28[6] = v96;
            goto LABEL_193;
          }
        }
        else
        {
          LODWORD(VidPnSourceId) = v166;
        }
        v9 = v160;
LABEL_171:
        if ( (v48->InputFlags.Value & 1) != 0 && (FlipInterval = (unsigned int)v48->FlipInterval, (_DWORD)FlipInterval) )
        {
          if ( (_DWORD)FlipInterval != 1 )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdWarning(FlipInterval, v41, pDirtyRects);
            v33[3] = this;
            v33[4] = v48->FlipInterval;
            goto LABEL_199;
          }
          v97 = 1;
          v163 = 1;
        }
        else
        {
          v97 = v163;
        }
        if ( bTracingEnabled )
        {
          v98 = *v48->pAllocationList;
          pDirtyRects = v98
                      ? VIDMM_EXPORT::VidMmETWAllocationHandle(
                          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
                          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                          v98)
                      : 0LL;
          v41 = (unsigned __int64)v48->pPlaneAttributes;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqqpqddddddddddddqqqqqq(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&FlipMultiPlaneOverlay,
              0LL,
              VidPnSourceId,
              v48->LayerIndex,
              v48->InputFlags.Value & 1,
              pDirtyRects,
              *(_DWORD *)v41,
              *(_DWORD *)(v41 + 4),
              *(_DWORD *)(v41 + 12),
              *(_DWORD *)(v41 + 8),
              *(_DWORD *)(v41 + 16),
              *(_DWORD *)(v41 + 20),
              *(_DWORD *)(v41 + 28),
              *(_DWORD *)(v41 + 24),
              *(_DWORD *)(v41 + 32),
              *(_DWORD *)(v41 + 36),
              *(_DWORD *)(v41 + 44),
              *(_DWORD *)(v41 + 40),
              *(_DWORD *)(v41 + 48),
              *(_DWORD *)(v41 + 52),
              *(_DWORD *)(v41 + 56),
              0,
              *(_DWORD *)(v41 + 72),
              a2->HDRMetaDataType,
              *(_DWORD *)(v41 + 80));
        }
        v160 = ++v9;
        if ( v9 >= a2->PresentPlaneCount )
        {
          v30 = v167;
          LODWORD(v23) = 0;
          if ( !v97 )
            goto LABEL_196;
LABEL_202:
          v100 = D3DDDI_FLIPINTERVAL_ONE;
          goto LABEL_203;
        }
        v41 = v171;
        pDirtyRects = v161;
        v44 = v155;
        v42 = v156;
        v43 = v157;
      }
      if ( v175 )
      {
        v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v181[0] + 48LL) + 4LL) & 0x2000;
        if ( v92 && (*(_DWORD *)(*(_QWORD *)(v175 + 48) + 4LL) & 0x2000) == 0 )
        {
          pDirtyRects = 1LL;
          v162 = 1;
LABEL_151:
          v41 = (unsigned int)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
          FlipInterval = (unsigned int)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left);
          if ( (_DWORD)FlipInterval != (_DWORD)v41 )
          {
            FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL);
            if ( *(_BYTE *)(FlipInterval + 2394) )
            {
              FlipInterval = (unsigned int)(pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top);
              v167 = pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top;
              v159 = 1;
              v164 = pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left;
            }
          }
          goto LABEL_154;
        }
        if ( !v92 )
        {
          v93 = v162;
          if ( (*(_DWORD *)(*(_QWORD *)(v175 + 48) + 4LL) & 0x2000) != 0 )
            v93 = 1;
          v162 = v93;
          pDirtyRects = 1LL;
          goto LABEL_151;
        }
      }
      pDirtyRects = 1LL;
      goto LABEL_151;
    }
LABEL_196:
    FlipInterval = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_BYTE *)(*(_QWORD *)(FlipInterval + 16) + 2466LL) )
    {
      v101 = WdLogNewEntry5_WdWarning(FlipInterval, v41, pDirtyRects);
      *(_QWORD *)(v101 + 24) = 3432LL;
      WdLogEvent5_WdWarning(v101);
      goto LABEL_202;
    }
    v100 = D3DDDI_FLIPINTERVAL_IMMEDIATE;
LABEL_203:
    if ( !v157 && !v156 && !v155 )
    {
      v102 = WdLogNewEntry5_WdEvent(FlipInterval, v41);
      *(_QWORD *)(v102 + 24) = 0LL;
      *(_QWORD *)(v102 + 32) = this;
      WdLogEvent5_WdEvent(v102);
      goto LABEL_259;
    }
    memset(&v183, 0, sizeof(v183));
    v103 = *((_QWORD *)this + 2);
    v104 = 4;
    v183.FlipInterval = v100;
    if ( !v158 )
      v104 = 4100;
    v183.Flags.Value = v104 ^ ((unsigned __int16)v104 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&a2->Flags.0 << 8)) & 0x700 | 8;
    CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)v178, *(struct ADAPTER_RENDER **)(v103 + 16), 1);
    if ( !CVidSchSubmitData::Valid((CVidSchSubmitData *)v178) )
    {
      v106 = WdLogNewEntry5_WdLowResource(v105);
      *(_QWORD *)(v106 + 24) = 3468LL;
      WdLogEvent5_WdLowResource(v106);
      LODWORD(v23) = -1073741801;
LABEL_258:
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v178);
      goto LABEL_259;
    }
    v23 = (__int64)v178[0];
    v107 = *(_DWORD *)v178[0] | 0x30020;
    *(_DWORD *)v178[0] = v107;
    v108 = v107 | 1;
    *(_DWORD *)(v23 + 120) = a2->PresentCount;
    *(_DWORD *)v23 = v108;
    if ( v162 )
    {
      v108 |= 0x400000u;
      *(_DWORD *)v23 = v108;
    }
    v109 = v108 | 4;
    *(_DWORD *)v23 = v109;
    v110 = v109;
    if ( !v158 && a2->ContextCount <= 1 )
    {
      v110 = v109 | 0x800000;
      *(_DWORD *)v23 = v109 | 0x800000;
    }
    v111 = v110 ^ ((unsigned __int8)v110 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 8;
    *(_DWORD *)v23 = v111;
    v112 = ((unsigned __int8)v111 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v111;
    *(_DWORD *)v23 = v112;
    v113 = (v112 ^ (a2->Flags.Value << 19)) & 0x80000 ^ v112;
    *(_DWORD *)v23 = v113;
    v114 = (v113 ^ (a2->Flags.Value << 19)) & 0x100000 ^ v113;
    *(_DWORD *)v23 = v114;
    v115 = (v114 ^ (a2->Flags.Value << 19)) & 0x200000 ^ v114;
    *(_DWORD *)v23 = v115;
    v116 = v115 ^ (v115 ^ (a2->Flags.Value << 21)) & 0x20000000;
    *(_DWORD *)v23 = v116;
    if ( (a2->Flags.Value & 0x40) != 0 )
      Duration = a2->Duration;
    else
      Duration = 0;
    *(_DWORD *)(v23 + 152) = Duration;
    v118 = v116;
    *(_DWORD *)(v23 + 124) = VidPnSourceId;
    *(_DWORD *)(v23 + 132) = v100;
    *(_DWORD *)(v23 + 128) = 5;
    if ( v100 == D3DDDI_FLIPINTERVAL_IMMEDIATE && (a2->Flags.Value & 0x200) != 0 )
    {
      v118 = v116 | 0x10000000;
      *(_DWORD *)v23 = v116 | 0x10000000;
    }
    if ( (*(_DWORD *)&a2->Flags.0 & 0x80u) != 0 )
    {
      v118 |= 0x40000000u;
      *(_DWORD *)v23 = v118;
      *(_DWORD *)(v23 + 360) = a2->HDRMetaDataType;
      if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
      {
        pHDRMetaData = a2->pHDRMetaData;
        *(_OWORD *)(v23 + 364) = *(_OWORD *)pHDRMetaData;
        *(_QWORD *)(v23 + 380) = pHDRMetaData[2];
        *(_DWORD *)(v23 + 388) = *((_DWORD *)pHDRMetaData + 6);
      }
      else if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        v119 = a2->pHDRMetaData;
        *(_OWORD *)(v23 + 364) = *v119;
        *(_OWORD *)(v23 + 380) = v119[1];
        *(_OWORD *)(v23 + 396) = v119[2];
        *(_OWORD *)(v23 + 412) = v119[3];
        *(_QWORD *)(v23 + 428) = *((_QWORD *)v119 + 8);
      }
    }
    if ( a2->pPostComposition )
    {
      *(_DWORD *)v23 = v118 | 0x80000000;
      *(RECT *)(v23 + 436) = a2->pPostComposition->SrcRect;
      *(RECT *)(v23 + 452) = a2->pPostComposition->DstRect;
    }
    IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
    v123 = *((_QWORD *)this + 2);
    if ( IsFullWDDMDevice )
    {
      if ( *(_DWORD *)(v23 + 128) != *(_DWORD *)(v123 + 4LL * (unsigned int)VidPnSourceId + 1664) )
      {
        if ( (a2->Flags.Value & 8) != 0 )
        {
          v124 = WdLogNewEntry5_WdEvent(v123, v122);
          LODWORD(v23) = -1071775739;
          *(_QWORD *)(v124 + 24) = -1071775739LL;
          WdLogEvent5_WdEvent(v124);
          goto LABEL_258;
        }
        v125 = WdLogNewEntry5_WdEvent(v123, v122);
        *(_QWORD *)(v125 + 24) = *((_QWORD *)this + 2);
        WdLogEvent5_WdEvent(v125);
        COREDEVICEACCESS::Release(a3);
        DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3u);
        v126 = COREDEVICEACCESS::AcquireShared(a3);
        v129 = v126;
        if ( v126 < 0 )
        {
          v130 = WdLogNewEntry5_WdEvent(v128, v127);
          *(_QWORD *)(v130 + 24) = v129;
          WdLogEvent5_WdEvent(v130);
          COREDEVICEACCESS::AcquireSharedUncheck(a3);
LABEL_235:
          LODWORD(v23) = v129;
          goto LABEL_258;
        }
      }
      v131 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (a2->Flags.Value & 8) == 0, a3);
      v129 = v131;
      if ( v131 < 0 )
      {
        v134 = WdLogNewEntry5_WdEvent(v133, v132);
        *(_QWORD *)(v134 + 24) = v129;
        *(_QWORD *)(v134 + 32) = this;
        WdLogEvent5_WdEvent(v134);
        goto LABEL_235;
      }
      v135 = DXGCONTEXT::CheckDevicePresentSettings(this, 1LL, 0LL, VidPnSourceId);
      v129 = v135;
      if ( v135 < 0 )
      {
        v138 = WdLogNewEntry5_WdEvent(v137, v136);
        *(_QWORD *)(v138 + 24) = v129;
        *(_QWORD *)(v138 + 32) = this;
        WdLogEvent5_WdEvent(v138);
        if ( (_DWORD)v129 == -1071774920 )
        {
          DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v181[0], v185, v161, *(_DWORD *)(v23 + 144));
          v139 = *(_DWORD *)(v23 + 128);
          LODWORD(v23) = 0;
          *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 1664) = v139;
          goto LABEL_258;
        }
        goto LABEL_235;
      }
      if ( *((_QWORD *)this + 44) )
      {
        v140 = WdLogNewEntry5_WdAssertion(v137);
        *(_QWORD *)(v140 + 24) = 3603LL;
        WdLogEvent5_WdAssertion(v140);
      }
      LODWORD(v129) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                        this,
                        a2,
                        v157,
                        v156,
                        v155,
                        v181[0],
                        v186,
                        &v183,
                        (struct VIDSCH_SUBMIT_DATA_BASE *)v23,
                        v177);
      if ( (int)v129 < 0 )
      {
LABEL_252:
        if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
          && (_DWORD)v129 != -1073741130 )
        {
          v151 = WdLogNewEntry5_WdAssertion(v150);
          *(_QWORD *)(v151 + 24) = 3666LL;
          WdLogEvent5_WdAssertion(v151);
        }
        if ( *((_QWORD *)this + 44) )
        {
          v152 = WdLogNewEntry5_WdAssertion(v150);
          *(_QWORD *)(v152 + 24) = 3667LL;
          WdLogEvent5_WdAssertion(v152);
        }
        goto LABEL_235;
      }
      v141 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL) + 112LL);
      if ( *(_DWORD *)(v141 + 3760LL * (unsigned int)VidPnSourceId + 1068) == -1 )
      {
        v142 = WdLogNewEntry5_WdAssertion(v141);
        *(_QWORD *)(v142 + 24) = 3620LL;
        WdLogEvent5_WdAssertion(v142);
      }
      DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v181[0], v185, v161, *(_DWORD *)(v23 + 144));
      v143 = v30;
      v144 = v164;
      v145 = v159;
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 1664) = *(_DWORD *)(v23 + 128);
    }
    else
    {
      if ( !*(_QWORD *)(v123 + 1728) )
      {
        v153 = WdLogNewEntry5_WdAssertion(v123);
        *(_QWORD *)(v153 + 24) = *((_QWORD *)this + 2);
        *(_QWORD *)(v153 + 32) = -1073741822LL;
        WdLogEvent5_WdAssertion(v153);
        LODWORD(v23) = -1073741811;
        goto LABEL_258;
      }
      v146 = a2->ppPresentPlanes;
      v147 = *v146;
      if ( (*v146)->LayerIndex )
      {
        v148 = WdLogNewEntry5_WdAssertion(v123);
        *(_QWORD *)(v148 + 24) = 3644LL;
        WdLogEvent5_WdAssertion(v148);
      }
      memset(&v184, 0, sizeof(v184));
      ConvertMPOThunkToLegacyPresentThunk(&v184, a2, v147);
      v149 = DXGCONTEXT::DisplayOnlyPresent(this, &v184, *(struct DXGALLOCATION **)v181[0], VidPnSourceId, &v183, a3);
      v143 = 0;
      v144 = 0;
      v145 = 0;
      LODWORD(v129) = v149;
    }
    UpdatePostComposition(
      (unsigned int)VidPnSourceId,
      v145,
      v144,
      v143,
      *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL));
    goto LABEL_252;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(left);
  LODWORD(v23) = -1073741811;
  v28[3] = -1073741811LL;
  v28[4] = this;
  v28[5] = VidPnSourceId;
LABEL_193:
  WdLogEvent5_WdError(v28);
LABEL_259:
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v181);
  return (unsigned int)v23;
}
