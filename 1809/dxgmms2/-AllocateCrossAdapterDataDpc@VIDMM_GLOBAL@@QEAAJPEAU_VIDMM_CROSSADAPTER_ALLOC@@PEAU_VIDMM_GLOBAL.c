/*
 * XREFs of ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0025888
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00637F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001A80 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     VidSchGetRunEvent @ 0x1C007F0D0 (VidSchGetRunEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CROSSADAPTER_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  struct _VIDMM_CROSSADAPTER_ALLOC **v10; // rdx
  struct _VIDMM_CROSSADAPTER_ALLOC *v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = operator new(0x20uLL, 0x30366956u, (__int64)a3, (POOL_TYPE)512);
  v7 = v6;
  if ( v6 )
  {
    *v6 = a3;
    v6[3] = VidSchGetRunEvent(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a2 + 4, &LockHandle);
    v10 = (struct _VIDMM_CROSSADAPTER_ALLOC **)*((_QWORD *)a2 + 3);
    v11 = (struct _VIDMM_CROSSADAPTER_ALLOC *)(v7 + 1);
    if ( *v10 != (struct _VIDMM_CROSSADAPTER_ALLOC *)((char *)a2 + 16) )
      __fastfail(3u);
    *(_QWORD *)v11 = (char *)a2 + 16;
    v7[2] = v10;
    *v10 = v11;
    *((_QWORD *)a2 + 3) = v11;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C004D704);
    v8 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v8 + 24) = 30442LL;
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
}
