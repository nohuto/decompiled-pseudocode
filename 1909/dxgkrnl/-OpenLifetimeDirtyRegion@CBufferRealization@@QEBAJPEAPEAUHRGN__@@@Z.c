/*
 * XREFs of ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C00115BC
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0010DF0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C001136C (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBufferRealization::OpenLifetimeDirtyRegion(CBufferRealization *this, HRGN *a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  v5 = (*(__int64 (__fastcall **)(__int64 *))(*((_QWORD *)Global + 38000) + 16LL))(&v7);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 48LL))(v7, *((_QWORD *)this + 8), 5LL);
    if ( v5 >= 0 )
      v5 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v7 + 56LL))(v7, a2);
    (**(void (__fastcall ***)(__int64))v7)(v7);
  }
  return (unsigned int)v5;
}
