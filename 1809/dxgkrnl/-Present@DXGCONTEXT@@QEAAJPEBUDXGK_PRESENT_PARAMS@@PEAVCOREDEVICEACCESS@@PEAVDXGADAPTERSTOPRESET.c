/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40
 * Callers:
 *     DxgkPresent @ 0x1C01251E0 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0218090 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0224A24 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000F5E8 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C001124C (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C001128C (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C00112C0 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0011350 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0011E90 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00128E4 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x1C00138AC (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x1C0013960 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0015668 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00161F0 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1C0016338 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA?AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3DDDI_FLIPINTERVAL_TYPE@@@Z @ 0x1C0016D7C (-VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA-AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3D.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001B390 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x1C001B504 (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001B520 (-VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z @ 0x1C001B544 (-VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001B8C8 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0021BC4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0021FE0 (McTemplateK0ppxppttqddddddddq.c)
 *     McTemplateK0pqpqtt @ 0x1C0022190 (McTemplateK0pqpqtt.c)
 *     McTemplateK0ptqDR2DR2DR2DR2 @ 0x1C0022250 (McTemplateK0ptqDR2DR2DR2DR2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z @ 0x1C0035A40 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z.c)
 *     ?hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ @ 0x1C003D5F8 (-hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00DC06C (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00DEA1C (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E544C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA9E0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF21C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00F6CD0 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00F6F48 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100E00 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B490 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C011EDE8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0124C00 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C01298F0 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0129D58 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C012AC38 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C012DF60 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C0130014 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C013CF90 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D9E8 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C013DABC (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z @ 0x1C013DC14 (-GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C013DC30 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x1C013DC50 (-CheckOutput@DXGPRESENT@@QEAAXII@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013FE84 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C01C4114 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C01F27D0 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C01F4B14 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C01F79D8 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C02233A8 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C02244D8 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C02251AC (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0225358 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0226194 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?RemoveAlphaChannel@@YA?AW4_D3DDDIFORMAT@@W41@@Z @ 0x1C0226590 (-RemoveAlphaChannel@@YA-AW4_D3DDDIFORMAT@@W41@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C023F1D0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        const struct DXGK_PRESENT_PARAMS *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
        struct DXGCONTEXT **a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v14; // eax
  bool v15; // zf
  int v16; // ecx
  unsigned int v17; // r13d
  unsigned int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // ecx
  __int64 v27; // rcx
  struct _EX_RUNDOWN_REF **v28; // rax
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _EX_RUNDOWN_REF *v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rdx
  int v40; // edx
  __int64 v41; // rcx
  unsigned int v42; // esi
  DXGADAPTER *v43; // rcx
  int v44; // edx
  __int64 v45; // r12
  int v46; // r13d
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // edx
  int v53; // eax
  __int64 v54; // rdx
  int DeviceFlipMode; // eax
  __int64 v56; // rdx
  __int64 v57; // r8
  int v58; // ecx
  int v59; // eax
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  int v61; // r8d
  __int64 v62; // rdx
  int v63; // eax
  struct DXGALLOCATION *v64; // r14
  __int64 v65; // rdx
  __int64 v66; // r8
  DXGDEVICE *v67; // rcx
  struct COREDEVICEACCESS *v68; // rbx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbx
  struct _VIDMM_DMA_BUFFER **v73; // rbx
  __int64 v74; // rax
  UINT Value; // ebx
  __int64 v76; // rcx
  struct VIDMM_GLOBAL *v77; // r14
  VIDMM_EXPORT *v78; // r12
  struct COREDEVICEACCESS *v79; // r13
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // r8
  struct _EX_RUNDOWN_REF *v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rsi
  _QWORD *v86; // rbx
  __int64 v87; // rcx
  __int64 v89; // rax
  int v90; // esi
  UINT v91; // edx
  DXGPRESENT *v92; // rcx
  DXGPRESENT *v93; // rcx
  DXGADAPTER *v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  unsigned int v97; // ebx
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rcx
  BOOL v102; // ebx
  __int64 v103; // rcx
  int v104; // eax
  int v105; // r12d
  HANDLE CurrentThreadId; // r13
  __int64 v107; // rcx
  HDC *v108; // rbx
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  HDC v112; // rbx
  HDEV v113; // rsi
  __int64 v114; // rcx
  __int64 v115; // r13
  __int64 v116; // rax
  int v117; // ecx
  __int64 v118; // rcx
  HDC v119; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v121; // rbx
  DXGADAPTERSTOPRESETLOCKSHARED *v122; // r13
  unsigned int DdiSubRectCnt; // eax
  DXGPRESENT *v124; // rcx
  struct tagRECT *v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  int v128; // eax
  __int64 v129; // rdx
  __int64 v130; // rcx
  COREDEVICEACCESS *v131; // rbx
  unsigned int i; // r13d
  unsigned int v133; // ecx
  unsigned int v134; // eax
  int v135; // eax
  const struct tagRECT *ContentRect; // r9
  RECT *v137; // r8
  struct _VIDMM_DMA_BUFFER **v138; // r12
  UINT v139; // r12d
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v140; // ebx
  __int64 v141; // rcx
  struct VIDMM_GLOBAL *v142; // rsi
  VIDMM_EXPORT *v143; // r14
  __int64 v144; // r11
  __int64 v145; // rsi
  UINT v146; // ebx
  unsigned int v147; // edx
  unsigned int v148; // r10d
  struct _EX_RUNDOWN_REF *v149; // r11
  __int64 v150; // r8
  unsigned int v151; // r9d
  __int64 v152; // rcx
  int v153; // eax
  UINT v154; // edx
  const RECT *v155; // rcx
  signed __int64 v156; // r8
  __int64 v157; // rax
  __int128 v158; // xmm0
  __int64 v159; // rax
  __int64 v160; // rsi
  __int64 v161; // rax
  __int64 v162; // r8
  int v163; // ecx
  __int64 v164; // rcx
  struct _EX_RUNDOWN_REF **v165; // rax
  struct _EX_RUNDOWN_REF *v166; // rdx
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // rsi
  __int64 v171; // rcx
  int v172; // eax
  struct _VIDMM_DMA_BUFFER *v173; // rdx
  __int64 v174; // rax
  unsigned int v175; // eax
  struct DXGADAPTERSTOPRESETLOCKSHARED *v176; // rsi
  __int64 v177; // rax
  int v178; // eax
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r14
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rax
  int v186; // r9d
  __int64 v187; // rax
  _QWORD *v188; // rax
  _QWORD *v189; // rax
  struct DXGALLOCATION *v190; // rcx
  _QWORD *v191; // rax
  struct DXGALLOCATION *v192; // rcx
  int v193; // r9d
  __int64 v194; // rax
  int v195; // r14d
  __int64 v196; // rcx
  unsigned int v197; // esi
  _QWORD *v198; // rax
  __int64 v199; // rcx
  __int64 v200; // rdx
  DXGADAPTER *v201; // rcx
  __int64 v202; // rax
  struct _EX_RUNDOWN_REF *v203; // rdx
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  int v207; // eax
  __int64 v208; // rcx
  unsigned int v209; // eax
  int v210; // edx
  int v211; // eax
  __int64 v212; // r8
  int v213; // r9d
  __int64 v214; // rbx
  __int64 v215; // r14
  __int64 v216; // rcx
  int v217; // r9d
  int v218; // r10d
  __int64 v219; // rcx
  const RECT *DdiSubRectList; // r11
  int v221; // r8d
  unsigned int v222; // r10d
  int v223; // r9d
  __int64 v224; // rdx
  RECT v225; // xmm0
  _QWORD *v226; // rax
  __int64 v227; // rcx
  _QWORD *v228; // rax
  __int64 v229; // r8
  unsigned int v230; // ebx
  UINT v231; // r8d
  RECT DstRect; // xmm0
  _QWORD *v233; // rax
  int v234; // eax
  __int64 v235; // r14
  __int64 v236; // rcx
  UINT v237; // eax
  _QWORD *v238; // rax
  __int64 v239; // rcx
  __int64 v240; // rcx
  ULONG_PTR Count; // rax
  __int64 v242; // rax
  DXGADAPTER *v243; // rcx
  __int64 v244; // rax
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // rax
  __int64 v249; // rdx
  __int64 v250; // rcx
  __int64 v251; // rax
  bool IsFullWDDMDevice; // al
  DXGDEVICE *v253; // rcx
  unsigned int v254; // edx
  int v255; // ebx
  int v256; // eax
  int v257; // ecx
  int v258; // eax
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // rax
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  int v263; // eax
  _QWORD *v264; // rax
  struct DXGALLOCATION *v265; // rcx
  __int64 v266; // rax
  __int64 v267; // rcx
  __int64 v268; // rax
  bool v269; // al
  _QWORD *v270; // rax
  int CurrentOrientation; // eax
  int v272; // ecx
  UINT SubRectCnt; // r13d
  __int64 v274; // r10
  __int64 v275; // r14
  UINT v276; // ebx
  __int64 v277; // r11
  unsigned int v278; // edx
  unsigned int v279; // r10d
  unsigned __int64 v280; // r8
  unsigned int v281; // r9d
  __int64 v282; // rcx
  __int64 v283; // rax
  __int64 v284; // rcx
  __int64 v285; // r8
  int v286; // eax
  __int64 v287; // rdx
  _QWORD *v288; // rax
  __int64 v289; // rax
  int v290; // eax
  __int64 v291; // rdx
  __int64 v292; // rcx
  __int64 v293; // rbx
  _QWORD *v294; // rax
  __int64 Width; // rcx
  UINT Height; // eax
  enum _D3DDDIFORMAT v297; // ebx
  _QWORD *v298; // rax
  __int64 v299; // rax
  _QWORD *v300; // rax
  __int64 v301; // rax
  __int64 v302; // rax
  __int64 v303; // rax
  int v304; // eax
  __int64 v305; // rax
  COREDEVICEACCESS *v306; // rbx
  int v307; // eax
  __int64 v308; // rdx
  __int64 v309; // rcx
  __int64 v310; // rax
  int v311; // eax
  __int64 v312; // rax
  struct _VIDMM_DMA_BUFFER *v313; // rdx
  int v314; // eax
  __int64 v315; // rdx
  __int64 v316; // rcx
  __int64 v317; // r12
  __int64 v318; // rax
  char v319; // si
  int v320; // ebx
  __int64 v321; // rax
  __int64 v322; // rcx
  __int64 v323; // rax
  __int64 v324; // rax
  unsigned int v325; // ecx
  const struct tagRECT *v326; // rax
  struct _EX_RUNDOWN_REF *v327; // r13
  LONG v328; // eax
  LONG v329; // eax
  LONG v330; // eax
  LONG v331; // eax
  __int64 v332; // rcx
  __int64 v333; // rax
  __int64 v334; // rax
  struct tagRECT *v335; // rax
  unsigned int v336; // ebx
  __int64 v337; // rcx
  __int64 v338; // rdx
  __int64 v339; // rcx
  __int64 v340; // r8
  unsigned int v341; // ebx
  struct DXGPROCESS *v342; // r14
  int v343; // r9d
  __int64 v344; // rax
  __int64 v345; // r8
  int v346; // ecx
  __int64 v347; // rcx
  __int64 v348; // rax
  struct _EX_RUNDOWN_REF *v349; // rdx
  __int64 v350; // rcx
  __int64 v351; // rax
  __int64 v352; // rbx
  struct DXGPROCESS *v353; // rax
  int v354; // ebx
  __int64 v355; // rax
  UINT v356; // r12d
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v357; // ebx
  __int64 v358; // rcx
  struct VIDMM_GLOBAL *v359; // rsi
  VIDMM_EXPORT *v360; // r14
  __int64 v361; // r13
  __int64 v362; // rax
  __int64 v363; // rsi
  UINT v364; // ebx
  __int64 v365; // r11
  unsigned int v366; // edx
  unsigned int v367; // r10d
  __int64 v368; // r8
  unsigned int v369; // r9d
  __int64 v370; // rcx
  DXGDEVICE *v371; // rbx
  int v372; // r12d
  char v373; // bl
  COREDEVICEACCESS *v374; // rcx
  __int64 v375; // rcx
  struct DXGDEVICE *v376; // rsi
  __int64 v377; // rbx
  struct DXGPROCESS *v378; // rax
  int v379; // eax
  unsigned int v380; // eax
  __int64 v381; // rax
  PERESOURCE *v382; // rcx
  __int64 v383; // rcx
  __int64 v384; // rax
  __int64 v385; // rax
  int v386; // eax
  int v387; // ecx
  CWin32kLocks *v388; // r12
  bool v389; // bl
  int v390; // esi
  HDC v391; // rax
  __int64 v392; // rdx
  __int64 v393; // rcx
  __int64 v394; // rax
  struct DXGADAPTERSTOPRESETLOCKSHARED *v395; // r13
  struct DXGDEVICE *v396; // rsi
  __int64 v397; // rbx
  struct DXGPROCESS *v398; // rax
  __int64 v399; // rax
  DXGDEVICE *v400; // rbx
  char v401; // bl
  __int64 v402; // rcx
  __int64 v403; // rax
  CWin32kLocks *v404; // r12
  __int64 v405; // rbx
  int v406; // eax
  int v407; // ecx
  HDC v408; // rax
  __int64 v409; // rdx
  __int64 v410; // rcx
  __int64 v411; // rax
  int v412; // eax
  __int64 v413; // rax
  unsigned int *v414; // rdx
  __int64 v415; // r8
  __int64 v416; // rcx
  __int64 v417; // rax
  int v418; // eax
  int v419; // ecx
  __int64 v420; // rbx
  struct DXGPROCESS *v421; // rax
  RECT v422; // xmm0
  __int64 v423; // rcx
  __int64 v424; // rax
  __int64 v425; // rax
  int v426; // ecx
  _OWORD *v427; // rax
  __int64 v428; // rcx
  _OWORD *v429; // r15
  __int128 v430; // xmm1
  __int128 v431; // xmm0
  __int128 v432; // xmm1
  __int128 v433; // xmm0
  __int128 v434; // xmm1
  __int128 v435; // xmm0
  __int128 v436; // xmm1
  __int64 v437; // rax
  int v438; // eax
  __int64 v439; // rax
  __int64 v440; // rax
  struct _DXGKARG_PRESENT *v441; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v442; // [rsp+20h] [rbp-100h]
  struct tagRECT *v443; // [rsp+28h] [rbp-F8h]
  struct tagRECT *Src; // [rsp+40h] [rbp-E0h]
  int Srca; // [rsp+40h] [rbp-E0h]
  size_t Size; // [rsp+48h] [rbp-D8h]
  int Sizea; // [rsp+48h] [rbp-D8h]
  struct _VIDMM_DMA_BUFFER *v448; // [rsp+50h] [rbp-D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v449; // [rsp+58h] [rbp-C8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v450; // [rsp+58h] [rbp-C8h]
  enum _D3DDDIFORMAT v451[2]; // [rsp+60h] [rbp-C0h]
  enum _D3DDDIFORMAT v452; // [rsp+60h] [rbp-C0h]
  struct COREDEVICEACCESS *v453; // [rsp+68h] [rbp-B8h]
  __int64 v454; // [rsp+70h] [rbp-B0h]
  __int64 v455; // [rsp+78h] [rbp-A8h]
  __int64 v456; // [rsp+80h] [rbp-A0h]
  __int64 v457; // [rsp+88h] [rbp-98h]
  __int64 v458; // [rsp+90h] [rbp-90h]
  __int64 v459; // [rsp+98h] [rbp-88h]
  struct DXGALLOCATION *v461; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v462; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v463; // [rsp+B4h] [rbp-6Ch]
  char v464; // [rsp+BCh] [rbp-64h]
  unsigned int v465; // [rsp+C0h] [rbp-60h]
  DXGADAPTERSTOPRESETLOCKSHARED *v466; // [rsp+C8h] [rbp-58h]
  struct DXGALLOCATION *v467; // [rsp+D0h] [rbp-50h] BYREF
  const RECT *pDstSubRects; // [rsp+D8h] [rbp-48h] BYREF
  _QWORD v469[2]; // [rsp+E0h] [rbp-40h] BYREF
  struct _EX_RUNDOWN_REF *v470; // [rsp+F0h] [rbp-30h] BYREF
  int v471; // [rsp+F8h] [rbp-28h]
  struct DXGCONTEXT **v472; // [rsp+100h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v473; // [rsp+108h] [rbp-18h] BYREF
  struct _DXGKARG_PRESENT v474; // [rsp+110h] [rbp-10h] BYREF
  struct tagRECT Source1; // [rsp+1C0h] [rbp+A0h] BYREF
  struct _D3DKMT_LOCK2 v476; // [rsp+1D0h] [rbp+B0h] BYREF
  _QWORD v477[2]; // [rsp+1E8h] [rbp+C8h] BYREF
  struct tagRECT v478; // [rsp+1F8h] [rbp+D8h] BYREF
  _DWORD v479[140]; // [rsp+210h] [rbp+F0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v480; // [rsp+440h] [rbp+320h] BYREF
  _BYTE v482[64]; // [rsp+480h] [rbp+360h] BYREF
  _BYTE v483[64]; // [rsp+4C0h] [rbp+3A0h] BYREF
  _BYTE v484[64]; // [rsp+500h] [rbp+3E0h] BYREF
  _BYTE v485[64]; // [rsp+540h] [rbp+420h] BYREF

  *(_QWORD *)&Source1.left = a5;
  v472 = a6;
  v9 = *((_QWORD *)this + 2);
  v466 = a4;
  *(_QWORD *)&v476.hDevice = a7;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(v9 + 16)) )
  {
    v184 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v184 + 24) = 3212LL;
    WdLogEvent5_WdAssertion(v184);
  }
  if ( *((_QWORD *)this + 44) )
  {
    v185 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v185 + 24) = 3213LL;
    WdLogEvent5_WdAssertion(v185);
  }
  v12 = *((unsigned int *)a2 + 22);
  if ( (v12 & 0x4000) != 0
    || (v12 &= 0x12000u,
        v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL),
        v469[0] = *(_QWORD *)(v10 + 104),
        (_DWORD)v12 == 73728) )
  {
    v159 = WdLogNewEntry5_WdWarning(v10, v12, v11);
    LODWORD(v64) = -1073741811;
    *(_QWORD *)(v159 + 24) = this;
    *(_QWORD *)(v159 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v159);
    return (unsigned int)v64;
  }
  memset(&v474, 0, sizeof(v474));
  v13 = *(_DWORD *)a7 | 0x10020;
  v465 = *((_DWORD *)a2 + 5);
  v14 = *((_DWORD *)a2 + 6);
  *(_DWORD *)a7 = v13;
  v15 = (*((_DWORD *)a2 + 22) & 0x10000) == 0;
  v462 = v14;
  if ( v15 )
  {
    v13 |= 1u;
    *(_DWORD *)a7 = v13;
  }
  v16 = v13 | 0x100;
  *(_DWORD *)a7 = v16;
  *(_DWORD *)a7 = v16 ^ (v16 ^ (32 * *((_DWORD *)a2 + 22))) & 0x20000;
  if ( (*((_DWORD *)a2 + 22) & 0x1000) != 0 )
    *((_DWORD *)a7 + 30) = *((_DWORD *)a2 + 20);
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 31) = 0;
  v463 = 0LL;
  LODWORD(v470) = 0;
  v17 = 0;
  LODWORD(pDstSubRects) = 0;
  v18 = 0;
  LODWORD(v477[0]) = 0;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v461, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v467, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v473, 0LL);
  v21 = *((_DWORD *)a2 + 6);
  v471 = 0;
  if ( !v21 )
    goto LABEL_14;
  v160 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v160 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v186 = *(_DWORD *)(v160 + 224);
      if ( v186 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v186);
    }
    ExAcquirePushLockSharedEx(v160 + 208, 0LL);
  }
  v161 = (v21 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v161 >= *(_DWORD *)(v160 + 248) )
    goto LABEL_245;
  v162 = *(_QWORD *)(v160 + 232);
  v163 = *(_DWORD *)(v162 + 16 * v161 + 8);
  if ( ((v21 >> 25) & 0x60) != (*(_BYTE *)(v162 + 16 * v161 + 8) & 0x60) || (v163 & 0x2000) != 0 || (v163 & 0x1F) == 0 )
    goto LABEL_245;
  v164 = v163 & 0x1F;
  v165 = (struct _EX_RUNDOWN_REF **)(v162 + 16LL * (unsigned int)v161);
  if ( (_BYTE)v164 != 5 )
  {
    v187 = WdLogNewEntry5_WdError(v164);
    *(_QWORD *)(v187 + 24) = 316LL;
    WdLogEvent5_WdError(v187);
LABEL_245:
    v166 = 0LL;
    goto LABEL_201;
  }
  v166 = *v165;
LABEL_201:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&pDstSubRects, v166);
  ExReleasePushLockSharedEx(v160 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v467, (struct DXGALLOCATION **)&pDstSubRects);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&pDstSubRects);
  if ( !v467 )
  {
    v188 = (_QWORD *)WdLogNewEntry5_WdWarning(v168, v167, v169);
    LODWORD(v181) = -1073741811;
    v188[3] = -1073741811LL;
    v188[4] = this;
    v188[5] = *((unsigned int *)a2 + 6);
    goto LABEL_433;
  }
  v170 = *((_QWORD *)this + 2);
  v171 = *(_QWORD *)(*(_QWORD *)(v170 + 16) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v467 + 1) + 16LL) + 16LL) != v171 )
  {
    v189 = (_QWORD *)WdLogNewEntry5_WdError(v171);
    v189[3] = *((_QWORD *)this + 2);
    v190 = v467;
    goto LABEL_259;
  }
  memset(v482, 0, 0x30uLL);
  *(_QWORD *)v482 = *(_QWORD *)(*((_QWORD *)v467 + 6) + 16LL);
  v172 = ADAPTER_RENDER::DdiDescribeAllocation(
           *(ADAPTER_RENDER **)(v170 + 16),
           (struct _DXGKARG_DESCRIBEALLOCATION *)v482);
  v37 = v172;
  if ( v172 < 0 )
  {
    v191 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v191[3] = v37;
    v191[4] = this;
    v191[5] = *(_QWORD *)(*((_QWORD *)v467 + 6) + 16LL);
    v192 = v467;
    goto LABEL_261;
  }
  v17 = *(_DWORD *)&v482[8];
  v18 = *(_DWORD *)&v482[12];
  LODWORD(pDstSubRects) = *(_DWORD *)&v482[8];
  LODWORD(v477[0]) = *(_DWORD *)&v482[12];
LABEL_14:
  if ( (*((_DWORD *)a2 + 22) & 0x8002) != 0 )
  {
LABEL_27:
    v33 = (struct _EX_RUNDOWN_REF *)v461;
    goto LABEL_28;
  }
  v22 = *((_DWORD *)a2 + 5);
  v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v23 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v193 = *(_DWORD *)(v23 + 224);
      if ( v193 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v193);
    }
    ExAcquirePushLockSharedEx(v23 + 208, 0LL);
  }
  v24 = (v22 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v24 < *(_DWORD *)(v23 + 248) )
  {
    v25 = *(_QWORD *)(v23 + 232);
    v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
    if ( ((v22 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
    {
      v27 = v26 & 0x1F;
      v28 = (struct _EX_RUNDOWN_REF **)(v25 + 16LL * (unsigned int)v24);
      if ( (_BYTE)v27 == 5 )
      {
        v29 = *v28;
        goto LABEL_22;
      }
      v194 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v194 + 24) = 316LL;
      WdLogEvent5_WdError(v194);
    }
  }
  v29 = 0LL;
LABEL_22:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v470, v29);
  ExReleasePushLockSharedEx(v23 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v461, (struct DXGALLOCATION **)&v470);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v470);
  v33 = (struct _EX_RUNDOWN_REF *)v461;
  if ( !v461 )
  {
    v188 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
    LODWORD(v181) = -1073741811;
    v188[3] = -1073741811LL;
    v188[4] = this;
    v188[5] = *((unsigned int *)a2 + 5);
    goto LABEL_433;
  }
  memset(v482, 0, 0x30uLL);
  v15 = (*((_DWORD *)a2 + 22) & 0x10000000) == 0;
  v19 = *(_QWORD *)(*((_QWORD *)v461 + 6) + 16LL);
  *(_QWORD *)v482 = v19;
  if ( v15 )
  {
    v34 = *(_QWORD *)(*((_QWORD *)v461 + 1) + 16LL);
    if ( *(_QWORD *)(v34 + 16) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    {
      v35 = ADAPTER_RENDER::DdiDescribeAllocation(
              *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
              (struct _DXGKARG_DESCRIBEALLOCATION *)v482);
      v37 = v35;
      if ( v35 >= 0 )
      {
        v19 = *(unsigned int *)&v482[8];
        LODWORD(v470) = *(_DWORD *)&v482[16];
        v463 = *(_QWORD *)&v482[8];
        goto LABEL_27;
      }
      v191 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v191[3] = v37;
      v191[4] = this;
      v191[5] = *(_QWORD *)(*((_QWORD *)v461 + 6) + 16LL);
      v192 = v461;
LABEL_261:
      v191[6] = v192;
      WdLogEvent5_WdError(v191);
      LODWORD(v181) = v37;
      goto LABEL_434;
    }
    v189 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    v189[3] = *((_QWORD *)this + 2);
    v190 = v461;
LABEL_259:
    v189[4] = v190;
    LODWORD(v181) = -1073741811;
    v189[5] = -1073741811LL;
    WdLogEvent5_WdError(v189);
    goto LABEL_434;
  }
  v463 = *(_QWORD *)((char *)a2 + 1516);
  LODWORD(v470) = *((_DWORD *)a2 + 381);
LABEL_28:
  v38 = *((_DWORD *)a2 + 6);
  if ( v38 && (v39 = *((unsigned int *)a2 + 22), (v39 & 0x10000) == 0)
    || (v39 = *((unsigned int *)a2 + 22), (v39 & 4) != 0) )
  {
    if ( !v38 )
    {
      if ( (v39 & 0x10A7C3) != 0 )
      {
        v188 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v39, v20);
        v188[3] = this;
        v250 = *((unsigned int *)a2 + 22);
LABEL_432:
        LODWORD(v181) = -1073741811;
        v188[5] = -1073741811LL;
        v188[4] = v250;
        goto LABEL_433;
      }
      v40 = v39 & 0x10000000;
      if ( v40 )
      {
        Count = v33[5].Count;
        if ( !Count || !*(_QWORD *)(Count + 56) )
        {
          v242 = WdLogNewEntry5_WdError(v19);
          *(_QWORD *)(v242 + 24) = 3715LL;
          goto LABEL_340;
        }
      }
      else
      {
        v41 = *(unsigned int *)(v33[6].Count + 4);
        if ( (v41 & 2) == 0 && (v41 & 1) == 0 && (v41 & 0x2000) == 0 )
        {
LABEL_342:
          v198 = (_QWORD *)WdLogNewEntry5_WdError(v41);
          LODWORD(v181) = -1073741811;
          v198[3] = -1073741811LL;
          v198[4] = this;
          v198[5] = v461;
          v198[6] = *((_QWORD *)v461 + 6);
          v199 = *((unsigned int *)a2 + 5);
          goto LABEL_343;
        }
      }
      if ( v40 )
      {
        v243 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1728LL);
        if ( !v243
          || !DXGADAPTER::IsDisplayAdapter(v243)
          || (v42 = *((_DWORD *)a2 + 4),
              v243 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1728LL),
              v42 >= *(_DWORD *)(*((_QWORD *)v243 + 315) + 80LL)) )
        {
          v242 = WdLogNewEntry5_WdError(v243);
          *(_QWORD *)(v242 + 24) = *((unsigned int *)a2 + 4);
          goto LABEL_340;
        }
        v33 = (struct _EX_RUNDOWN_REF *)v461;
      }
      else
      {
        v42 = (*(_DWORD *)(v33[6].Count + 4) >> 6) & 0xF;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&Source1, v33);
      DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v473, (struct DXGALLOCATION **)&Source1);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&Source1);
      v471 = *((_DWORD *)a2 + 5);
      v43 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1728LL);
      if ( !v43
        || !DXGADAPTER::IsDisplayAdapter(v43)
        || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL)
                                                                           + 2520LL)) )
      {
        v244 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v244 + 24) = 3756LL;
        WdLogEvent5_WdAssertion(v244);
      }
      v41 = *((_QWORD *)v461 + 6);
      v44 = *(_DWORD *)(v41 + 4);
      if ( (v44 & 0x2000) != 0 )
      {
        v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
        if ( !*(_BYTE *)(v41 + 322) )
          goto LABEL_342;
      }
      if ( (*((_DWORD *)a2 + 22) & 0x60000) == 0 )
        goto LABEL_42;
      if ( (*((_DWORD *)a2 + 22) & 0x60000) == 0x60000 )
      {
        v242 = WdLogNewEntry5_WdError(v41);
        *(_QWORD *)(v242 + 24) = 3775LL;
      }
      else
      {
        if ( (v44 & 0x1000) != 0 )
        {
          v246 = *((unsigned int *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                     *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
                                     v42)
                 + 10);
          if ( (v246 & 0x10) != 0 )
          {
            v249 = *((unsigned int *)a2 + 22);
            LOBYTE(v246) = (v246 & 0x20) == 0;
            if ( ((unsigned __int8)v246 & ((v249 & 0x40000) != 0)) == 0 )
            {
              if ( (v249 & 0xC0000) != 0xC0000 )
              {
LABEL_42:
                if ( !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
                {
                  v46 = 0;
                  goto LABEL_364;
                }
                v45 = *(_QWORD *)&v476.hDevice;
                v46 = 0;
                v47 = **(_DWORD **)&v476.hDevice ^ (*((_DWORD *)a2 + 22) ^ **(_DWORD **)&v476.hDevice) & 4;
                **(_DWORD **)&v476.hDevice = v47;
                v48 = (*((_DWORD *)a2 + 22) ^ v47) & 8 ^ v47;
                *(_DWORD *)v45 = v48;
                v49 = ((unsigned __int8)v48 ^ (unsigned __int8)(*((_DWORD *)a2 + 22) >> 1)) & 0x10 ^ v48;
                *(_DWORD *)v45 = v49;
                v50 = (v49 ^ (4 * *((_DWORD *)a2 + 22))) & 0x80000 ^ v49;
                *(_DWORD *)v45 = v50;
                v51 = (v50 ^ (4 * *((_DWORD *)a2 + 22))) & 0x100000 ^ v50;
                *(_DWORD *)v45 = v51;
                v52 = v51 ^ (v51 ^ (4 * *((_DWORD *)a2 + 22))) & 0x200000;
                *(_DWORD *)v45 = v52;
                if ( (*((_DWORD *)a2 + 22) & 0x8000000) != 0 )
                  v53 = *((_DWORD *)a2 + 363);
                else
                  v53 = 0;
                *(_DWORD *)(v45 + 152) = v53;
                *(_DWORD *)v45 = v52 ^ (*((_DWORD *)a2 + 22) ^ v52) & 0x20000000;
                v54 = *((_QWORD *)a2 + 180);
                v474.Flags.Value = v474.Flags.Value & 0xFFFFF8FB | *((_DWORD *)a2 + 22) & 4 | (*((_DWORD *)a2 + 22) >> 9) & 0x700;
                if ( v54 && !*(_DWORD *)(v54 + 16) && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 322LL) )
                {
                  v474.SubRectCnt = *(_DWORD *)v54;
                  v474.pDstSubRects = *(const RECT **)(v54 + 8);
                }
                DeviceFlipMode = VIDSCH_EXPORT::VidSchGetDeviceFlipMode(
                                   *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL),
                                   *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                                   v42,
                                   (__int64)a2 + 84);
                *(_DWORD *)(v45 + 128) = DeviceFlipMode;
                v58 = DeviceFlipMode;
                if ( DeviceFlipMode )
                {
                  v15 = ((DeviceFlipMode - 1) & 0xFFFFFFFD) == 0;
                  v59 = *((_DWORD *)a2 + 21);
                  if ( v15 )
                  {
                    v474.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
                  }
                  else
                  {
                    v474.FlipInterval = *((_DWORD *)a2 + 21);
                    if ( v58 == 2 )
                      goto LABEL_53;
                  }
                  v474.Flags.Value |= 8u;
LABEL_53:
                  *(_DWORD *)(v45 + 132) = v59;
                  *(_DWORD *)(v45 + 124) = v42;
                  DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), v42);
                  v61 = *(_DWORD *)(*((_QWORD *)v461 + 6) + 4LL) & 0x2000;
                  if ( v61 && DisplayedPrimary && (*(_DWORD *)(*((_QWORD *)DisplayedPrimary + 6) + 4LL) & 0x2000) == 0 )
                  {
                    *(_DWORD *)v45 |= 0x400000u;
                  }
                  else if ( !v61
                         && DisplayedPrimary
                         && (*(_DWORD *)(*((_QWORD *)DisplayedPrimary + 6) + 4LL) & 0x2000) != 0 )
                  {
                    *(_DWORD *)v45 |= 0x400000u;
                  }
                  else
                  {
                    *(_DWORD *)v45 &= ~0x400000u;
                  }
                  v62 = *(unsigned int *)(v45 + 128);
                  if ( !(_DWORD)v62 )
                    goto LABEL_60;
                  if ( (_DWORD)v62 == *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v42 + 1664) )
                    goto LABEL_60;
                  v177 = WdLogNewEntry5_WdEvent(v42, v62);
                  *(_QWORD *)(v177 + 24) = *((_QWORD *)this + 2);
                  WdLogEvent5_WdEvent(v177);
                  COREDEVICEACCESS::Release(a3);
                  DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3u);
                  v178 = COREDEVICEACCESS::AcquireShared(a3);
                  v181 = v178;
                  if ( v178 >= 0 )
                    goto LABEL_60;
                  v251 = WdLogNewEntry5_WdEvent(v180, v179);
                  *(_QWORD *)(v251 + 24) = v181;
                  WdLogEvent5_WdEvent(v251);
                  COREDEVICEACCESS::AcquireSharedUncheck(a3);
                  goto LABEL_434;
                }
                v188 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v56, v57);
                v188[3] = this;
                v250 = *((int *)a2 + 21);
                goto LABEL_432;
              }
              v242 = WdLogNewEntry5_WdError(v246);
              *(_QWORD *)(v242 + 24) = 3800LL;
              goto LABEL_340;
            }
            v248 = WdLogNewEntry5_WdWarning(v246, v249, v247);
            *(_QWORD *)(v248 + 24) = 3794LL;
          }
          else
          {
            v248 = WdLogNewEntry5_WdWarning(v246, v245, v247);
            *(_QWORD *)(v248 + 24) = 3788LL;
          }
          WdLogEvent5_WdWarning(v248);
          LODWORD(v181) = -1071775739;
          goto LABEL_434;
        }
        v242 = WdLogNewEntry5_WdError(v41);
        *(_QWORD *)(v242 + 24) = 3781LL;
      }
