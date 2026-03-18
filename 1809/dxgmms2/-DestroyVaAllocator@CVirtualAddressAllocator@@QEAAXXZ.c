/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C006A814
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C005F064 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C007A130 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00B2034 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00B475C (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C000FFBC (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     McTemplateK0ppp @ 0x1C0026C5C (McTemplateK0ppp.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A5EC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C007EEA8 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        const GUID *a3,
        unsigned __int8 a4)
{
  __int64 v4; // rdx
  unsigned int i; // edi
  VIDMM_PAGE_DIRECTORY **v7; // rsi
  struct _RTL_BALANCED_NODE *v8; // rcx
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v10; // rdi
  struct _RTL_BALANCED_NODE *v11; // rcx
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  VIDMM_DEVICE *v15; // rcx
  struct _RTL_BALANCED_NODE *v16; // rax
  struct _RTL_BALANCED_NODE *v17; // rax
  struct _RTL_BALANCED_NODE *v18; // rax
  struct _RTL_BALANCED_NODE *v19; // rax

  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      McTemplateK0ppp(
        (__int64)this,
        &DestroyGpuVirtualAddressAllocator,
        a3,
        this,
        *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL),
        *(_QWORD *)(*((_QWORD *)this + 10) + 24LL));
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 10) + 6992LL); ++i )
    {
      v7 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 14) + 32LL * i);
      if ( *v7 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v7, this, 0LL, a4);
        *v7 = 0LL;
      }
    }
  }
  v8 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v8->Children[0] )
        {
          v17 = v8;
          v8 = v8->Children[0];
          v17->Children[0] = 0LL;
        }
        if ( !v8->Children[1] )
          break;
        v18 = v8;
        v8 = v8->Children[1];
        v18->Children[1] = 0LL;
      }
      ParentValue = v8->ParentValue;
      FreeVadAvl(v8, 0LL);
      v10 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v10 )
        break;
      v8 = (struct _RTL_BALANCED_NODE *)v10;
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  v11 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v11 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v11->Children[0] )
        {
          v16 = v11;
          v11 = v11->Children[0];
          v16->Children[0] = 0LL;
        }
        if ( !v11->Children[1] )
          break;
        v19 = v11;
        v11 = v11->Children[1];
        v19->Children[1] = 0LL;
      }
      v12 = v11->ParentValue;
      FreeVadAvl(v11, 0LL);
      v13 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v13 )
        break;
      v11 = (struct _RTL_BALANCED_NODE *)v13;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v14 = *((_QWORD *)this + 11);
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 88) & 2) == 0 )
    {
      v15 = (VIDMM_DEVICE *)*((_QWORD *)this + 12);
      if ( v15 )
        VIDMM_DEVICE::`scalar deleting destructor'(v15);
    }
  }
  operator delete(*((void **)this + 14));
  operator delete(this);
}
