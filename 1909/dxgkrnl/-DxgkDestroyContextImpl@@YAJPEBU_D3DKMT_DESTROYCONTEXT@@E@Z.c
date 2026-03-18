/*
 * XREFs of ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C0124EB0
 * Callers:
 *     DxgkDestroyContext @ 0x1C01251D0 (DxgkDestroyContext.c)
 *     DxgkDestroyContextInternal @ 0x1C013349C (DxgkDestroyContextInternal.c)
 *     ?VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E9B0 (-VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C5E0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000C5F4 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00238D4 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C02474F4 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyContextImpl(const struct _D3DKMT_DESTROYCONTEXT *a1, char a2, const GUID *a3)
{
  const struct _D3DKMT_DESTROYCONTEXT *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hContext; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  const GUID *v28; // r8
  _QWORD v29[3]; // [rsp+20h] [rbp-58h] BYREF
  int v30; // [rsp+38h] [rbp-40h] BYREF
  __int64 v31; // [rsp+40h] [rbp-38h]
  char v32; // [rsp+48h] [rbp-30h]
  _BYTE v33[32]; // [rsp+50h] [rbp-28h] BYREF

  v4 = a1;
  v30 = -1;
  v31 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 2040;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2040);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2040LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v24 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
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
    (DXGHANDLETABLELOCKEXCLUSIVE *)v29,
    (struct _KTHREAD **)Current);
  v15 = (hContext >> 6) & 0xFFFFFF;
  if ( v15 >= *((_DWORD *)Current + 56) )
    goto LABEL_16;
  v14 = *((_QWORD *)Current + 26);
  v12 = *(unsigned int *)(v14 + 16LL * v15 + 8);
  v13 = (hContext >> 25) & 0x60;
  if ( ((hContext >> 25) & 0x60) != (*(_BYTE *)(v14 + 16LL * v15 + 8) & 0x60)
    || (v12 & 0x2000) != 0
    || (v12 & 0x1F) == 0 )
  {
    goto LABEL_16;
  }
  v12 &= 0x1Fu;
  if ( (_BYTE)v12 != 7 )
  {
    v17 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v17 + 24) = 267LL;
    WdLogEvent5_WdError(v17);
LABEL_16:
    v16 = 0LL;
    goto LABEL_17;
  }
  v16 = *(_QWORD *)(v14 + 16LL * v15);
LABEL_17:
  if ( v16 )
  {
    if ( v15 < *((_DWORD *)Current + 56) )
    {
      v18 = *((_QWORD *)Current + 26);
      v19 = *(_DWORD *)(v18 + 16LL * v15 + 8);
      if ( ((hContext >> 25) & 0x60) == (*(_BYTE *)(v18 + 16LL * v15 + 8) & 0x60)
        && (v19 & 0x2000) == 0
        && (v19 & 0x1F) != 0 )
      {
        *(_DWORD *)(v18 + 16LL * ((hContext >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    if ( (*(_DWORD *)(v16 + 412) & 0x10) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v29,
        *(struct DXGDEVICE **)(v16 + 16));
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v33,
        (struct _KTHREAD **)(*(_QWORD *)(v16 + 16) + 112LL));
      DXGCONTEXT::DestroyAllHwQueues((DXGCONTEXT *)v16, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
      DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v33);
      if ( v29[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    }
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v20);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v21, &EventProfilerExit, v22, v30);
    }
    return 0LL;
  }
  v26 = WdLogNewEntry5_WdWarning(v13, v12, v14);
  *(_QWORD *)(v26 + 24) = hContext;
  *(_QWORD *)(v26 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v26);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v25);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v30);
  return 3221225485LL;
}
