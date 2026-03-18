/*
 * XREFs of DxgkDestroyHwQueueInternal @ 0x1C024BD58
 * Callers:
 *     ?VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E4A0 (-VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyHwQueue @ 0x1C024BD40 (DxgkDestroyHwQueue.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C434 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C0024098 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyHwQueueInternal(__int64 a1, char a2, const GUID *a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD **v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v19; // rdx
  struct _KTHREAD *v20; // r8
  unsigned int v21; // r11d
  __int64 v22; // rcx
  unsigned int v23; // r14d
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rax
  DXGHWQUEUE *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  int v32; // [rsp+28h] [rbp-50h] BYREF
  __int64 v33; // [rsp+30h] [rbp-48h]
  char v34; // [rsp+38h] [rbp-40h]
  _BYTE v35[32]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v36; // [rsp+90h] [rbp+18h] BYREF

  v4 = (unsigned int *)a1;
  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2154;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2154);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2154LL);
  v36 = 0;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v36 = *v4;
    v4 = &v36;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v11 = Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = PsGetCurrentProcess(v14, v13);
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v15);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v32);
    }
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v35, Current);
  v21 = *v4;
  v22 = (*v4 >> 6) & 0xFFFFFF;
  v23 = *((_DWORD *)v11 + 56);
  if ( (unsigned int)v22 >= v23
    || (v20 = v11[26],
        v19 = *((unsigned int *)v20 + 4 * (unsigned int)v22 + 2),
        v24 = (*((_DWORD *)v20 + 4 * (unsigned int)v22 + 2) >> 5) & 3,
        v21 >> 30 != v24)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
LABEL_21:
    v26 = WdLogNewEntry5_WdWarning(v22, v19, v20);
    *(_QWORD *)(v26 + 24) = *v4;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
    goto LABEL_11;
  }
  v19 &= 0x1Fu;
  if ( (_BYTE)v19 != 15 )
  {
    v25 = WdLogNewEntry5_WdError(v22, v19, v20);
    *(_QWORD *)(v25 + 24) = 267LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_21;
  }
  v27 = (DXGHWQUEUE *)*((_QWORD *)v20 + 2 * (unsigned int)v22);
  if ( !v27 )
    goto LABEL_21;
  if ( (unsigned int)v22 < v23
    && v21 >> 30 == v24
    && (*((_DWORD *)v20 + 4 * (unsigned int)v22 + 2) & 0x2000) == 0
    && (*((_DWORD *)v20 + 4 * (unsigned int)v22 + 2) & 0x1F) != 0 )
  {
    *((_DWORD *)v20 + 4 * ((v21 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
  DXGHWQUEUE::ReleaseReference(v27, v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v29);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v32);
  return 0LL;
}