LABEL_340:
      WdLogEvent5_WdError(v242);
LABEL_341:
      LODWORD(v181) = -1073741811;
      goto LABEL_434;
    }
    if ( *((_QWORD *)a2 + 9) && *((_DWORD *)a2 + 16) && (v39 & 3) != 0 && (v39 & 0x100E803C) == 0 )
    {
      if ( (v39 & 2) != 0 )
      {
        if ( (v39 & 0x100681) == 0 )
        {
          v195 = HIDWORD(v463);
          goto LABEL_269;
        }
      }
      else if ( (_DWORD)v463 )
      {
        v195 = HIDWORD(v463);
        if ( HIDWORD(v463) )
        {
          if ( (v39 & 0x82) == 0x80 )
          {
            v200 = v39 & 0x600;
            if ( (_DWORD)v200 == 1536 )
            {
              v188 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v200, v20);
              LODWORD(v181) = -1073741811;
              v188[3] = -1073741811LL;
              v188[4] = this;
              v188[5] = *((_QWORD *)a2 + 9);
              v188[6] = *((unsigned int *)a2 + 16);
              v188[7] = *((unsigned int *)a2 + 22);
              goto LABEL_433;
            }
LABEL_269:
            v196 = *((_QWORD *)v467 + 6);
            v197 = *(_DWORD *)(v196 + 4);
            if ( (v197 & 2) == 0 && (v197 & 1) == 0 )
            {
              v198 = (_QWORD *)WdLogNewEntry5_WdError(v196);
              LODWORD(v181) = -1073741811;
              v198[3] = -1073741811LL;
              v198[4] = this;
              v198[5] = v467;
              v198[6] = *((_QWORD *)v467 + 6);
              v199 = *((unsigned int *)a2 + 6);
LABEL_343:
              v198[7] = v199;
              WdLogEvent5_WdError(v198);
              goto LABEL_434;
            }
            v42 = (v197 >> 6) & 0xF;
            v201 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1728LL);
            if ( !v201
              || !DXGADAPTER::IsDisplayAdapter(v201)
              || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 1728LL)
                                                                                 + 2520LL)) )
            {
              v202 = WdLogNewEntry5_WdAssertion(v201);
              *(_QWORD *)(v202 + 24) = 3464LL;
              WdLogEvent5_WdAssertion(v202);
            }
            v203 = (struct _EX_RUNDOWN_REF *)v467;
            *(_DWORD *)(*(_QWORD *)&v476.hDevice + 124LL) = v42;
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&Source1, v203);
            DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v473, (struct DXGALLOCATION **)&Source1);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&Source1);
            v471 = *((_DWORD *)a2 + 6);
            v207 = *((_DWORD *)a2 + 22);
            if ( (v207 & 1) != 0 )
            {
              if ( v467 == v461 )
              {
                v198 = (_QWORD *)WdLogNewEntry5_WdError(v205);
                LODWORD(v181) = -1073741811;
                v198[3] = -1073741811LL;
                v198[4] = this;
                v198[5] = v461;
                v198[6] = *((unsigned int *)a2 + 5);
                v199 = *((unsigned int *)a2 + 6);
                goto LABEL_343;
              }
              v208 = *((_QWORD *)v461 + 6);
              v209 = *(_DWORD *)(v208 + 4);
              if ( ((v209 & 2) != 0 || (v209 & 1) != 0) && ((v209 >> 6) & 0xF) != v42 )
              {
                v198 = (_QWORD *)WdLogNewEntry5_WdError(v208);
                LODWORD(v181) = -1073741811;
                v198[3] = -1073741811LL;
                v198[4] = this;
                v198[5] = v461;
                v198[6] = (*(_DWORD *)(*((_QWORD *)v461 + 6) + 4LL) >> 6) & 0xF;
                v199 = v42;
                goto LABEL_343;
              }
              v210 = *((_DWORD *)a2 + 14);
              v211 = *((_DWORD *)a2 + 12);
              if ( v210 <= v211
                || (v212 = *((unsigned int *)a2 + 15), v208 = *((unsigned int *)a2 + 13), (int)v212 <= (int)v208)
                || (v213 = v463, v211 >= (int)v463)
                || (int)v208 >= v195
                || v210 <= 0
                || (int)v212 <= 0 )
              {
                v198 = (_QWORD *)WdLogNewEntry5_WdError(v208);
                LODWORD(v181) = -1073741811;
                v198[3] = -1073741811LL;
                v198[4] = *((int *)a2 + 12);
                v198[5] = *((int *)a2 + 13);
                v198[6] = *((int *)a2 + 14);
                v199 = *((int *)a2 + 15);
                goto LABEL_343;
              }
              v205 = *((unsigned int *)a2 + 16);
              v214 = 0LL;
              if ( !(_DWORD)v205 )
                goto LABEL_299;
              while ( 1 )
              {
                v215 = 16LL * (unsigned int)v214;
                if ( !DXGPRESENT::IntersectRect(
                        &Source1,
                        (const struct tagRECT *)(v215 + *((_QWORD *)a2 + 9)),
                        (const struct tagRECT *)a2 + 3)
                  || RtlCompareMemory(&Source1, (const void *)(v215 + *((_QWORD *)a2 + 9)), 0x10uLL) != 16 )
                {
                  break;
                }
                v205 = *((unsigned int *)a2 + 16);
                v214 = (unsigned int)(v214 + 1);
                if ( (unsigned int)v214 >= (unsigned int)v205 )
                {
                  v17 = (unsigned int)pDstSubRects;
                  v195 = HIDWORD(v463);
                  v213 = v463;
LABEL_299:
                  v204 = *((unsigned int *)a2 + 22);
                  if ( (v204 & 0x40) == 0 )
                  {
                    v230 = v477[0];
                    if ( v17 == v213 && LODWORD(v477[0]) == v195 )
                    {
                      v46 = 0;
                      v225 = (RECT)*((_OWORD *)a2 + 3);
                      v474.pDstSubRects = (const RECT *)*((_QWORD *)a2 + 9);
                      goto LABEL_318;
                    }
                    v233 = (_QWORD *)WdLogNewEntry5_WdWarning(v205, v204, v212);
                    v233[4] = v17;
                    v233[5] = v230;
                    v233[6] = (unsigned int)v463;
                    v233[7] = (unsigned int)v195;
                    v233[3] = this;
                    WdLogEvent5_WdWarning(v233);
                    goto LABEL_341;
                  }
                  v206 = *((unsigned int *)a2 + 10);
                  v217 = *((_DWORD *)a2 + 8);
                  if ( (int)v206 > v217 )
                  {
                    v204 = *((unsigned int *)a2 + 11);
                    v218 = *((_DWORD *)a2 + 9);
                    if ( (int)v204 > v218
                      && v217 < (int)v17
                      && v218 < SLODWORD(v477[0])
                      && (int)v206 > 0
                      && (int)v204 > 0 )
                    {
                      v219 = (unsigned int)(*((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12));
                      if ( (_DWORD)v219 == (_DWORD)v206 - v217 )
                      {
                        v219 = (unsigned int)(*((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13));
                        if ( (_DWORD)v219 == (_DWORD)v204 - v218 )
                        {
                          LODWORD(v181) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), *((_DWORD *)a2 + 16));
                          if ( (int)v181 >= 0 )
                          {
                            v46 = 0;
                            DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
                            v221 = *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 12);
                            v222 = 0;
                            v223 = *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 13);
                            for ( LODWORD(v205) = *((_DWORD *)a2 + 16);
                                  v222 < (unsigned int)v205;
                                  LODWORD(v205) = *((_DWORD *)a2 + 16) )
                            {
                              v224 = v222++;
                              v224 *= 2LL;
                              *(&DdiSubRectList->left + 2 * v224) = v221 + *(_DWORD *)(*((_QWORD *)a2 + 9) + 8 * v224);
                              *(&DdiSubRectList->right + 2 * v224) = v221
                                                                   + *(_DWORD *)(*((_QWORD *)a2 + 9) + 8 * v224 + 8);
                              *(&DdiSubRectList->top + 2 * v224) = v223
                                                                 + *(_DWORD *)(*((_QWORD *)a2 + 9) + 8 * v224 + 4);
                              *(&DdiSubRectList->bottom + 2 * v224) = v223
                                                                    + *(_DWORD *)(*((_QWORD *)a2 + 9) + 8 * v224 + 12);
                            }
                            v225 = (RECT)*((_OWORD *)a2 + 2);
                            LODWORD(v204) = *((_DWORD *)a2 + 22);
                            v474.pDstSubRects = DdiSubRectList;
LABEL_318:
                            v474.DstRect = v225;
                            v231 = (*(_WORD *)&v474.Flags.0 ^ (unsigned __int16)((unsigned int)v204 >> 9)) & 0x800 ^ v474.Flags.Value;
                            DstRect = (RECT)*((_OWORD *)a2 + 3);
LABEL_332:
                            v237 = *((_DWORD *)a2 + 7);
                            v474.SubRectCnt = v205;
                            v474.Color = v237;
                            v474.Flags.Value = v204 & 3 | v231 & 0xFFFFF78C | ((unsigned __int64)(v204 & 0xE00 | ((unsigned int)v204 >> 4) & 0x10000) >> 5);
                            v474.SrcRect = DstRect;
LABEL_364:
                            v45 = *(_QWORD *)&v476.hDevice;
LABEL_60:
                            v63 = DXGCONTEXT::CheckDevicePresentSettings(
                                    this,
                                    (*((_DWORD *)a2 + 22) >> 2) & 1,
                                    (*((_DWORD *)a2 + 22) >> 28) & 1,
                                    v42);
                            LODWORD(v64) = v63;
                            if ( v63 < 0 )
                            {
                              if ( v63 != -1071774920 )
                                goto LABEL_99;
                              if ( (*((_DWORD *)a2 + 22) & 4) == 0 )
                                goto LABEL_435;
                              IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
                              v253 = (DXGDEVICE *)*((_QWORD *)this + 2);
                              v254 = v42;
                              if ( IsFullWDDMDevice )
                              {
LABEL_368:
                                DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(v253, v254);
                                DXGDEVICE::SetDisplayedPrimary(
                                  *((struct _KTHREAD ***)this + 2),
                                  v42,
                                  v461,
                                  *(_DWORD *)(v45 + 144),
                                  1u);
                                *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v42 + 1664) = *(_DWORD *)(v45 + 128);
                              }
                              else
                              {
                                DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v253, v42, v461, 0, 1u);
                              }
LABEL_435:
                              LODWORD(v64) = v46;
                              goto LABEL_99;
                            }
                            if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
                            {
                              if ( *((_QWORD *)a2 + 180) )
                              {
                                LODWORD(v64) = DXGCONTEXT::ValidatePresentRegions(
                                                 this,
                                                 (const struct _D3DKMT_PRESENT *)a2,
                                                 v463,
                                                 HIDWORD(v463));
                                if ( (int)v64 < 0 )
                                  goto LABEL_99;
                              }
                            }
                            if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(
                                    *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
                                    v42,
                                    0) )
                            {
                              v67 = (DXGDEVICE *)*((_QWORD *)this + 2);
                              if ( (*((_DWORD *)v67 + v42 + 272) & 0x200) == 0
                                && (*((_DWORD *)a2 + 22) & 0x10000000) == 0 )
                              {
                                v264 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, v65, v66);
                                LODWORD(v64) = -1071775739;
                                v264[3] = -1071775739LL;
                                v264[4] = this;
                                v264[5] = *((unsigned int *)a2 + 5);
                                v265 = v461;
                                v264[7] = v42;
                                goto LABEL_449;
                              }
                              v68 = a3;
LABEL_67:
                              if ( DXGDEVICE::IsFullWDDMDevice(v67) )
                              {
                                v69 = DXGCONTEXT::WaitForQueuedPresentLimit(
                                        this,
                                        v42,
                                        (*((_DWORD *)a2 + 22) & 0x10) == 0,
                                        v68);
                                v72 = v69;
                                if ( v69 < 0 )
                                {
                                  v266 = WdLogNewEntry5_WdEvent(v71, v70);
                                  *(_QWORD *)(v266 + 24) = v72;
                                  *(_QWORD *)(v266 + 32) = this;
                                  WdLogEvent5_WdEvent(v266);
                                  LODWORD(v64) = v72;
                                  goto LABEL_99;
                                }
                                v73 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 352);
                                if ( ((*(_DWORD *)(v45 + 128) - 3) & 0xFFFFFFFD) == 0 )
                                  goto LABEL_70;
                                LODWORD(v64) = DXGCONTEXT::AcquireDmaBuffer(
                                                 this,
                                                 (struct _VIDMM_DMA_BUFFER **)this + 44,
                                                 a3,
                                                 0);
                                if ( (int)v64 < 0 )
                                  goto LABEL_95;
                                if ( !*v73 )
                                {
                                  v268 = WdLogNewEntry5_WdAssertion(v267);
                                  *(_QWORD *)(v268 + 24) = 4078LL;
                                  WdLogEvent5_WdAssertion(v268);
                                }
LABEL_70:
                                LODWORD(v64) = DXGCONTEXT::CheckDevicePresentSettings(
                                                 this,
                                                 (*((_DWORD *)a2 + 22) >> 2) & 1,
                                                 (*((_DWORD *)a2 + 22) >> 28) & 1,
                                                 v42);
                                if ( (int)v64 >= 0 )
                                {
                                  if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
                                  {
                                    if ( v461 )
                                    {
                                      v74 = *((_QWORD *)v461 + 6);
                                      if ( v74 )
                                      {
                                        if ( (*(_DWORD *)(v74 + 4) & 0x2000) != 0
                                          && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v461) )
                                        {
                                          v270 = (_QWORD *)WdLogNewEntry5_WdEvent(v183, v182);
                                          LODWORD(v64) = -1071775739;
                                          v270[3] = -1071775739LL;
                                          v270[4] = this;
                                          v270[5] = v461;
                                          WdLogEvent5_WdEvent(v270);
                                          if ( *v73 )
                                          {
                                            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                                              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
                                              *v73,
                                              0LL);
                                            *v73 = 0LL;
                                          }
                                          goto LABEL_99;
                                        }
                                      }
                                    }
                                  }
                                  if ( (*((_DWORD *)a2 + 22) & 0x2000) != 0 )
                                  {
                                    CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                                           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL)
                                                                     + 2520LL),
                                                           v42,
                                                           1);
                                    v272 = 0;
                                    if ( CurrentOrientation != 1 )
                                      v272 = 128;
                                    Value = v272 | v474.Flags.Value & 0xFFFFFF7F;
                                    v474.Flags.Value = Value;
                                  }
                                  else
                                  {
                                    Value = v474.Flags.Value;
                                  }
                                  if ( bTracingEnabled )
                                  {
                                    v76 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                                    v77 = *(struct VIDMM_GLOBAL **)(v76 + 552);
                                    v78 = *(VIDMM_EXPORT **)(v76 + 544);
                                    if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
                                    {
                                      VIDMM_EXPORT::VidMmETWAllocationHandle(v78, v77, v465);
                                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                                        McTemplateK0pqpqtt((__int64)&DxgkControlGuid_Context, (__int64)&EventFlip, 0LL);
                                      goto LABEL_81;
                                    }
                                    SubRectCnt = v474.SubRectCnt;
                                    *(_QWORD *)&Source1.left = v474.pDstSubRects;
                                    v469[0] = VIDMM_EXPORT::VidMmETWAllocationHandle(v78, v77, v462);
                                    v274 = VIDMM_EXPORT::VidMmETWAllocationHandle(v78, v77, v465);
                                    v275 = *((_QWORD *)this + 44);
                                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                                      McTemplateK0ppxppttqddddddddq(
                                        (__int64)&DxgkControlGuid_Context,
                                        (__int64)&EventBlit,
                                        0LL,
                                        *((_QWORD *)a2 + 1),
                                        v275,
                                        0LL,
                                        v274,
                                        v469[0],
                                        1,
                                        0,
                                        Value,
                                        v474.SrcRect.left,
                                        v474.SrcRect.right,
                                        v474.SrcRect.top,
                                        v474.SrcRect.bottom,
                                        v474.DstRect.left,
                                        v474.DstRect.right,
                                        v474.DstRect.top,
                                        v474.DstRect.bottom,
                                        SubRectCnt);
                                    v276 = 0;
                                    if ( SubRectCnt )
                                    {
                                      v277 = *(_QWORD *)&Source1.left;
                                      while ( 1 )
                                      {
                                        v278 = SubRectCnt - v276;
                                        if ( SubRectCnt - v276 > 0x10 )
                                          break;
                                        v279 = SubRectCnt - v276;
                                        if ( v278 )
                                          goto LABEL_405;
LABEL_407:
                                        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                                        {
                                          LODWORD(v443) = v279;
                                          LODWORD(v441) = v278 <= 0x10;
                                          McTemplateK0ptqDR2DR2DR2DR2(
                                            (__int64)&DxgkControlGuid_Context,
                                            (__int64)&EventBlitRect,
                                            0LL,
                                            v275,
                                            v441,
                                            v443,
                                            v484,
                                            v483,
                                            &v480,
                                            v482);
                                          v277 = *(_QWORD *)&Source1.left;
                                        }
                                        v276 += 16;
                                        if ( v276 >= SubRectCnt )
                                          goto LABEL_81;
                                      }
                                      v279 = 16;
LABEL_405:
                                      v280 = 0LL;
                                      v281 = 0;
                                      do
                                      {
                                        v282 = v281 + v276;
                                        ++v281;
                                        v282 *= 2LL;
                                        v280 += 4LL;
                                        *(_DWORD *)&v483[v280 + 60] = *(_DWORD *)(v277 + 8 * v282);
                                        *(_DWORD *)&v482[v280 + 60] = *(_DWORD *)(v277 + 8 * v282 + 8);
                                        v479[v280 / 4 + 139] = *(_DWORD *)(v277 + 8 * v282 + 4);
                                        *(_DWORD *)&v482[v280 - 4] = *(_DWORD *)(v277 + 8 * v282 + 12);
                                      }
                                      while ( v281 < v279 );
                                      goto LABEL_407;
                                    }
LABEL_81:
                                    v45 = *(_QWORD *)&v476.hDevice;
                                  }
                                  v79 = a3;
                                  LODWORD(v64) = DXGCONTEXT::SubmitPresent(
                                                   this,
                                                   (const struct _D3DKMT_PRESENT *)a2,
                                                   a2,
                                                   *((_DWORD *)a2 + 23),
                                                   v472,
                                                   v461,
                                                   v465,
                                                   v462,
                                                   &v474,
                                                   *((struct _D3DKMT_PRESENT_RGNS **)a2 + 180),
                                                   *((struct _VIDMM_DMA_BUFFER **)this + 44),
                                                   (struct VIDSCH_SUBMIT_DATA_BASE *)v45,
                                                   (enum _D3DDDIFORMAT)v470,
                                                   a3);
                                  if ( (int)v64 >= 0 )
                                  {
                                    v80 = 3760LL * v42;
                                    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL)
                                                                           + 2520LL)
                                                               + 112LL)
                                                   + v80
                                                   + 1068) == -1 )
                                    {
                                      v283 = WdLogNewEntry5_WdAssertion(v80);
                                      *(_QWORD *)(v283 + 24) = 4192LL;
                                      WdLogEvent5_WdAssertion(v283);
                                    }
                                  }
                                  *((_QWORD *)this + 44) = 0LL;
                                  if ( (int)v64 >= 0 )
                                  {
                                    if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
                                    {
                                      v81 = *((_QWORD *)this + 2);
                                      v82 = *(_QWORD *)(v81 + 1728);
                                      if ( v82 == *(_QWORD *)(*(_QWORD *)(v81 + 16) + 16LL) )
                                      {
                                        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v82 + 2520), v42);
                                        v81 = *((_QWORD *)this + 2);
                                      }
                                      DXGDEVICE::SetDisplayedPrimary(
                                        (struct _KTHREAD **)v81,
                                        v42,
                                        v461,
                                        *(_DWORD *)(v45 + 144),
                                        1u);
                                      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v42 + 1664) = *(_DWORD *)(v45 + 128);
                                      UpdatePostComposition(
                                        v42,
                                        0,
                                        0,
                                        0,
                                        *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL));
                                    }
                                    goto LABEL_90;
                                  }
                                  goto LABEL_95;
                                }
                                if ( *v73 )
                                {
                                  VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
                                    *v73,
                                    0LL);
                                  *v73 = 0LL;
                                }
                                if ( (_DWORD)v64 == -1071774920 )
                                {
                                  if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
                                  {
                                    v269 = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
                                    v253 = (DXGDEVICE *)*((_QWORD *)this + 2);
                                    v254 = v42;
                                    if ( !v269 )
                                    {
                                      DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v253, v42, v461, 0, 1u);
                                      LODWORD(v64) = 0;
                                      goto LABEL_99;
                                    }
                                    goto LABEL_368;
                                  }
                                  goto LABEL_435;
                                }
