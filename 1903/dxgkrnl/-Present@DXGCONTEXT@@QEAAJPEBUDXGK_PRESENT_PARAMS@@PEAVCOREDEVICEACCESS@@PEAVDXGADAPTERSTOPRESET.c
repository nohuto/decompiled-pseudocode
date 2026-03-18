/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590
 * Callers:
 *     DxgkPresent @ 0x1C010A090 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C024C470 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C025928C (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001908 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0001C00 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00067FC (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00085A0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000A354 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1C000C190 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x1C000C2A8 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000C2D0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CC68 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00172EC (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C001765C (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C00176F0 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C001773C (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0017770 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA?AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3DDDI_FLIPINTERVAL_TYPE@@@Z @ 0x1C0017CD8 (-VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA-AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3D.c)
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x1C001B598 (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001BD60 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x1C001BED4 (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001BEF0 (-VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z @ 0x1C001BF14 (-VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001C33C (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0024860 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z @ 0x1C003C114 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z.c)
 *     ?hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ @ 0x1C0043CC8 (-hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0043F64 (McTemplateK0ppxppttqddddddddq.c)
 *     McTemplateK0pqpqtt @ 0x1C0044114 (McTemplateK0pqpqtt.c)
 *     McTemplateK0ptqDR2DR2DR2DR2 @ 0x1C00441D4 (McTemplateK0ptqDR2DR2DR2DR2.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C34B4 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD000 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E0E20 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6FA0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00F6C90 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00F7F40 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00FFBE0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0101DA0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0101F50 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01025B4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0107E90 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0110150 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0121F80 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0131250 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01375C0 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C0138E40 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C013AB0C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C013AC50 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C013E098 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C014CA80 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C014E3FC (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C014E5AC (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z @ 0x1C014E704 (-GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C014E720 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x1C014E740 (-CheckOutput@DXGPRESENT@@QEAAXII@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01506E8 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C01F301C (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C02224A0 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0224AD0 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C02279EC (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C0257AC8 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C0258D40 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C0259A04 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0259BB0 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C025AAB4 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?RemoveAlphaChannel@@YA?AW4_D3DDDIFORMAT@@W41@@Z @ 0x1C025AF00 (-RemoveAlphaChannel@@YA-AW4_D3DDDIFORMAT@@W41@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02744A0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
        struct DXGCONTEXT **a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v8; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  struct _D3DKMT_UNLOCK2 *v12; // rcx
  __int64 v13; // r8
  __int64 Value; // rdx
  int v15; // ecx
  D3DKMT_HANDLE hDestination; // eax
  bool v17; // zf
  int v18; // ecx
  unsigned int v19; // r13d
  unsigned int v20; // esi
  __int64 Width; // rcx
  __int64 Format; // r8
  D3DKMT_HANDLE v23; // ebx
  D3DKMT_HANDLE v24; // ebx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DXGALLOCATION **v31; // rax
  struct DXGALLOCATION *v32; // rdx
  __int64 v33; // rcx
  struct DXGALLOCATION *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rbx
  D3DKMT_HANDLE v42; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v43; // r9d
  int v44; // r9d
  __int64 v45; // rcx
  unsigned int VidPnSourceId; // esi
  __int64 v47; // rdx
  DXGADAPTER *v48; // rcx
  UINT v49; // ecx
  UINT v50; // ecx
  int v51; // ecx
  UINT v52; // ecx
  UINT v53; // ecx
  UINT v54; // edx
  UINT Duration; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rdx
  int DeviceFlipMode; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  int v60; // ecx
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  int v63; // r8d
  int v64; // edx
  int v65; // r13d
  int v66; // eax
  struct DXGALLOCATION *v67; // r14
  __int64 v68; // rdx
  __int64 v69; // r8
  DXGDEVICE *v70; // rcx
  struct COREDEVICEACCESS *v71; // rbx
  __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rbx
  struct _VIDMM_DMA_BUFFER **v76; // rbx
  __int64 v77; // rax
  UINT v78; // ebx
  __int64 v79; // rcx
  struct VIDMM_GLOBAL *v80; // r14
  VIDMM_EXPORT *v81; // r13
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // r8
  struct _EX_RUNDOWN_REF *v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rsi
  _QWORD *v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  D3DKMT_PRESENT_MODEL Model; // eax
  const RECT *pSrcSubRects; // rax
  UINT Color; // eax
  DXGPRESENT *v96; // rcx
  DXGPRESENT *v97; // rcx
  DXGADAPTER *v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  unsigned int v101; // ebx
  int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  BOOL v106; // ebx
  __int64 v107; // rcx
  int v108; // eax
  int v109; // esi
  _DWORD *CurrentThreadId; // rax
  _DWORD *v111; // r13
  __int64 v112; // rcx
  int v113; // esi
  CWin32kLocks *v114; // rbx
  __int64 v115; // rdx
  int v116; // eax
  __int64 v117; // rcx
  HDC v118; // rbx
  HDEV v119; // rsi
  __int64 v120; // rcx
  __int64 v121; // rax
  int v122; // ecx
  __int64 v123; // rdx
  __int64 v124; // rcx
  HDC v125; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v127; // rbx
  COREDEVICEACCESS *v128; // r13
  unsigned int DdiSubRectCnt; // eax
  DXGPRESENT *v130; // rcx
  struct tagRECT *DdiSubRectList; // rax
  __int64 BroadcastContextCount; // rcx
  __int64 v133; // rax
  int v134; // eax
  __int64 v135; // rcx
  __int64 v136; // rbx
  unsigned int i; // r13d
  unsigned int v138; // ecx
  unsigned int v139; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v140; // eax
  const struct tagRECT *ContentRect; // r9
  RECT *v142; // r8
  struct _VIDMM_DMA_BUFFER **v143; // rax
  __int64 v144; // rdx
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v145; // ebx
  __int64 v146; // rcx
  struct VIDMM_GLOBAL *v147; // rsi
  VIDMM_EXPORT *v148; // r14
  __int64 v149; // r11
  __int64 v150; // r14
  unsigned int v151; // esi
  unsigned int v152; // ebx
  unsigned int v153; // r10d
  struct _D3DKMT_UNLOCK2 v154; // r11
  __int64 v155; // r8
  unsigned int v156; // r9d
  __int64 v157; // rcx
  int v158; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID SubRectCnt; // edx
  const RECT *v160; // rcx
  signed __int64 v161; // r8
  __int64 v162; // rax
  __int128 v163; // xmm0
  __int64 v164; // rax
  __int64 v165; // rsi
  __int64 v166; // rax
  __int64 v167; // r8
  int v168; // ecx
  __int64 v169; // rdx
  __int64 v170; // rcx
  struct DXGALLOCATION **v171; // rax
  struct DXGALLOCATION *v172; // rdx
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // rsi
  __int64 v177; // rdx
  __int64 v178; // rcx
  const GUID *v179; // r8
  int v180; // eax
  __int64 v181; // rdx
  CWin32kLocks *v182; // r12
  struct _VIDMM_DMA_BUFFER *v183; // rdx
  __int64 v184; // rax
  __int64 v185; // rax
  int v186; // eax
  __int64 v187; // rcx
  __int64 v188; // r14
  __int64 v189; // rcx
  __int64 v190; // rax
  __int64 v191; // rax
  int v192; // r9d
  __int64 v193; // rax
  _QWORD *v194; // rax
  int v195; // r14d
  _QWORD *v196; // rax
  struct DXGALLOCATION *v197; // rcx
  _QWORD *v198; // rax
  struct DXGALLOCATION *v199; // rcx
  int v200; // r9d
  __int64 v201; // rax
  __int64 v202; // rcx
  unsigned int v203; // esi
  DXGADAPTER *v204; // rcx
  __int64 v205; // rax
  struct DXGALLOCATION *v206; // rdx
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v210; // eax
  __int64 v211; // rcx
  unsigned int v212; // eax
  __int64 v213; // rdx
  LONG v214; // eax
  unsigned int v215; // r9d
  unsigned int v216; // eax
  unsigned int v217; // ebx
  __int64 v218; // r14
  const struct tagRECT *v219; // rdx
  __int64 v220; // rdx
  __int64 v221; // rcx
  LONG v222; // r9d
  LONG v223; // r10d
  __int64 v224; // r8
  __int64 v225; // rcx
  const RECT *v226; // rax
  unsigned int v227; // r10d
  int v228; // r8d
  int v229; // r9d
  __int64 v230; // rdx
  RECT SrcRect; // xmm0
  _QWORD *v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // rbx
  unsigned int v237; // r14d
  UINT v238; // r8d
  RECT v239; // xmm0
  _QWORD *v240; // rax
  LONG v241; // eax
  int v242; // eax
  unsigned int v243; // ebx
  __int64 v244; // r14
  const struct tagRECT *v245; // rdx
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  UINT v249; // eax
  _QWORD *v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  _QWORD *v254; // rax
  __int64 v255; // rcx
  __int64 v256; // rax
  __int64 v257; // rax
  _QWORD *v258; // rax
  DXGADAPTER *v259; // rcx
  __int64 v260; // rax
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // rax
  __int64 v265; // rdx
  __int64 v266; // rdx
  _QWORD *v267; // rax
  __int64 v268; // rcx
  __int64 v269; // rax
  bool IsFullWDDMDevice; // al
  struct _KTHREAD **v271; // rcx
  unsigned int v272; // edx
  int v273; // ebx
  int v274; // eax
  UINT v275; // ecx
  __int64 v276; // rdx
  int v277; // eax
  __int64 v278; // rcx
  __int64 v279; // rax
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v281; // rdx
  int v282; // eax
  _QWORD *v283; // rax
  struct DXGALLOCATION *v284; // rcx
  __int64 v285; // rax
  __int64 v286; // rdx
  __int64 v287; // rcx
  __int64 v288; // rax
  bool v289; // al
  _QWORD *v290; // rax
  int v291; // eax
  int v292; // ecx
  __int64 v293; // r10
  __int64 v294; // r13
  unsigned int v295; // r14d
  unsigned int v296; // ebx
  struct _D3DKMT_UNLOCK2 v297; // r11
  unsigned int v298; // edx
  unsigned int v299; // r10d
  __int64 v300; // r8
  unsigned int v301; // r9d
  __int64 v302; // rcx
  __int64 v303; // rax
  __int64 v304; // rcx
  __int64 v305; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v306; // eax
  unsigned int v307; // edx
  _QWORD *v308; // rax
  __int128 v309; // xmm0
  __int64 v310; // rax
  const GUID *v311; // r8
  int v312; // eax
  __int64 v313; // rdx
  __int64 v314; // rcx
  __int64 v315; // r8
  __int64 v316; // rbx
  _QWORD *v317; // rax
  __int64 v318; // rcx
  UINT v319; // eax
  enum _D3DDDIFORMAT v320; // ebx
  _QWORD *v321; // rax
  __int64 v322; // rax
  _QWORD *v323; // rax
  __int64 v324; // rax
  __int64 v325; // rax
  __int64 v326; // rax
  int v327; // eax
  __int64 v328; // rax
  struct COREDEVICEACCESS *v329; // rbx
  __int64 v330; // rdx
  int v331; // eax
  __int64 v332; // rcx
  __int64 v333; // rax
  int v334; // eax
  unsigned __int8 v335; // r9
  __int64 v336; // rax
  struct _VIDMM_DMA_BUFFER *v337; // rdx
  __int64 v338; // rdx
  int v339; // eax
  __int64 v340; // rcx
  __int64 v341; // r13
  __int64 v342; // rax
  int v343; // r13d
  char v344; // si
  int v345; // ebx
  __int64 v346; // rdx
  __int64 v347; // r8
  __int64 v348; // rax
  __int64 v349; // rcx
  __int64 v350; // rax
  __int64 v351; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v352; // ecx
  const struct tagRECT *v353; // rax
  struct _EX_RUNDOWN_REF *v354; // r13
  int top; // eax
  int left; // eax
  LONG bottom; // eax
  LONG right; // eax
  __int64 v359; // rcx
  __int64 v360; // rax
  __int64 v361; // rax
  struct tagRECT *v362; // rax
  int v363; // ebx
  __int64 v364; // rcx
  __int64 v365; // rdx
  __int64 v366; // rcx
  __int64 v367; // r8
  unsigned int v368; // ebx
  struct DXGPROCESS *v369; // r14
  int v370; // r9d
  __int64 v371; // rax
  __int64 v372; // r8
  int v373; // ecx
  __int64 v374; // rcx
  __int64 v375; // rax
  struct DXGALLOCATION *v376; // rdx
  __int64 v377; // rdx
  __int64 v378; // rcx
  __int64 v379; // rax
  __int64 v380; // rcx
  __int64 v381; // rbx
  struct DXGPROCESS *v382; // rax
  int v383; // ebx
  __int64 v384; // rax
  UINT v385; // r13d
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v386; // ebx
  __int64 v387; // rcx
  struct VIDMM_GLOBAL *v388; // rsi
  VIDMM_EXPORT *v389; // r14
  __int64 v390; // r11
  __int64 v391; // rsi
  UINT v392; // ebx
  _DWORD *v393; // r11
  unsigned int v394; // edx
  unsigned int v395; // r10d
  __int64 v396; // r8
  unsigned int v397; // r9d
  __int64 v398; // rcx
  DXGDEVICE *v399; // rbx
  int v400; // r12d
  char v401; // bl
  struct COREDEVICEACCESS *v402; // rcx
  __int64 v403; // rdx
  __int64 v404; // rcx
  struct DXGDEVICE *v405; // rsi
  __int64 v406; // rbx
  struct DXGPROCESS *v407; // rax
  unsigned int v408; // eax
  __int64 v409; // rax
  PERESOURCE *v410; // rcx
  __int64 v411; // rdx
  __int64 v412; // rcx
  __int64 v413; // rax
  __int64 v414; // rax
  int v415; // eax
  int v416; // ecx
  bool v417; // bl
  int v418; // esi
  HDC v419; // rax
  __int64 v420; // rcx
  __int64 v421; // rax
  __int64 v422; // rdx
  __int64 v423; // rcx
  struct DXGDEVICE *v424; // rsi
  __int64 v425; // rbx
  struct DXGPROCESS *v426; // rax
  __int64 v427; // rax
  DXGDEVICE *v428; // rbx
  char v429; // bl
  __int64 v430; // rdx
  __int64 v431; // rcx
  __int64 v432; // rax
  struct _D3DKMT_UNLOCK2 v433; // rbx
  int v434; // eax
  int v435; // ecx
  HDC v436; // rax
  __int64 v437; // rcx
  __int64 v438; // rax
  int v439; // eax
  __int64 v440; // rax
  __int64 v441; // rax
  D3DKMT_HANDLE *BroadcastContext; // rdx
  __int64 v443; // r8
  __int64 v444; // rcx
  int CurrentOrientation; // eax
  int v446; // ecx
  __int64 v447; // rcx
  __int64 v448; // rbx
  struct DXGPROCESS *v449; // rax
  RECT DstRect; // xmm0
  __int64 v451; // rcx
  __int64 v452; // rax
  __int64 v453; // rax
  __int64 v454; // rdx
  unsigned int v455; // r9d
  int v456; // ecx
  D3DKMT_HANDLE *v457; // rax
  _OWORD *v458; // rcx
  __int128 v459; // xmm1
  __int128 v460; // xmm0
  __int128 v461; // xmm1
  __int128 v462; // xmm0
  __int128 v463; // xmm1
  __int128 v464; // xmm0
  __int128 v465; // xmm1
  __int64 v466; // rax
  int v467; // eax
  __int64 v468; // rax
  __int64 v469; // rax
  struct _DXGKARG_PRESENT *v470; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v471; // [rsp+20h] [rbp-100h]
  struct tagRECT *v472; // [rsp+28h] [rbp-F8h]
  struct tagRECT *Src; // [rsp+40h] [rbp-E0h]
  int Srca; // [rsp+40h] [rbp-E0h]
  size_t Size; // [rsp+48h] [rbp-D8h]
  int Sizea; // [rsp+48h] [rbp-D8h]
  struct _VIDMM_DMA_BUFFER *v477; // [rsp+50h] [rbp-D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v478; // [rsp+58h] [rbp-C8h]
  enum _D3DDDIFORMAT v479[2]; // [rsp+60h] [rbp-C0h]
  enum _D3DDDIFORMAT v480; // [rsp+60h] [rbp-C0h]
  struct COREDEVICEACCESS *v481; // [rsp+68h] [rbp-B8h]
  __int64 v482; // [rsp+70h] [rbp-B0h]
  __int64 v483; // [rsp+78h] [rbp-A8h]
  __int64 v484; // [rsp+80h] [rbp-A0h]
  __int64 v485; // [rsp+88h] [rbp-98h]
  __int64 v486; // [rsp+90h] [rbp-90h]
  __int64 v487; // [rsp+98h] [rbp-88h]
  struct DXGALLOCATION *v489; // [rsp+A8h] [rbp-78h] BYREF
  CWin32kLocks *v490; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v491; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int Height; // [rsp+BCh] [rbp-64h]
  unsigned int v493; // [rsp+C0h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v494; // [rsp+C8h] [rbp-58h] BYREF
  char v495; // [rsp+D0h] [rbp-50h]
  DXGADAPTERSTOPRESETLOCKSHARED *v496; // [rsp+D8h] [rbp-48h]
  unsigned int hSource; // [rsp+E0h] [rbp-40h]
  struct _D3DKMT_UNLOCK2 pDstSubRects; // [rsp+E8h] [rbp-38h] BYREF
  struct DXGALLOCATION *v499; // [rsp+F0h] [rbp-30h] BYREF
  struct _EX_RUNDOWN_REF *v500; // [rsp+F8h] [rbp-28h] BYREF
  unsigned int v501; // [rsp+100h] [rbp-20h]
  struct DXGCONTEXT **v502; // [rsp+108h] [rbp-18h]
  struct _EX_RUNDOWN_REF *v503[2]; // [rsp+110h] [rbp-10h] BYREF
  struct _DXGKARG_PRESENT v504; // [rsp+120h] [rbp+0h] BYREF
  struct _D3DKMT_LOCK2 Source1; // [rsp+1D0h] [rbp+B0h] BYREF
  unsigned int v506[2]; // [rsp+1E8h] [rbp+C8h] BYREF
  __int64 v507; // [rsp+1F0h] [rbp+D0h]
  struct tagRECT v508; // [rsp+1F8h] [rbp+D8h] BYREF
  _OWORD v509[35]; // [rsp+210h] [rbp+F0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v510; // [rsp+440h] [rbp+320h] BYREF
  _BYTE v512[64]; // [rsp+480h] [rbp+360h] BYREF
  _BYTE v513[64]; // [rsp+4C0h] [rbp+3A0h] BYREF
  _BYTE v514[64]; // [rsp+500h] [rbp+3E0h] BYREF
  _BYTE v515[64]; // [rsp+540h] [rbp+420h] BYREF

  v8 = a7;
  v490 = a5;
  v502 = a6;
  v10 = *((_QWORD *)this + 2);
  v496 = a4;
  *(_QWORD *)&v508.left = a7;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(v10 + 16)) )
  {
    v190 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v190 + 24) = 3367LL;
    WdLogEvent5_WdAssertion(v190);
  }
  if ( *((_QWORD *)this + 46) )
  {
    v191 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v191 + 24) = 3368LL;
    WdLogEvent5_WdAssertion(v191);
  }
  Value = a2->Flags.Value;
  if ( (Value & 0x4000) != 0
    || (Value &= 0x12000u,
        v12 = *(struct _D3DKMT_UNLOCK2 **)(*((_QWORD *)this + 2) + 40LL),
        pDstSubRects = v12[12],
        (_DWORD)Value == 73728) )
  {
    v164 = WdLogNewEntry5_WdWarning(v12, Value, v13);
    LODWORD(v67) = -1073741811;
    *(_QWORD *)(v164 + 24) = this;
    *(_QWORD *)(v164 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v164);
    return (unsigned int)v67;
  }
  memset(&v504, 0, sizeof(v504));
  v15 = *(_DWORD *)a7 | 0x10020;
  hSource = a2->hSource;
  hDestination = a2->hDestination;
  *(_DWORD *)a7 = v15;
  v17 = (a2->Flags.Value & 0x10000) == 0;
  v491 = hDestination;
  if ( v17 )
    v15 |= 1u;
  v18 = v15 | 0x100;
  *(_DWORD *)a7 = v18;
  *(_DWORD *)a7 = v18 ^ (v18 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 30) = a2->PresentCount;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 31) = 0;
  v493 = 0;
  Height = 0;
  LODWORD(v500) = 0;
  v19 = 0;
  LODWORD(v494) = 0;
  v20 = 0;
  v506[0] = 0;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v489, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v499, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v503, 0LL);
  v501 = 0;
  v23 = a2->hDestination;
  if ( !v23 )
    goto LABEL_14;
  v165 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v165 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v192 = *(_DWORD *)(v165 + 200);
      if ( v192 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v192);
    }
    ExAcquirePushLockSharedEx(v165 + 184, 0LL);
  }
  v166 = (v23 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v166 >= *(_DWORD *)(v165 + 224) )
    goto LABEL_222;
  v167 = *(_QWORD *)(v165 + 208);
  v168 = *(_DWORD *)(v167 + 16 * v166 + 8);
  if ( ((v23 >> 25) & 0x60) != (*(_BYTE *)(v167 + 16 * v166 + 8) & 0x60) || (v168 & 0x2000) != 0 || (v168 & 0x1F) == 0 )
    goto LABEL_222;
  v169 = 2LL * (unsigned int)v166;
  v170 = v168 & 0x1F;
  v171 = (struct DXGALLOCATION **)(v167 + 16LL * (unsigned int)v166);
  if ( (_BYTE)v170 != 5 )
  {
    v193 = WdLogNewEntry5_WdError(v170, v169, v167);
    *(_QWORD *)(v193 + 24) = 267LL;
    WdLogEvent5_WdError(v193);
LABEL_222:
    v172 = 0LL;
    goto LABEL_206;
  }
  v172 = *v171;
LABEL_206:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v494, v172);
  ExReleasePushLockSharedEx(v165 + 184, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v499, &v494);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v494);
  if ( !v499 )
  {
    v194 = (_QWORD *)WdLogNewEntry5_WdWarning(v174, v173, v175);
    v195 = -1073741811;
    v194[3] = -1073741811LL;
    v194[4] = this;
    v194[5] = a2->hDestination;
    goto LABEL_334;
  }
  v176 = *((_QWORD *)this + 2);
  v177 = *(_QWORD *)(*((_QWORD *)v499 + 1) + 16LL);
  v178 = *(_QWORD *)(*(_QWORD *)(v176 + 16) + 16LL);
  if ( *(_QWORD *)(v177 + 16) != v178 )
  {
    v196 = (_QWORD *)WdLogNewEntry5_WdError(v178, v177, v175);
    v196[3] = *((_QWORD *)this + 2);
    v197 = v499;
    goto LABEL_256;
  }
  memset(v512, 0, 0x30uLL);
  *(_QWORD *)v512 = *(_QWORD *)(*((_QWORD *)v499 + 6) + 16LL);
  v180 = ADAPTER_RENDER::DdiDescribeAllocation(
           *(ADAPTER_RENDER **)(v176 + 16),
           (struct _DXGKARG_DESCRIBEALLOCATION *)v512,
           v179);
  v41 = v180;
  if ( v180 < 0 )
  {
    v198 = (_QWORD *)WdLogNewEntry5_WdError(Width, v181, Format);
    v198[3] = v41;
    v198[4] = this;
    v198[5] = *(_QWORD *)(*((_QWORD *)v499 + 6) + 16LL);
    v199 = v499;
    goto LABEL_260;
  }
  v19 = *(_DWORD *)&v512[8];
  v20 = *(_DWORD *)&v512[12];
  LODWORD(v494) = *(_DWORD *)&v512[8];
  v506[0] = *(_DWORD *)&v512[12];
LABEL_14:
  if ( (a2->Flags.Value & 0x8002) == 0 )
  {
    v24 = a2->hSource;
    v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v25 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v200 = *(_DWORD *)(v25 + 200);
        if ( v200 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v200);
      }
      ExAcquirePushLockSharedEx(v25 + 184, 0LL);
    }
    v26 = (v24 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *(_DWORD *)(v25 + 224) )
    {
      v27 = *(_QWORD *)(v25 + 208);
      v28 = *(_DWORD *)(v27 + 16 * v26 + 8);
      if ( ((v24 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60) && (v28 & 0x2000) == 0 && (v28 & 0x1F) != 0 )
      {
        v29 = 2LL * (unsigned int)v26;
        v30 = v28 & 0x1F;
        v31 = (struct DXGALLOCATION **)(v27 + 16LL * (unsigned int)v26);
        if ( (_BYTE)v30 == 5 )
        {
          v32 = *v31;
LABEL_22:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v500, v32);
          ExReleasePushLockSharedEx(v25 + 184, 0LL);
          KeLeaveCriticalRegion();
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v489, &v500);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v500);
          v34 = v489;
          if ( !v489 )
          {
            v194 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, 0LL, Format);
            v195 = -1073741811;
            v194[3] = -1073741811LL;
            v194[4] = this;
            v194[5] = a2->hSource;
            goto LABEL_334;
          }
          v17 = (a2->Flags.Value & 0x10000000) == 0;
          memset(&v510.Width, 0, 40);
          Width = *(_QWORD *)(*((_QWORD *)v489 + 6) + 16LL);
          v510.hAllocation = (HANDLE)Width;
          if ( !v17 )
          {
            v493 = a2[1].hSource;
            Height = a2[1].hDestination;
            LODWORD(v500) = a2[1].Color;
            goto LABEL_27;
          }
          v35 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v36 = *(_QWORD *)(*((_QWORD *)v489 + 1) + 16LL);
          if ( *(_QWORD *)(v36 + 16) == *(_QWORD *)(v35 + 16) )
          {
            v37 = ADAPTER_RENDER::DdiDescribeAllocation(
                    *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                    &v510,
                    (const GUID *)v35);
            v41 = v37;
            if ( v37 >= 0 )
            {
              Format = (unsigned int)v510.Format;
              Width = v510.Width;
              v34 = v489;
              LODWORD(v500) = v510.Format;
              Height = v510.Height;
              v493 = v510.Width;
LABEL_27:
              v20 = v506[0];
              goto LABEL_28;
            }
            v198 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38, v40);
            v198[3] = v41;
            v198[4] = this;
            v198[5] = *(_QWORD *)(*((_QWORD *)v489 + 6) + 16LL);
            v199 = v489;
LABEL_260:
            v198[6] = v199;
            WdLogEvent5_WdError(v198);
            v195 = v41;
            goto LABEL_335;
          }
          v196 = (_QWORD *)WdLogNewEntry5_WdError(v36, v489, v35);
          v196[3] = *((_QWORD *)this + 2);
          v197 = v489;
LABEL_256:
          v195 = -1073741811;
          v196[4] = v197;
          v196[5] = -1073741811LL;
LABEL_258:
          WdLogEvent5_WdError(v196);
LABEL_335:
          v242 = v195;
          goto LABEL_336;
        }
        v201 = WdLogNewEntry5_WdError(v30, v29, v27);
        *(_QWORD *)(v201 + 24) = 267LL;
        WdLogEvent5_WdError(v201);
      }
    }
    v32 = 0LL;
    goto LABEL_22;
  }
  v34 = v489;
LABEL_28:
  v42 = a2->hDestination;
  if ( !v42
    || (v43 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
        (*(_DWORD *)&v43 & 0x10000) != 0) )
  {
    v43 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_BYTE *)&v43 & 4) == 0 )
    {
      if ( (*(_BYTE *)&v43 & 3) == 0 )
      {
        if ( (*(_WORD *)&v43 & 0x8000) == 0 )
        {
          v323 = (_QWORD *)WdLogNewEntry5_WdWarning(Width, v34, Format);
          LODWORD(v67) = -1073741811;
          v323[3] = -1073741811LL;
          v323[4] = this;
          v323[5] = a2->pSrcSubRects;
          v323[6] = a2->SubRectCnt;
          v323[7] = a2->Flags.Value;
          WdLogEvent5_WdWarning(v323);
          goto LABEL_95;
        }
        if ( (*(_WORD *)&v43 & 0x27EF) == 0 )
        {
          Model = a2->PresentHistoryToken.Model;
          if ( (unsigned int)Model <= D3DKMT_PM_FLIPMANAGER )
          {
            Width = 644LL;
            if ( _bittest((const int *)&Width, Model) )
            {
              if ( Model != D3DKMT_PM_REDIRECTED_FLIP
                || a2->PresentHistoryToken.Token.Flip.DirtyRegions.NumRects <= 0x10 )
              {
                LODWORD(v67) = SubmitPresentHistoryTokenPreparation(
                                 v496,
                                 a3,
                                 *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                                 &a2->PresentHistoryToken,
                                 a2->PresentLimitSemaphore,
                                 (a2->Flags.Value & 0x10) != 0);
                if ( (int)v67 < 0 )
                  goto LABEL_99;
                TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
                  (TOKEN_BINDING_GUARD *)&v510,
                  &a2->PresentHistoryToken,
                  v496,
                  a3);
                LODWORD(v510.hAllocation) = SubmitPresentHistoryToken(
                                              &a2->PresentHistoryToken,
                                              a3,
                                              v496,
                                              v490,
                                              1,
                                              0LL,
                                              a2,
                                              a7,
                                              this,
                                              0LL,
                                              -1,
                                              0LL);
                LODWORD(v67) = v510.hAllocation;
                TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v510);
                goto LABEL_90;
              }
            }
          }
        }
        v283 = (_QWORD *)WdLogNewEntry5_WdWarning(Width, v34, Format);
        LODWORD(v67) = -1073741811;
        v283[3] = this;
        v283[4] = a2->Flags.Value;
        v283[5] = -1073741811LL;
