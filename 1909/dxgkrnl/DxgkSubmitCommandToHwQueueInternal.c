/*
 * XREFs of DxgkSubmitCommandToHwQueueInternal @ 0x1C024C6B8
 * Callers:
 *     ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A380 (-VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommandToHwQueue @ 0x1C024C6A0 (DxgkSubmitCommandToHwQueue.c)
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017EF8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0018020 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C02277F0 (-VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SU.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C0249328 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueueInternal(
        struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1,
        char a2,
        const GUID *a3)
{
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _SLIST_ENTRY **v21; // r14
  _QWORD *v22; // rax
  __int64 hHwQueue; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  __int64 v33; // r9
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  const GUID *v38; // r8
  int v39; // [rsp+30h] [rbp-158h] BYREF
  __int64 v40; // [rsp+38h] [rbp-150h]
  char v41; // [rsp+40h] [rbp-148h]
  struct DXGHWQUEUE *v42[2]; // [rsp+48h] [rbp-140h] BYREF
  _BYTE v43[16]; // [rsp+58h] [rbp-130h] BYREF
  _BYTE v44[8]; // [rsp+68h] [rbp-120h] BYREF
  __int64 v45; // [rsp+70h] [rbp-118h]
  char v46; // [rsp+78h] [rbp-110h]
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v47; // [rsp+80h] [rbp-108h]
  _BYTE v48[56]; // [rsp+88h] [rbp-100h] BYREF
  _BYTE v49[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v4 = a1;
  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2160;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2160);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2160LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v42[0] = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v10);
    *(_QWORD *)(v11 + 24) = PsGetCurrentProcess(v13, v12);
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v14);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v15, &EventProfilerExit, v16, v39);
    }
    return 3221225485LL;
  }
  memset(v48, 0, sizeof(v48));
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)MmUserProbeAddress;
    *(_OWORD *)v48 = *(_OWORD *)&v4->hHwQueue;
    *(_OWORD *)&v48[16] = *(_OWORD *)&v4->CommandBuffer;
    *(_OWORD *)&v48[32] = *(_OWORD *)&v4->pPrivateDriverData;
    *(_QWORD *)&v48[48] = v4->WrittenPrimaries;
    v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)v48;
  }
  v47 = v4;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v43, v4->hHwQueue, (struct _KTHREAD **)Current, v42, 0);
  v21 = (struct _SLIST_ENTRY **)v42[0];
  if ( !v42[0] )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
    v22[3] = Current;
    hHwQueue = v4->hHwQueue;
    v22[5] = -1073741811LL;
LABEL_17:
    v22[4] = hHwQueue;
    WdLogEvent5_WdError(v22);
LABEL_18:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v43, v24);
    goto LABEL_7;
  }
  if ( v4->NumPrimaries > 0x10 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
    v22[3] = v21;
    hHwQueue = v4->NumPrimaries;
    v22[5] = 16LL;
    v22[6] = -1073741811LL;
    goto LABEL_17;
  }
  if ( !v4->pPrivateDriverData )
  {
    if ( !v4->PrivateDriverDataSize )
      goto LABEL_26;
LABEL_25:
    v25 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v25 + 24) = 996LL;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_18;
  }
  if ( !v4->PrivateDriverDataSize )
    goto LABEL_25;
LABEL_26:
  v26 = *(_QWORD *)(*((_QWORD *)v42[0] + 2) + 16LL);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
  if ( *(_BYTE *)(v27 + 185) )
  {
    v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v27 + 4144),
            Current,
            v4);
LABEL_28:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v43, v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v30);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v31, &EventProfilerExit, v32, v39);
    return v29;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v42,
    *(struct DXGDEVICE **)(*((_QWORD *)v42[0] + 2) + 16LL));
  v45 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
  v46 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, v26, 0, v33, 0);
  v34 = COREDEVICEACCESS::AcquireShared((__int64)v49, 0xFFFFFFFF, 0LL);
  if ( v34 >= 0 )
  {
    v29 = DXGHWQUEUE::SubmitCommand(v21, v4, a2);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    if ( v46 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v42);
    goto LABEL_28;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
  if ( v46 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v42);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v43, v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v36);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v39);
  return (unsigned int)v34;
}
