/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18001B50C
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800104BC (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x1800106A8 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x1800197F0 (-RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV-$ComPtr@UIMessageSession@@@WRL@Mi.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180019EC8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18001EA3C (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180029008 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     _TestCommandHost::CreateEndpointToReceiveMessages_::_1_::dtor$0 @ 0x18003AE30 (_TestCommandHost--CreateEndpointToReceiveMessages_--_1_--dtor$0.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x18003C7B3 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x18003C81C (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x18003C82E (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$2 @ 0x18003C840 (_DWMInputRouter--Initialize_--_1_--dtor$2.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800986CC (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     _SpeechRuntimeListener::InitializeCoreMessaging_::_1_::dtor$0 @ 0x1800988D6 (_SpeechRuntimeListener--InitializeCoreMessaging_--_1_--dtor$0.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800FD6BC (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x1800FD93E (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800FF540 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     _DragNDropProcessorLegacy::Initialize_::_1_::dtor$0 @ 0x1800FF794 (_DragNDropProcessorLegacy--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18010E4E8 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     _CursorManager::Initialize_::_1_::dtor$2 @ 0x18010E70A (_CursorManager--Initialize_--_1_--dtor$2.c)
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