LABEL_446:
        WdLogEvent5_WdWarning(v283);
        goto LABEL_99;
      }
      if ( (*(_WORD *)&v43 & 0x100) != 0 )
      {
        Width = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(Width + 1728) )
        {
          v283 = (_QWORD *)WdLogNewEntry5_WdWarning(Width, v34, Format);
          LODWORD(v67) = -1073741811;
          v283[3] = *((_QWORD *)this + 2);
          v283[4] = -1073741811LL;
          goto LABEL_446;
        }
        if ( *(_DWORD *)(Width + 1736) <= a2->VidPnSourceId )
        {
          v324 = WdLogNewEntry5_WdWarning(Width, v34, Format);
          *(_QWORD *)(v324 + 24) = a2->VidPnSourceId;
          *(_QWORD *)(v324 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 1736LL);
          WdLogEvent5_WdWarning(v324);
          LODWORD(v67) = -1073741811;
          goto LABEL_99;
        }
      }
      pSrcSubRects = a2->pSrcSubRects;
      if ( (*(_BYTE *)&v43 & 2) != 0 )
      {
        if ( !pSrcSubRects || !a2->SubRectCnt || (*(_WORD *)&v43 & 0x86BD) != 0 )
          goto LABEL_444;
        hSource = 0;
      }
      else
      {
        if ( !pSrcSubRects || !a2->SubRectCnt || !v493 || !Height || (*(_WORD *)&v43 & 0x802E) != 0 )
          goto LABEL_444;
        Width = (*(unsigned int *)&v43 >> 9) & 1;
        if ( ((*(unsigned int *)&v43 >> 9) & 1) != 0 || (*(_WORD *)&v43 & 0x400) != 0 )
        {
          if ( (_DWORD)Width == ((*(unsigned int *)&v43 >> 10) & 1) )
          {
            v283 = (_QWORD *)WdLogNewEntry5_WdWarning(Width, v34, Format);
            LODWORD(v67) = -1073741811;
            v283[3] = -1073741811LL;
            v283[4] = this;
            v283[5] = a2->pSrcSubRects;
            v283[6] = a2->SubRectCnt;
            v283[7] = a2->Flags.Value;
            goto LABEL_446;
          }
          if ( (*(_WORD *)&v43 & 0x100) == 0
            || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                  *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
                  *((const struct DXGDEVICE **)this + 2),
                  a2->VidPnSourceId) )
          {
LABEL_444:
            v283 = (_QWORD *)WdLogNewEntry5_WdWarning(Width, v34, Format);
            LODWORD(v67) = -1073741811;
            v283[3] = this;
            v283[4] = a2->pSrcSubRects;
            v283[5] = a2->SubRectCnt;
            v284 = (struct DXGALLOCATION *)a2->Flags.Value;
            v283[7] = -1073741811LL;
LABEL_445:
            v283[6] = v284;
            goto LABEL_446;
          }
        }
      }
      Color = a2->Color;
      v504.Flags.Value = v504.Flags.Value & 0xFFFFFF8C | a2->Flags.Value & 3 | (a2->Flags.Value >> 5) & 0x70;
      v96 = (DXGPRESENT *)*((_QWORD *)this + 19);
      v504.Color = Color;
      LODWORD(v67) = DXGPRESENT::CheckInput(v96, a2, v493, Height);
      if ( (int)v67 < 0 )
        goto LABEL_95;
      v97 = (DXGPRESENT *)*((_QWORD *)this + 19);
      if ( (*((_DWORD *)v97 + 1) & 4) != 0 )
        goto LABEL_90;
      DXGPRESENT::CheckOutput(v97, v19, v20);
      v98 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1728LL);
      if ( !v98 || DXGADAPTER::IsDisplayOnlyAdapter(v98) )
      {
        v327 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (a2->Flags.Value & 0x10) == 0, a3);
        v67 = (struct DXGALLOCATION *)v327;
        if ( v327 < 0 )
          goto LABEL_447;
      }
      else
      {
        v99 = *((_QWORD *)this + 2);
        v100 = *(_QWORD *)(*(_QWORD *)(v99 + 16) + 16LL);
        if ( *(_QWORD *)(v99 + 1728) != v100 )
        {
          v325 = WdLogNewEntry5_WdAssertion(v100, v99);
          *(_QWORD *)(v325 + 24) = 4591LL;
          WdLogEvent5_WdAssertion(v325);
          v99 = *((_QWORD *)this + 2);
        }
        v101 = 0;
        if ( *(_DWORD *)(v99 + 1736) )
        {
          while ( 1 )
          {
            v102 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v101, (a2->Flags.Value & 0x10) == 0, a3);
            v67 = (struct DXGALLOCATION *)v102;
            if ( v102 < 0 )
              break;
            if ( ++v101 >= *(_DWORD *)(*((_QWORD *)this + 2) + 1736LL) )
              goto LABEL_130;
          }
LABEL_447:
          v326 = WdLogNewEntry5_WdEvent(v103);
          *(_QWORD *)(v326 + 24) = v67;
          *(_QWORD *)(v326 + 32) = this;
          WdLogEvent5_WdEvent(v326);
          goto LABEL_99;
        }
      }
