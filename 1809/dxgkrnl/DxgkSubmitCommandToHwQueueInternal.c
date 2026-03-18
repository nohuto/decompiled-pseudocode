/*
 * XREFs of DxgkSubmitCommandToHwQueueInternal @ 0x1C0217C78
 * Callers:
 *     ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F9BB0 (-VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommandToHwQueue @ 0x1C0217C60 (DxgkSubmitCommandToHwQueue.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00111A4 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001130C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C01F7168 (-VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SU.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C0214900 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueueInternal(
        struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1,
        char a2,
        const GUID *a3)
{
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v4; // rbx
  __int64 v5; // rcx
  struct DXGHWQUEUE *Current; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _SLIST_ENTRY **v13; // r14
  _QWORD *v14; // rax
  __int64 hHwQueue; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // r15
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // r9
  int v26; // esi
  __int64 v27; // rcx
  const GUID *v28; // r8
  int v29; // [rsp+30h] [rbp-108h] BYREF
  __int64 v30; // [rsp+38h] [rbp-100h]
  char v31; // [rsp+40h] [rbp-F8h]
  _BYTE v32[16]; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v33[8]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-D8h]
  char v35; // [rsp+68h] [rbp-D0h]
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v36; // [rsp+70h] [rbp-C8h]
  _BYTE v37[16]; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v38[56]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v39[96]; // [rsp+C0h] [rbp-78h] BYREF
  struct DXGHWQUEUE *v40; // [rsp+150h] [rbp+18h] BYREF

  v4 = a1;
  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 2160;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2160);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2160);
  Current = DXGPROCESS::GetCurrent();
  v40 = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = PsGetCurrentProcess(v9, v8);
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v29);
    }
    return 3221225485LL;
  }
  memset(v38, 0, sizeof(v38));
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)MmUserProbeAddress;
    *(_OWORD *)v38 = *(_OWORD *)&v4->hHwQueue;
    *(_OWORD *)&v38[16] = *(_OWORD *)&v4->CommandBuffer;
    *(_OWORD *)&v38[32] = *(_OWORD *)&v4->pPrivateDriverData;
    *(_QWORD *)&v38[48] = v4->WrittenPrimaries;
    v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)v38;
  }
  v36 = v4;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v32, v4->hHwQueue, Current, &v40, 0);
  v13 = (struct _SLIST_ENTRY **)v40;
  if ( !v40 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v14[3] = Current;
    hHwQueue = v4->hHwQueue;
    v14[5] = -1073741811LL;
LABEL_13:
    v14[4] = hHwQueue;
    WdLogEvent5_WdError(v14);
LABEL_21:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v32);
    goto LABEL_22;
  }
  if ( v4->NumPrimaries > 0x10 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v14[3] = v13;
    hHwQueue = v4->NumPrimaries;
    v14[5] = 16LL;
    v14[6] = -1073741811LL;
    goto LABEL_13;
  }
  if ( !v4->pPrivateDriverData )
  {
    if ( !v4->PrivateDriverDataSize )
      goto LABEL_26;
LABEL_20:
    v16 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v16 + 24) = 996LL;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_21;
  }
  if ( !v4->PrivateDriverDataSize )
    goto LABEL_20;
LABEL_26:
  v20 = *(_QWORD *)(*((_QWORD *)v40 + 2) + 16LL);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
  if ( *(_BYTE *)(v21 + 185) )
  {
    v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v21 + 4152),
            Current,
            v4);
LABEL_28:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v29);
    return v22;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v37,
    *(struct DXGDEVICE **)(*((_QWORD *)v40 + 2) + 16LL));
  v34 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
  v35 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, v20, 0, v25, 0);
  v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39);
  if ( v26 >= 0 )
  {
    v22 = DXGHWQUEUE::SubmitCommand(v13, v4, a2);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
    if ( v35 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v37);
    goto LABEL_28;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
  if ( v35 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v37);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v29);
  return (unsigned int)v26;
}
