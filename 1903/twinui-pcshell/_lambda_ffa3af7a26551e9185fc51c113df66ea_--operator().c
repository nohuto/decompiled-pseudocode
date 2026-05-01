/*
 * XREFs of _lambda_ffa3af7a26551e9185fc51c113df66ea_::operator() @ 0x180296994
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ffa3af7a26551e9185fc51c113df66ea___::Run @ 0x180299860 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ffa3af7a26551e9185fc51c113df66ea___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_107e2df1239c9f44dfee9d64da397eb2___ @ 0x1802945EC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_1802945EC.c)
 *     ??$MakeAndInitialize@VClientWindowReadyForPresentationEventArgs@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEB_N@Details@WRL@Microsoft@@YAJPEAPEAUIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEB_N@Z @ 0x180294F60 (--$MakeAndInitialize@VClientWindowReadyForPresentationEventArgs@@UIClientWindowReadyForPresentat.c)
 */

__int64 __fastcall lambda_ffa3af7a26551e9185fc51c113df66ea_::operator()(__int64 *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ClientWindowReadyForPresentationEventArgs,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,bool const &>(
         &v9,
         (_BYTE *)a1 + 16);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 2236LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_6;
  }
  v5 = *a1;
  v11 = v9;
  v10 = a1[1];
  *(_QWORD *)&v7 = &v10;
  *((_QWORD *)&v7 + 1) = &v11;
  v2 = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_107e2df1239c9f44dfee9d64da397eb2___(
         v5 + 488,
         &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 2238LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v3;
}
