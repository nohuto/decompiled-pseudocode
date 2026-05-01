/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen___IInspectable____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_f3e2ba377ecf56fb3aa66def83e00359___ @ 0x18003C184
 * Callers:
 *     _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x18003C074 (_lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A8AA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____ @ 0x18015F9AC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Wind.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen___IInspectable____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_f3e2ba377ecf56fb3aa66def83e00359___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rsi
  unsigned int v4; // edi
  __int64 v6; // rbx
  __int64 v7; // r10
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 1;
  v4 = 0;
  v6 = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(a1->Ptr);
    v6 = v7;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v6 )
  {
    v9 = *a2;
    v4 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____(
           &v9,
           v6,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  return v4;
}
