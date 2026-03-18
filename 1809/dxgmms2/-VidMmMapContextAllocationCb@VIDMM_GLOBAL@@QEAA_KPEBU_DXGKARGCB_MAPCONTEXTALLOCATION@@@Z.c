/*
 * XREFs of ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C00AE9A0
 * Callers:
 *     ?VidMmMapContextAllocationCb@@YA_KPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C0024DD0 (-VidMmMapContextAllocationCb@@YA_KPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C00603F0 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 */

D3DGPU_VIRTUAL_ADDRESS __fastcall VIDMM_GLOBAL::VidMmMapContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_MAPCONTEXTALLOCATION *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  D3DDDI_MAPGPUVIRTUALADDRESS v10; // [rsp+30h] [rbp-88h] BYREF

  memset(&v10, 0, sizeof(v10));
  v10.BaseAddress = a2->BaseAddress;
  v10.DriverProtection = a2->DriverProtection;
  v10.MaximumAddress = a2->MaximumAddress;
  v10.MinimumAddress = a2->MinimumAddress;
  v10.OffsetInPages = a2->OffsetInPages;
  v10.SizeInPages = a2->SizeInPages;
  v10.Protection.Value = a2->Protection.Value;
  v4 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
         this,
         0LL,
         *((struct _VIDMM_MULTI_ALLOC **)a2->hAllocation + 3),
         &v10,
         0,
         *(_DWORD *)(***((_QWORD ***)a2->hAllocation + 3) + 76LL) & 0x3F);
  v7 = v4;
  if ( v4 >= 0 )
    return v10.VirtualAddress;
  v8 = WdLogNewEntry5_WdAssertion(v6, v5);
  *(_QWORD *)(v8 + 24) = v7;
  WdLogEvent5_WdAssertion(v8);
  return 0LL;
}