LABEL_214:
                                v79 = a3;
                                goto LABEL_90;
                              }
                              v284 = *((_QWORD *)this + 2);
                              v285 = *(_QWORD *)(v284 + 1728);
                              if ( !v285 )
                              {
                                v299 = WdLogNewEntry5_WdAssertion(v284);
                                *(_QWORD *)(v299 + 24) = *((_QWORD *)this + 2);
                                *(_QWORD *)(v299 + 32) = -1073741822LL;
                                WdLogEvent5_WdAssertion(v299);
                                LODWORD(v64) = -1073741811;
                                goto LABEL_99;
                              }
                              v286 = *((_DWORD *)a2 + 22);
                              *(_QWORD *)&v476.hDevice = 0LL;
                              if ( (v286 & 0x10000000) != 0 )
                              {
                                v476.Flags.Value = *((_DWORD *)a2 + 379);
                                Height = *((_DWORD *)a2 + 380);
                              }
                              else
                              {
                                v64 = v467;
                                if ( (v286 & 4) != 0 )
                                  v64 = v461;
                                v287 = *(unsigned int *)(*((_QWORD *)v64 + 6) + 4LL);
                                if ( (v287 & 0x10) != 0 )
                                {
                                  v288 = (_QWORD *)WdLogNewEntry5_WdEvent(v284, v287);
                                  v288[3] = -1071775482LL;
                                  v288[4] = this;
                                  v288[5] = v64;
                                  WdLogEvent5_WdEvent(v288);
                                  LODWORD(v64) = -1071775482;
                                  goto LABEL_99;
                                }
                                *(_OWORD *)v482 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                                               *(DXGADAPTER ***)(v285 + 2520),
                                                               ((unsigned int)v287 >> 6) & 0xF);
                                memset(&v480, 0, sizeof(v480));
                                v480.Flags.Value = 1;
                                v480.Rotation = -1;
                                v289 = *((_QWORD *)this + 2);
                                v480.hAllocation = *(HANDLE *)(*((_QWORD *)v64 + 6) + 16LL);
                                v290 = ADAPTER_RENDER::DdiDescribeAllocation(
                                         *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v289 + 16) + 16LL) + 2528LL),
                                         &v480);
                                v293 = v290;
                                if ( v290 < 0 )
                                {
                                  v294 = (_QWORD *)WdLogNewEntry5_WdError(v292);
                                  v294[3] = v293;
                                  v294[4] = this;
                                  v294[5] = *((unsigned int *)v64 + 4);
                                  v294[6] = v64;
                                  v294[7] = (*(_DWORD *)(*((_QWORD *)v64 + 6) + 4LL) >> 6) & 0xF;
                                  WdLogEvent5_WdError(v294);
                                  LODWORD(v64) = -1073741811;
                                  goto LABEL_99;
                                }
                                Width = v480.Width;
                                if ( v480.Width != *(_DWORD *)v482 )
                                  goto LABEL_425;
                                Height = v480.Height;
                                if ( v480.Height != *(_DWORD *)&v482[4] )
                                  goto LABEL_425;
                                if ( *((_BYTE *)this + 433) )
                                  goto LABEL_424;
                                v297 = RemoveAlphaChannel(*(enum _D3DDDIFORMAT *)&v482[8]);
                                if ( RemoveAlphaChannel(v480.Format) != v297 )
                                {
LABEL_425:
                                  v298 = (_QWORD *)WdLogNewEntry5_WdEvent(Width, v291);
                                  v298[3] = -1071775482LL;
                                  v298[4] = this;
                                  v298[5] = v64;
                                  WdLogEvent5_WdEvent(v298);
                                  LODWORD(v64) = -1071775739;
                                  goto LABEL_99;
                                }
                                Height = v480.Height;
                                LODWORD(Width) = v480.Width;
