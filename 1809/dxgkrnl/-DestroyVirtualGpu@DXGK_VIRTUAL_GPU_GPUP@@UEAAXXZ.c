/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C01E72E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C00363B8 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00363FC (-RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_GPUP *this)
{
  DXGPROCESS *v2; // rcx

  v2 = (DXGPROCESS *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    if ( *((_QWORD *)this + 12) )
    {
      DXGVIRTUALMACHINE::RemoveVirtualGpu(*((struct _KTHREAD ***)this + 12), (struct _LIST_ENTRY *)this + 8);
      *((_QWORD *)this + 12) = 0LL;
      v2 = (DXGPROCESS *)*((_QWORD *)this + 11);
    }
    DXGPROCESS::ReleaseReferenceSafe(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
}
