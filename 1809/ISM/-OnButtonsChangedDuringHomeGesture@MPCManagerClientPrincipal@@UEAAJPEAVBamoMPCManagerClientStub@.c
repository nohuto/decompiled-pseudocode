/*
 * XREFs of ?OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z @ 0x1800DF7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIAEAIAEA_KAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@12@AEAI00AEA_K0@Z @ 0x1800DB3F4 (--$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIAEAIAEA_KAEAI@Details@W.c)
 *     ??$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x1800DB48C (--$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DEE30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHom_ea_1800DEE30.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnButtonsChangedDuringHomeGesture(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        volatile signed __int64 *a6,
        unsigned int a7)
{
  __int64 v7; // rdi
  const char *v8; // r9
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  volatile signed __int64 *v12; // [rsp+40h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+28h] BYREF

  v7 = *((_QWORD *)this + 7);
  v12 = a6;
  v14 = a4;
  v13 = a3;
  Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::HomeGestureEventArgs,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &,unsigned int &>(
    (__int64 *)&a6,
    &v14,
    &v13,
    &a5,
    (unsigned __int64 *)&v12,
    &a7);
  if ( !a6 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x12B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v8);
    JUMPOUT(0x1800DF8A6LL);
  }
  v9 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>(
         v7 + 1096,
         v7,
         (__int64)a6);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x12D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(a6);
  return 0LL;
}
