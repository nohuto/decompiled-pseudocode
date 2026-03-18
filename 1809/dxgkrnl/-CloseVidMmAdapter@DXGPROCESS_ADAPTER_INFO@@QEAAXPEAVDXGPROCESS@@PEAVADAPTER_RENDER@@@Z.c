/*
 * XREFs of ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F03C8
 * Callers:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C00EEC68 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULATIONPROCESS@@@Z @ 0x1C00F8C4C (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULAT.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01C6030 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(
        DXGPROCESS_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  if ( *((_BYTE *)this + 76) )
  {
    (*(void (__fastcall **)(_QWORD, struct DXGPROCESS *))(*(_QWORD *)(*((_QWORD *)a3 + 68) + 8LL) + 1184LL))(
      *((_QWORD *)a3 + 69),
      a2);
    *((_BYTE *)this + 76) = 0;
  }
}
