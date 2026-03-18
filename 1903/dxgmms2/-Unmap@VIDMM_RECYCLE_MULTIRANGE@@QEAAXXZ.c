/*
 * XREFs of ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00BBC4C
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0064E60 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00BBA88 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C00BBD10 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00145F8 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006A12C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unmap(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v2; // r9
  unsigned __int64 SmallAllocationSize; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  void *v7; // rbx
  void *v8; // rax
  __int64 CurrentProcess; // rax

  v2 = *((_QWORD *)this + 10);
  if ( *((_BYTE *)this + 152) )
  {
    SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                            this,
                            (unsigned int)(**(_DWORD **)(v2 + 32) - 5) <= 1);
    v6 = *(_QWORD *)(v4 + 40) - *(_QWORD *)(v4 + 32);
    if ( v6 <= SmallAllocationSize )
    {
      CurrentProcess = PsGetCurrentProcess(v4, v6);
      MmUnmapViewOfSection(CurrentProcess, *((_QWORD *)this + 20));
    }
    else
    {
      v7 = *(void **)(v5 + 56);
      v8 = (void *)PsGetCurrentProcess(v4, v6);
      VidMmUnmapViewAsync(v8, v7, *((PVOID *)this + 20));
    }
    *((_BYTE *)this + 152) = 0;
  }
  else
  {
    VidMmUnmapViewAsync(0LL, *(PVOID *)(v2 + 56), *((PVOID *)this + 20));
    *((_BYTE *)this + 153) = 0;
  }
  *((_QWORD *)this + 20) = 0LL;
}
