/*
 * XREFs of ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B9B28
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0083398 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  _OWORD *v6; // rdi
  __int64 v7; // rax
  void *v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax

  if ( *((_QWORD *)this + 5115) )
  {
    v6 = operator new[](0x58uLL, 0x32356956u, PagedPool);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
      *((_QWORD *)this + 5118) = KeGetCurrentThread();
      v7 = *((unsigned int *)this + 10232);
      if ( (_DWORD)v7 == dword_1C004E32C )
      {
        *((_DWORD *)this + 10232) = 0;
        v7 = 0LL;
      }
      v8 = *(void **)(*((_QWORD *)this + 5115) + 24 * v7 + 16);
      if ( v8 )
        operator delete(v8);
      *v6 = *(_OWORD *)&a2->Transfer.hAllocation;
      v6[1] = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      v6[2] = *(_OWORD *)&a2->Reserved.Reserved[8];
      v9 = *(_OWORD *)&a2->Reserved.Reserved[12];
      *((_QWORD *)v6 + 9) = a3;
      v6[3] = v9;
      if ( a3 )
      {
        v11 = *((_QWORD *)a3 + 5);
        if ( v11 )
          v10 = *(_QWORD *)(v11 + 16);
        else
          v10 = *((_QWORD *)a3 + 6);
      }
      else
      {
        v10 = 0LL;
      }
      *((_QWORD *)v6 + 10) = v10;
      *((_DWORD *)v6 + 16) = *((_DWORD *)a3 + 19) & 0x3F;
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 7;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
