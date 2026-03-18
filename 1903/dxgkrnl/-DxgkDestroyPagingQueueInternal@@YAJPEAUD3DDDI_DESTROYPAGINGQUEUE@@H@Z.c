/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C01231A8
 * Callers:
 *     DxgkDestroyPagingQueue @ 0x1C0123380 (DxgkDestroyPagingQueue.c)
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C014C650 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     ?VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E6F0 (-VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C434 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0023F34 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, const GUID *a3)
{
  struct D3DDDI_DESTROYPAGINGQUEUE *p_hPagingQueue; // rbx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  D3DKMT_HANDLE v10; // r11d
  __int64 v11; // rcx
  unsigned int v12; // r14d
  int v13; // esi
  DXGPAGINGQUEUE *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v25; // [rsp+28h] [rbp-50h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h]
  char v27; // [rsp+38h] [rbp-40h]
  _BYTE v28[32]; // [rsp+40h] [rbp-38h] BYREF
  D3DKMT_HANDLE hPagingQueue; // [rsp+88h] [rbp+10h] BYREF

  p_hPagingQueue = a1;
  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 2118;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2118);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2118LL);
  hPagingQueue = 0;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)p_hPagingQueue >= MmUserProbeAddress )
      p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    hPagingQueue = p_hPagingQueue->hPagingQueue;
    p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)&hPagingQueue;
  }
  Current = DXGPROCESS::GetCurrent(v6, v5);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v28,
    (struct _KTHREAD **)Current);
  v10 = p_hPagingQueue->hPagingQueue;
  v11 = (p_hPagingQueue->hPagingQueue >> 6) & 0xFFFFFF;
  v12 = *((_DWORD *)Current + 56);
  if ( (unsigned int)v11 < v12 )
  {
    v9 = *((_QWORD *)Current + 26);
    v8 = *(unsigned int *)(v9 + 16LL * (unsigned int)v11 + 8);
    v13 = (*(_DWORD *)(v9 + 16LL * (unsigned int)v11 + 8) >> 5) & 3;
    if ( v10 >> 30 == v13 && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
    {
      v8 &= 0x1Fu;
      if ( (_BYTE)v8 == 10 )
      {
        v14 = *(DXGPAGINGQUEUE **)(v9 + 16LL * (unsigned int)v11);
        if ( v14 )
        {
          if ( (unsigned int)v11 < v12
            && v10 >> 30 == v13
            && (*(_DWORD *)(v9 + 16LL * (unsigned int)v11 + 8) & 0x2000) == 0
            && (*(_DWORD *)(v9 + 16LL * (unsigned int)v11 + 8) & 0x1F) != 0 )
          {
            *(_DWORD *)(v9 + 16LL * ((v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
          DXGPAGINGQUEUE::ReleaseReference(v14, v15);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v16);
          if ( v27 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v17, &EventProfilerExit, v18, v25);
          }
          return 0LL;
        }
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v11, v8, v9);
        *(_QWORD *)(v20 + 24) = 267LL;
        WdLogEvent5_WdError(v20);
      }
    }
  }
  v21 = WdLogNewEntry5_WdWarning(v11, v8, v9);
  *(_QWORD *)(v21 + 24) = p_hPagingQueue->hPagingQueue;
  *(_QWORD *)(v21 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v21);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v22);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v25);
  return 3221225485LL;
}
