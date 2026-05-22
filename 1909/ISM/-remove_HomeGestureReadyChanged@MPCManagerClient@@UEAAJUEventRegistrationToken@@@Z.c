/*
 * XREFs of ?remove_HomeGestureReadyChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x1801150A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::remove_HomeGestureReadyChanged(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           this + 204,
           (struct IUnknown *)a2.value);
}