LABEL_424:
                                v68 = a3;
                                v476.Flags.Value = Width;
                                v284 = *((_QWORD *)this + 2);
                              }
                              *((_DWORD *)&v476.Flags + 1) = Height;
                              LODWORD(v64) = ADAPTER_DISPLAY::PresentDisplayOnly(
                                               *(ADAPTER_DISPLAY **)(*(_QWORD *)(v284 + 1728) + 2520LL),
                                               this,
                                               v42,
                                               (const struct _D3DKMT_PRESENT *)a2,
                                               &v474,
                                               v68,
                                               (struct tagRECT *)&v476);
                              if ( (int)v64 < 0 )
                                goto LABEL_95;
                              if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
                              {
                                DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), v42);
                                DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), v42, v461, 0, 1u);
                                UpdatePostComposition(
                                  v42,
                                  0,
                                  0,
                                  0,
                                  *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL));
                              }
                              goto LABEL_214;
                            }
                            v255 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
                            v256 = (*(__int64 (**)(void))(v469[0] + 8LL))();
                            v257 = *((_DWORD *)a2 + 22) & 4;
                            if ( v255 == v256 )
                            {
                              v68 = a3;
                              if ( v257 )
                                goto LABEL_380;
                              COREDEVICEACCESS::Release(a3);
                              DXGADAPTERSTOPRESETLOCKSHARED::Release(v466);
                              DXGPRESENTMUTEX::DXGPRESENTMUTEX(
                                (DXGPRESENTMUTEX *)&v480,
                                *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
                              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v480);
                              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v466);
                              v263 = COREDEVICEACCESS::AcquireShared(a3);
                              v64 = (struct DXGALLOCATION *)v263;
                              if ( v263 >= 0 )
                              {
                                DXGDEVICE::SynchronizePresentToPrimary(
                                  *((DXGDEVICE **)this + 2),
                                  this,
                                  (struct DXGPRESENTMUTEX *)&v480,
                                  0);
                                DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v480);
                                goto LABEL_380;
                              }
                            }
                            else
                            {
                              if ( v257 )
                              {
                                v68 = a3;
                                goto LABEL_375;
                              }
                              DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2u);
                              DXGADAPTERSTOPRESETLOCKSHARED::Release(v466);
                              v68 = a3;
                              COREDEVICEACCESS::Release(a3);
                              DXGPRESENTMUTEX::DXGPRESENTMUTEX(
                                (DXGPRESENTMUTEX *)&v480,
                                *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
                              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v480);
                              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v466);
                              v258 = COREDEVICEACCESS::AcquireShared(a3);
                              v64 = (struct DXGALLOCATION *)v258;
                              if ( v258 >= 0 )
                              {
                                DXGDEVICE::SynchronizePresentToPrimary(
                                  *((DXGDEVICE **)this + 2),
                                  this,
                                  (struct DXGPRESENTMUTEX *)&v480,
                                  1);
                                DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v480);
