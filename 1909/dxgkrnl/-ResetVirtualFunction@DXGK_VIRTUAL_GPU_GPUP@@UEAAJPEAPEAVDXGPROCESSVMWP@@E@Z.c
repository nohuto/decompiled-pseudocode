/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C02173B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C003C900 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C003C9C0 (-ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?DdiResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0213EC0 (-DdiResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct DXGPROCESSVMWP **a2,
        const GUID *a3)
{
  char v3; // si
  DXGPROCESS *v6; // rcx
  ADAPTER_RENDER *v7; // rcx
  _DXGKARG_RESETVIRTUALFUNCTION v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = (char)a3;
  if ( !*((_BYTE *)this + 146)
    && *((_QWORD *)this + 11)
    && DXGVIRTUALMACHINE::ResetVirtualGpu(*((struct _KTHREAD ***)this + 12))
    && a2 )
  {
    *a2 = (struct DXGPROCESSVMWP *)*((_QWORD *)this + 11);
  }
  if ( v3 )
  {
    v6 = (DXGPROCESS *)*((_QWORD *)this + 11);
    if ( v6 )
    {
      DXGPROCESS::ReleaseReferenceSafe(v6, (__int64)a2);
      *((_QWORD *)this + 11) = 0LL;
      *((_QWORD *)this + 12) = 0LL;
    }
  }
  v7 = (ADAPTER_RENDER *)*((_QWORD *)this + 1);
  v9.VirtualFunctionIndex = *((_DWORD *)this + 6);
  *((_BYTE *)this + 146) = 1;
  return ADAPTER_RENDER::DdiResetVirtualFunction(v7, &v9, a3);
}
