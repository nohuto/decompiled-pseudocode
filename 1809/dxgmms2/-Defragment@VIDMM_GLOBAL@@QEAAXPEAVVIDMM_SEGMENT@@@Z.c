/*
 * XREFs of ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00A7B34
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0083F00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C0025CD4 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     McTemplateK0p @ 0x1C0026308 (McTemplateK0p.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006E6F4 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C006E808 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0076C38 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A81DC (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B03D8 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BDB1C (-OldDefragment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BF3AC (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::Defragment(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  const GUID *v4; // r8
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 ActiveVprEnd; // rbx
  __int64 v12; // rax
  struct VIDMM_SEGMENT *v13; // r14
  _QWORD **v14; // r15
  _QWORD *v15; // r15
  _QWORD *v16; // rbx
  VIDMM_DEVICE *v17; // rbp
  __int64 v18; // rcx
  const GUID *v19; // r8

  v4 = *(const GUID **)(*(_QWORD *)this + 232LL);
  *((_QWORD *)a2 + 60) = v4;
  if ( (*((_DWORD *)this + 1760) & 0x4000) != 0 )
  {
    v5 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v5 + 24) = a2;
    WdLogEvent5_WdEvent(v5);
  }
  else
  {
    v6 = *((unsigned int *)a2 + 95);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0p((__int64)this, &EventVidMmStartDefragment, v4, this);
    VIDMM_GLOBAL::StartPreparation((__int64)this, (unsigned int)v6, 0LL, 0LL, 1002);
    v7 = *((_QWORD *)this + 3);
    v8 = 352 * v6;
    v9 = *(unsigned int *)(352 * v6 + *(_QWORD *)(v7 + 2416) + 16);
    if ( (v9 & 4) != 0
      && (LOBYTE(v8) = (*(_BYTE *)(v7 + 1884) & 8) != 0,
          ((unsigned __int8)v8 & ((*((_DWORD *)this + 1760) & 0x20000) == 0)) != 0) )
    {
      v10 = WdLogNewEntry5_WdEvent(v8, v9);
      *(_QWORD *)(v10 + 24) = a2;
      WdLogEvent5_WdEvent(v10);
      VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this);
      VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(a2);
      if ( (*((_BYTE *)a2 + 82) & 1) != 0 )
      {
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(a2);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD))(*(_QWORD *)a2 + 128LL))(a2, 0LL);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          ActiveVprEnd,
          *((_QWORD *)a2 + 6));
      }
      else
      {
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          0LL,
          *((_QWORD *)a2 + 6));
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdEvent(v8, v9);
      *(_QWORD *)(v12 + 24) = a2;
      WdLogEvent5_WdEvent(v12);
      v13 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 17);
      while ( v13 != (struct VIDMM_SEGMENT *)((char *)a2 + 136) )
      {
        v14 = (_QWORD **)((char *)v13 - 24);
        v13 = *(struct VIDMM_SEGMENT **)v13;
        if ( !(unsigned __int8)PsIsSystemProcess(**v14) && !*(_BYTE *)((*v14)[4] + 320LL) )
        {
          v15 = v14 + 5;
          v16 = (_QWORD *)*v15;
          while ( v16 != v15 )
          {
            v17 = (VIDMM_DEVICE *)v16[4];
            v16 = (_QWORD *)*v16;
            if ( !*((_QWORD *)v17 + 22) )
              VIDMM_DEVICE::PartiallySuspend(v17);
            VIDMM_DEVICE::FaultAllAllocations(v17);
          }
        }
      }
      VIDMM_SEGMENT::OldDefragment(a2);
    }
    VIDMM_GLOBAL::EndPreparation(this, v6, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v6);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0p(v18, &EventVidMmEndDefragment, v19, this);
  }
}