LABEL_130:
      v89 = (_QWORD *)((char *)this + 368);
      LODWORD(v67) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 46, a3, 0);
      if ( (int)v67 < 0 )
        goto LABEL_96;
      if ( !*v89 && !*((_BYTE *)this + 449) )
      {
        v328 = WdLogNewEntry5_WdAssertion(v105, v104);
        *(_QWORD *)(v328 + 24) = 4629LL;
        WdLogEvent5_WdAssertion(v328);
      }
      DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v510, *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
      v106 = 0;
      if ( (a2->Flags.Value & 0x10000) != 0 )
      {
        if ( a2->hDestination )
        {
          v107 = *((_QWORD *)v499 + 6);
          v108 = *(_DWORD *)(v107 + 4);
          *(_DWORD *)(v107 + 4) = v108 | 0x400;
          v106 = (v108 & 0x400) == 0;
        }
      }
      else
      {
        v329 = a3;
        COREDEVICEACCESS::Release(a3);
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v496);
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v510, v330);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v496);
        v331 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
        v67 = (struct DXGALLOCATION *)v331;
        if ( v331 < 0 )
        {
          v333 = WdLogNewEntry5_WdEvent(v332);
          *(_QWORD *)(v333 + 24) = v67;
          *(_QWORD *)(v333 + 32) = this;
          WdLogEvent5_WdEvent(v333);
          goto LABEL_468;
        }
        v106 = 0;
      }
      v109 = (*(__int64 (**)(void))(*(_QWORD *)&pDstSubRects + 8LL))();
      LODWORD(v494) = v109;
      CurrentThreadId = PsGetCurrentThreadId();
      v17 = *((_BYTE *)this + 449) == 0;
      v111 = CurrentThreadId;
      *(_QWORD *)v506 = CurrentThreadId;
      if ( v17 )
        VIDSCH_EXPORT::VidSchGetMonitorPowerState(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL),
          *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL));
      v112 = *((_QWORD *)this + 19);
      if ( *(_DWORD *)(v112 + 8) == v109
        && *(_DWORD **)(v112 + 56) == v111
        && *(HWND *)(v112 + 48) == a2->hWindow
        && !*(_DWORD *)(v112 + 64)
        && !v106 )
      {
        v334 = *(_DWORD *)(v112 + 4);
        if ( (v334 & 0x108) == 0 )
        {
          if ( (v334 & 1) != 0 )
          {
            LODWORD(v67) = -1071775738;
            goto LABEL_148;
          }
          if ( (v334 & 0x10) != 0 || (a2->Flags.Value & 0x10000) != 0 )
            goto LABEL_148;
          v335 = 0;
          goto LABEL_465;
        }
      }
      DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v510);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v496);
      COREDEVICEACCESS::Release(a3);
      v113 = 0;
      v114 = v490;
      LODWORD(v67) = CWin32kLocks::Lock(v490, a2->hWindow, HIWORD(a2->Flags.Value) & 1, 1, 0);
      if ( (a2->Flags.Value & 0x10000) == 0
        || ((*(void (__fastcall **)(_QWORD, struct _D3DKMT_LOCK2 *))(*(_QWORD *)&pDstSubRects + 232LL))(
              *(_QWORD *)v114,
              &Source1),
            *(_QWORD *)(*((_QWORD *)this + 19) + 440LL) = *(_QWORD *)&Source1.hDevice,
            (a2->Flags.Value & 0x10000) == 0) )
      {
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v510, v115);
      }
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v496);
      v116 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
      if ( v116 >= 0 )
      {
        if ( (int)v67 < 0 )
          goto LABEL_149;
        if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination && !*(_QWORD *)(*((_QWORD *)this + 19) + 440LL) )
        {
          v336 = WdLogNewEntry5_WdEvent(v117);
          *(_QWORD *)(v336 + 24) = 0LL;
          *(_QWORD *)(v336 + 32) = this;
          WdLogEvent5_WdEvent(v336);
          v337 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 46);
          if ( v337 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
              v337,
              0LL);
            *((_QWORD *)this + 46) = 0LL;
          }
          LODWORD(v67) = 0;
          goto LABEL_616;
        }
        v118 = *(HDC *)v114;
        v119 = (HDEV)*((_QWORD *)v490 + 2);
        LODWORD(v67) = DXGPRESENT::CheckVisRgn(
                         *((DXGPRESENT **)this + 19),
                         a2,
                         v118,
                         v119,
                         *((const struct DXGDEVICE **)this + 2),
                         v493,
                         Height,
                         (enum _D3DDDIFORMAT)v500,
                         1);
        if ( (_DWORD)v67 != 261 )
          goto LABEL_146;
        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v510);
        COREDEVICEACCESS::Release(a3);
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v496);
        if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
          LODWORD(v67) = -1071775738;
        if ( (a2->Flags.Value & 0x10000) == 0 )
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v510, v338);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v496);
        v339 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
        v341 = v339;
        if ( v339 >= 0 )
        {
          if ( (_DWORD)v67 != -1071775738 )
            LODWORD(v67) = DXGPRESENT::CheckVisRgn(
                             *((DXGPRESENT **)this + 19),
                             a2,
                             v118,
                             v119,
                             *((const struct DXGDEVICE **)this + 2),
                             v493,
                             Height,
                             (enum _D3DDDIFORMAT)v500,
                             0);
          v111 = *(_DWORD **)v506;
LABEL_146:
          v120 = *((_QWORD *)this + 19);
          if ( (int)v67 < 0 )
          {
            if ( (*(_BYTE *)(v120 + 4) & 1) != 0 )
            {
              *(_QWORD *)(v120 + 56) = v111;
              *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (_DWORD)v494;
            }
            goto LABEL_148;
          }
          *(_QWORD *)(v120 + 56) = v111;
          if ( (a2->Flags.Value & 0x10000) != 0 )
          {
LABEL_148:
            v114 = v490;
            v113 = 0;
LABEL_149:
            v121 = *((_QWORD *)this + 19);
            v495 = 0;
            v122 = *(_DWORD *)(v121 + 4);
            if ( (v122 & 0x10) == 0 )
            {
              if ( (int)v67 >= 0 )
              {
                if ( (v122 & 2) != 0 )
                {
                  v182 = v490;
                  v128 = a3;
                  goto LABEL_214;
                }
                if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)&pDstSubRects + 224LL))(
                       0LL,
                       0LL,
                       0LL) )
                {
                  if ( (a2->Flags.Value & 0x12100) == 0x10000 )
                    goto LABEL_154;
                  v441 = WdLogNewEntry5_WdAssertion(v124, v123);
                  *(_QWORD *)(v441 + 24) = 5257LL;
                }
                else
                {
                  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) || (a2->Flags.Value & 0x4000000) != 0 )
                    goto LABEL_154;
                  v441 = WdLogNewEntry5_WdAssertion(v124, v123);
                  *(_QWORD *)(v441 + 24) = 5262LL;
                }
                WdLogEvent5_WdAssertion(v441);
