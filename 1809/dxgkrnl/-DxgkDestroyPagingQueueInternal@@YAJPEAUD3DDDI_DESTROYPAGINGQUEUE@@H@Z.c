/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00EFD68
 * Callers:
 *     DxgkDestroyPagingQueue @ 0x1C00F0280 (DxgkDestroyPagingQueue.c)
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C013BCF0 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     ?VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EED00 (-VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C00214D8 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, const GUID *a3)
{
  struct D3DDDI_DESTROYPAGINGQUEUE *p_hPagingQueue; // rbx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  D3DKMT_HANDLE v8; // r11d
  __int64 v9; // rcx
  unsigned int v10; // r14d
  int v11; // esi
  DXGPAGINGQUEUE *v12; // rdi
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  const GUID *v19; // r8
  int v20; // [rsp+28h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  char v22; // [rsp+38h] [rbp-40h]
  _BYTE v23[32]; // [rsp+40h] [rbp-38h] BYREF
  D3DKMT_HANDLE hPagingQueue; // [rsp+88h] [rbp+10h] BYREF

  p_hPagingQueue = a1;
  v20 = -1;
  v21 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v22 = 1;
    v20 = 2118;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2118);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2118);
  hPagingQueue = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)p_hPagingQueue >= MmUserProbeAddress )
      p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    hPagingQueue = p_hPagingQueue->hPagingQueue;
    p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)&hPagingQueue;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v23,
    (struct _KTHREAD **)Current);
  v8 = p_hPagingQueue->hPagingQueue;
  v9 = (p_hPagingQueue->hPagingQueue >> 6) & 0xFFFFFF;
  v10 = *((_DWORD *)Current + 62);
  if ( (unsigned int)v9 < v10 )
  {
    v7 = *((_QWORD *)Current + 29);
    v6 = *(unsigned int *)(v7 + 16LL * (unsigned int)v9 + 8);
    v11 = (*(_DWORD *)(v7 + 16LL * (unsigned int)v9 + 8) >> 5) & 3;
    if ( v8 >> 30 == v11 && (v6 & 0x2000) == 0 && (v6 & 0x1F) != 0 )
    {
      v6 &= 0x1Fu;
      if ( (_BYTE)v6 == 10 )
      {
        v12 = *(DXGPAGINGQUEUE **)(v7 + 16LL * (unsigned int)v9);
        if ( v12 )
        {
          if ( (unsigned int)v9 < v10
            && v8 >> 30 == v11
            && (*(_DWORD *)(v7 + 16LL * (unsigned int)v9 + 8) & 0x2000) == 0
            && (*(_DWORD *)(v7 + 16LL * (unsigned int)v9 + 8) & 0x1F) != 0 )
          {
            *(_DWORD *)(v7 + 16LL * ((v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
          DXGPAGINGQUEUE::ReleaseReference(v12);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
          if ( v22 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v13, &EventProfilerExit, v14, v20);
          }
          return 0LL;
        }
      }
      else
      {
        v16 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v16 + 24) = 316LL;
        WdLogEvent5_WdError(v16);
      }
    }
  }
  v17 = WdLogNewEntry5_WdWarning(v9, v6, v7);
  *(_QWORD *)(v17 + 24) = p_hPagingQueue->hPagingQueue;
  *(_QWORD *)(v17 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v17);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v20);
  return 3221225485LL;
}
