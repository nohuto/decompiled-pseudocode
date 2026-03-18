/*
 * XREFs of ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C0025E88
 * Callers:
 *     ?VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z @ 0x1C0024FC0 (-VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C007CA20 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00BD8F0 (-NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentIdle(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  __int64 v2; // r15
  int v5; // edi
  char *v6; // rbx
  __int64 v7; // r14
  int v8; // edi
  int v9; // eax
  int v10; // eax
  struct _KEVENT *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)this + 5023);
  v5 = 1 << *((_DWORD *)a2 + 5);
  v6 = (char *)this + 40992;
  v7 = 1560LL * *((unsigned int *)a2 + 95);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5124, &LockHandle);
  *((_QWORD *)v6 + 1) = KeGetCurrentThread();
  if ( !*((_QWORD *)a2 + 29) && !*((_BYTE *)a2 + 372) )
  {
    v8 = *(_DWORD *)(v7 + v2 + 432) & ~v5;
    *(_DWORD *)(v7 + v2 + 432) = v8;
    if ( (*((_DWORD *)a2 + 20) & 0x1000) != 0 )
      v9 = 0;
    else
      v9 = *((_DWORD *)a2 + 4) + 1;
    if ( *(_DWORD *)(v7 + v2 + 64) != v9 )
    {
      v10 = (*((_DWORD *)a2 + 20) & 0x1000) != 0 ? 0 : *((_DWORD *)a2 + 4) + 1;
      if ( *(_DWORD *)(v7 + v2 + 48) != v10 )
      {
        (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 5013))(
          *((_QWORD *)this + 5014),
          *((unsigned int *)a2 + 92),
          0LL);
        v8 = *(_DWORD *)(v7 + v2 + 432);
      }
    }
    if ( !v8 )
    {
      v11 = (struct _KEVENT *)*((_QWORD *)this + 5140);
      *((_BYTE *)this + 40874) = 1;
      KeSetEvent(v11, 0, 0);
    }
  }
  *((_QWORD *)this + 5125) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