LABEL_154:
                if ( (a2->Flags.Value & 0x10000) == 0 )
                  goto LABEL_163;
                v125 = *(HDC *)v114;
                Current = DXGPROCESS::GetCurrent(v124, v123);
                if ( !v125 )
                  goto LABEL_163;
                v127 = *((_QWORD *)Current + 12);
                if ( !v127
                  || *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) != a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                {
                  goto LABEL_163;
                }
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v496);
                v128 = a3;
                COREDEVICEACCESS::Release(a3);
                memset(v509, 0, 0x228uLL);
                DdiSubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), 0);
                v130 = (DXGPRESENT *)*((_QWORD *)this + 19);
                LODWORD(v509[0]) = DdiSubRectCnt;
                DdiSubRectList = DXGPRESENT::GetDdiSubRectList(v130, 0);
                BroadcastContextCount = a2->BroadcastContextCount;
                *((_QWORD *)&v509[0] + 1) = DdiSubRectList;
                *((_QWORD *)&v509[1] + 1) = *((unsigned int *)this + 6);
                v133 = 1LL;
                LODWORD(v509[1]) = 1;
                if ( (_DWORD)BroadcastContextCount )
                {
                  BroadcastContext = a2->BroadcastContext;
                  v443 = BroadcastContextCount;
                  do
                  {
                    v444 = *BroadcastContext++;
                    *((_QWORD *)&v509[1] + v133 + 1) = v444;
                    v133 = (unsigned int)++LODWORD(v509[1]);
                    --v443;
                  }
                  while ( v443 );
                }
                if ( !*((_BYTE *)this + 449)
                  && (unsigned int)VIDSCH_EXPORT::VidSchGetNumUnorderedWaitsInDevice(
                                     *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL),
                                     *(struct _VIDSCH_DEVICE **)(*((_QWORD *)this + 2) + 656LL)) )
                {
                  v495 = 1;
                  LOBYTE(v509[34]) = 1;
                }
                (*(void (__fastcall **)(HDC, _OWORD *))(v127 + 240))(v125, v509);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v496);
                v134 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
                v136 = v134;
                if ( v134 >= 0 )
                {
LABEL_163:
                  for ( i = 0; ; ++i )
                  {
                    v138 = (a2->Flags.Value & 0x10000) != 0 ? 1 : *(_DWORD *)(*((_QWORD *)this + 2) + 1736LL);
                    if ( i >= v138 )
                      break;
                    v504.SubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), i);
                    if ( v504.SubRectCnt )
                    {
                      if ( (a2->Flags.Value & 0x10000) != 0 )
                      {
                        v139 = v491;
                      }
                      else
                      {
                        v139 = DXGDEVICE::OpenCddPrimaryHandle(
                                 *((DXGDEVICE **)this + 2),
                                 i,
                                 *((_BYTE *)this + 448),
                                 *((_DWORD *)this + 102));
                        v491 = v139;
                      }
                      if ( v139 )
                      {
                        v504.pDstSubRects = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), i);
                        v140 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                        if ( (*(_WORD *)&v140 & 0x2000) != 0 )
                        {
                          CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
                                                 i,
                                                 1LL);
                          v446 = 0;
                          if ( CurrentOrientation != 1 )
                            v446 = 128;
                          v504.Flags.Value = v446 | v504.Flags.Value & 0xFFFFFF7F;
                          v140 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                        }
                        *(_QWORD *)v506 = 0LL;
                        v507 = 0LL;
                        if ( (*(_DWORD *)&v140 & 0x10000) != 0 )
                          ContentRect = (const struct tagRECT *)v506;
                        else
                          ContentRect = ADAPTER_DISPLAY::GetContentRect(
                                          *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
                                          i);
                        v142 = (RECT *)*((_QWORD *)this + 19);
                        v143 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 368);
                        v504.SrcRect = v142[9];
                        v504.DstRect.top = v142[8].top - ContentRect->top;
                        v144 = (unsigned int)(v142[8].bottom - ContentRect->top);
                        v504.DstRect.bottom = v142[8].bottom - ContentRect->top;
                        v504.DstRect.left = v142[8].left - ContentRect->left;
                        v504.DstRect.right = v142[8].right - ContentRect->left;
                        if ( bTracingEnabled && *v143 )
                        {
                          v145 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)v504.Flags.Value;
                          v146 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                          pDstSubRects = (struct _D3DKMT_UNLOCK2)v504.pDstSubRects;
                          v147 = *(struct VIDMM_GLOBAL **)(v146 + 552);
                          v148 = *(VIDMM_EXPORT **)(v146 + 544);
                          LODWORD(v494) = v504.SubRectCnt;
                          *(_QWORD *)&Source1.hDevice = VIDMM_EXPORT::VidMmETWAllocationHandle(v148, v147, v491);
                          v149 = VIDMM_EXPORT::VidMmETWAllocationHandle(v148, v147, hSource);
                          v143 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 368);
                          v150 = *((_QWORD *)this + 46);
                          v151 = (unsigned int)v494;
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                          {
                            LODWORD(v487) = (_DWORD)v494;
                            LODWORD(v486) = v504.DstRect.bottom;
                            LODWORD(v485) = v504.DstRect.top;
                            LODWORD(v484) = v504.DstRect.right;
                            LODWORD(v483) = v504.DstRect.left;
                            LODWORD(v482) = v504.SrcRect.bottom;
                            LODWORD(v481) = v504.SrcRect.top;
                            v479[0] = (enum _D3DDDIFORMAT)v504.SrcRect.right;
                            LODWORD(v478) = v504.SrcRect.left;
                            LODWORD(v477) = v145;
                            LODWORD(Size) = 0;
                            LODWORD(Src) = 1;
                            McTemplateK0ppxppttqddddddddq(
                              (__int64)&DxgkControlGuid_Context,
                              (__int64)&EventBlit,
                              0LL,
                              a2->hWindow,
                              v150,
                              0LL,
                              v149,
                              *(_QWORD *)&Source1.hDevice,
                              Src,
                              Size,
                              v477,
                              v478,
                              *(_QWORD *)v479,
                              v481,
                              v482,
                              v483,
                              v484,
                              v485,
                              v486,
                              v487);
                            v143 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 368);
                          }
                          v152 = 0;
                          if ( v151 )
                          {
                            while ( 1 )
                            {
                              v144 = v151 - v152;
                              if ( (unsigned int)v144 > 0x10 )
                                break;
                              v153 = v151 - v152;
                              if ( (_DWORD)v144 )
                                goto LABEL_181;
LABEL_183:
                              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                              {
                                LODWORD(v472) = v153;
                                LODWORD(v470) = (unsigned int)v144 <= 0x10;
                                McTemplateK0ptqDR2DR2DR2DR2(
                                  (__int64)&DxgkControlGuid_Context,
                                  (__int64)&EventBlitRect,
                                  0LL,
                                  v150,
                                  v470,
                                  v472,
                                  v512,
                                  v513,
                                  v514,
                                  v515);
                              }
                              v152 += 16;
                              if ( v152 >= v151 )
                              {
                                v8 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v508.left;
                                v143 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 368);
                                goto LABEL_187;
                              }
                            }
                            v153 = 16;
LABEL_181:
                            v154 = pDstSubRects;
                            v155 = 0LL;
                            v156 = 0;
                            do
                            {
                              v157 = v156 + v152;
                              ++v156;
                              v157 *= 2LL;
                              v155 += 4LL;
                              *(_DWORD *)&v512[v155 - 4] = *(_DWORD *)(*(_QWORD *)&v154 + 8 * v157);
                              *(_DWORD *)&v512[v155 + 60] = *(_DWORD *)(*(_QWORD *)&v154 + 8 * v157 + 8);
                              *(_DWORD *)&v513[v155 + 60] = *(_DWORD *)(*(_QWORD *)&v154 + 8 * v157 + 4);
                              *(_DWORD *)&v514[v155 + 60] = *(_DWORD *)(*(_QWORD *)&v154 + 8 * v157 + 12);
                            }
                            while ( v156 < v153 );
                            goto LABEL_183;
                          }
                        }
LABEL_187:
                        if ( *((_BYTE *)this + 449) )
                        {
                          v447 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                          v448 = *(_QWORD *)(v447 + 16);
                          v449 = DXGPROCESS::GetCurrent(v447, v144);
                          LODWORD(Size) = v504.PrivateDriverDataSize;
                          v158 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v448 + 4144),
                                   v449,
                                   this,
                                   *((_DWORD *)v489 + 24),
                                   *((_DWORD *)v499 + 24),
                                   &v504.SrcRect,
                                   &v504.DstRect,
                                   v504.SubRectCnt,
                                   v504.pDstSubRects,
                                   Size,
                                   (unsigned __int8 *)v504.pPrivateDriverData);
                        }
                        else
                        {
                          v480 = (int)v500;
                          *((_DWORD *)v8 + 31) = i;
                          v158 = DXGCONTEXT::SubmitPresent(
                                   this,
                                   a2,
                                   (const struct DXGK_PRESENT_PARAMS *)a2,
                                   a2->BroadcastContextCount,
                                   v502,
                                   v489,
                                   hSource,
                                   v491,
                                   &v504,
                                   0LL,
                                   *v143,
                                   v8,
                                   v480,
                                   a3);
                        }
                        *((_QWORD *)this + 46) = 0LL;
                        LODWORD(v67) = v158;
                        if ( (a2->Flags.Value & 0x10000) != 0
                          && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                        {
                          SubRectCnt = v504.SubRectCnt;
                          a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                          a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                          if ( SubRectCnt > 0x10 )
                          {
                            DstRect = v504.DstRect;
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                            a2->PresentHistoryToken.Token.Blt.DirtyRegions.Rects[0] = DstRect;
                          }
                          else
                          {
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = SubRectCnt;
                            if ( SubRectCnt )
                            {
                              v160 = v504.pDstSubRects;
                              v161 = (char *)&a2->PresentHistoryToken - (char *)v504.pDstSubRects;
                              v162 = SubRectCnt;
                              do
                              {
                                v163 = (__int128)*v160++;
                                *(_OWORD *)((char *)&v160[1].bottom + v161) = v163;
                                --v162;
                              }
                              while ( v162 );
                            }
                          }
                          a2->PresentHistoryToken.TokenSize = 16
                                                            * (a2->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v510);
                          LODWORD(v67) = SubmitPresentHistoryToken(
                                           &a2->PresentHistoryToken,
                                           a3,
                                           v496,
                                           v490,
                                           0,
                                           0LL,
                                           a2,
                                           0LL,
                                           this,
                                           0LL,
                                           -1,
                                           0LL);
                        }
                        if ( (int)v67 < 0 )
                          break;
                      }
                    }
                  }
                  v128 = a3;
                  goto LABEL_213;
                }
                goto LABEL_613;
              }
              goto LABEL_489;
            }
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v510);
            if ( (int)v67 < 0 )
            {
LABEL_489:
              v128 = a3;
LABEL_213:
              v182 = v490;
LABEL_214:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v510);
              if ( v495 )
              {
                CWin32kLocks::Unlock(v182);
                COREDEVICEACCESS::Release(v128);
                DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 1LL);
                LODWORD(v67) = COREDEVICEACCESS::AcquireShared((__int64)v128, 0xFFFFFFFF, 0LL);
              }
              v183 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 46);
              if ( v183 )
              {
                if ( (int)v67 >= 0 )
                {
                  v451 = *(unsigned int *)(*((_QWORD *)this + 19) + 4LL);
                  LOBYTE(v451) = (v451 & 0x12) == 16;
                  if ( ((unsigned __int8)v451 & ((*(_BYTE *)&a2->Flags.0 & 2) == 0)) != 0 )
                  {
                    v452 = WdLogNewEntry5_WdAssertion(v451, v183);
                    *(_QWORD *)(v452 + 24) = 5497LL;
                    WdLogEvent5_WdAssertion(v452);
                    v183 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 46);
                  }
                }
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
                  v183,
                  0LL);
                *((_QWORD *)this + 46) = 0LL;
              }
              v184 = *((_QWORD *)this + 19);
              if ( (*(_DWORD *)(v184 + 4) & 0x80) != 0 )
              {
                if ( (unsigned int)((_DWORD)v67 + 1071775738) > 1 )
                {
                  v453 = WdLogNewEntry5_WdAssertion(*(_DWORD *)(v184 + 4) >> 7, v183);
                  *(_QWORD *)(v453 + 24) = 5505LL;
                  WdLogEvent5_WdAssertion(v453);
                }
                LODWORD(v67) = 0;
              }
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v510);
              goto LABEL_90;
            }
            v348 = *((_QWORD *)this + 19);
            v349 = *(_DWORD *)(v348 + 4) >> 1;
            LOBYTE(v349) = (*(_DWORD *)(v348 + 4) & 2) != 0;
            if ( (*(_DWORD *)(v348 + 4) & 2) == 0 && a2->BroadcastContextCount )
            {
              v350 = WdLogNewEntry5_WdError(v349, v346, v347);
              *(_QWORD *)(v350 + 24) = 4910LL;
              WdLogEvent5_WdError(v350);
              LODWORD(v67) = -1071774910;
              goto LABEL_489;
            }
            if ( (*(_DWORD *)(v348 + 4) & 2) != 0 )
              goto LABEL_489;
            if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
            {
              v351 = WdLogNewEntry5_WdAssertion(v349, v346);
              *(_QWORD *)(v351 + 24) = 4916LL;
              WdLogEvent5_WdAssertion(v351);
            }
            v508 = (struct tagRECT)0LL;
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventPerformanceWarning, 0LL, 0);
            v352 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
            if ( (*(_WORD *)&v352 & 0x100) != 0 )
            {
              v353 = ADAPTER_DISPLAY::GetContentRect(
                       *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
                       a2->VidPnSourceId);
              v352 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
              v354 = (struct _EX_RUNDOWN_REF *)&v508;
              v508 = *v353;
            }
            else
            {
              v354 = 0LL;
            }
            v494 = v354;
            if ( (*(_BYTE *)&v352 & 1) != 0 )
            {
              if ( *(_BYTE *)&v352 >= 0 )
              {
                v504.SrcRect.bottom = Height;
                right = v493;
                *(_QWORD *)&v504.SrcRect.left = 0LL;
              }
              else
              {
                top = a2->SrcRect.top;
                v352 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                if ( top < 0 )
                  top = 0;
                v504.SrcRect.top = top;
                left = a2->SrcRect.left;
                if ( left < 0 )
                  left = 0;
                v504.SrcRect.left = left;
                bottom = a2->SrcRect.bottom;
                if ( (int)Height < bottom )
                  bottom = Height;
                v504.SrcRect.bottom = bottom;
                right = a2->SrcRect.right;
                if ( (int)v493 < right )
                  right = v493;
              }
              v504.SrcRect.right = right;
              v359 = (*(_WORD *)&v504.Flags.0 ^ (unsigned __int16)(*(unsigned int *)&v352 >> 9)) & 0x800;
              v17 = a2->SubRectCnt == 0;
              v504.DstRect = v504.SrcRect;
              v504.Flags.Value ^= v359;
              if ( v17 )
              {
                v360 = WdLogNewEntry5_WdAssertion(v359, v346);
                *(_QWORD *)(v360 + 24) = 4963LL;
                WdLogEvent5_WdAssertion(v360);
              }
              if ( !a2->pSrcSubRects )
              {
                v361 = WdLogNewEntry5_WdAssertion(v359, v346);
                *(_QWORD *)(v361 + 24) = 4964LL;
                WdLogEvent5_WdAssertion(v361);
              }
              LODWORD(v67) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), a2->SubRectCnt);
              if ( (int)v67 < 0 )
                goto LABEL_489;
              v362 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
              v17 = a2->SubRectCnt == 0;
              v363 = 0;
              v364 = 0LL;
              v504.SubRectCnt = 0;
              v504.pDstSubRects = v362;
              if ( v17 )
                goto LABEL_489;
              while ( 1 )
              {
                if ( DXGPRESENT::IntersectRect(&v362[v364], &a2->pSrcSubRects[v363], &v504.SrcRect) )
                  v364 = ++v504.SubRectCnt;
                else
                  v364 = v504.SubRectCnt;
                if ( ++v363 >= a2->SubRectCnt )
                  break;
                v362 = (struct tagRECT *)v504.pDstSubRects;
              }
              if ( !(_DWORD)v364 )
                goto LABEL_489;
              if ( DXGPRESENT::PrepareStagingBuffer(
                     *((DXGPRESENT **)this + 19),
                     *((struct DXGDEVICE **)this + 2),
                     a2->hSource,
                     a3,
                     &v491) < 0 )
                goto LABEL_595;
              if ( *((_BYTE *)this + 449) )
              {
                v368 = v491;
                v369 = DXGPROCESS::GetCurrent(v366, v365);
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v369 + 184, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v370 = *((_DWORD *)v369 + 50);
                    if ( v370 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v370);
                  }
                  ExAcquirePushLockSharedEx((char *)v369 + 184, 0LL);
                }
                v371 = (v368 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v371 < *((_DWORD *)v369 + 56) )
                {
                  v372 = *((_QWORD *)v369 + 26);
                  v373 = *(_DWORD *)(v372 + 16 * v371 + 8);
                  if ( ((v368 >> 25) & 0x60) == (*(_BYTE *)(v372 + 16 * v371 + 8) & 0x60)
                    && (v373 & 0x2000) == 0
                    && (v373 & 0x1F) != 0 )
                  {
                    v374 = v373 & 0x1F;
                    if ( (_BYTE)v374 == 5 )
                    {
                      v376 = *(struct DXGALLOCATION **)(v372 + 16LL * (unsigned int)v371);
                      goto LABEL_539;
                    }
                    v375 = WdLogNewEntry5_WdError(v374, 2LL * (unsigned int)v371, v372);
                    *(_QWORD *)(v375 + 24) = 267LL;
                    WdLogEvent5_WdError(v375);
                  }
                }
                v376 = 0LL;
