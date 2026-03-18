/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005C5CC
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005D520 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C006B72C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B8F0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00B5440 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00B7CA8 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C000171C (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     McTemplateK0ppp @ 0x1C0026760 (McTemplateK0ppp.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005C714 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C00817BC (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        const GUID *a3)
{
  __int64 v3; // rdx
  unsigned int i; // esi
  VIDMM_PAGE_DIRECTORY **v6; // rdi
  struct _RTL_BALANCED_NODE *v7; // rcx
  struct _RTL_BALANCED_NODE *v8; // rax
  struct _RTL_BALANCED_NODE *v9; // rax
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v11; // rdi
  struct _RTL_BALANCED_NODE *v12; // rcx
  struct _RTL_BALANCED_NODE *v13; // rax
  struct _RTL_BALANCED_NODE *v14; // rax
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  VIDMM_DEVICE *v18; // rcx

  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      McTemplateK0ppp(
        (__int64)this,
        &DestroyGpuVirtualAddressAllocator,
        a3,
        this,
        *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL),
        *(_QWORD *)(*((_QWORD *)this + 10) + 24LL));
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 10) + 6992LL); ++i )
    {
      v6 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 14) + 32LL * i);
      if ( v6 && *v6 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v6, this, 0LL);
        *v6 = 0LL;
      }
    }
  }
  v7 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v7->Children[0] )
        {
          v8 = v7;
          v7 = v7->Children[0];
          v8->Children[0] = 0LL;
        }
        if ( !v7->Children[1] )
          break;
        v9 = v7;
        v7 = v7->Children[1];
        v9->Children[1] = 0LL;
      }
      ParentValue = v7->ParentValue;
      FreeVadAvl(v7, 0LL);
      v11 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v11 )
        break;
      v7 = (struct _RTL_BALANCED_NODE *)v11;
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  v12 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v12 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v12->Children[0] )
        {
          v13 = v12;
          v12 = v12->Children[0];
          v13->Children[0] = 0LL;
        }
        if ( !v12->Children[1] )
          break;
        v14 = v12;
        v12 = v12->Children[1];
        v14->Children[1] = 0LL;
      }
      v15 = v12->ParentValue;
      FreeVadAvl(v12, 0LL);
      v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v16 )
        break;
      v12 = (struct _RTL_BALANCED_NODE *)v16;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v17 = *((_QWORD *)this + 11);
  if ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 88) & 2) == 0 )
    {
      v18 = (VIDMM_DEVICE *)*((_QWORD *)this + 12);
      if ( v18 )
        VIDMM_DEVICE::`scalar deleting destructor'(v18);
    }
  }
  operator delete(*((void **)this + 14));
  operator delete(this);
}
