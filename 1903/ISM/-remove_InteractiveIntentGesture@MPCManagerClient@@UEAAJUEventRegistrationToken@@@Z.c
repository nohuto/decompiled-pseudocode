/*
 * XREFs of ?remove_InteractiveIntentGesture@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x1801151B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::remove_InteractiveIntentGesture(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           this + 213,
           (struct IUnknown *)a2.value);
}
