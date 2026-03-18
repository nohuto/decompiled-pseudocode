/*
 * XREFs of ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C198
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C005ABF8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006AF40 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00846B0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     VidSchSwitchFromContext @ 0x1C007D1C0 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1C00CC440 (VidSchSwitchFromDevice.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyContextAllocationEviction(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)a2 + 15);
  if ( (*((_DWORD *)a2 + 19) & 0x10000000) != 0 )
  {
    if ( v2 && *(_QWORD *)(v2 + 656) )
      VidSchSwitchFromDevice();
  }
  else if ( v2 && (*(_DWORD *)(v2 + 412) & 0x10) == 0 )
  {
    v3 = *(_QWORD *)(v2 + 272);
    if ( v3 )
    {
      LOBYTE(a2) = 1;
      VidSchSwitchFromContext(v3, a2);
    }
  }
}