LABEL_375:
                                *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (*(__int64 (**)(void))(v469[0] + 8LL))();
                                CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                                                 *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
                                                 v42);
                                if ( CddInterface )
                                  (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(
                                    *(_QWORD *)CddInterface,
                                    0LL);
LABEL_380:
                                v67 = (DXGDEVICE *)*((_QWORD *)this + 2);
                                goto LABEL_67;
                              }
                            }
                            v261 = WdLogNewEntry5_WdEvent(v260, v259);
                            *(_QWORD *)(v261 + 24) = v64;
                            *(_QWORD *)(v261 + 32) = this;
                            WdLogEvent5_WdEvent(v261);
                            COREDEVICEACCESS::AcquireSharedUncheck(v68);
                            DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v480);
                            goto LABEL_99;
                          }
LABEL_434:
                          v46 = v181;
                          goto LABEL_435;
                        }
                      }
                      v228 = (_QWORD *)WdLogNewEntry5_WdError(v219);
                      LODWORD(v181) = -1073741811;
                      v228[3] = -1073741811LL;
                      v228[4] = this;
                      v228[5] = *((unsigned int *)a2 + 22);
                      v228[6] = v467;
                      v228[7] = v42;
LABEL_335:
                      WdLogEvent5_WdError(v228);
                      goto LABEL_434;
                    }
                  }
LABEL_314:
                  v188 = (_QWORD *)WdLogNewEntry5_WdWarning(v205, v204, v206);
                  LODWORD(v181) = -1073741811;
                  v188[3] = -1073741811LL;
                  v188[4] = *((int *)a2 + 8);
                  v188[5] = *((int *)a2 + 9);
                  v188[6] = *((int *)a2 + 10);
                  v188[7] = *((int *)a2 + 11);
LABEL_433:
                  WdLogEvent5_WdWarning(v188);
                  goto LABEL_434;
                }
              }
              v226 = (_QWORD *)WdLogNewEntry5_WdError(v216);
              LODWORD(v181) = -1073741811;
              v226[3] = -1073741811LL;
              v226[4] = *((int *)a2 + 12);
              v226[5] = *((int *)a2 + 13);
              v226[6] = *((int *)a2 + 14);
              v226[7] = *((int *)a2 + 15);
              WdLogEvent5_WdError(v226);
              v228 = (_QWORD *)WdLogNewEntry5_WdError(v227);
              v229 = 4 * v214;
            }
            else
            {
              LODWORD(v181) = 0;
              v474.DstRect.right = v17;
              *(_QWORD *)&v474.DstRect.left = 0LL;
              v474.DstRect.bottom = v18;
              if ( (v207 & 0x40) != 0 )
              {
                v234 = *((_DWORD *)a2 + 10);
                if ( v234 <= *((_DWORD *)a2 + 8) )
                  goto LABEL_314;
                v205 = *((unsigned int *)a2 + 11);
                if ( (int)v205 <= *((_DWORD *)a2 + 9) || v234 <= 0 || (int)v205 <= 0 )
                  goto LABEL_314;
                if ( !DXGPRESENT::IntersectRect(&v474.DstRect, (const struct tagRECT *)a2 + 2, &v474.DstRect) )
                  goto LABEL_434;
              }
              LODWORD(v205) = *((_DWORD *)a2 + 16);
              v46 = 0;
              LODWORD(v214) = 0;
              if ( !(_DWORD)v205 )
              {
LABEL_331:
                DstRect = v474.DstRect;
                LODWORD(v204) = *((_DWORD *)a2 + 22);
                v231 = v474.Flags.Value;
                v474.pDstSubRects = (const RECT *)*((_QWORD *)a2 + 9);
                goto LABEL_332;
              }
              while ( 1 )
              {
                v235 = 16LL * (unsigned int)v214;
                if ( !DXGPRESENT::IntersectRect(
                        &Source1,
                        (const struct tagRECT *)(v235 + *((_QWORD *)a2 + 9)),
                        &v474.DstRect)
                  || RtlCompareMemory(&Source1, (const void *)(v235 + *((_QWORD *)a2 + 9)), 0x10uLL) != 16 )
                {
                  break;
                }
                LODWORD(v205) = *((_DWORD *)a2 + 16);
                LODWORD(v214) = v214 + 1;
                if ( (unsigned int)v214 >= (unsigned int)v205 )
                  goto LABEL_331;
              }
              v238 = (_QWORD *)WdLogNewEntry5_WdError(v236);
              LODWORD(v181) = -1073741811;
              v238[3] = -1073741811LL;
              v238[4] = *((int *)a2 + 8);
              v238[5] = *((int *)a2 + 9);
              v238[6] = *((int *)a2 + 10);
              v238[7] = *((int *)a2 + 11);
              WdLogEvent5_WdError(v238);
              v228 = (_QWORD *)WdLogNewEntry5_WdError(v239);
              v229 = 4LL * (unsigned int)v214;
            }
            v228[3] = (unsigned int)v214;
            v228[4] = *(int *)(*((_QWORD *)a2 + 9) + 4 * v229);
            v228[5] = *(int *)(*((_QWORD *)a2 + 9) + 4 * v229 + 4);
            v228[6] = *(int *)(*((_QWORD *)a2 + 9) + 4 * v229 + 8);
            v228[7] = *(int *)(*((_QWORD *)a2 + 9) + 4 * v229 + 12);
            goto LABEL_335;
          }
        }
      }
    }
    v188 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v39, v20);
    LODWORD(v181) = -1073741811;
    v188[3] = this;
    v188[4] = *((_QWORD *)a2 + 9);
    v188[5] = *((unsigned int *)a2 + 16);
    v240 = *((unsigned int *)a2 + 22);
    v188[7] = -1073741811LL;
    v188[6] = v240;
    goto LABEL_433;
  }
  if ( (v39 & 3) != 0 )
  {
    if ( (v39 & 0x100) == 0 )
      goto LABEL_105;
    v19 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(v19 + 1728) )
    {
      if ( *(_DWORD *)(v19 + 1736) <= *((_DWORD *)a2 + 4) )
      {
        v301 = WdLogNewEntry5_WdWarning(v19, v39, v20);
        *(_QWORD *)(v301 + 24) = *((unsigned int *)a2 + 4);
        *(_QWORD *)(v301 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 1736LL);
        WdLogEvent5_WdWarning(v301);
        LODWORD(v64) = -1073741811;
        goto LABEL_99;
      }
LABEL_105:
      v89 = *((_QWORD *)a2 + 9);
      if ( (v39 & 2) != 0 )
      {
        if ( v89 && *((_DWORD *)a2 + 16) && (v39 & 0x86BD) == 0 )
        {
          v90 = 0;
          v465 = 0;
LABEL_114:
          v91 = *((_DWORD *)a2 + 22) & 3 | v474.Flags.Value & 0xFFFFFF8C | (*((_DWORD *)a2 + 22) >> 5) & 0x70;
          v474.Color = *((_DWORD *)a2 + 7);
          v92 = (DXGPRESENT *)*((_QWORD *)this + 19);
          v474.Flags.Value = v91;
          LODWORD(v64) = DXGPRESENT::CheckInput(v92, (const struct _D3DKMT_PRESENT *)a2, v463, HIDWORD(v463));
          if ( (int)v64 < 0 )
            goto LABEL_95;
          v93 = (DXGPRESENT *)*((_QWORD *)this + 19);
          if ( (*((_DWORD *)v93 + 1) & 4) != 0 )
            goto LABEL_214;
          DXGPRESENT::CheckOutput(v93, v17, v18);
          v94 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1728LL);
          if ( !v94 || DXGADAPTER::IsDisplayOnlyAdapter(v94) )
          {
            v304 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (*((_DWORD *)a2 + 22) & 0x10) == 0, a3);
            v64 = (struct DXGALLOCATION *)v304;
            if ( v304 < 0 )
              goto LABEL_451;
          }
          else
          {
            v95 = *((_QWORD *)this + 2);
            v96 = *(_QWORD *)(*(_QWORD *)(v95 + 16) + 16LL);
            if ( *(_QWORD *)(v95 + 1728) != v96 )
            {
              v302 = WdLogNewEntry5_WdAssertion(v96);
              *(_QWORD *)(v302 + 24) = 4436LL;
              WdLogEvent5_WdAssertion(v302);
              v95 = *((_QWORD *)this + 2);
            }
            v97 = 0;
            if ( *(_DWORD *)(v95 + 1736) )
            {
              while ( 1 )
              {
                v98 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v97, (*((_DWORD *)a2 + 22) & 0x10) == 0, a3);
                v64 = (struct DXGALLOCATION *)v98;
                if ( v98 < 0 )
                  break;
                if ( ++v97 >= *(_DWORD *)(*((_QWORD *)this + 2) + 1736LL) )
                  goto LABEL_123;
              }
LABEL_451:
              v303 = WdLogNewEntry5_WdEvent(v100, v99);
              *(_QWORD *)(v303 + 24) = v64;
              *(_QWORD *)(v303 + 32) = this;
              WdLogEvent5_WdEvent(v303);
              goto LABEL_99;
            }
          }
LABEL_123:
          v86 = (_QWORD *)((char *)this + 352);
          LODWORD(v64) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 44, a3, 0);
          if ( (int)v64 >= 0 )
          {
            if ( !*v86 && !*((_BYTE *)this + 433) )
            {
              v305 = WdLogNewEntry5_WdAssertion(v101);
              *(_QWORD *)(v305 + 24) = 4474LL;
              WdLogEvent5_WdAssertion(v305);
            }
            DXGPRESENTMUTEX::DXGPRESENTMUTEX(
              (DXGPRESENTMUTEX *)&v480,
              *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
            v102 = 0;
            if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
            {
              if ( *((_DWORD *)a2 + 6) )
              {
                v103 = *((_QWORD *)v467 + 6);
                v104 = *(_DWORD *)(v103 + 4);
                *(_DWORD *)(v103 + 4) = v104 | 0x400;
                v102 = (v104 & 0x400) == 0;
              }
            }
            else
            {
              v306 = a3;
              COREDEVICEACCESS::Release(a3);
              DXGADAPTERSTOPRESETLOCKSHARED::Release(v466);
              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v480);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v466);
              v307 = COREDEVICEACCESS::AcquireShared(a3);
              v64 = (struct DXGALLOCATION *)v307;
              if ( v307 < 0 )
              {
                v310 = WdLogNewEntry5_WdEvent(v309, v308);
                *(_QWORD *)(v310 + 24) = v64;
                *(_QWORD *)(v310 + 32) = this;
                WdLogEvent5_WdEvent(v310);
                goto LABEL_470;
              }
              v102 = 0;
            }
            v105 = (*(__int64 (**)(void))(v469[0] + 8LL))();
            LODWORD(pDstSubRects) = v105;
            CurrentThreadId = PsGetCurrentThreadId();
            if ( !*((_BYTE *)this + 433) )
              VIDSCH_EXPORT::VidSchGetMonitorPowerState(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL),
                *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL));
            v107 = *((_QWORD *)this + 19);
            if ( *(_DWORD *)(v107 + 8) == v105
              && *(HANDLE *)(v107 + 56) == CurrentThreadId
              && *(_QWORD *)(v107 + 48) == *((_QWORD *)a2 + 1)
              && !*(_DWORD *)(v107 + 64)
              && !v102 )
            {
              v311 = *(_DWORD *)(v107 + 4);
              if ( (v311 & 0x108) == 0 )
              {
                if ( (v311 & 1) != 0 )
                {
                  LODWORD(v64) = -1071775738;
                }
                else if ( (v311 & 0x10) == 0 && (*((_DWORD *)a2 + 22) & 0x10000) == 0 )
                {
                  DXGDEVICE::SynchronizePresentToPrimary(
                    *((DXGDEVICE **)this + 2),
                    this,
                    (struct DXGPRESENTMUTEX *)&v480,
                    0);
                }
LABEL_142:
                v108 = *(HDC **)&Source1.left;
                goto LABEL_143;
              }
            }
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v480);
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v466);
            COREDEVICEACCESS::Release(a3);
            v108 = *(HDC **)&Source1.left;
            LODWORD(v64) = CWin32kLocks::Lock(
                             *(CWin32kLocks **)&Source1.left,
                             *((HWND *)a2 + 1),
                             *((_WORD *)a2 + 45) & 1,
                             1,
                             0);
            if ( (*((_DWORD *)a2 + 22) & 0x10000) == 0
              || ((*(void (__fastcall **)(HDC, _QWORD *))(v469[0] + 232LL))(*v108, v477),
                  *(_QWORD *)(*((_QWORD *)this + 19) + 440LL) = v477[0],
                  (*((_DWORD *)a2 + 22) & 0x10000) == 0) )
            {
              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v480);
            }
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v466);
            v109 = COREDEVICEACCESS::AcquireShared(a3);
            if ( v109 >= 0 )
            {
              if ( (int)v64 < 0 )
              {
LABEL_143:
                v115 = v469[0];
                goto LABEL_144;
              }
              if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0
                && *((_DWORD *)a2 + 6)
                && !*(_QWORD *)(*((_QWORD *)this + 19) + 440LL) )
              {
                v312 = WdLogNewEntry5_WdEvent(v111, v110);
                *(_QWORD *)(v312 + 24) = 0LL;
                *(_QWORD *)(v312 + 32) = this;
                WdLogEvent5_WdEvent(v312);
                v313 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 44);
                if ( v313 )
                {
                  VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
                    v313,
                    0LL);
                  *((_QWORD *)this + 44) = 0LL;
                }
                LODWORD(v64) = 0;
                goto LABEL_630;
              }
              v112 = *v108;
              v113 = *(HDEV *)(*(_QWORD *)&Source1.left + 16LL);
              LODWORD(v64) = DXGPRESENT::CheckVisRgn(
                               *((DXGPRESENT **)this + 19),
                               (const struct _D3DKMT_PRESENT *)a2,
                               v112,
                               v113,
                               *((const struct DXGDEVICE **)this + 2),
                               v463,
                               HIDWORD(v463),
                               (enum _D3DDDIFORMAT)v470,
                               1);
              if ( (_DWORD)v64 != 261 )
                goto LABEL_139;
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v480);
              COREDEVICEACCESS::Release(a3);
              DXGADAPTERSTOPRESETLOCKSHARED::Release(v466);
              if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                LODWORD(v64) = -1071775738;
              if ( (*((_DWORD *)a2 + 22) & 0x10000) == 0 )
                DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v480);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v466);
              v314 = COREDEVICEACCESS::AcquireShared(a3);
              v317 = v314;
              if ( v314 >= 0 )
              {
                if ( (_DWORD)v64 != -1071775738 )
                  LODWORD(v64) = DXGPRESENT::CheckVisRgn(
                                   *((DXGPRESENT **)this + 19),
                                   (const struct _D3DKMT_PRESENT *)a2,
                                   v112,
                                   v113,
                                   *((const struct DXGDEVICE **)this + 2),
                                   v463,
                                   HIDWORD(v463),
                                   (enum _D3DDDIFORMAT)v470,
                                   0);
                v105 = (int)pDstSubRects;
LABEL_139:
                v114 = *((_QWORD *)this + 19);
                if ( (int)v64 < 0 )
                {
                  v108 = *(HDC **)&Source1.left;
                  v90 = 0;
                  if ( (*(_BYTE *)(v114 + 4) & 1) != 0 )
                  {
                    *(_QWORD *)(v114 + 56) = CurrentThreadId;
                    *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v105;
                  }
                  goto LABEL_143;
                }
                *(_QWORD *)(v114 + 56) = CurrentThreadId;
                if ( (*((_DWORD *)a2 + 22) & 0x10000) == 0 )
                {
                  *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v105;
                  DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2u);
                  v319 = 0;
                  v115 = v469[0];
                  v320 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
                  if ( v320 != (*(unsigned int (**)(void))(v469[0] + 8LL))() )
                  {
                    *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v105;
                    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3, 0xFFFFFFFF, 0);
                    v319 = 1;
                  }
                  DXGDEVICE::SynchronizePresentToPrimary(
                    *((DXGDEVICE **)this + 2),
                    this,
                    (struct DXGPRESENTMUTEX *)&v480,
                    v319);
                  v108 = *(HDC **)&Source1.left;
                  v90 = 0;
