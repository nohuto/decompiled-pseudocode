/*
 * XREFs of ?OnFocusRequest@MagnifierProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180105440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 */

__int64 __fastcall MagnifierProcessor::OnFocusRequest(
        MagnifierProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)a4 + 1);
  *(_DWORD *)a4 = 0;
  return 0LL;
}
