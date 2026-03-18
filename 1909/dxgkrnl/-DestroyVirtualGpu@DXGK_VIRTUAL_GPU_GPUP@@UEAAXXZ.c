/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C0216F70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C003C900 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003C944 (-RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_GPUP *this, __int64 a2)
{
  DXGPROCESS *v3; // rcx

  v3 = (DXGPROCESS *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 12) )
    {
      DXGVIRTUALMACHINE::RemoveVirtualGpu(*((struct _KTHREAD ***)this + 12), (struct _LIST_ENTRY *)this + 8);
      *((_QWORD *)this + 12) = 0LL;
      v3 = (DXGPROCESS *)*((_QWORD *)this + 11);
    }
    DXGPROCESS::ReleaseReferenceSafe(v3, a2);
    *((_QWORD *)this + 11) = 0LL;
  }
}