LABEL_539:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v494, v376);
                ExReleasePushLockSharedEx((char *)v369 + 184, 0LL);
                KeLeaveCriticalRegion();
                if ( !v494 )
                {
                  v379 = WdLogNewEntry5_WdAssertion(v378, v377);
                  *(_QWORD *)(v379 + 24) = 4996LL;
                  WdLogEvent5_WdAssertion(v379);
                }
                v380 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                v381 = *(_QWORD *)(v380 + 16);
                v382 = DXGPROCESS::GetCurrent(v380, v377);
                LODWORD(Size) = a2->PrivateDriverDataSize;
                v383 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v381 + 4144),
                         v382,
                         this,
                         *((_DWORD *)v489 + 24),
                         v494[12].Count,
                         &v504.SrcRect,
                         &v504.DstRect,
                         v504.SubRectCnt,
                         v504.pDstSubRects,
                         Size,
                         (unsigned __int8 *)a2->pPrivateDriverData);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v494);
LABEL_560:
                if ( v383 >= 0 )
                {
                  v399 = (DXGDEVICE *)*((_QWORD *)this + 2);
                  if ( (a2->Flags.Value & 0x100) != 0
                    && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                         *(DXGADAPTER ***)(*((_QWORD *)v399 + 216) + 2552LL),
                         *((const struct DXGDEVICE **)this + 2),
                         a2->VidPnSourceId) )
                  {
                    v400 = 1;
                  }
                  else
                  {
                    v400 = 0;
                    if ( !DXGDEVICE::AllowLegacyPresent(v399, 0) )
                    {
                      v401 = 0;
LABEL_565:
                      DXGADAPTERSTOPRESETLOCKSHARED::Release(v496);
                      COREDEVICEACCESS::Release(a3);
                      if ( !v401 && DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                      {
                        v128 = a3;
                        COREDEVICEACCESS::AcquireSharedUncheck((__int64)a3);
                        LODWORD(v67) = -1071775738;
                        goto LABEL_213;
                      }
                      CWin32kLocks::Unlock(v490);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v496);
                      LODWORD(v136) = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
                      if ( (int)v136 < 0 )
                      {
                        v402 = a3;
LABEL_615:
                        COREDEVICEACCESS::AcquireSharedUncheck((__int64)v402);
                        LODWORD(v67) = v136;
                        goto LABEL_616;
                      }
                      memset(v512, 0, 0x30uLL);
                      if ( *((_BYTE *)this + 449) )
                      {
                        v405 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                        Source1.hDevice = 0;
                        *(_QWORD *)&Source1.Flags.0 = 0LL;
                        Source1.pData = 0LL;
                        Source1.hAllocation = v491;
                        v406 = *(_QWORD *)(*((_QWORD *)v405 + 2) + 16LL);
                        v407 = DXGPROCESS::GetCurrent(v404, v403);
                        LODWORD(v67) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v406 + 4144),
                                         v407,
                                         v405,
                                         &Source1,
                                         0,
                                         0,
                                         0);
                        *(_QWORD *)&v512[24] = Source1.pData;
                      }
                      else
                      {
                        v408 = v491;
                        if ( !v491 )
                        {
                          v409 = WdLogNewEntry5_WdAssertion(v404, v403);
                          *(_QWORD *)(v409 + 24) = 5085LL;
                          WdLogEvent5_WdAssertion(v409);
                          v408 = v491;
                        }
                        v410 = (PERESOURCE *)*((_QWORD *)this + 2);
                        *(_DWORD *)&v512[4] = v408;
                        LODWORD(v67) = DXGDEVICE::Lock(v410, (struct _D3DKMT_LOCK *)v512, a3);
                      }
                      if ( (int)v67 >= 0 )
                      {
                        DXGADAPTERSTOPRESETLOCKSHARED::Release(v496);
                        COREDEVICEACCESS::Release(a3);
                        if ( !*(_QWORD *)&v512[24] )
                        {
                          v413 = WdLogNewEntry5_WdAssertion(v412, v411);
                          *(_QWORD *)(v413 + 24) = 5098LL;
                          WdLogEvent5_WdAssertion(v413);
                        }
                        if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
                        {
                          v414 = WdLogNewEntry5_WdAssertion(v412, v411);
                          *(_QWORD *)(v414 + 24) = 5099LL;
                          WdLogEvent5_WdAssertion(v414);
                        }
                        v415 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)&pDstSubRects + 304LL))(0LL);
                        v416 = 0;
                        if ( v415 )
                          v416 = v400;
                        v182 = v490;
                        LODWORD(v67) = CWin32kLocks::Lock(v490, a2->hWindow, 0, 0, v416);
                        if ( (int)v67 >= 0 )
                        {
                          v417 = (a2->Flags.Value & 0x200) != 0;
                          v418 = *(_DWORD *)(*((_QWORD *)this + 19) + 424LL);
                          v419 = CWin32kLocks::hDestDc(v182);
                          LOBYTE(Sizea) = v417;
                          LOBYTE(Srca) = 0;
                          if ( !(*(unsigned int (__fastcall **)(struct _D3DKMT_PRESENT *, HDC, struct _EX_RUNDOWN_REF *, const RECT *, _QWORD, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))(*(_QWORD *)&pDstSubRects + 144LL))(
                                  a2,
                                  v419,
                                  v354,
                                  v504.pDstSubRects,
                                  *(_QWORD *)&v512[24],
                                  v418,
                                  v493,
                                  Height,
                                  Srca,
                                  Sizea,
                                  a2->Color,
                                  DXGPRESENT::XformRect,
                                  DXGPRESENT::ClipRects) )
                          {
                            v421 = WdLogNewEntry5_WdEvent(v420);
                            *(_QWORD *)(v421 + 24) = -1071775737LL;
                            *(_QWORD *)(v421 + 32) = this;
                            WdLogEvent5_WdEvent(v421);
                            LODWORD(v67) = -1071775737;
                          }
                        }
                        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v496);
                        v128 = a3;
                        LODWORD(v136) = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
                        if ( (int)v136 >= 0 )
                        {
                          v424 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                          if ( *((_BYTE *)this + 449) )
                          {
                            pDstSubRects.hDevice = 0;
                            pDstSubRects.hAllocation = v491;
                            v425 = *(_QWORD *)(*((_QWORD *)v424 + 2) + 16LL);
                            v426 = DXGPROCESS::GetCurrent(v423, v422);
                            DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v425 + 4144),
                              v426,
                              v424,
                              &pDstSubRects,
                              0);
                          }
                          else
                          {
                            *(_QWORD *)&Source1.hDevice = 0x100000000LL;
                            *(_QWORD *)&Source1.Flags.0 = &v512[4];
                            DXGDEVICE::Unlock(v424, (const struct _D3DKMT_UNLOCK *)&Source1, 0);
                          }
                          if ( (int)v67 >= 0 && (a2->Flags.Value & 0x10000) != 0 )
                          {
                            a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                            a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19)
                                                                                           + 440LL);
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                            a2->PresentHistoryToken.TokenSize = 48;
                            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v510);
                            LODWORD(v67) = SubmitPresentHistoryToken(
                                             &a2->PresentHistoryToken,
                                             a3,
                                             v496,
                                             v182,
                                             0,
                                             0LL,
                                             a2,
                                             0LL,
                                             this,
                                             0LL,
                                             -1,
                                             0LL);
                          }
                          goto LABEL_214;
                        }
                        goto LABEL_614;
                      }
                      goto LABEL_489;
                    }
                  }
                  v401 = 1;
                  goto LABEL_565;
                }
LABEL_595:
                v427 = WdLogNewEntry5_WdWarning(v366, v365, v367);
                *(_QWORD *)(v427 + 24) = -1071775738LL;
                *(_QWORD *)(v427 + 32) = this;
                WdLogEvent5_WdWarning(v427);
                LODWORD(v67) = -1071775738;
                goto LABEL_489;
              }
              if ( !v491 )
              {
                v384 = WdLogNewEntry5_WdAssertion(v366, v365);
                *(_QWORD *)(v384 + 24) = 5010LL;
                WdLogEvent5_WdAssertion(v384);
              }
              if ( bTracingEnabled )
              {
                v385 = v504.SubRectCnt;
                v386 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)v504.Flags.Value;
                v387 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                *(_QWORD *)v506 = v504.pDstSubRects;
                v388 = *(struct VIDMM_GLOBAL **)(v387 + 552);
                v389 = *(VIDMM_EXPORT **)(v387 + 544);
                *(_QWORD *)&Source1.hDevice = VIDMM_EXPORT::VidMmETWAllocationHandle(v389, v388, v491);
                v390 = VIDMM_EXPORT::VidMmETWAllocationHandle(v389, v388, hSource);
                v391 = *((_QWORD *)this + 46);
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                {
                  LODWORD(Src) = 1;
                  McTemplateK0ppxppttqddddddddq(
                    (__int64)&DxgkControlGuid_Context,
                    (__int64)&EventBlit,
                    0LL,
                    a2->hWindow,
                    v391,
                    0LL,
                    v390,
                    *(_QWORD *)&Source1.hDevice,
                    Src,
                    0,
                    v386,
                    v504.SrcRect.left,
                    v504.SrcRect.right,
                    v504.SrcRect.top,
                    v504.SrcRect.bottom,
                    v504.DstRect.left,
                    v504.DstRect.right,
                    v504.DstRect.top,
                    v504.DstRect.bottom,
                    v385);
                }
                v392 = 0;
                if ( v385 )
                {
                  v393 = *(_DWORD **)v506;
                  while ( 1 )
                  {
                    v394 = v385 - v392;
                    if ( v385 - v392 > 0x10 )
                      break;
                    v395 = v385 - v392;
                    if ( v394 )
                      goto LABEL_553;
LABEL_555:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                    {
                      LODWORD(v472) = v395;
                      LODWORD(v471) = v394 <= 0x10;
                      McTemplateK0ptqDR2DR2DR2DR2(
                        (__int64)&DxgkControlGuid_Context,
                        (__int64)&EventBlitRect,
                        0LL,
                        v391,
                        v471,
                        v472,
                        v515,
                        v512,
                        v513,
                        v514);
                      v393 = *(_DWORD **)v506;
                    }
                    v392 += 16;
                    if ( v392 >= v385 )
                      goto LABEL_558;
                  }
                  v395 = 16;
LABEL_553:
                  v396 = 0LL;
                  v397 = 0;
                  do
                  {
                    v398 = v397 + v392;
                    ++v397;
                    v398 *= 2LL;
                    v396 += 4LL;
                    *(_DWORD *)&v514[v396 + 60] = v393[2 * v398];
                    *(_DWORD *)&v512[v396 - 4] = v393[2 * v398 + 2];
                    *(_DWORD *)&v512[v396 + 60] = v393[2 * v398 + 1];
                    *(_DWORD *)&v513[v396 + 60] = v393[2 * v398 + 3];
                  }
                  while ( v397 < v395 );
                  goto LABEL_555;
                }
LABEL_558:
                v354 = v494;
              }
              v383 = DXGCONTEXT::SubmitPresent(
                       this,
                       a2,
                       (const struct DXGK_PRESENT_PARAMS *)a2,
                       a2->BroadcastContextCount,
                       v502,
                       v489,
                       hSource,
                       v491,
                       &v504,
                       0LL,
                       *((struct _VIDMM_DMA_BUFFER **)this + 46),
                       a7,
                       (enum _D3DDDIFORMAT)v500,
                       a3);
              *((_QWORD *)this + 46) = 0LL;
              goto LABEL_560;
            }
            if ( (*(_BYTE *)&v352 & 2) == 0 )
              goto LABEL_489;
            v428 = (DXGDEVICE *)*((_QWORD *)this + 2);
            if ( (*(_WORD *)&v352 & 0x100) != 0
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                   *(DXGADAPTER ***)(*((_QWORD *)v428 + 216) + 2552LL),
                   *((const struct DXGDEVICE **)this + 2),
                   a2->VidPnSourceId) )
            {
              v113 = 1;
            }
            else if ( !DXGDEVICE::AllowLegacyPresent(v428, 0) )
            {
              v429 = 0;
              v113 = 0;
              goto LABEL_601;
            }
            v429 = 1;
