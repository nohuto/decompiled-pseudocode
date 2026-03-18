/*
 * XREFs of ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00ECAF0
 * Callers:
 *     DxgkDestroyContext @ 0x1C00EE0E0 (DxgkDestroyContext.c)
 *     DxgkDestroyContextInternal @ 0x1C013BBD8 (DxgkDestroyContextInternal.c)
 *     ?VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EE950 (-VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0011E00 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0213350 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyContextImpl(const struct _D3DKMT_DESTROYCONTEXT *a1, char a2, const GUID *a3)
{
  const struct _D3DKMT_DESTROYCONTEXT *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hContext; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  _QWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF
  int v24; // [rsp+38h] [rbp-40h] BYREF
  __int64 v25; // [rsp+40h] [rbp-38h]
  char v26; // [rsp+48h] [rbp-30h]
  _BYTE v27[32]; // [rsp+50h] [rbp-28h] BYREF

  v4 = a1;
  v24 = -1;
  v25 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 2040;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2040);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2040);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v18 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    goto LABEL_30;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYCONTEXT *)MmUserProbeAddress;
    hContext = v4->hContext;
  }
  else
  {
    hContext = v4->hContext;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v23,
    (struct _KTHREAD **)Current);
  v11 = (hContext >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)Current + 62) )
    goto LABEL_28;
  v10 = *((_QWORD *)Current + 29);
  v8 = *(unsigned int *)(v10 + 16LL * v11 + 8);
  v9 = (hContext >> 25) & 0x60;
  if ( ((hContext >> 25) & 0x60) != (*(_BYTE *)(v10 + 16LL * v11 + 8) & 0x60) || (v8 & 0x2000) != 0 || (v8 & 0x1F) == 0 )
    goto LABEL_28;
  v8 &= 0x1Fu;
  if ( (_BYTE)v8 != 7 )
  {
    v19 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v19 + 24) = 316LL;
    WdLogEvent5_WdError(v19);
LABEL_28:
    v12 = 0LL;
    goto LABEL_15;
  }
  v12 = *(_QWORD *)(v10 + 16LL * v11);
LABEL_15:
  if ( v12 )
  {
    if ( v11 < *((_DWORD *)Current + 62) )
    {
      v13 = *((_QWORD *)Current + 29);
      v14 = *(_DWORD *)(v13 + 16LL * v11 + 8);
      if ( ((hContext >> 25) & 0x60) == (*(_BYTE *)(v13 + 16LL * v11 + 8) & 0x60)
        && (v14 & 0x2000) == 0
        && (v14 & 0x1F) != 0 )
      {
        *(_DWORD *)(v13 + 16LL * ((hContext >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
    if ( (*(_DWORD *)(v12 + 396) & 0x10) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v23,
        *(struct DXGDEVICE **)(v12 + 16));
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v27,
        (struct _KTHREAD **)(*(_QWORD *)(v12 + 16) + 112LL));
      DXGCONTEXT::DestroyAllHwQueues((DXGCONTEXT *)v12, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
      if ( v23[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
    }
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v15, &EventProfilerExit, v16, v24);
    }
    return 0LL;
  }
  v20 = WdLogNewEntry5_WdWarning(v9, v8, v10);
  *(_QWORD *)(v20 + 24) = hContext;
  *(_QWORD *)(v20 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v20);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v24);
  return 3221225485LL;
}
