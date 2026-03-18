/*
 * XREFs of ?VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C0034E68
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FF18 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmSetWorkingSetInformation(
        VIDMM_EXPORT *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_WORKINGSETINFO *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11, Current);
  v7 = *((_QWORD *)a2 + 9);
  if ( v7 )
    v7 = *(_QWORD *)(v7 + 8LL * (unsigned int)(*(_DWORD *)this - 1));
  v8 = (*(__int64 (__fastcall **)(__int64, struct _D3DKMT_WORKINGSETINFO *))(*((_QWORD *)this + 1) + 368LL))(v7, a3);
  if ( v11 )
  {
    v9 = v11 + 144;
    *(_QWORD *)(v11 + 152) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  return v8;
}
