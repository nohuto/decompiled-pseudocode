/*
 * XREFs of ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C00603F0
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C00019D0 (-VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@.c)
 *     ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C00AE9A0 (-VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C00604D4 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        char a5,
        unsigned int a6)
{
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // rax
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // [rsp+68h] [rbp+20h]

  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  if ( (*(_BYTE *)&Value & 8) == 0 || (*(_BYTE *)&Value & 7) == 0 )
  {
    v10 = *(_BYTE *)&Value & 0xC;
    if ( v10 )
    {
      if ( a3 )
      {
        v15 = WdLogNewEntry5_WdWarning(this, a2);
        *(_QWORD *)(v15 + 24) = 19687LL;
        goto LABEL_14;
      }
    }
    else if ( a3 )
    {
      goto LABEL_7;
    }
    if ( !v10 )
    {
      v15 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v15 + 24) = 19693LL;
      goto LABEL_14;
    }
LABEL_7:
    a4->BaseAddress &= 0xFFFFFFFFFFFFF000uLL;
    a4->MinimumAddress &= 0xFFFFFFFFFFFFF000uLL;
    a4->MaximumAddress &= 0xFFFFFFFFFFFFF000uLL;
    if ( a2 )
      return VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(this, a2, a3, a4, a5);
    if ( a6 == -1 )
    {
      v16 = 0;
      if ( !*((_DWORD *)this + 1748) )
        return v20;
      while ( 1 )
      {
        v14 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
                this,
                (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 72LL) + 176LL * v16),
                a3,
                a4,
                0);
        if ( v14 < 0 )
          break;
        ++v16;
        a4->BaseAddress = a4->VirtualAddress;
        if ( v16 >= *((_DWORD *)this + 1748) )
          return (unsigned int)v14;
      }
      v19 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v19 + 24) = v16;
    }
    else
    {
      v14 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
              this,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 72LL) + 176LL * a6),
              a3,
              a4,
              0);
      if ( v14 >= 0 )
        return (unsigned int)v14;
      v19 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v19 + 24) = a6;
    }
    WdLogEvent5_WdAssertion(v19);
    return (unsigned int)v14;
  }
  v15 = WdLogNewEntry5_WdWarning(this, a2);
LABEL_14:
  WdLogEvent5_WdWarning(v15);
  return 3221225485LL;
}
