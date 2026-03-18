/*
 * XREFs of ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0019CF8
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct _VIDMM_MULTI_ALLOC *a4,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a5,
        char a6,
        unsigned int a7)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_PAGING_QUEUE *, struct _VIDMM_MULTI_ALLOC *, struct D3DDDI_MAPGPUVIRTUALADDRESS *, char, unsigned int))(*((_QWORD *)this + 1) + 792LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