LABEL_144:
                  v116 = *((_QWORD *)this + 19);
                  v464 = 0;
                  v117 = *(_DWORD *)(v116 + 4);
                  if ( (v117 & 0x10) == 0 )
                  {
                    if ( (int)v64 >= 0 && (v117 & 2) == 0 )
                    {
                      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v115 + 224))(0LL, 0LL, 0LL) )
                      {
                        if ( (*((_DWORD *)a2 + 22) & 0x12100) == 0x10000 )
                          goto LABEL_149;
                        v413 = WdLogNewEntry5_WdAssertion(v118);
                        *(_QWORD *)(v413 + 24) = 5102LL;
                      }
                      else
                      {
                        if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) || (*((_DWORD *)a2 + 22) & 0x4000000) != 0 )
                          goto LABEL_149;
                        v413 = WdLogNewEntry5_WdAssertion(v118);
                        *(_QWORD *)(v413 + 24) = 5107LL;
                      }
                      WdLogEvent5_WdAssertion(v413);
LABEL_149:
                      if ( (*((_DWORD *)a2 + 22) & 0x10000) == 0 )
                        goto LABEL_158;
                      v119 = *v108;
                      Current = DXGPROCESS::GetCurrent();
                      if ( !v119 )
                        goto LABEL_158;
                      v121 = *((_QWORD *)Current + 13);
                      if ( !v121 || *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) != *((_DWORD *)a2 + 96) )
                        goto LABEL_158;
                      v122 = v466;
                      DXGADAPTERSTOPRESETLOCKSHARED::Release(v466);
                      COREDEVICEACCESS::Release(a3);
                      memset(v479, 0, 0x228uLL);
                      DdiSubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), 0);
                      v124 = (DXGPRESENT *)*((_QWORD *)this + 19);
                      v479[0] = DdiSubRectCnt;
                      v125 = DXGPRESENT::GetDdiSubRectList(v124, 0);
                      v126 = *((unsigned int *)a2 + 23);
                      *(_QWORD *)&v479[2] = v125;
                      *(_QWORD *)&v479[6] = *((unsigned int *)this + 6);
                      v127 = 1LL;
                      v479[4] = 1;
                      if ( (_DWORD)v126 )
                      {
                        v414 = (unsigned int *)((char *)a2 + 96);
                        v415 = v126;
                        do
                        {
                          v416 = *v414++;
                          *(_QWORD *)&v479[2 * v127 + 6] = v416;
                          v127 = (unsigned int)++v479[4];
                          --v415;
                        }
                        while ( v415 );
                      }
                      if ( !*((_BYTE *)this + 433)
                        && (unsigned int)VIDSCH_EXPORT::VidSchGetNumUnorderedWaitsInDevice(
                                           *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL),
                                           *(struct _VIDSCH_DEVICE **)(*((_QWORD *)this + 2) + 656LL)) )
                      {
                        v464 = 1;
                        LOBYTE(v479[136]) = 1;
                      }
                      (*(void (__fastcall **)(HDC, _DWORD *))(v121 + 240))(v119, v479);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v122);
                      v128 = COREDEVICEACCESS::AcquireShared(a3);
                      v131 = (COREDEVICEACCESS *)v128;
                      if ( v128 >= 0 )
                      {
LABEL_158:
                        for ( i = 0; ; ++i )
                        {
                          v133 = (*((_DWORD *)a2 + 22) & 0x10000) != 0 ? 1 : *(_DWORD *)(*((_QWORD *)this + 2) + 1736LL);
                          if ( i >= v133 )
                            break;
                          v474.SubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), i);
                          if ( v474.SubRectCnt )
                          {
                            if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
                            {
                              v134 = v462;
                            }
                            else
                            {
                              v134 = DXGDEVICE::OpenCddPrimaryHandle(
                                       *((DXGDEVICE **)this + 2),
                                       i,
                                       *((_BYTE *)this + 432),
                                       *((_DWORD *)this + 98));
                              v462 = v134;
                            }
                            if ( v134 )
                            {
                              v474.pDstSubRects = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), i);
                              v135 = *((_DWORD *)a2 + 22);
                              if ( (v135 & 0x2000) != 0 )
                              {
                                v418 = ADAPTER_DISPLAY::GetCurrentOrientation(
                                         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
                                         i,
                                         1);
                                v419 = 0;
                                if ( v418 != 1 )
                                  v419 = 128;
                                v474.Flags.Value = v419 | v474.Flags.Value & 0xFFFFFF7F;
                                v135 = *((_DWORD *)a2 + 22);
                              }
                              v477[0] = 0LL;
                              v477[1] = 0LL;
                              if ( (v135 & 0x10000) != 0 )
                                ContentRect = (const struct tagRECT *)v477;
                              else
                                ContentRect = ADAPTER_DISPLAY::GetContentRect(
                                                *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
                                                i);
                              v137 = (RECT *)*((_QWORD *)this + 19);
                              v138 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 352);
                              v474.SrcRect = v137[9];
                              v474.DstRect.top = v137[8].top - ContentRect->top;
                              v474.DstRect.bottom = v137[8].bottom - ContentRect->top;
                              v474.DstRect.left = v137[8].left - ContentRect->left;
                              v474.DstRect.right = v137[8].right - ContentRect->left;
                              if ( bTracingEnabled && *v138 )
                              {
                                v139 = v474.SubRectCnt;
                                v140 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)v474.Flags.Value;
                                v141 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                                pDstSubRects = v474.pDstSubRects;
                                v142 = *(struct VIDMM_GLOBAL **)(v141 + 552);
                                v143 = *(VIDMM_EXPORT **)(v141 + 544);
                                v469[0] = VIDMM_EXPORT::VidMmETWAllocationHandle(v143, v142, v462);
                                v144 = VIDMM_EXPORT::VidMmETWAllocationHandle(v143, v142, v465);
                                v145 = *((_QWORD *)this + 44);
                                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                                {
                                  LODWORD(v459) = v139;
                                  LODWORD(v458) = v474.DstRect.bottom;
                                  LODWORD(v457) = v474.DstRect.top;
                                  LODWORD(v456) = v474.DstRect.right;
                                  LODWORD(v455) = v474.DstRect.left;
                                  LODWORD(v454) = v474.SrcRect.bottom;
                                  LODWORD(v453) = v474.SrcRect.top;
                                  v451[0] = (enum _D3DDDIFORMAT)v474.SrcRect.right;
                                  LODWORD(v449) = v474.SrcRect.left;
                                  LODWORD(v448) = v140;
                                  LODWORD(Size) = 0;
                                  LODWORD(Src) = 1;
                                  McTemplateK0ppxppttqddddddddq(
                                    (__int64)&DxgkControlGuid_Context,
                                    (__int64)&EventBlit,
                                    0LL,
                                    *((_QWORD *)a2 + 1),
                                    v145,
                                    0LL,
                                    v144,
                                    v469[0],
                                    Src,
                                    Size,
                                    v448,
                                    v449,
                                    *(_QWORD *)v451,
                                    v453,
                                    v454,
                                    v455,
                                    v456,
                                    v457,
                                    v458,
                                    v459);
                                }
                                v146 = 0;
                                if ( v139 )
                                {
                                  while ( 1 )
                                  {
                                    v147 = v139 - v146;
                                    if ( v139 - v146 > 0x10 )
                                      break;
                                    v148 = v139 - v146;
                                    if ( v147 )
                                      goto LABEL_176;
LABEL_178:
                                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                                    {
                                      LODWORD(v443) = v148;
                                      LODWORD(v441) = v147 <= 0x10;
                                      McTemplateK0ptqDR2DR2DR2DR2(
                                        (__int64)&DxgkControlGuid_Context,
                                        (__int64)&EventBlitRect,
                                        0LL,
                                        v145,
                                        v441,
                                        v443,
                                        v482,
                                        v483,
                                        v484,
                                        v485);
                                    }
                                    v146 += 16;
                                    if ( v146 >= v139 )
                                      goto LABEL_181;
                                  }
                                  v148 = 16;
LABEL_176:
                                  v149 = (struct _EX_RUNDOWN_REF *)pDstSubRects;
                                  v150 = 0LL;
                                  v151 = 0;
                                  do
                                  {
                                    v152 = v151 + v146;
                                    ++v151;
                                    v152 *= 2LL;
                                    v150 += 4LL;
                                    *(_DWORD *)&v482[v150 - 4] = v149[v152].Count;
                                    *(_DWORD *)&v482[v150 + 60] = v149[v152 + 1].Count;
                                    *(_DWORD *)&v483[v150 + 60] = HIDWORD(v149[v152].Ptr);
                                    *(_DWORD *)&v484[v150 + 60] = HIDWORD(v149[v152 + 1].Ptr);
                                  }
                                  while ( v151 < v148 );
                                  goto LABEL_178;
                                }
LABEL_181:
                                v138 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 352);
                              }
                              if ( *((_BYTE *)this + 433) )
                              {
                                v420 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                                v421 = DXGPROCESS::GetCurrent();
                                LODWORD(Size) = v474.PrivateDriverDataSize;
                                v153 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v420 + 4152),
                                         v421,
                                         this,
                                         *((_DWORD *)v461 + 24),
                                         *((_DWORD *)v467 + 24),
                                         &v474.SrcRect,
                                         &v474.DstRect,
                                         v474.SubRectCnt,
                                         v474.pDstSubRects,
                                         Size,
                                         (unsigned __int8 *)v474.pPrivateDriverData);
                              }
                              else
                              {
                                v452 = (int)v470;
                                v450 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v476.hDevice;
                                *(_DWORD *)(*(_QWORD *)&v476.hDevice + 124LL) = i;
                                v153 = DXGCONTEXT::SubmitPresent(
                                         this,
                                         (const struct _D3DKMT_PRESENT *)a2,
                                         a2,
                                         *((_DWORD *)a2 + 23),
                                         v472,
                                         v461,
                                         v465,
                                         v462,
                                         &v474,
                                         0LL,
                                         *v138,
                                         v450,
                                         v452,
                                         a3);
                              }
                              *v138 = 0LL;
                              LODWORD(v64) = v153;
                              if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0
                                && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == *((_DWORD *)a2 + 96) )
                              {
                                v154 = v474.SubRectCnt;
                                *((_DWORD *)a2 + 90) = 3;
                                *((_QWORD *)a2 + 48) = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                                if ( v154 > 0x10 )
                                {
                                  v422 = v474.DstRect;
                                  *((_DWORD *)a2 + 100) = 1;
                                  *(RECT *)((char *)a2 + 404) = v422;
                                }
                                else
                                {
                                  *((_DWORD *)a2 + 100) = v154;
                                  if ( v154 )
                                  {
                                    v155 = v474.pDstSubRects;
                                    v156 = (const struct DXGK_PRESENT_PARAMS *)((char *)a2 + 360)
                                         - (const struct DXGK_PRESENT_PARAMS *)v474.pDstSubRects;
                                    v157 = v154;
                                    do
                                    {
                                      v158 = (__int128)*v155++;
                                      *(_OWORD *)((char *)&v155[1].bottom + v156) = v158;
                                      --v157;
                                    }
                                    while ( v157 );
                                  }
                                }
                                *((_DWORD *)a2 + 91) = 16 * (*((_DWORD *)a2 + 100) + 3);
                                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v480);
                                LODWORD(v64) = SubmitPresentHistoryToken(
                                                 (const struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 360),
                                                 a3,
                                                 v466,
                                                 *(struct CWin32kLocks **)&Source1.left,
                                                 0,
                                                 0LL,
                                                 0LL,
                                                 0LL,
                                                 this,
                                                 0LL);
                              }
                              if ( (int)v64 < 0 )
                                goto LABEL_208;
                            }
                          }
                        }
                        v138 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 352);
LABEL_208:
                        v131 = a3;
