/*
 * XREFs of ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02145E4
 * Callers:
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02141B0 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0ppp @ 0x1C003C574 (McTemplateK0ppp.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00E00B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C01E9C44 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z @ 0x1C01F37A0 (-VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
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
  int v20; // ebx
  int HostProcess; // eax
  void *HwQueueProgressFenceCPUVirtualAddress; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v34; // rax
  _BYTE v35[32]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v7 = *(_QWORD *)(v6 + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v35, Current);
  v10 = (__int64 *)(v7 + 232);
  v11 = HMGRTABLE::AllocHandle((unsigned int *)(v7 + 232), (__int64)this, 15, 0, 0);
  *((_DWORD *)this + 6) = v11;
  v14 = v11;
  if ( !v11 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, 0LL, v13);
    LODWORD(v16) = -1073741801;
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v15);
    if ( *(struct _KTHREAD **)(v7 + 216) != KeGetCurrentThread() )
    {
      *(_QWORD *)(v7 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
    return (unsigned int)v16;
  }
  v18 = (v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 < *(_DWORD *)(v7 + 248) )
  {
    v19 = *(_DWORD *)(*v10 + 16 * v18 + 8);
    if ( ((v14 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v18 + 8) & 0x60) && (v19 & 0x2000) == 0 && (v19 & 0x1F) != 0 )
      *(_DWORD *)(*v10 + 16 * (((unsigned __int64)v14 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
  v20 = *(_DWORD *)(*((_QWORD *)this + 2) + 28LL);
  HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v7);
  if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v8 + 4152),
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
    v23 = MapGuestFenceCpuVaToHost(
            (unsigned __int64)HwQueueProgressFenceCPUVirtualAddress,
            (void **)this + 11,
            (unsigned __int64 *)this + 12,
            (unsigned int *)this + 26);
    v16 = v23;
    if ( v23 < 0 )
    {
      v25 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v25 + 24) = v16;
      *(_QWORD *)(v25 + 32) = 186LL;
      WdLogEvent5_WdError(v25);
      return (unsigned int)v16;
    }
    a2->HwQueueProgressFenceCPUVirtualAddress = (void *)*((_QWORD *)this + 11);
    v26 = *((unsigned int *)this + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 208));
    v27 = ((unsigned int)v26 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 < *(_DWORD *)(v7 + 248) )
    {
      v28 = *v10;
      v29 = ((unsigned int)v26 >> 25) & 0x60;
      if ( (((unsigned int)v26 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v27 + 8) & 0x60)
        && (*(_DWORD *)(*v10 + 16 * v27 + 8) & 0x1F) != 0 )
      {
        v30 = 2 * ((v26 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v28 + 8 * v30 + 8) & 0x2000) == 0 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v31 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v31);
          v28 = *v10;
        }
        *(_DWORD *)(v28 + 8 * v30 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v7 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppp(v32, &EventCreateHwQueue, v33, *((_QWORD *)this + 2), *((unsigned int *)this + 6), this);
    return 0LL;
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(HwQueueProgressFenceCPUVirtualAddress);
    *(_QWORD *)(v34 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v34);
    return 3221225473LL;
  }
}
