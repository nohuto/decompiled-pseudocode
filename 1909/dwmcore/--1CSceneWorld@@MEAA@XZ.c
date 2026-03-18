/*
 * XREFs of ??1CSceneWorld@@MEAA@XZ @ 0x180204130
 * Callers:
 *     ??_GCSceneWorld@@MEAAPEAXI@Z @ 0x1802041B0 (--_GCSceneWorld@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017ADD0 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneWorld::~CSceneWorld(CSceneWorld *this)
{
  struct ISceneNotificationListener *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = (CSceneWorld *)((char *)this + 56);
  *(_QWORD *)this = &CSceneWorld::`vftable'{for `CContent'};
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)v1 = &CSceneWorld::`vftable'{for `ISceneNotificationListener'};
  CSceneResourceManager::UnregisterSceneListener(*(CSceneResourceManager **)(v3 + 128), v1);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 8);
  CResource::~CResource(this);
}
