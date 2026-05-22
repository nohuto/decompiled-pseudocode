/*
 * XREFs of ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x1800F9D44
 * Callers:
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$27 @ 0x18003BB40 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$27.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$3 @ 0x1800F9FA8 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 */

void __fastcall ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(
        ContextualProcessorBuffer::ContextualProcessorMetadata *this)
{
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this);
}
