/*
 * XREFs of ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0130A6C
 * Callers:
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E17E8 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C013092C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F49C4 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
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
