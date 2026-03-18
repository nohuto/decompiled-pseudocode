/*
 * XREFs of ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4904 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120BCC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C01228E0 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C013FB08 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C013FED4 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EC370 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01FC924 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C01FEC20 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C021A774 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223420 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223C84 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0225EE8 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C023CEAC (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02467F4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247D24 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0249F94 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A648 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C025F12C (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDescribeAllocation(
        ADAPTER_RENDER *this,
        struct _DXGKARG_DESCRIBEALLOCATION *a2,
        const GUID *a3)
{
  _OWORD *hAllocation; // rcx
  __int64 v6; // rbp
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // r9d
  __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // r13
  __int64 v20; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v22; // rax
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 Format; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  const GUID *v37; // r8
  int v39; // [rsp+20h] [rbp-98h]
  int v40; // [rsp+28h] [rbp-90h] BYREF
  __int64 v41; // [rsp+30h] [rbp-88h]
  char v42; // [rsp+38h] [rbp-80h]
  char v43[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 5003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5003);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 5003);
  hAllocation = a2->hAllocation;
  if ( !a2->hAllocation )
  {
    LODWORD(v6) = -1073741811;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 185LL) )
  {
    LODWORD(v6) = 0;
    *(_OWORD *)&a2->hAllocation = hAllocation[4];
    *(_OWORD *)&a2->Format = hAllocation[5];
    *(_OWORD *)&a2->RefreshRate.Denominator = hAllocation[6];
    a2->Rotation = -1;
    goto LABEL_49;
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v12 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v10 = *v12;
      }
    }
  }
  v39 = 0;
  v13 = v10 + 120;
  if ( !v10 )
    v13 = 0LL;
  if ( v13 && *(struct _KTHREAD **)(v13 + 8) == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v14 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( v10 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v17 = *(_DWORD *)(v13 + 16);
        if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v15, &EventBlockThread, v16, v17);
      }
      ExAcquirePushLockExclusiveEx(v13, 0LL);
    }
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v39 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v20 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_37;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v22 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
  if ( !CurrentProcessSessionId
    || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId
    || IsThreadCrossSessionAttached()
    || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
    || !*(_QWORD *)ThreadWin32Thread )
  {
    v20 = 0LL;
    goto LABEL_37;
  }
  v20 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v20 )
  {
LABEL_37:
    v25 = 0;
    goto LABEL_38;
  }
  v25 = *(_DWORD *)(v20 + 136);
LABEL_38:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v43,
    *((struct DXGADAPTER **)this + 2));
  v6 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_DESCRIBEALLOCATION *))(*((_QWORD *)this + 2) + 352LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
         a2);
  if ( v43[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v20 && *(_DWORD *)(v20 + 136) != v25 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27);
    v32[3] = 275LL;
    v32[4] = 38LL;
    v32[5] = *(int *)(v20 + 136);
    v32[6] = v25;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
  v33[3] = v6;
  v33[4] = a2->hAllocation;
  v33[5] = a2->Width;
  v33[6] = a2->Height;
  Format = a2->Format;
  v33[7] = Format;
  if ( (_DWORD)v6 )
  {
    v35 = WdLogNewEntry5_WdError(Format);
    *(_QWORD *)(v35 + 24) = v6;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v39 == 2 )
  {
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_49:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v40);
  return (unsigned int)v6;
}
