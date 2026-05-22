/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18001B02C
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x18001042C (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180010618 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x180019310 (-RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV-$ComPtr@UIMessageSession@@@WRL@Mi.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18001E55C (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180028B28 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     _TestCommandHost::CreateEndpointToReceiveMessages_::_1_::dtor$0 @ 0x18003A900 (_TestCommandHost--CreateEndpointToReceiveMessages_--_1_--dtor$0.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x18003C283 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x18003C2EC (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x18003C2FE (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$2 @ 0x18003C310 (_DWMInputRouter--Initialize_--_1_--dtor$2.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800984AC (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     _SpeechRuntimeListener::InitializeCoreMessaging_::_1_::dtor$0 @ 0x1800986B6 (_SpeechRuntimeListener--InitializeCoreMessaging_--_1_--dtor$0.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800FD48C (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x1800FD70E (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800FF310 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     _DragNDropProcessorLegacy::Initialize_::_1_::dtor$0 @ 0x1800FF564 (_DragNDropProcessorLegacy--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18010E2B8 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     _CursorManager::Initialize_::_1_::dtor$2 @ 0x18010E4DA (_CursorManager--Initialize_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall InputSecurityDescriptor::~InputSecurityDescriptor(InputSecurityDescriptor *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(v2);
    *(_QWORD *)this = 0LL;
  }
}
