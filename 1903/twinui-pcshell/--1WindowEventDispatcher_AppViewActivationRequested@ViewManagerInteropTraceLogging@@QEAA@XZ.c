/*
 * XREFs of ??1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18000C110
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18000BDE0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180036E90 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     _WindowEventDispatcher::AppViewActivationShowRequested_::_1_::dtor$0 @ 0x1800C2340 (_WindowEventDispatcher--AppViewActivationShowRequested_--_1_--dtor$0.c)
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$0 @ 0x1800C48B0 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000C474 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::~WindowEventDispatcher_AppViewActivationRequested(
        ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
