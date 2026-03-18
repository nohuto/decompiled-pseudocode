/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C01E6360
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C00363B8 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C0036478 (-ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C01E8868 (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct DXGPROCESSVMWP **a2,
        char a3)
{
  DXGPROCESS *v6; // rcx
  __int64 result; // rax

  if ( !*((_BYTE *)this + 146) )
  {
    if ( *((_QWORD *)this + 11) && DXGVIRTUALMACHINE::ResetVirtualGpu(*((struct _KTHREAD ***)this + 12)) && a2 )
      *a2 = (struct DXGPROCESSVMWP *)*((_QWORD *)this + 11);
    *((_BYTE *)this + 157) = 0;
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 160));
  }
  if ( a3 )
  {
    v6 = (DXGPROCESS *)*((_QWORD *)this + 11);
    if ( v6 )
    {
      DXGPROCESS::ReleaseReferenceSafe(v6);
      *((_QWORD *)this + 11) = 0LL;
      *((_QWORD *)this + 12) = 0LL;
    }
  }
  result = 0LL;
  *((_BYTE *)this + 146) = 1;
  return result;
}