LABEL_209:
                        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v480);
                        if ( v464 )
                        {
                          CWin32kLocks::Unlock(*(CWin32kLocks **)&Source1.left);
                          COREDEVICEACCESS::Release(v131);
                          DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 1u);
                          LODWORD(v64) = COREDEVICEACCESS::AcquireShared(v131);
                        }
                        v173 = *v138;
                        if ( *v138 )
                        {
                          if ( (int)v64 >= 0 )
                          {
                            v423 = *(unsigned int *)(*((_QWORD *)this + 19) + 4LL);
                            LOBYTE(v423) = (v423 & 0x12) == 16;
                            if ( ((unsigned __int8)v423 & ((*((_BYTE *)a2 + 88) & 2) == 0)) != 0 )
                            {
                              v424 = WdLogNewEntry5_WdAssertion(v423);
                              *(_QWORD *)(v424 + 24) = 5342LL;
                              WdLogEvent5_WdAssertion(v424);
                              v173 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 44);
                            }
                          }
                          VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
                            v173,
                            0LL);
                          *v138 = 0LL;
                        }
                        v174 = *((_QWORD *)this + 19);
                        if ( (*(_DWORD *)(v174 + 4) & 0x80) != 0 )
                        {
                          if ( (unsigned int)((_DWORD)v64 + 1071775738) > 1 )
                          {
                            v425 = WdLogNewEntry5_WdAssertion(*(_DWORD *)(v174 + 4) >> 7);
                            *(_QWORD *)(v425 + 24) = 5350LL;
                            WdLogEvent5_WdAssertion(v425);
                          }
                          LODWORD(v64) = 0;
                        }
                        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v480);
                        goto LABEL_214;
                      }
                      goto LABEL_628;
                    }
                    goto LABEL_640;
                  }
                  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v480);
                  if ( (int)v64 < 0 )
                  {
LABEL_640:
                    v131 = a3;
                    goto LABEL_641;
                  }
                  v321 = *((_QWORD *)this + 19);
                  v322 = *(_DWORD *)(v321 + 4) >> 1;
                  LOBYTE(v322) = (*(_DWORD *)(v321 + 4) & 2) != 0;
                  if ( (*(_DWORD *)(v321 + 4) & 2) == 0 && *((_DWORD *)a2 + 23) )
                  {
                    v323 = WdLogNewEntry5_WdError(v322);
                    *(_QWORD *)(v323 + 24) = 4755LL;
                    WdLogEvent5_WdError(v323);
                    LODWORD(v64) = -1071774910;
                    goto LABEL_640;
                  }
                  if ( (*(_DWORD *)(v321 + 4) & 2) != 0 )
                    goto LABEL_640;
                  if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 && *((_DWORD *)a2 + 6) )
                  {
                    v324 = WdLogNewEntry5_WdAssertion(v322);
                    *(_QWORD *)(v324 + 24) = 4761LL;
                    WdLogEvent5_WdAssertion(v324);
                  }
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventPerformanceWarning, 0LL, 0);
                  v325 = *((_DWORD *)a2 + 22);
                  if ( (v325 & 0x100) != 0 )
                  {
                    v326 = ADAPTER_DISPLAY::GetContentRect(
                             *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
                             *((_DWORD *)a2 + 4));
                    v325 = *((_DWORD *)a2 + 22);
                    v327 = (struct _EX_RUNDOWN_REF *)&v478;
                    v478 = *v326;
                  }
                  else
                  {
                    v327 = 0LL;
                  }
                  pDstSubRects = (const RECT *)v327;
                  if ( (v325 & 1) != 0 )
                  {
                    if ( (v325 & 0x80u) == 0 )
                    {
                      v474.SrcRect.bottom = HIDWORD(v463);
                      v331 = v463;
                      *(_QWORD *)&v474.SrcRect.left = 0LL;
                    }
                    else
                    {
                      v328 = *((_DWORD *)a2 + 13);
                      v325 = *((_DWORD *)a2 + 22);
                      if ( v328 < 0 )
                        v328 = 0;
                      v474.SrcRect.top = v328;
                      v329 = *((_DWORD *)a2 + 12);
                      if ( v329 < 0 )
                        v329 = 0;
                      v474.SrcRect.left = v329;
                      v330 = *((_DWORD *)a2 + 15);
                      if ( SHIDWORD(v463) < v330 )
                        v330 = HIDWORD(v463);
                      v474.SrcRect.bottom = v330;
                      v331 = *((_DWORD *)a2 + 14);
                      if ( (int)v463 < v331 )
                        v331 = v463;
                    }
                    v474.SrcRect.right = v331;
                    v332 = (*(_WORD *)&v474.Flags.0 ^ (unsigned __int16)(v325 >> 9)) & 0x800;
                    v15 = *((_DWORD *)a2 + 16) == 0;
                    v474.DstRect = v474.SrcRect;
                    v474.Flags.Value ^= v332;
                    if ( v15 )
                    {
                      v333 = WdLogNewEntry5_WdAssertion(v332);
                      *(_QWORD *)(v333 + 24) = 4808LL;
                      WdLogEvent5_WdAssertion(v333);
                    }
                    if ( !*((_QWORD *)a2 + 9) )
                    {
                      v334 = WdLogNewEntry5_WdAssertion(v332);
                      *(_QWORD *)(v334 + 24) = 4809LL;
                      WdLogEvent5_WdAssertion(v334);
                    }
                    LODWORD(v64) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), *((_DWORD *)a2 + 16));
                    if ( (int)v64 < 0 )
                      goto LABEL_640;
                    v335 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
                    v15 = *((_DWORD *)a2 + 16) == 0;
                    v336 = 0;
                    v337 = 0LL;
                    v474.SubRectCnt = 0;
                    v474.pDstSubRects = v335;
                    if ( v15 )
                      goto LABEL_640;
                    while ( 1 )
                    {
                      if ( DXGPRESENT::IntersectRect(
                             &v335[v337],
                             (const struct tagRECT *)(*((_QWORD *)a2 + 9) + 16LL * v336),
                             &v474.SrcRect) )
                      {
                        v337 = ++v474.SubRectCnt;
                      }
                      else
                      {
                        v337 = v474.SubRectCnt;
                      }
                      if ( ++v336 >= *((_DWORD *)a2 + 16) )
                        break;
                      v335 = (struct tagRECT *)v474.pDstSubRects;
                    }
                    v131 = a3;
                    if ( !(_DWORD)v337 )
                      goto LABEL_641;
                    if ( DXGPRESENT::PrepareStagingBuffer(
                           *((DXGPRESENT **)this + 19),
                           *((struct DXGDEVICE **)this + 2),
                           *((_DWORD *)a2 + 5),
                           a3,
                           &v462) < 0 )
                    {
                      v138 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 352);
                      goto LABEL_601;
                    }
                    if ( *((_BYTE *)this + 433) )
                    {
                      v341 = v462;
                      v342 = DXGPROCESS::GetCurrent();
                      KeEnterCriticalRegion();
                      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v342 + 208, 0LL) )
                      {
                        if ( bTracingEnabled )
                        {
                          v343 = *((_DWORD *)v342 + 56);
                          if ( v343 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                            McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v343);
                        }
                        ExAcquirePushLockSharedEx((char *)v342 + 208, 0LL);
                      }
                      v344 = (v341 >> 6) & 0xFFFFFF;
                      if ( (unsigned int)v344 < *((_DWORD *)v342 + 62) )
                      {
                        v345 = *((_QWORD *)v342 + 29);
                        v346 = *(_DWORD *)(v345 + 16 * v344 + 8);
                        if ( ((v341 >> 25) & 0x60) == (*(_BYTE *)(v345 + 16 * v344 + 8) & 0x60)
                          && (v346 & 0x2000) == 0
                          && (v346 & 0x1F) != 0 )
                        {
                          v347 = v346 & 0x1F;
                          if ( (_BYTE)v347 == 5 )
                          {
                            v349 = *(struct _EX_RUNDOWN_REF **)(v345 + 16LL * (unsigned int)v344);
                            goto LABEL_541;
                          }
                          v348 = WdLogNewEntry5_WdError(v347);
                          *(_QWORD *)(v348 + 24) = 316LL;
                          WdLogEvent5_WdError(v348);
                        }
                      }
                      v349 = 0LL;
LABEL_541:
                      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v476, v349);
                      ExReleasePushLockSharedEx((char *)v342 + 208, 0LL);
                      KeLeaveCriticalRegion();
                      if ( !*(_QWORD *)&v476.hDevice )
                      {
                        v351 = WdLogNewEntry5_WdAssertion(v350);
                        *(_QWORD *)(v351 + 24) = 4841LL;
                        WdLogEvent5_WdAssertion(v351);
                      }
                      v352 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                      v353 = DXGPROCESS::GetCurrent();
                      LODWORD(Size) = *((_DWORD *)a2 + 368);
                      v354 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v352 + 4152),
                               v353,
                               this,
                               *((_DWORD *)v461 + 24),
                               *(_DWORD *)(*(_QWORD *)&v476.hDevice + 96LL),
                               &v474.SrcRect,
                               &v474.DstRect,
                               v474.SubRectCnt,
                               v474.pDstSubRects,
                               Size,
                               *((unsigned __int8 **)a2 + 185));
                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v476);
                      v138 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 352);
                      goto LABEL_562;
                    }
                    if ( !v462 )
                    {
                      v355 = WdLogNewEntry5_WdAssertion(v339);
                      *(_QWORD *)(v355 + 24) = 4855LL;
                      WdLogEvent5_WdAssertion(v355);
                    }
                    if ( bTracingEnabled )
                    {
                      v356 = v474.SubRectCnt;
                      v357 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)v474.Flags.Value;
                      v358 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                      v477[0] = v474.pDstSubRects;
                      v359 = *(struct VIDMM_GLOBAL **)(v358 + 552);
                      v360 = *(VIDMM_EXPORT **)(v358 + 544);
                      v361 = VIDMM_EXPORT::VidMmETWAllocationHandle(v360, v359, v462);
                      v362 = VIDMM_EXPORT::VidMmETWAllocationHandle(v360, v359, v465);
                      v363 = *((_QWORD *)this + 44);
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                      {
                        LODWORD(Src) = 1;
                        McTemplateK0ppxppttqddddddddq(
                          (__int64)&DxgkControlGuid_Context,
                          (__int64)&EventBlit,
                          0LL,
                          *((_QWORD *)a2 + 1),
                          v363,
                          0LL,
                          v362,
                          v361,
                          Src,
                          0,
                          v357,
                          v474.SrcRect.left,
                          v474.SrcRect.right,
                          v474.SrcRect.top,
                          v474.SrcRect.bottom,
                          v474.DstRect.left,
                          v474.DstRect.right,
                          v474.DstRect.top,
                          v474.DstRect.bottom,
                          v356);
                      }
                      v364 = 0;
                      if ( v356 )
                      {
                        v365 = v477[0];
                        while ( 1 )
                        {
                          v366 = v356 - v364;
                          if ( v356 - v364 > 0x10 )
                            break;
                          v367 = v356 - v364;
                          if ( v366 )
                            goto LABEL_555;
LABEL_557:
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                          {
                            LODWORD(v443) = v367;
                            LODWORD(v442) = v366 <= 0x10;
                            McTemplateK0ptqDR2DR2DR2DR2(
                              (__int64)&DxgkControlGuid_Context,
                              (__int64)&EventBlitRect,
                              0LL,
                              v363,
                              v442,
                              v443,
                              v485,
                              v482,
                              v483,
                              v484);
                            v365 = v477[0];
                          }
                          v364 += 16;
                          if ( v364 >= v356 )
                            goto LABEL_560;
                        }
                        v367 = 16;
LABEL_555:
                        v368 = 0LL;
                        v369 = 0;
                        do
                        {
                          v370 = v369 + v364;
                          ++v369;
                          v370 *= 2LL;
                          v368 += 4LL;
                          *(_DWORD *)&v484[v368 + 60] = *(_DWORD *)(v365 + 8 * v370);
                          *(_DWORD *)&v482[v368 - 4] = *(_DWORD *)(v365 + 8 * v370 + 8);
                          *(_DWORD *)&v482[v368 + 60] = *(_DWORD *)(v365 + 8 * v370 + 4);
                          *(_DWORD *)&v483[v368 + 60] = *(_DWORD *)(v365 + 8 * v370 + 12);
                        }
                        while ( v369 < v367 );
                        goto LABEL_557;
                      }
LABEL_560:
                      v131 = a3;
                      v327 = (struct _EX_RUNDOWN_REF *)pDstSubRects;
                    }
                    v138 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 352);
                    v354 = DXGCONTEXT::SubmitPresent(
                             this,
                             (const struct _D3DKMT_PRESENT *)a2,
                             a2,
                             *((_DWORD *)a2 + 23),
                             v472,
                             v461,
                             v465,
                             v462,
                             &v474,
                             0LL,
                             *((struct _VIDMM_DMA_BUFFER **)this + 44),
                             *(struct VIDSCH_SUBMIT_DATA_BASE **)&v476.hDevice,
                             (enum _D3DDDIFORMAT)v470,
                             v131);
                    *((_QWORD *)this + 44) = 0LL;
LABEL_562:
                    if ( v354 >= 0 )
                    {
                      v371 = (DXGDEVICE *)*((_QWORD *)this + 2);
                      if ( (*((_DWORD *)a2 + 22) & 0x100) != 0
                        && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                             *(DXGADAPTER ***)(*((_QWORD *)v371 + 216) + 2520LL),
                             *((const struct DXGDEVICE **)this + 2),
                             *((_DWORD *)a2 + 4)) )
                      {
                        v372 = 1;
                      }
                      else
                      {
                        v372 = 0;
                        if ( !DXGDEVICE::AllowLegacyPresent(v371, 0) )
                        {
                          v373 = 0;
                          goto LABEL_567;
                        }
                      }
                      v373 = 1;
