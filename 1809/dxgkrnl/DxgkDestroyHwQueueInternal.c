/*
 * XREFs of DxgkDestroyHwQueueInternal @ 0x1C0217998
 * Callers:
 *     ?VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EEAB0 (-VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyHwQueue @ 0x1C0217980 (DxgkDestroyHwQueue.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C0021764 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyHwQueueInternal(__int64 a1, char a2, const GUID *a3)
{
  unsigned int *v4; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct _KTHREAD *v12; // r8
  unsigned int v13; // r11d
  __int64 v14; // rcx
  unsigned int v15; // r14d
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  DXGHWQUEUE *v22; // rdi
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v25; // [rsp+28h] [rbp-50h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h]
  char v27; // [rsp+38h] [rbp-40h]
  _BYTE v28[32]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+18h] BYREF

  v4 = (unsigned int *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 2154;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2154);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2154);
  v29 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v29 = *v4;
    v4 = &v29;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = PsGetCurrentProcess(v10, v9);
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v19, &EventProfilerExit, v20, v25);
    }
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v28, Current);
  v13 = *v4;
  v14 = (*v4 >> 6) & 0xFFFFFF;
  v15 = *((_DWORD *)v7 + 62);
  if ( (unsigned int)v14 >= v15
    || (v12 = v7[29],
        v11 = *((unsigned int *)v12 + 4 * (unsigned int)v14 + 2),
        v16 = (*((_DWORD *)v12 + 4 * (unsigned int)v14 + 2) >> 5) & 3,
        v13 >> 30 != v16)
    || (v11 & 0x2000) != 0
    || (v11 & 0x1F) == 0 )
  {
LABEL_17:
    v18 = WdLogNewEntry5_WdWarning(v14, v11, v12);
    *(_QWORD *)(v18 + 24) = *v4;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
    goto LABEL_18;
  }
  v11 &= 0x1Fu;
  if ( (_BYTE)v11 != 15 )
  {
    v17 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v17 + 24) = 316LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_17;
  }
  v22 = (DXGHWQUEUE *)*((_QWORD *)v12 + 2 * (unsigned int)v14);
  if ( !v22 )
    goto LABEL_17;
  if ( (unsigned int)v14 < v15
    && v13 >> 30 == v16
    && (*((_DWORD *)v12 + 4 * (unsigned int)v14 + 2) & 0x2000) == 0
    && (*((_DWORD *)v12 + 4 * (unsigned int)v14 + 2) & 0x1F) != 0 )
  {
    *((_DWORD *)v12 + 4 * ((v13 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  DXGHWQUEUE::ReleaseReference(v22);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v25);
  return 0LL;
}
