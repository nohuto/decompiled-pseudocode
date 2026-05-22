/*
 * XREFs of ?OnInteractiveIntentGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@IIII_KI@Z @ 0x180112A90
 * Callers:
 *     ?OnInteractiveIntentGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@IIII_KI@Z @ 0x180115D60 (-OnInteractiveIntentGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULe.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800565DC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x18010F080 (--$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@.c)
 *     ??$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIAEAIAEA_KAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@12@AEAI00AEA_K0@Z @ 0x18010F29C (--$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIAEAIAEA_KAEAI@Details@W.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180113800 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHom_ea_180113800.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCManagerClient::OnInteractiveIntentGesture(
        RTL_SRWLOCK *this,
        struct BamoMPCManagerClientStub *a2,
        const struct LegacyDeviceInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  const char *v11; // r9
  unsigned int v12; // edi
  int v13; // eax
  PVOID Ptr; // rcx
  __int64 v16[2]; // [rsp+30h] [rbp-658h] BYREF
  _BYTE v17[1568]; // [rsp+40h] [rbp-648h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+688h] [rbp+0h]

  v16[1] = -2LL;
  memcpy_0(v17, a3, sizeof(v17));
  Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::HomeGestureEventArgs,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &,unsigned int &>(
    v16,
    &a6,
    &a5,
    &a7,
    &a8,
    &a9);
  v12 = 0;
  if ( !v16[0] )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      128LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v11);
    __debugbreak();
  }
  v13 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>(
          this + 216,
          (__int64)this,
          v16[0]);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      130LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  Ptr = this[204].Ptr;
  if ( Ptr )
    v12 = (*(__int64 (__fastcall **)(PVOID, _BYTE *, _QWORD))(*(_QWORD *)Ptr + 24LL))(Ptr, v17, a4);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(v16[0]);
  return v12;
}
