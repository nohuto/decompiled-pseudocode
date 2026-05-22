/*
 * XREFs of ??1?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18010FAC0
 * Callers:
 *     _MPCManagerClient::OnInteractiveIntentGesture_::_1_::dtor$0 @ 0x1801129FE (_MPCManagerClient--OnInteractiveIntentGesture_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180113650 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHom_ea_180113650.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Input::MPCManager::HomeGestureEventArgs>::~ComPtr<Windows::Internal::Input::MPCManager::HomeGestureEventArgs>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
