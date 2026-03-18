/*
 * XREFs of ?Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z @ 0x1C00F7B6C
 * Callers:
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULATIONPROCESS@@@Z @ 0x1C00F8C4C (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULAT.c)
 *     ?Initialize@DXGARGONEMULATIONPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGARGONEMULATIONPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C02299F8 (-Initialize@DXGARGONEMULATIONPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGARGONEMULATIONPROCESS@@PEAVADAPTE.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::Allocate(
        DXGPROCESS_ADAPTER_INFO_PASID_DATA *this,
        unsigned int a2)
{
  SIZE_T v4; // rax
  PVOID v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( a2 == 1 )
  {
    *((_QWORD *)this + 1) = this;
    return 0LL;
  }
  v4 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v4 = -1LL;
  v5 = operator new(v4, 0x4B677844u, 1, PagedPool);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
    return 0LL;
  v7 = WdLogNewEntry5_WdLowResource(v6);
  *(_QWORD *)(v7 + 24) = 5540LL;
  WdLogEvent5_WdLowResource(v7);
  return 3221225495LL;
}
