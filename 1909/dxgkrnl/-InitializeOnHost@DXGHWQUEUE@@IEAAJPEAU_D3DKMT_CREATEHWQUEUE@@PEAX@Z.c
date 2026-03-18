/*
 * XREFs of ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02487B0
 * Callers:
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C024837C (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppp @ 0x1C0042E68 (McTemplateK0ppp.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FFDD0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C0219BE4 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z @ 0x1C0223B40 (-VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGHWQUEUE::InitializeOnHost(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v6; // r9
  __int64 v7; // rbp
  __int64 v8; // r13
  struct _KTHREAD **Current; // rax
  __int64 *v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v18; // rax
  int v19; // r8d
  unsigned int v20; // ebx
  unsigned int HostProcess; // eax
  __int64 v22; // rdx
  void *HwQueueProgressFenceCPUVirtualAddress; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  const GUID *v36; // r8
  __int64 v37; // rax
  _BYTE v38[32]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v7 = *(_QWORD *)(v6 + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v38, Current);
  v10 = (__int64 *)(v7 + 208);
  v11 = HMGRTABLE::AllocHandle((unsigned int *)(v7 + 208), (__int64)this, 15, 0, 0);
  *((_DWORD *)this + 6) = v11;
  v14 = v11;
  if ( !v11 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, 0LL, v13);
    LODWORD(v16) = -1073741801;
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v15);
    if ( *(struct _KTHREAD **)(v7 + 192) != KeGetCurrentThread() )
    {
      *(_QWORD *)(v7 + 192) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
    return (unsigned int)v16;
  }
  v18 = (v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 < *(_DWORD *)(v7 + 224) )
  {
    v19 = *(_DWORD *)(*v10 + 16 * v18 + 8);
    if ( ((v14 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v18 + 8) & 0x60) && (v19 & 0x2000) == 0 && (v19 & 0x1F) != 0 )
      *(_DWORD *)(*v10 + 16 * (((unsigned __int64)v14 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  v20 = *(_DWORD *)(*((_QWORD *)this + 2) + 28LL);
  HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v7);
  if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v8 + 4144),
              HostProcess,
              v20,
              a3,
              a2,
              (unsigned int *)this + 7) >= 0
    && *((_DWORD *)this + 7)
    && a2->hHwQueueProgressFence
    && (HwQueueProgressFenceCPUVirtualAddress = a2->HwQueueProgressFenceCPUVirtualAddress) != 0LL
    && a2->HwQueueProgressFenceGPUVirtualAddress )
  {
    v25 = MapGuestFenceCpuVaToHost(
            (unsigned __int64)HwQueueProgressFenceCPUVirtualAddress,
            (void **)this + 11,
            (unsigned __int64 *)this + 12,
            (unsigned int *)this + 26);
    v16 = v25;
    if ( v25 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v27, v26, v28);
      *(_QWORD *)(v29 + 24) = v16;
      *(_QWORD *)(v29 + 32) = 186LL;
      WdLogEvent5_WdError(v29);
      return (unsigned int)v16;
    }
    a2->HwQueueProgressFenceCPUVirtualAddress = (void *)*((_QWORD *)this + 11);
    v30 = *((unsigned int *)this + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 184));
    v31 = ((unsigned int)v30 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *(_DWORD *)(v7 + 224) )
    {
      v32 = *v10;
      v33 = ((unsigned int)v30 >> 25) & 0x60;
      if ( (((unsigned int)v30 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v31 + 8) & 0x60)
        && (*(_DWORD *)(*v10 + 16 * v31 + 8) & 0x1F) != 0 )
      {
        v34 = 2 * ((v30 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v32 + 8 * v34 + 8) & 0x2000) == 0 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v33, v32);
          *(_QWORD *)(v35 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v35);
          v32 = *v10;
        }
        *(_DWORD *)(v32 + 8 * v34 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v7 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppp(
        *((unsigned int *)this + 6),
        &EventCreateHwQueue,
        v36,
        *((_QWORD *)this + 2),
        *((unsigned int *)this + 6),
        this);
    return 0LL;
  }
  else
  {
    v37 = WdLogNewEntry5_WdError(HwQueueProgressFenceCPUVirtualAddress, v22, v24);
    *(_QWORD *)(v37 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v37);
    return 3221225473LL;
  }
}
