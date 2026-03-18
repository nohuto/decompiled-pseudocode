/*
 * XREFs of ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00B605C
 * Callers:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C00604D4 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned __int64 a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  if ( *((_QWORD *)this + 5115) )
  {
    v9 = operator new[](0x50uLL, 0x32356956u, PagedPool);
    if ( v9 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
      *((_QWORD *)this + 5118) = KeGetCurrentThread();
      v10 = *((unsigned int *)this + 10232);
      if ( (_DWORD)v10 == dword_1C004D32C )
      {
        *((_DWORD *)this + 10232) = 0;
        v10 = 0LL;
      }
      v11 = *(void **)(*((_QWORD *)this + 5115) + 24 * v10 + 16);
      if ( v11 )
        operator delete(v11);
      *v9 = *(_QWORD *)a2;
      v9[1] = *((_QWORD *)a2 + 4);
      v9[3] = a5;
      v9[2] = a4;
      v9[4] = *((_QWORD *)a3 + 12);
      v9[5] = *((_QWORD *)a3 + 13);
      v9[6] = *((_QWORD *)a3 + 7);
      *((_DWORD *)v9 + 14) = (int)(*((_DWORD *)a3 + 16) << 28) >> 28;
      v12 = *((_QWORD *)a3 + 9);
      v9[9] = 0LL;
      v9[8] = v12;
      if ( (*((_DWORD *)a3 + 16) & 0xF) == 1 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)a3 + 7) + 16LL);
        if ( v13 )
          v9[9] = *(_QWORD *)(v13 + 32);
      }
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v9;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 14;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
