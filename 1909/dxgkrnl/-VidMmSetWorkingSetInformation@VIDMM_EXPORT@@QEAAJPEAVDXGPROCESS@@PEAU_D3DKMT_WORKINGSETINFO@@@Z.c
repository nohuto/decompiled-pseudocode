/*
 * XREFs of ?VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C003B914
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmSetWorkingSetInformation(
        VIDMM_EXPORT *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_WORKINGSETINFO *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx

  v3 = *((_QWORD *)a2 + 9);
  v5 = 0LL;
  if ( v3 )
    v5 = *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)this - 1));
  return (*(__int64 (__fastcall **)(__int64, struct _D3DKMT_WORKINGSETINFO *))(*((_QWORD *)this + 1) + 368LL))(v5, a3);
}
