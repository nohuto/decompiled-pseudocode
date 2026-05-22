/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800C07A8
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180052F08 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180059AF0 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x18009F080 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800C5BB4 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800C8BB0 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x1800D0C70 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x1800D982C (-Initialize@CursorManager@@IEAAJXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180106064 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     _CursorManager::Initialize_::_1_::dtor$2 @ 0x18013078E (_CursorManager--Initialize_--_1_--dtor$2.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x180132278 (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x18013228A (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$2 @ 0x18013229C (_DWMInputRouter--Initialize_--_1_--dtor$2.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x180134338 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
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