LABEL_601:
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v496);
            COREDEVICEACCESS::Release(a3);
            if ( v429 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
            {
              if ( (a2->Flags.Value & 0x10000) != 0 )
              {
                v432 = WdLogNewEntry5_WdAssertion(v431, v430);
                *(_QWORD *)(v432 + 24) = 5219LL;
                WdLogEvent5_WdAssertion(v432);
              }
              v182 = v490;
              CWin32kLocks::Unlock(v490);
              v433 = pDstSubRects;
              v434 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)&pDstSubRects + 304LL))(0LL);
              v435 = 0;
              if ( v434 )
                v435 = v113;
              LODWORD(v67) = CWin32kLocks::Lock(v182, a2->hWindow, 0, 0, v435);
              v436 = CWin32kLocks::hDestDc(v182);
              if ( !(*(unsigned int (__fastcall **)(HDC, struct _EX_RUNDOWN_REF *, const RECT *, _QWORD, UINT))(*(_QWORD *)&v433 + 152LL))(
                      v436,
                      v354,
                      a2->pSrcSubRects,
                      a2->SubRectCnt,
                      a2->Color) )
              {
                v438 = WdLogNewEntry5_WdEvent(v437);
                *(_QWORD *)(v438 + 24) = -1071775737LL;
                *(_QWORD *)(v438 + 32) = this;
                WdLogEvent5_WdEvent(v438);
                LODWORD(v67) = -1071775737;
              }
            }
            else
            {
              v182 = v490;
              LODWORD(v67) = -1071775738;
            }
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v496);
            v128 = a3;
            v439 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
            v136 = v439;
            if ( v439 >= 0 )
              goto LABEL_214;
LABEL_613:
            v440 = WdLogNewEntry5_WdEvent(v135);
            *(_QWORD *)(v440 + 24) = v136;
            *(_QWORD *)(v440 + 32) = this;
            WdLogEvent5_WdEvent(v440);
LABEL_614:
            v402 = v128;
            goto LABEL_615;
          }
          v343 = (int)v494;
          *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (_DWORD)v494;
          DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL);
          v344 = 0;
          v345 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
          if ( v345 != (*(unsigned int (**)(void))(*(_QWORD *)&pDstSubRects + 8LL))() )
          {
            *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v343;
            ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3LL, 0xFFFFFFFFLL);
            v344 = 1;
          }
          v335 = v344;
LABEL_465:
          DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v510, v335);
          goto LABEL_148;
        }
        v342 = WdLogNewEntry5_WdEvent(v340);
        *(_QWORD *)(v342 + 24) = v341;
        WdLogEvent5_WdEvent(v342);
        COREDEVICEACCESS::AcquireSharedUncheck((__int64)a3);
        LODWORD(v67) = v341;
LABEL_616:
        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v510);
        goto LABEL_99;
      }
      v329 = a3;
      LODWORD(v67) = v116;
LABEL_468:
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v329);
      goto LABEL_616;
    }
  }
  if ( !v42 )
  {
    if ( (*(_DWORD *)&v43 & 0x10A7C3) != 0 )
    {
      v267 = (_QWORD *)WdLogNewEntry5_WdWarning(Width, v34, Format);
      v267[3] = this;
      v268 = a2->Flags.Value;
      goto LABEL_429;
    }
    v44 = *(_DWORD *)&v43 & 0x10000000;
    if ( v44 )
    {
      v256 = *((_QWORD *)v34 + 5);
      if ( !v256 || !*(_QWORD *)(v256 + 56) )
      {
        v257 = WdLogNewEntry5_WdError(Width, v34, Format);
        *(_QWORD *)(v257 + 24) = 3870LL;
        goto LABEL_340;
      }
    }
    else
    {
      v45 = *(unsigned int *)(*((_QWORD *)v34 + 6) + 4LL);
      if ( (v45 & 2) == 0 && (v45 & 1) == 0 && (v45 & 0x2000) == 0 )
      {
LABEL_341:
        v258 = (_QWORD *)WdLogNewEntry5_WdError(v45, v34, Format);
        LODWORD(v188) = -1073741811;
        v258[3] = -1073741811LL;
        v258[4] = this;
        v258[5] = v489;
        v258[6] = *((_QWORD *)v489 + 6);
        v258[7] = a2->hSource;
        WdLogEvent5_WdError(v258);
        goto LABEL_430;
      }
    }
    if ( v44 )
    {
      v259 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1728LL);
      if ( !v259
        || !DXGADAPTER::IsDisplayAdapter(v259)
        || (VidPnSourceId = a2->VidPnSourceId,
            v259 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1728LL),
            VidPnSourceId >= *(_DWORD *)(*((_QWORD *)v259 + 319) + 80LL)) )
      {
        v257 = WdLogNewEntry5_WdError(v259, v34, Format);
        *(_QWORD *)(v257 + 24) = a2->VidPnSourceId;
        goto LABEL_340;
      }
      v34 = v489;
    }
    else
    {
      VidPnSourceId = (*(_DWORD *)(*((_QWORD *)v34 + 6) + 4LL) >> 6) & 0xF;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v490, v34);
    DXGALLOCATIONREFERENCE::MoveAssign(v503, (struct _EX_RUNDOWN_REF **)&v490);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v490);
    v501 = a2->hSource;
    v48 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1728LL);
    if ( !v48
      || !DXGADAPTER::IsDisplayAdapter(v48)
      || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL)
                                                                         + 2552LL)) )
    {
      v260 = WdLogNewEntry5_WdAssertion(v48, v47);
      *(_QWORD *)(v260 + 24) = 3911LL;
      WdLogEvent5_WdAssertion(v260);
    }
    v45 = *((_QWORD *)v489 + 6);
    v34 = (struct DXGALLOCATION *)*(unsigned int *)(v45 + 4);
    if ( ((unsigned __int16)v34 & 0x2000) != 0 )
    {
      v45 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      if ( !*(_BYTE *)(v45 + 298) )
        goto LABEL_341;
    }
    if ( (a2->Flags.Value & 0x60000) == 0 )
      goto LABEL_42;
    if ( (a2->Flags.Value & 0x60000) == 0x60000 )
    {
      v257 = WdLogNewEntry5_WdError(v45, v34, Format);
      *(_QWORD *)(v257 + 24) = 3930LL;
      goto LABEL_340;
    }
    if ( ((unsigned __int16)v34 & 0x1000) == 0 )
    {
      v257 = WdLogNewEntry5_WdError(v45, v34, Format);
      *(_QWORD *)(v257 + 24) = 3936LL;
      goto LABEL_340;
    }
    v262 = *((unsigned int *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                               *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
                               VidPnSourceId)
           + 10);
    if ( (v262 & 0x10) == 0 )
    {
      v264 = WdLogNewEntry5_WdWarning(v262, v261, v263);
      *(_QWORD *)(v264 + 24) = 3943LL;
LABEL_355:
      WdLogEvent5_WdWarning(v264);
      LODWORD(v188) = -1071775739;
      goto LABEL_430;
    }
    v265 = a2->Flags.Value;
    LOBYTE(v262) = (v262 & 0x20) == 0;
    if ( ((unsigned __int8)v262 & ((v265 & 0x40000) != 0)) != 0 )
    {
      v264 = WdLogNewEntry5_WdWarning(v262, v265, v263);
      *(_QWORD *)(v264 + 24) = 3949LL;
      goto LABEL_355;
    }
    v266 = v265 & 0xC0000;
    if ( (_DWORD)v266 != 786432 )
    {
LABEL_42:
      if ( !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
        goto LABEL_60;
      v49 = *(_DWORD *)a7 ^ (a2->Flags.Value ^ *(_DWORD *)a7) & 4;
      *(_DWORD *)a7 = v49;
      v50 = (a2->Flags.Value ^ v49) & 8 ^ v49;
      *(_DWORD *)a7 = v50;
      v51 = ((unsigned __int8)v50 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v50;
      *(_DWORD *)a7 = v51;
      v52 = (v51 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v51;
      *(_DWORD *)a7 = v52;
      v53 = (v52 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v52;
      *(_DWORD *)a7 = v53;
      v54 = v53 ^ (v53 ^ (4 * a2->Flags.Value)) & 0x200000;
      *(_DWORD *)a7 = v54;
      if ( (a2->Flags.Value & 0x8000000) != 0 )
        Duration = a2->Duration;
      else
        Duration = 0;
      *((_DWORD *)a7 + 38) = Duration;
      *(_DWORD *)a7 = v54 ^ (a2->Flags.Value ^ v54) & 0x20000000;
      pPresentRegions = a2->pPresentRegions;
      v504.Flags.Value = v504.Flags.Value & 0xFFFFF8FB | a2->Flags.Value & 4 | (a2->Flags.Value >> 9) & 0x700;
      if ( pPresentRegions
        && !pPresentRegions->MoveRectCount
        && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 298LL) )
      {
        v504.SubRectCnt = pPresentRegions->DirtyRectCount;
        v504.pDstSubRects = pPresentRegions->pDirtyRects;
      }
      DeviceFlipMode = VIDSCH_EXPORT::VidSchGetDeviceFlipMode(
                         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL),
                         *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                         VidPnSourceId,
                         (__int64)&a2->FlipInterval);
      *((_DWORD *)a7 + 32) = DeviceFlipMode;
      v60 = DeviceFlipMode;
      if ( DeviceFlipMode )
      {
        v17 = ((DeviceFlipMode - 1) & 0xFFFFFFFD) == 0;
        FlipInterval = a2->FlipInterval;
        if ( v17 )
        {
          v504.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
        }
        else
        {
          v504.FlipInterval = a2->FlipInterval;
          if ( v60 == 2 )
          {
LABEL_53:
            *((_DWORD *)a7 + 33) = FlipInterval;
            *((_DWORD *)a7 + 31) = VidPnSourceId;
            DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId);
            v63 = *(_DWORD *)(*((_QWORD *)v489 + 6) + 4LL) & 0x2000;
            if ( v63 && DisplayedPrimary && (*(_DWORD *)(*((_QWORD *)DisplayedPrimary + 6) + 4LL) & 0x2000) == 0 )
            {
              *(_DWORD *)a7 |= 0x400000u;
            }
            else if ( !v63 && DisplayedPrimary && (*(_DWORD *)(*((_QWORD *)DisplayedPrimary + 6) + 4LL) & 0x2000) != 0 )
            {
              *(_DWORD *)a7 |= 0x400000u;
            }
            else
            {
              *(_DWORD *)a7 &= ~0x400000u;
            }
            v64 = *((_DWORD *)a7 + 32);
            if ( v64 )
            {
              if ( v64 != *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1664) )
              {
                v185 = WdLogNewEntry5_WdEvent(VidPnSourceId);
                *(_QWORD *)(v185 + 24) = *((_QWORD *)this + 2);
                WdLogEvent5_WdEvent(v185);
                COREDEVICEACCESS::Release(a3);
                DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 3LL);
                v186 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
                v188 = v186;
                if ( v186 < 0 )
                {
                  v269 = WdLogNewEntry5_WdEvent(v187);
                  *(_QWORD *)(v269 + 24) = v188;
                  WdLogEvent5_WdEvent(v269);
                  COREDEVICEACCESS::AcquireSharedUncheck((__int64)a3);
LABEL_430:
                  v65 = v188;
                  goto LABEL_431;
                }
              }
            }
LABEL_60:
            v65 = 0;
            goto LABEL_61;
          }
        }
        v504.Flags.Value |= 8u;
        goto LABEL_53;
      }
      v267 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v58, v59);
      v267[3] = this;
      v268 = a2->FlipInterval;
LABEL_429:
      v267[4] = v268;
      LODWORD(v188) = -1073741811;
      v267[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v267);
      goto LABEL_430;
    }
    v257 = WdLogNewEntry5_WdError(v262, v266, v263);
    *(_QWORD *)(v257 + 24) = 3955LL;
LABEL_340:
    WdLogEvent5_WdError(v257);
    LODWORD(v188) = -1073741811;
    goto LABEL_430;
  }
  if ( !a2->pSrcSubRects || !a2->SubRectCnt || (*(_BYTE *)&v43 & 3) == 0 || (*(_DWORD *)&v43 & 0x100E803C) != 0 )
    goto LABEL_333;
  if ( (*(_BYTE *)&v43 & 2) == 0 )
  {
    if ( !v493 || !Height || (*(_BYTE *)&v43 & 0x82) != 0x80 )
      goto LABEL_333;
    if ( (*(_WORD *)&v43 & 0x600) != 0x600 )
      goto LABEL_267;
    v194 = (_QWORD *)WdLogNewEntry5_WdWarning(Width, v34, Format);
    v195 = -1073741811;
    v194[3] = -1073741811LL;
    v194[4] = this;
    v194[5] = a2->pSrcSubRects;
    v194[6] = a2->SubRectCnt;
    v194[7] = a2->Flags.Value;
LABEL_334:
    WdLogEvent5_WdWarning(v194);
    goto LABEL_335;
  }
  if ( (*(_DWORD *)&v43 & 0x100681) != 0 )
  {
LABEL_333:
    v194 = (_QWORD *)WdLogNewEntry5_WdWarning(Width, v34, Format);
    v195 = -1073741811;
    v194[3] = this;
    v194[4] = a2->pSrcSubRects;
    v194[5] = a2->SubRectCnt;
    v255 = a2->Flags.Value;
    v194[7] = -1073741811LL;
    v194[6] = v255;
    goto LABEL_334;
  }
