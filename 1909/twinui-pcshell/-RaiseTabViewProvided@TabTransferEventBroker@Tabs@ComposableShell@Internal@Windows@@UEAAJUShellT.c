/*
 * XREFs of ?RaiseTabViewProvided@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabId@2345@H@Z @ 0x18026B680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_6467f9191169c2bc35f91af727f9d16b___ @ 0x18015F60C (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18015F60C.c)
 *     ??$MakeAndInitialize@VTabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabViewProvidedEventArgs@2345@AEAUShellTabId@2345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAUITabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@AEAUShellTabId@4567@AEAH@Z @ 0x18026A528 (--$MakeAndInitialize@VTabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabViewP.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::RaiseTabViewProvided(
        RTL_SRWLOCK *a1,
        __int128 *a2,
        int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  RTL_SRWLOCK *v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  __int128 v11; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF

  v13 = a3;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs,Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs,Windows::Internal::ComposableShell::Tabs::ShellTabId &,int &>(
         &v14,
         a2,
         &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v10 = v14;
    v9 = a1;
    *(_QWORD *)&v11 = &v9;
    *((_QWORD *)&v11 + 1) = &v10;
    v5 = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_6467f9191169c2bc35f91af727f9d16b___(
           a1 + 4,
           &v11);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 99LL;
  }
  else
  {
    v7 = 98LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfereventbroker.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v6;
}
