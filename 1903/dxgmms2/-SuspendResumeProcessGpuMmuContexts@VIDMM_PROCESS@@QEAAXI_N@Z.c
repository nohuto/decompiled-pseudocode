/*
 * XREFs of ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00B5C60
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DB80 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C006F1F0 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FE00 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0010B50 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(VIDMM_PROCESS *this, unsigned int a2, bool a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int i; // edi
  __int64 v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx

  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    if ( v6 )
    {
      if ( *(_DWORD *)(**(_QWORD **)v5 + 24LL) == 1 )
      {
        for ( i = 0; i < *(_DWORD *)(v5 + 12); ++i )
        {
          v8 = 184LL * i;
          v9 = (_QWORD *)(v8 + v6 + 40);
          v10 = (_QWORD *)*v9;
          while ( v10 != v9 )
          {
            v11 = v10[4];
            v12 = *(_QWORD *)(v11 + 24);
            if ( v12 && !*(_QWORD *)(v11 + 176) )
              VidSchSuspendResumeDevice(*(struct _VIDSCH_DEVICE **)(v12 + 656), a3, 0, 1);
            v6 = *(_QWORD *)(v5 + 16);
            v10 = (_QWORD *)*v10;
            v9 = (_QWORD *)(v8 + v6 + 40);
          }
        }
      }
    }
  }
  *((_DWORD *)this + 22) = *((_DWORD *)this + 22) & 0xFFFFFFFB | (4 * a3);
}