LABEL_267:
  v202 = *((_QWORD *)v499 + 6);
  v203 = *(_DWORD *)(v202 + 4);
  if ( (v203 & 2) == 0 && (v203 & 1) == 0 )
  {
    v196 = (_QWORD *)WdLogNewEntry5_WdError(v202, v34, Format);
    v195 = -1073741811;
    v196[3] = -1073741811LL;
    v196[4] = this;
    v196[5] = v499;
    v196[6] = *((_QWORD *)v499 + 6);
    v196[7] = a2->hDestination;
    goto LABEL_258;
  }
  VidPnSourceId = (v203 >> 6) & 0xF;
  v204 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1728LL);
  if ( !v204
    || !DXGADAPTER::IsDisplayAdapter(v204)
    || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL)
                                                                       + 2552LL)) )
  {
    v205 = WdLogNewEntry5_WdAssertion(v204, v34);
    *(_QWORD *)(v205 + 24) = 3619LL;
    WdLogEvent5_WdAssertion(v205);
  }
  v206 = v499;
  *((_DWORD *)a7 + 31) = VidPnSourceId;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v490, v206);
  DXGALLOCATIONREFERENCE::MoveAssign(v503, (struct _EX_RUNDOWN_REF **)&v490);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v490);
  v501 = a2->hDestination;
  v210 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&v210 & 1) == 0 )
  {
    v504.DstRect.bottom = v506[0];
    *(_QWORD *)&v504.DstRect.left = 0LL;
    v504.DstRect.right = v19;
    if ( (*(_BYTE *)&v210 & 0x40) != 0 )
    {
      v241 = a2->DstRect.right;
      if ( v241 <= a2->DstRect.left
        || (v208 = (unsigned int)a2->DstRect.bottom, (int)v208 <= a2->DstRect.top)
        || v241 <= 0
        || (int)v208 <= 0 )
      {
LABEL_311:
        v194 = (_QWORD *)WdLogNewEntry5_WdWarning(v208, v207, v209);
        v195 = -1073741811;
        v194[3] = -1073741811LL;
        v194[4] = a2->DstRect.left;
        v194[5] = a2->DstRect.top;
        v194[6] = a2->DstRect.right;
        v194[7] = a2->DstRect.bottom;
        goto LABEL_334;
      }
      if ( !DXGPRESENT::IntersectRect(&v504.DstRect, &a2->DstRect, &v504.DstRect) )
      {
        v242 = 0;
LABEL_336:
        LODWORD(v188) = v242;
        goto LABEL_430;
      }
    }
    LODWORD(v208) = a2->SubRectCnt;
    v65 = 0;
    v243 = 0;
    if ( !(_DWORD)v208 )
    {
LABEL_330:
      v239 = v504.DstRect;
      LODWORD(v207) = a2->Flags.0;
      v238 = v504.Flags.Value;
      v504.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_331;
    }
    while ( 1 )
    {
      v244 = v243;
      v245 = &a2->pSrcSubRects[v244];
      *(_QWORD *)&Source1.hDevice = 0LL;
      *(_QWORD *)&Source1.Flags.0 = 0LL;
      if ( !DXGPRESENT::IntersectRect((struct tagRECT *)&Source1, v245, &v504.DstRect)
        || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v244], 0x10uLL) != 16 )
      {
        break;
      }
      LODWORD(v208) = a2->SubRectCnt;
      if ( ++v243 >= (unsigned int)v208 )
      {
        v65 = 0;
        goto LABEL_330;
      }
    }
    v250 = (_QWORD *)WdLogNewEntry5_WdError(v247, v246, v248);
    LODWORD(v188) = -1073741811;
    v250[3] = -1073741811LL;
    v250[4] = a2->DstRect.left;
    v250[5] = a2->DstRect.top;
    v250[6] = a2->DstRect.right;
    v250[7] = a2->DstRect.bottom;
    WdLogEvent5_WdError(v250);
    v254 = (_QWORD *)WdLogNewEntry5_WdError(v252, v251, v253);
    v254[3] = v243;
    v254[4] = a2->pSrcSubRects[v243].left;
    v254[5] = a2->pSrcSubRects[v243].top;
    v254[6] = a2->pSrcSubRects[v243].right;
    v254[7] = a2->pSrcSubRects[v243].bottom;
    WdLogEvent5_WdError(v254);
    goto LABEL_430;
  }
  if ( v499 == v489 )
  {
    v196 = (_QWORD *)WdLogNewEntry5_WdError(v208, v207, v209);
    v195 = -1073741811;
    v196[3] = -1073741811LL;
    v196[4] = this;
    v196[5] = v489;
    v196[6] = a2->hSource;
    v196[7] = a2->hDestination;
    goto LABEL_258;
  }
  v211 = *((_QWORD *)v489 + 6);
  v212 = *(_DWORD *)(v211 + 4);
  if ( ((v212 & 2) != 0 || (v212 & 1) != 0) && ((v212 >> 6) & 0xF) != VidPnSourceId )
  {
    v196 = (_QWORD *)WdLogNewEntry5_WdError(v211, v207, v209);
    v195 = -1073741811;
    v196[3] = -1073741811LL;
    v196[4] = this;
    v196[5] = v489;
    v196[6] = (*(_DWORD *)(*((_QWORD *)v489 + 6) + 4LL) >> 6) & 0xF;
    v196[7] = VidPnSourceId;
    goto LABEL_258;
  }
  v213 = (unsigned int)a2->SrcRect.right;
  v214 = a2->SrcRect.left;
  if ( (int)v213 <= v214
    || (v209 = (unsigned int)a2->SrcRect.bottom, v211 = (unsigned int)a2->SrcRect.top, (int)v209 <= (int)v211)
    || (v215 = v493, v214 >= (int)v493)
    || (v216 = Height, (int)v211 >= (int)Height)
    || (int)v213 <= 0
    || (int)v209 <= 0 )
  {
    v196 = (_QWORD *)WdLogNewEntry5_WdError(v211, v213, v209);
    v195 = -1073741811;
    v196[3] = -1073741811LL;
    v196[4] = a2->SrcRect.left;
    v196[5] = a2->SrcRect.top;
    v196[6] = a2->SrcRect.right;
    v196[7] = a2->SrcRect.bottom;
    goto LABEL_258;
  }
  v208 = a2->SubRectCnt;
  v217 = 0;
  if ( !(_DWORD)v208 )
    goto LABEL_297;
  do
  {
    v218 = v217;
    v219 = &a2->pSrcSubRects[v218];
    *(_QWORD *)&Source1.hDevice = 0LL;
    *(_QWORD *)&Source1.Flags.0 = 0LL;
    if ( !DXGPRESENT::IntersectRect((struct tagRECT *)&Source1, v219, &a2->SrcRect)
      || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v218], 0x10uLL) != 16 )
    {
      v232 = (_QWORD *)WdLogNewEntry5_WdError(v221, v220, v209);
      v195 = -1073741811;
      v232[3] = -1073741811LL;
      v232[4] = a2->SrcRect.left;
      v232[5] = a2->SrcRect.top;
      v232[6] = a2->SrcRect.right;
      v232[7] = a2->SrcRect.bottom;
      WdLogEvent5_WdError(v232);
      v196 = (_QWORD *)WdLogNewEntry5_WdError(v234, v233, v235);
      v196[3] = v217;
      v196[4] = a2->pSrcSubRects[v217].left;
      v196[5] = a2->pSrcSubRects[v217].top;
      v196[6] = a2->pSrcSubRects[v217].right;
      v196[7] = a2->pSrcSubRects[v217].bottom;
      goto LABEL_258;
    }
    v208 = a2->SubRectCnt;
    ++v217;
  }
  while ( v217 < (unsigned int)v208 );
  v216 = Height;
  v215 = v493;
LABEL_297:
  v207 = a2->Flags.Value;
  if ( (v207 & 0x40) == 0 )
  {
    v236 = (unsigned int)v494;
    v237 = v506[0];
    if ( (_DWORD)v494 == v215 && v506[0] == v216 )
    {
      SrcRect = a2->SrcRect;
      v504.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_315;
    }
    v240 = (_QWORD *)WdLogNewEntry5_WdWarning(v208, v207, v209);
    v240[5] = v237;
    v240[6] = v493;
    v240[7] = Height;
    v240[3] = this;
    v240[4] = v236;
    WdLogEvent5_WdWarning(v240);
    v195 = -1073741811;
    goto LABEL_335;
  }
  v209 = (unsigned int)a2->DstRect.right;
  v222 = a2->DstRect.left;
  if ( (int)v209 <= v222 )
    goto LABEL_311;
  v207 = (unsigned int)a2->DstRect.bottom;
  v223 = a2->DstRect.top;
  if ( (int)v207 <= v223 || v222 >= (int)v494 || v223 >= (int)v506[0] || (int)v209 <= 0 || (int)v207 <= 0 )
    goto LABEL_311;
  v224 = (unsigned int)(v209 - v222);
  v225 = (unsigned int)(a2->SrcRect.right - a2->SrcRect.left);
  if ( (_DWORD)v225 != (_DWORD)v224
    || (v207 = (unsigned int)(v207 - v223),
        v225 = (unsigned int)(a2->SrcRect.bottom - a2->SrcRect.top),
        (_DWORD)v225 != (_DWORD)v207) )
  {
    v196 = (_QWORD *)WdLogNewEntry5_WdError(v225, v207, v224);
    v195 = -1073741811;
    v196[3] = -1073741811LL;
    v196[4] = this;
    v196[5] = a2->Flags.Value;
    v196[6] = v499;
    v196[7] = VidPnSourceId;
    goto LABEL_258;
  }
  v195 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), a2->SubRectCnt);
  if ( v195 < 0 )
    goto LABEL_335;
  v226 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
  v227 = 0;
  v228 = a2->DstRect.left - a2->SrcRect.left;
  v229 = a2->DstRect.top - a2->SrcRect.top;
  for ( LODWORD(v208) = a2->SubRectCnt; v227 < (unsigned int)v208; LODWORD(v208) = a2->SubRectCnt )
  {
    v230 = v227++;
    v230 *= 2LL;
    *(&v226->left + 2 * v230) = v228 + *(&a2->pSrcSubRects->left + 2 * v230);
    *(&v226->right + 2 * v230) = v228 + *(&a2->pSrcSubRects->right + 2 * v230);
    *(&v226->top + 2 * v230) = v229 + *(&a2->pSrcSubRects->top + 2 * v230);
    *(&v226->bottom + 2 * v230) = v229 + *(&a2->pSrcSubRects->bottom + 2 * v230);
  }
  SrcRect = a2->DstRect;
  LODWORD(v207) = a2->Flags.0;
  v504.pDstSubRects = v226;
LABEL_315:
  v238 = (*(_WORD *)&v504.Flags.0 ^ (unsigned __int16)((unsigned int)v207 >> 9)) & 0x800 ^ v504.Flags.Value;
  v504.DstRect = SrcRect;
  v65 = 0;
  v239 = a2->SrcRect;
LABEL_331:
  v249 = a2->Color;
  v504.SubRectCnt = v208;
  v504.Color = v249;
  v504.Flags.Value = v207 & 3 | v238 & 0xFFFFF78C | ((unsigned __int64)(v207 & 0xE00 | ((unsigned int)v207 >> 4) & 0x10000) >> 5);
  v504.SrcRect = v239;
LABEL_61:
  v66 = DXGCONTEXT::CheckDevicePresentSettings(
          this,
          (a2->Flags.Value >> 2) & 1,
          (a2->Flags.Value >> 28) & 1,
          VidPnSourceId);
  LODWORD(v67) = v66;
  if ( v66 < 0 )
  {
    if ( v66 != -1071774920 )
      goto LABEL_99;
    if ( (a2->Flags.Value & 4) == 0 )
      goto LABEL_431;
    IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
    v271 = (struct _KTHREAD **)*((_QWORD *)this + 2);
    v272 = VidPnSourceId;
    if ( !IsFullWDDMDevice )
    {
      DXGDEVICE::SetDisplayedPrimary(v271, VidPnSourceId, v489, 0, 1u);
LABEL_431:
      LODWORD(v67) = v65;
      goto LABEL_99;
    }
LABEL_364:
    DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe((DXGDEVICE *)v271, v272);
    DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId, v489, *((_DWORD *)a7 + 36), 1u);
    *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1664) = *((_DWORD *)a7 + 32);
    goto LABEL_431;
  }
  if ( (a2->Flags.Value & 4) != 0 )
  {
    if ( a2->pPresentRegions )
    {
      LODWORD(v67) = DXGCONTEXT::ValidatePresentRegions(this, a2, v493, Height);
      if ( (int)v67 < 0 )
        goto LABEL_99;
    }
  }
  if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
         VidPnSourceId,
         0) )
  {
    v273 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
    v274 = (*(__int64 (**)(void))(*(_QWORD *)&pDstSubRects + 8LL))();
    v275 = a2->Flags.Value & 4;
    if ( v273 != v274 )
    {
      if ( v275 )
      {
        v71 = a3;
LABEL_371:
        *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (*(__int64 (**)(void))(*(_QWORD *)&pDstSubRects + 8LL))();
        CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                         *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
                         VidPnSourceId);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
        goto LABEL_376;
      }
      DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v496);
      v71 = a3;
      COREDEVICEACCESS::Release(a3);
      DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v510, *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
      DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v510, v276);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v496);
      v277 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
      v67 = (struct DXGALLOCATION *)v277;
      if ( v277 >= 0 )
      {
        DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v510, 1u);
        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v510);
        goto LABEL_371;
      }
LABEL_369:
      v279 = WdLogNewEntry5_WdEvent(v278);
      *(_QWORD *)(v279 + 24) = v67;
      *(_QWORD *)(v279 + 32) = this;
      WdLogEvent5_WdEvent(v279);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v71);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v510);
      goto LABEL_99;
    }
    v71 = a3;
    if ( !v275 )
    {
      COREDEVICEACCESS::Release(a3);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v496);
      DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v510, *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
      DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v510, v281);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v496);
      v282 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
      v67 = (struct DXGALLOCATION *)v282;
      if ( v282 < 0 )
        goto LABEL_369;
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v510, 0);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v510);
    }
LABEL_376:
    v70 = (DXGDEVICE *)*((_QWORD *)this + 2);
    goto LABEL_68;
  }
  v70 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( (*((_DWORD *)v70 + VidPnSourceId + 272) & 0x200) == 0 && (a2->Flags.Value & 0x10000000) == 0 )
  {
    v283 = (_QWORD *)WdLogNewEntry5_WdWarning(v70, v68, v69);
    LODWORD(v67) = -1071775739;
    v283[3] = -1071775739LL;
    v283[4] = this;
    v283[5] = a2->hSource;
    v284 = v489;
    v283[7] = VidPnSourceId;
    goto LABEL_445;
  }
  v71 = a3;
LABEL_68:
  if ( DXGDEVICE::IsFullWDDMDevice(v70) )
  {
    v73 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (a2->Flags.Value & 0x10) == 0, v71);
    v75 = v73;
    if ( v73 < 0 )
    {
      v285 = WdLogNewEntry5_WdEvent(v74);
      *(_QWORD *)(v285 + 24) = v75;
      *(_QWORD *)(v285 + 32) = this;
      WdLogEvent5_WdEvent(v285);
      LODWORD(v67) = v75;
      goto LABEL_99;
    }
    v76 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 368);
    if ( ((*((_DWORD *)a7 + 32) - 3) & 0xFFFFFFFD) == 0 )
      goto LABEL_71;
    LODWORD(v67) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 46, a3, 0);
    if ( (int)v67 < 0 )
      goto LABEL_95;
    if ( !*v76 )
    {
      v288 = WdLogNewEntry5_WdAssertion(v287, v286);
      *(_QWORD *)(v288 + 24) = 4233LL;
      WdLogEvent5_WdAssertion(v288);
    }
