/*
 * XREFs of ??1CSpatialVisualContent@@MEAA@XZ @ 0x1801DADFC
 * Callers:
 *     ??_ECSpatialVisualContent@@MEAAPEAXI@Z @ 0x1801DAE60 (--_ECSpatialVisualContent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z @ 0x180157120 (-UnregisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z.c)
 */

void __fastcall CSpatialVisualContent::~CSpatialVisualContent(CSpatialVisualContent *this)
{
  struct ISpatialNotificationListener *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = (CSpatialVisualContent *)((char *)this + 56);
  *(_QWORD *)this = &CSpatialVisualContent::`vftable'{for `CContent'};
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)v1 = &CSpatialVisualContent::`vftable'{for `ISpatialNotificationListener'};
  CSpatialResourceManager::UnregisterSpatialListener(*(CSpatialResourceManager **)(v3 + 136), v1);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 9);
  CResource::~CResource(this);
}
