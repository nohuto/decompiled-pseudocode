/*
 * XREFs of ?OnHomeGestureReadyChanged@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z @ 0x180112484
 * Callers:
 *     ?OnHomeGestureReadyChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z @ 0x1801159E0 (-OnHomeGestureReadyChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@_NII_KI.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005633C (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____ @ 0x18010EEEC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Wind.c)
 *     ??$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureReadyChangedEventArgs@@@12@AEA_NAEAI1AEA_K11@Z @ 0x18010F0FC (--$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA-.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18010FCE4 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 MPCManagerClient::OnHomeGestureReadyChanged(
        MPCManagerClient *this,
        struct BamoMPCManagerClientStub *a2,
        bool a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        ...)
{
  const char *v8; // r9
  HomeGestureReadyChangedEventArgs *v9; // rdi
  __int64 *v10; // rsi
  RTL_SRWLOCK *v11; // rbx
  HomeGestureReadyChangedEventArgs *v12; // rbx
  int v13; // esi
  volatile int *v14; // rdx
  MPCManagerClient *v16; // [rsp+40h] [rbp-20h] BYREF
  HomeGestureReadyChangedEventArgs *v17; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v18[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  HomeGestureReadyChangedEventArgs *v20; // [rsp+88h] [rbp+28h] BYREF
  bool v21; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h] BYREF

  va_start(va, a7);
  v22 = a4;
  v21 = a3;
  v20 = a2;
  Microsoft::WRL::Details::Make<HomeGestureReadyChangedEventArgs,bool &,unsigned int &,unsigned int &,unsigned __int64 &,unsigned int &,unsigned int &>(
    &v20,
    &v21,
    &v22,
    &a5,
    &a6,
    &a7,
    (unsigned int *)va);
  v9 = v20;
  if ( !v20 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      223LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v8);
    __debugbreak();
  }
  v20 = 0LL;
  v16 = this;
  v10 = (__int64 *)((char *)this + 1656);
  v18[0] = &v16;
  v11 = (RTL_SRWLOCK *)((char *)this + 1664);
  v17 = v9;
  v18[1] = &v17;
  AcquireSRWLockExclusive(v11);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v20, v10);
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  v12 = v20;
  if ( v20 )
  {
    v13 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____(
            v18,
            (__int64)v20,
            (__int64)v10);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v12,
      v14);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        224LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
  }
  (*(void (__fastcall **)(HomeGestureReadyChangedEventArgs *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