LABEL_71:
    LODWORD(v67) = DXGCONTEXT::CheckDevicePresentSettings(
                     this,
                     (a2->Flags.Value >> 2) & 1,
                     (a2->Flags.Value >> 28) & 1,
                     VidPnSourceId);
    if ( (int)v67 >= 0 )
    {
      if ( (a2->Flags.Value & 4) != 0 )
      {
        if ( v489 )
        {
          v77 = *((_QWORD *)v489 + 6);
          if ( v77 )
          {
            if ( (*(_DWORD *)(v77 + 4) & 0x2000) != 0
              && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v489) )
            {
              v290 = (_QWORD *)WdLogNewEntry5_WdEvent(v189);
              LODWORD(v67) = -1071775739;
              v290[3] = -1071775739LL;
              v290[4] = this;
              v290[5] = v489;
              WdLogEvent5_WdEvent(v290);
              if ( *v76 )
              {
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
                  *v76,
                  0LL);
                *v76 = 0LL;
              }
              goto LABEL_99;
            }
          }
        }
      }
      if ( (a2->Flags.Value & 0x2000) != 0 )
      {
        v291 = ADAPTER_DISPLAY::GetCurrentOrientation(
                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
                 VidPnSourceId,
                 1LL);
        v292 = 0;
        if ( v291 != 1 )
          v292 = 128;
        v78 = v292 | v504.Flags.Value & 0xFFFFFF7F;
        v504.Flags.Value = v78;
      }
      else
      {
        v78 = v504.Flags.Value;
      }
      if ( bTracingEnabled )
      {
        v79 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        v80 = *(struct VIDMM_GLOBAL **)(v79 + 552);
        v81 = *(VIDMM_EXPORT **)(v79 + 544);
        if ( (a2->Flags.Value & 4) != 0 )
        {
          LODWORD(v494) = v504.FlipInterval;
          VIDMM_EXPORT::VidMmETWAllocationHandle(v81, v80, hSource);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0pqpqtt((__int64)&DxgkControlGuid_Context, (__int64)&EventFlip, 0LL);
          goto LABEL_82;
        }
        pDstSubRects = (struct _D3DKMT_UNLOCK2)v504.pDstSubRects;
        LODWORD(v494) = v504.SubRectCnt;
        v496 = (DXGADAPTERSTOPRESETLOCKSHARED *)VIDMM_EXPORT::VidMmETWAllocationHandle(v81, v80, v491);
        v293 = VIDMM_EXPORT::VidMmETWAllocationHandle(v81, v80, hSource);
        v294 = *((_QWORD *)this + 46);
        v295 = (unsigned int)v494;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0ppxppttqddddddddq(
            (__int64)&DxgkControlGuid_Context,
            (__int64)&EventBlit,
            0LL,
            a2->hWindow,
            v294,
            0LL,
            v293,
            v496,
            1,
            0,
            v78,
            v504.SrcRect.left,
            v504.SrcRect.right,
            v504.SrcRect.top,
            v504.SrcRect.bottom,
            v504.DstRect.left,
            v504.DstRect.right,
            v504.DstRect.top,
            v504.DstRect.bottom,
            (_DWORD)v494);
        v296 = 0;
        if ( v295 )
        {
          v297 = pDstSubRects;
          while ( 1 )
          {
            v298 = v295 - v296;
            if ( v295 - v296 > 0x10 )
              break;
            v299 = v295 - v296;
            if ( v298 )
              goto LABEL_401;
LABEL_403:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v472) = v299;
              LODWORD(v470) = v298 <= 0x10;
              McTemplateK0ptqDR2DR2DR2DR2(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventBlitRect,
                0LL,
                v294,
                v470,
                v472,
                v514,
                v513,
                &v510,
                v512);
              v297 = pDstSubRects;
            }
            v296 += 16;
            if ( v296 >= v295 )
            {
              v8 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v508.left;
              goto LABEL_82;
            }
          }
          v299 = 16;
LABEL_401:
          v300 = 0LL;
          v301 = 0;
          do
          {
            v302 = v301 + v296;
            ++v301;
            v302 *= 2LL;
            v300 += 4LL;
            *(_DWORD *)&v513[v300 + 60] = *(_DWORD *)(*(_QWORD *)&v297 + 8 * v302);
            *(_DWORD *)&v512[v300 + 60] = *(_DWORD *)(*(_QWORD *)&v297 + 8 * v302 + 8);
            *(_DWORD *)((char *)&v509[34] + v300 + 12) = *(_DWORD *)(*(_QWORD *)&v297 + 8 * v302 + 4);
            *(_DWORD *)&v512[v300 - 4] = *(_DWORD *)(*(_QWORD *)&v297 + 8 * v302 + 12);
          }
          while ( v301 < v299 );
          goto LABEL_403;
        }
      }
LABEL_82:
      LODWORD(v67) = DXGCONTEXT::SubmitPresent(
                       this,
                       a2,
                       (const struct DXGK_PRESENT_PARAMS *)a2,
                       a2->BroadcastContextCount,
                       v502,
                       v489,
                       hSource,
                       v491,
                       &v504,
                       a2->pPresentRegions,
                       *((struct _VIDMM_DMA_BUFFER **)this + 46),
                       v8,
                       (enum _D3DDDIFORMAT)v500,
                       a3);
      if ( (int)v67 >= 0 )
      {
        v82 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL);
        v83 = 3968LL * VidPnSourceId;
        if ( *(_DWORD *)(*(_QWORD *)(v82 + 112) + v83 + 1068) == -1 )
        {
          v303 = WdLogNewEntry5_WdAssertion(v83, v82);
          *(_QWORD *)(v303 + 24) = 4347LL;
          WdLogEvent5_WdAssertion(v303);
        }
      }
      *((_QWORD *)this + 46) = 0LL;
      if ( (int)v67 < 0 )
        goto LABEL_95;
      if ( (a2->Flags.Value & 4) != 0 )
      {
        v84 = *((_QWORD *)this + 2);
        v85 = *(_QWORD *)(v84 + 1728);
        if ( v85 == *(_QWORD *)(*(_QWORD *)(v84 + 16) + 16LL) )
        {
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v85 + 2552), VidPnSourceId);
          v84 = *((_QWORD *)this + 2);
        }
        DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v84, VidPnSourceId, v489, *((_DWORD *)v8 + 36), 1u);
        *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1664) = *((_DWORD *)v8 + 32);
        UpdatePostComposition(
          VidPnSourceId,
          0,
          0,
          0,
          *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL));
      }
      goto LABEL_90;
    }
    if ( *v76 )
    {
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
        *v76,
        0LL);
      *v76 = 0LL;
    }
    if ( (_DWORD)v67 == -1071774920 )
    {
      if ( (a2->Flags.Value & 4) == 0 )
        goto LABEL_431;
      v289 = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
      v271 = (struct _KTHREAD **)*((_QWORD *)this + 2);
      v272 = VidPnSourceId;
      if ( !v289 )
      {
        DXGDEVICE::SetDisplayedPrimary(v271, VidPnSourceId, v489, 0, 1u);
        LODWORD(v67) = 0;
        goto LABEL_99;
      }
      goto LABEL_364;
    }
LABEL_90:
    if ( (int)v67 >= 0 )
    {
      v86 = v503[0];
      if ( v503[0] )
      {
        if ( (a2->Flags.Value & 0x10000000) == 0 )
        {
          v87 = *((_QWORD *)this + 2);
          v88 = *(_QWORD *)(v87 + 1728);
          if ( v88 )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(v87 + 40) + 298LL) )
            {
              memset((char *)v509 + 8, 0, 0x130uLL);
              v454 = 2LL;
              v455 = v501;
              LODWORD(v509[0]) = a2->hDevice;
              DWORD1(v509[0]) = v501;
              v456 = (*(_DWORD *)(v503[0][6].Count + 4) >> 6) & 0xF;
              HIDWORD(v509[0]) = a2->BroadcastContextCount;
              DWORD2(v509[0]) = v456;
              v457 = a2->BroadcastContext;
              v458 = &v509[1];
              do
              {
                v459 = *((_OWORD *)v457 + 1);
                *v458 = *(_OWORD *)v457;
                v460 = *((_OWORD *)v457 + 2);
                v458[1] = v459;
                v461 = *((_OWORD *)v457 + 3);
                v458[2] = v460;
                v462 = *((_OWORD *)v457 + 4);
                v458[3] = v461;
                v463 = *((_OWORD *)v457 + 5);
                v458[4] = v462;
                v464 = *((_OWORD *)v457 + 6);
                v458[5] = v463;
                v465 = *((_OWORD *)v457 + 7);
                v457 += 32;
                v458[6] = v464;
                v458 += 8;
                *(v458 - 1) = v465;
                --v454;
              }
              while ( v454 );
              v466 = *(_QWORD *)(v88 + 2552);
              LODWORD(v509[17]) = 0;
              LODWORD(v509[18]) = 0;
              LODWORD(v509[19]) = 4;
              v467 = OUTPUTDUPL_MGR::ProcessPresent(
                       *(OUTPUTDUPL_MGR **)(v466 + 104),
                       this,
                       (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS)4,
                       v455,
                       HIDWORD(v509[0]),
                       (struct _D3DKMT_PRESENT_RGNS *)&v509[17],
                       (const struct DXGK_PRESENT_PARAMS *)a2,
                       (*(_DWORD *)(v86[6].Count + 4) >> 6) & 0xF,
                       v502,
                       a3);
              if ( v467 == 259 )
                v467 = 0;
              LODWORD(v67) = v467;
            }
          }
        }
      }
    }
    goto LABEL_95;
  }
  v304 = *((_QWORD *)this + 2);
  v305 = *(_QWORD *)(v304 + 1728);
  if ( !v305 )
  {
    v322 = WdLogNewEntry5_WdAssertion(v304, v72);
    *(_QWORD *)(v322 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v322 + 32) = -1073741822LL;
    WdLogEvent5_WdAssertion(v322);
    LODWORD(v67) = -1073741811;
    goto LABEL_99;
  }
  v306 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  *(_QWORD *)&Source1.Flags.0 = 0LL;
  *(_QWORD *)&Source1.hDevice = 0LL;
  if ( (*(_DWORD *)&v306 & 0x10000000) == 0 )
  {
    v67 = v499;
    if ( (*(_BYTE *)&v306 & 4) != 0 )
      v67 = v489;
    v307 = *(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL);
    if ( (v307 & 0x10) != 0 )
    {
      v308 = (_QWORD *)WdLogNewEntry5_WdEvent(v304);
      v308[3] = -1071775482LL;
      v308[4] = this;
      v308[5] = v67;
      WdLogEvent5_WdEvent(v308);
      LODWORD(v67) = -1071775482;
      goto LABEL_99;
    }
    v309 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v305 + 2552), (v307 >> 6) & 0xF);
    memset(&v510, 0, 40);
    v510.Flags.Value = 1;
    v510.Rotation = -1;
    *(_OWORD *)v512 = v309;
    v310 = *((_QWORD *)this + 2);
    v510.hAllocation = *(HANDLE *)(*((_QWORD *)v67 + 6) + 16LL);
    v312 = ADAPTER_RENDER::DdiDescribeAllocation(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v310 + 16) + 16LL) + 2560LL),
             &v510,
             v311);
    v316 = v312;
    if ( v312 < 0 )
    {
      v317 = (_QWORD *)WdLogNewEntry5_WdError(v314, v313, v315);
      v317[3] = v316;
      v317[4] = this;
      v317[5] = *((unsigned int *)v67 + 4);
      v317[6] = v67;
      v317[7] = (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v317);
      LODWORD(v67) = -1073741811;
      goto LABEL_99;
    }
    v318 = v510.Width;
    if ( v510.Width == *(_DWORD *)v512 )
    {
      v319 = v510.Height;
      if ( v510.Height == *(_DWORD *)&v512[4] )
      {
        if ( *((_BYTE *)this + 449) )
        {
LABEL_421:
          v71 = a3;
          Source1.Flags.Value = v318;
          v304 = *((_QWORD *)this + 2);
          goto LABEL_424;
        }
        v320 = RemoveAlphaChannel(*(enum _D3DDDIFORMAT *)&v512[8]);
        if ( RemoveAlphaChannel(v510.Format) == v320 )
        {
          v319 = v510.Height;
          LODWORD(v318) = v510.Width;
          goto LABEL_421;
        }
      }
    }
    v321 = (_QWORD *)WdLogNewEntry5_WdEvent(v318);
    v321[3] = -1071775482LL;
    v321[4] = this;
    v321[5] = v67;
    WdLogEvent5_WdEvent(v321);
    LODWORD(v67) = -1071775739;
    goto LABEL_99;
  }
  Source1.Flags.Value = a2[1].hSource;
  v319 = a2[1].hDestination;
LABEL_424:
  *((_DWORD *)&Source1.Flags + 1) = v319;
  LODWORD(v67) = ADAPTER_DISPLAY::PresentDisplayOnly(
                   *(ADAPTER_DISPLAY **)(*(_QWORD *)(v304 + 1728) + 2552LL),
                   this,
                   VidPnSourceId,
                   a2,
                   &v504,
                   v71,
                   (struct tagRECT *)&Source1);
  if ( (int)v67 >= 0 )
  {
    if ( (a2->Flags.Value & 4) != 0 )
    {
      DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), VidPnSourceId);
      DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId, v489, 0, 1u);
      UpdatePostComposition(
        VidPnSourceId,
        0,
        0,
        0,
        *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL));
    }
    goto LABEL_90;
  }
LABEL_95:
  v89 = (_QWORD *)((char *)this + 368);
LABEL_96:
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
    && (_DWORD)v67 != -1073741130 )
  {
    v468 = WdLogNewEntry5_WdAssertion(v91, v90);
    *(_QWORD *)(v468 + 24) = 5616LL;
    WdLogEvent5_WdAssertion(v468);
  }
  if ( *v89 )
  {
    v469 = WdLogNewEntry5_WdAssertion(v91, v90);
    *(_QWORD *)(v469 + 24) = 5617LL;
    WdLogEvent5_WdAssertion(v469);
  }
LABEL_99:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v503);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v499);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v489);
  return (unsigned int)v67;
}
