/*
 * XREFs of ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1C005F178
 * Callers:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1C005F144 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C005F314 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062A6C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C0062F48 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006C068 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00AE934 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_PROCESS *a3,
        unsigned int a4,
        bool a5)
{
  char *v9; // rbp
  VIDMM_FENCE_STORAGE_PAGE *v10; // rax
  VIDMM_FENCE_STORAGE_PAGE *v11; // r14
  _QWORD *v12; // rcx
  _DWORD *v13; // rbx
  _QWORD *v14; // rsi
  VIDMM_PROCESS *v15; // r9
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  struct CVirtualAddressAllocator *v18; // r15
  D3DGPU_VIRTUAL_ADDRESS v19; // r12
  struct VIDMM_PROCESS *v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  VIDMM_FENCE_STORAGE_PAGE *v23; // rcx
  int v24; // eax
  bool v25; // r8
  _D3DKMT_FREEGPUVIRTUALADDRESS v26; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v27[12]; // [rsp+40h] [rbp-78h] BYREF

  if ( (*((_BYTE *)a2 + 40872) & 2) != 0 )
  {
    v9 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    *((_QWORD *)v9 + 1) = KeGetCurrentThread();
    v10 = (VIDMM_FENCE_STORAGE_PAGE *)*((_QWORD *)this + 7);
    while ( v10 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56) )
    {
      v11 = v10;
      v10 = *(VIDMM_FENCE_STORAGE_PAGE **)v10;
      if ( a2 == *((struct VIDMM_GLOBAL **)v11 + 6) )
      {
        v12 = (_QWORD *)*((_QWORD *)v11 + 4);
        while ( v12 != (_QWORD *)((char *)v11 + 32) )
        {
          v13 = v12 - 4;
          v14 = v12;
          v15 = (VIDMM_PROCESS *)*(v12 - 1);
          v12 = (_QWORD *)*v12;
          if ( a3 == v15 )
          {
            if ( !a5 || (v24 = v13[13], _bittest(&v24, a4)) )
            {
              if ( v13[12]-- == 1 )
              {
                if ( *((_BYTE *)v13 + 16) )
                {
                  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                              v15,
                                              *(_DWORD *)(*((_QWORD *)a2 + 3) + 208LL),
                                              a4);
                  v18 = VirtualAddressAllocator;
                  v19 = *(_QWORD *)v13;
                  if ( *((_BYTE *)v13 + 17) )
                  {
                    memset(v27, 0, 0x58uLL);
                    LODWORD(v27[0]) = 120;
                    v27[6] = v19;
                    v27[7] = 1LL;
                    v27[5] = v18;
                    LOBYTE(v27[8]) = 1;
                    VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v27, v25);
                  }
                  else
                  {
                    *(_QWORD *)&v26.hAdapter = 0LL;
                    v20 = (struct VIDMM_PROCESS *)*((_QWORD *)VirtualAddressAllocator + 11);
                    v26.BaseAddress = v19;
                    v26.Size = 4096LL;
                    VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(a2, v20, &v26, 1u);
                  }
                  VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)v13 + 3), a2);
                }
                v21 = *v14;
                if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v22 = (_QWORD *)v14[1], (_QWORD *)*v22 != v14) )
                  __fastfail(3u);
                *v22 = v21;
                *(_QWORD *)(v21 + 8) = v22;
                ExFreePoolWithTag(v13, 0);
                VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v23, v11);
              }
              goto LABEL_10;
            }
          }
        }
        break;
      }
    }
LABEL_10:
    *((_QWORD *)v9 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
}
