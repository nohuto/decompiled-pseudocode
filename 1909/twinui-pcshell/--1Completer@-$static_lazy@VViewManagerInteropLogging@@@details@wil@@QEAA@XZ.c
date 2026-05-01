/*
 * XREFs of ??1Completer@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAA@XZ @ 0x18019C3FC
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001F810 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180035BB0 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

BOOL __fastcall wil::details::static_lazy<ViewManagerInteropLogging>::Completer::~Completer(LPINIT_ONCE *a1)
{
  DWORD v1; // edx

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
  {
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&(*a1)[1],
      (const struct _TlgProvider_t *)(*a1)[4].Ptr);
    v1 = *((_DWORD *)a1 + 2);
  }
  return InitOnceComplete(*a1, v1, &(*a1)[1]);
}
