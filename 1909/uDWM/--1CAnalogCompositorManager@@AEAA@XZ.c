/*
 * XREFs of ??1CAnalogCompositorManager@@AEAA@XZ @ 0x18004E044
 * Callers:
 *     _CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__ @ 0x180050410 (_CAnalogCompositorManager--GetInstance_--_2_--_dynamic_atexit_destructor_for__singletonAnalogCom.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180039BF8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18007948C (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 */

void __fastcall CAnalogCompositorManager::~CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = xmmword_1800DEB60;
  if ( (_QWORD)xmmword_1800DEB60 )
  {
    *(_QWORD *)&xmmword_1800DEB60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&qword_1800DEB58);
  Windows::Mirage::HolographicDriverDetectedWatcher::~HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)&qword_1800DEB28);
  v2 = qword_1800DEB20;
  if ( qword_1800DEB20 )
  {
    qword_1800DEB20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