LABEL_567:
                      DXGADAPTERSTOPRESETLOCKSHARED::Release(v466);
                      COREDEVICEACCESS::Release(a3);
                      if ( !v373 && DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                      {
                        v131 = a3;
                        COREDEVICEACCESS::AcquireSharedUncheck(a3);
                        LODWORD(v64) = -1071775738;
LABEL_641:
                        v138 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 352);
                        goto LABEL_209;
                      }
                      CWin32kLocks::Unlock(*(CWin32kLocks **)&Source1.left);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v466);
                      LODWORD(v131) = COREDEVICEACCESS::AcquireShared(a3);
                      if ( (int)v131 >= 0 )
                      {
                        memset(v482, 0, 0x30uLL);
                        if ( *((_BYTE *)this + 433) )
                        {
                          v376 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                          v476.hDevice = 0;
                          *(_QWORD *)&v476.Flags.0 = 0LL;
                          v476.pData = 0LL;
                          v476.hAllocation = v462;
                          v377 = *(_QWORD *)(*((_QWORD *)v376 + 2) + 16LL);
                          v378 = DXGPROCESS::GetCurrent();
                          v379 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v377 + 4152),
                                   v378,
                                   v376,
                                   &v476,
                                   0,
                                   0,
                                   0);
                          v131 = a3;
                          LODWORD(v64) = v379;
                          *(_QWORD *)&v482[24] = v476.pData;
                        }
                        else
                        {
                          v380 = v462;
                          if ( !v462 )
                          {
                            v381 = WdLogNewEntry5_WdAssertion(v375);
                            *(_QWORD *)(v381 + 24) = 4930LL;
                            WdLogEvent5_WdAssertion(v381);
                            v380 = v462;
                          }
                          v382 = (PERESOURCE *)*((_QWORD *)this + 2);
                          *(_DWORD *)&v482[4] = v380;
                          v131 = a3;
                          LODWORD(v64) = DXGDEVICE::Lock(v382, (struct _D3DKMT_LOCK *)v482, a3);
                        }
                        if ( (int)v64 < 0 )
                          goto LABEL_641;
                        DXGADAPTERSTOPRESETLOCKSHARED::Release(v466);
                        COREDEVICEACCESS::Release(v131);
                        if ( !*(_QWORD *)&v482[24] )
                        {
                          v384 = WdLogNewEntry5_WdAssertion(v383);
                          *(_QWORD *)(v384 + 24) = 4943LL;
                          WdLogEvent5_WdAssertion(v384);
                        }
                        if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 && *((_DWORD *)a2 + 6) )
                        {
                          v385 = WdLogNewEntry5_WdAssertion(v383);
                          *(_QWORD *)(v385 + 24) = 4944LL;
                          WdLogEvent5_WdAssertion(v385);
                        }
                        v386 = (*(__int64 (__fastcall **)(_QWORD))(v469[0] + 312LL))(0LL);
                        v387 = 0;
                        if ( v386 )
                          v387 = v372;
                        v388 = *(CWin32kLocks **)&Source1.left;
                        LODWORD(v64) = CWin32kLocks::Lock(
                                         *(CWin32kLocks **)&Source1.left,
                                         *((HWND *)a2 + 1),
                                         0,
                                         0,
                                         v387);
                        if ( (int)v64 >= 0 )
                        {
                          v389 = (*((_DWORD *)a2 + 22) & 0x200) != 0;
                          v390 = *(_DWORD *)(*((_QWORD *)this + 19) + 424LL);
                          v391 = CWin32kLocks::hDestDc(v388);
                          LOBYTE(Sizea) = v389;
                          LOBYTE(Srca) = 0;
                          if ( !(*(unsigned int (__fastcall **)(const struct DXGK_PRESENT_PARAMS *, HDC, struct _EX_RUNDOWN_REF *, const RECT *, _QWORD, int, _DWORD, _DWORD, int, int, _DWORD, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))(v469[0] + 144LL))(
                                  a2,
                                  v391,
                                  v327,
                                  v474.pDstSubRects,
                                  *(_QWORD *)&v482[24],
                                  v390,
                                  v463,
                                  HIDWORD(v463),
                                  Srca,
                                  Sizea,
                                  *((_DWORD *)a2 + 7),
                                  DXGPRESENT::XformRect,
                                  DXGPRESENT::ClipRects) )
                          {
                            v394 = WdLogNewEntry5_WdEvent(v393, v392);
                            *(_QWORD *)(v394 + 24) = -1071775737LL;
                            *(_QWORD *)(v394 + 32) = this;
                            WdLogEvent5_WdEvent(v394);
                            LODWORD(v64) = -1071775737;
                          }
                          v131 = a3;
                        }
                        v395 = v466;
                        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v466);
                        LODWORD(v131) = COREDEVICEACCESS::AcquireShared(v131);
                        if ( (int)v131 >= 0 )
                        {
                          v396 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                          if ( *((_BYTE *)this + 433) )
                          {
                            v476.hDevice = 0;
                            v476.hAllocation = v462;
                            v397 = *(_QWORD *)(*((_QWORD *)v396 + 2) + 16LL);
                            v398 = DXGPROCESS::GetCurrent();
                            DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v397 + 4152),
                              v398,
                              v396,
                              (struct _D3DKMT_UNLOCK2 *)&v476,
                              0);
                          }
                          else
                          {
                            v476.hDevice = 0;
                            *(_QWORD *)&v476.Flags.0 = &v482[4];
                            v476.hAllocation = 1;
                            DXGDEVICE::Unlock(v396, (const struct _D3DKMT_UNLOCK *)&v476, 0);
                          }
                          if ( (int)v64 >= 0 && (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
                          {
                            *((_DWORD *)a2 + 90) = 3;
                            *((_QWORD *)a2 + 48) = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                            *((_DWORD *)a2 + 100) = 0;
                            *((_DWORD *)a2 + 91) = 48;
                            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v480);
                            LODWORD(v64) = SubmitPresentHistoryToken(
                                             (const struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 360),
                                             a3,
                                             v395,
                                             v388,
                                             0,
                                             0LL,
                                             0LL,
                                             0LL,
                                             this,
                                             0LL);
                          }
                          goto LABEL_640;
                        }
                        v374 = a3;
                      }
                      else
                      {
                        v374 = a3;
                      }
LABEL_629:
                      COREDEVICEACCESS::AcquireSharedUncheck(v374);
                      LODWORD(v64) = (_DWORD)v131;
                      goto LABEL_630;
                    }
                    v131 = a3;
LABEL_601:
                    v399 = WdLogNewEntry5_WdWarning(v339, v338, v340);
                    LODWORD(v64) = -1071775738;
                    *(_QWORD *)(v399 + 24) = -1071775738LL;
                    *(_QWORD *)(v399 + 32) = this;
                    WdLogEvent5_WdWarning(v399);
                    goto LABEL_209;
                  }
                  if ( (v325 & 2) == 0 )
                    goto LABEL_640;
                  v400 = (DXGDEVICE *)*((_QWORD *)this + 2);
                  if ( (v325 & 0x100) != 0
                    && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                         *(DXGADAPTER ***)(*((_QWORD *)v400 + 216) + 2520LL),
                         *((const struct DXGDEVICE **)this + 2),
                         *((_DWORD *)a2 + 4)) )
                  {
                    v90 = 1;
                  }
                  else if ( !DXGDEVICE::AllowLegacyPresent(v400, 0) )
                  {
                    v401 = 0;
                    v90 = 0;
                    goto LABEL_607;
                  }
                  v401 = 1;
LABEL_607:
                  DXGADAPTERSTOPRESETLOCKSHARED::Release(v466);
                  COREDEVICEACCESS::Release(a3);
                  if ( v401 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                  {
                    if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
                    {
                      v403 = WdLogNewEntry5_WdAssertion(v402);
                      *(_QWORD *)(v403 + 24) = 5064LL;
                      WdLogEvent5_WdAssertion(v403);
                    }
                    v404 = *(CWin32kLocks **)&Source1.left;
                    CWin32kLocks::Unlock(*(CWin32kLocks **)&Source1.left);
                    v405 = v469[0];
                    v406 = (*(__int64 (__fastcall **)(_QWORD))(v469[0] + 312LL))(0LL);
                    v407 = 0;
                    if ( v406 )
                      v407 = v90;
                    LODWORD(v64) = CWin32kLocks::Lock(v404, *((HWND *)a2 + 1), 0, 0, v407);
                    v408 = CWin32kLocks::hDestDc(v404);
                    if ( !(*(unsigned int (__fastcall **)(HDC, struct _EX_RUNDOWN_REF *, _QWORD, _QWORD, _DWORD))(v405 + 152))(
                            v408,
                            v327,
                            *((_QWORD *)a2 + 9),
                            *((unsigned int *)a2 + 16),
                            *((_DWORD *)a2 + 7)) )
                    {
                      v411 = WdLogNewEntry5_WdEvent(v410, v409);
                      *(_QWORD *)(v411 + 24) = -1071775737LL;
                      *(_QWORD *)(v411 + 32) = this;
                      WdLogEvent5_WdEvent(v411);
                      LODWORD(v64) = -1071775737;
                    }
                  }
                  else
                  {
                    LODWORD(v64) = -1071775738;
                  }
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v466);
                  v412 = COREDEVICEACCESS::AcquireShared(a3);
                  v131 = (COREDEVICEACCESS *)v412;
                  if ( v412 < 0 )
                  {
LABEL_628:
                    v417 = WdLogNewEntry5_WdEvent(v130, v129);
                    *(_QWORD *)(v417 + 24) = v131;
                    *(_QWORD *)(v417 + 32) = this;
                    WdLogEvent5_WdEvent(v417);
                    v374 = a3;
                    goto LABEL_629;
                  }
                  goto LABEL_640;
                }
                v90 = 0;
                goto LABEL_142;
              }
              v318 = WdLogNewEntry5_WdEvent(v316, v315);
              *(_QWORD *)(v318 + 24) = v317;
              WdLogEvent5_WdEvent(v318);
              COREDEVICEACCESS::AcquireSharedUncheck(a3);
              LODWORD(v64) = v317;
LABEL_630:
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v480);
              goto LABEL_99;
            }
            v306 = a3;
            LODWORD(v64) = v109;
LABEL_470:
            COREDEVICEACCESS::AcquireSharedUncheck(v306);
            goto LABEL_630;
          }
          goto LABEL_96;
        }
      }
      else if ( v89 && *((_DWORD *)a2 + 16) && (_DWORD)v463 && HIDWORD(v463) && (v39 & 0x802E) == 0 )
      {
        v19 = ((unsigned int)v39 >> 9) & 1;
        if ( (((unsigned int)v39 >> 9) & 1) == 0 && (v39 & 0x400) == 0 )
          goto LABEL_113;
        if ( (_DWORD)v19 == (((unsigned int)v39 >> 10) & 1) )
        {
          v264 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v39, v20);
          LODWORD(v64) = -1073741811;
          v264[3] = -1073741811LL;
          v264[4] = this;
          v264[5] = *((_QWORD *)a2 + 9);
          v264[6] = *((unsigned int *)a2 + 16);
          v264[7] = *((unsigned int *)a2 + 22);
          goto LABEL_450;
        }
        if ( (v39 & 0x100) != 0
          && ADAPTER_DISPLAY::IsVidPnSourceOwner(
               *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
               *((const struct DXGDEVICE **)this + 2),
               *((_DWORD *)a2 + 4)) )
        {
LABEL_113:
          v90 = 0;
          goto LABEL_114;
        }
      }
      v264 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v39, v20);
      LODWORD(v64) = -1073741811;
      v264[3] = this;
      v264[4] = *((_QWORD *)a2 + 9);
      v264[5] = *((unsigned int *)a2 + 16);
      v265 = (struct DXGALLOCATION *)*((unsigned int *)a2 + 22);
      v264[7] = -1073741811LL;
LABEL_449:
      v264[6] = v265;
      goto LABEL_450;
    }
    v264 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v39, v20);
    LODWORD(v64) = -1073741811;
    v264[3] = *((_QWORD *)this + 2);
    v264[4] = -1073741811LL;
LABEL_450:
    WdLogEvent5_WdWarning(v264);
    goto LABEL_99;
  }
  if ( (v39 & 0x8000) == 0 )
  {
    v300 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v39, v20);
    LODWORD(v64) = -1073741811;
    v300[3] = -1073741811LL;
    v300[4] = this;
    v300[5] = *((_QWORD *)a2 + 9);
    v300[6] = *((unsigned int *)a2 + 16);
    v300[7] = *((unsigned int *)a2 + 22);
    WdLogEvent5_WdWarning(v300);
    goto LABEL_95;
  }
  if ( (v39 & 0x27EF) != 0
    || (v175 = *((_DWORD *)a2 + 90), v175 > 9)
    || (v19 = 644LL, !_bittest((const int *)&v19, v175))
    || v175 == 2 && *((_DWORD *)a2 + 295) > 0x10u )
  {
    v264 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v39, v20);
    LODWORD(v64) = -1073741811;
    v264[3] = this;
    v264[4] = *((unsigned int *)a2 + 22);
    v264[5] = -1073741811LL;
    goto LABEL_450;
  }
  v79 = a3;
  v176 = v466;
  LODWORD(v64) = SubmitPresentHistoryTokenPreparation(
                   v466,
                   (struct _KTHREAD ***)a3,
                   *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                   (struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 360),
                   *((HANDLE *)a2 + 44),
                   (*((_DWORD *)a2 + 22) & 0x10) != 0);
  if ( (int)v64 < 0 )
    goto LABEL_99;
  TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
    (TOKEN_BINDING_GUARD *)v469,
    (struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 360));
  LODWORD(v469[0]) = SubmitPresentHistoryToken(
                       (const struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 360),
                       a3,
                       v176,
                       *(struct CWin32kLocks **)&Source1.left,
                       1,
                       0LL,
                       a2,
                       *(struct VIDSCH_SUBMIT_DATA_BASE **)&v476.hDevice,
                       this,
                       0LL);
  LODWORD(v64) = v469[0];
  TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v469);
LABEL_90:
  if ( (int)v64 >= 0 )
  {
    v83 = v473;
    if ( v473 )
    {
      if ( (*((_DWORD *)a2 + 22) & 0x10000000) == 0 )
      {
        v84 = *((_QWORD *)this + 2);
        v85 = *(_QWORD *)(v84 + 1728);
        if ( v85 )
        {
          if ( !*(_BYTE *)(*(_QWORD *)(v84 + 40) + 322LL) )
          {
            memset(v479, 0, 0x138uLL);
            v479[0] = *(_DWORD *)a2;
            v479[1] = v471;
            v426 = (*(_DWORD *)(v473[6].Count + 4) >> 6) & 0xF;
            v479[3] = *((_DWORD *)a2 + 23);
            v479[2] = v426;
            v427 = &v479[4];
            v428 = 2LL;
            v429 = (_OWORD *)((char *)a2 + 96);
            do
            {
              v430 = v429[1];
              *v427 = *v429;
              v431 = v429[2];
              v427[1] = v430;
              v432 = v429[3];
              v427[2] = v431;
              v433 = v429[4];
              v427[3] = v432;
              v434 = v429[5];
              v427[4] = v433;
              v435 = v429[6];
              v427[5] = v434;
              v436 = v429[7];
              v429 += 8;
              v427[6] = v435;
              v427 += 8;
              *(v427 - 1) = v436;
              --v428;
            }
            while ( v428 );
            v437 = *(_QWORD *)(v85 + 2520);
            v479[68] = 0;
            v479[72] = 0;
            v479[76] = 4;
            v438 = OUTPUTDUPL_MGR::ProcessPresent(
                     *(OUTPUTDUPL_MGR **)(v437 + 104),
                     this,
                     (const struct _D3DKMT_OUTPUTDUPLPRESENT *)v479,
                     (*(_DWORD *)(v83[6].Count + 4) >> 6) & 0xF,
                     v472,
                     v79);
            if ( v438 == 259 )
              v438 = 0;
            LODWORD(v64) = v438;
          }
        }
      }
    }
  }
LABEL_95:
  v86 = (_QWORD *)((char *)this + 352);
LABEL_96:
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
    && (_DWORD)v64 != -1073741130 )
  {
    v439 = WdLogNewEntry5_WdAssertion(v87);
    *(_QWORD *)(v439 + 24) = 5452LL;
    WdLogEvent5_WdAssertion(v439);
  }
  if ( *v86 )
  {
    v440 = WdLogNewEntry5_WdAssertion(v87);
    *(_QWORD *)(v440 + 24) = 5453LL;
    WdLogEvent5_WdAssertion(v440);
  }
LABEL_99:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v473);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v467);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v461);
  return (unsigned int)v64;
}
