/*
 * XREFs of ?OnHomeGestureReadyChanged@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z @ 0x180112634
 * Callers:
 *     ?OnHomeGestureReadyChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z @ 0x180115AC0 (-OnHomeGestureReadyChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@_NII_KI.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800565DC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____ @ 0x18010F11C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Wind.c)
 *     ??$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureReadyChangedEventArgs@@@12@AEA_NAEAI1AEA_K11@Z @ 0x18010F32C (--$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA-.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18010FF18 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
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
  volatile signed __int32 **v10; // rsi
  RTL_SRWLOCK *v11; // rbx
  volatile signed __int32 *v12; // rbx
  int v13; // esi
  MPCManagerClient *v15; // [rsp+40h] [rbp-20h] BYREF
  HomeGestureReadyChangedEventArgs *v16; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v17[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  HomeGestureReadyChangedEventArgs *v19; // [rsp+88h] [rbp+28h] BYREF
  bool v20; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h] BYREF

  va_start(va, a7);
  v21 = a4;
  v20 = a3;
  v19 = a2;
  Microsoft::WRL::Details::Make<HomeGestureReadyChangedEventArgs,bool &,unsigned int &,unsigned int &,unsigned __int64 &,unsigned int &,unsigned int &>(
    &v19,
    &v20,
    &v21,
    &a5,
    &a6,
    &a7,
    (unsigned int *)va);
  v9 = v19;
  if ( !v19 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      223LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v8);
    __debugbreak();
  }
  v19 = 0LL;
  v15 = this;
  v10 = (volatile signed __int32 **)((char *)this + 1656);
  v17[0] = &v15;
  v11 = (RTL_SRWLOCK *)((char *)this + 1664);
  v16 = v9;
  v17[1] = &v16;
  AcquireSRWLockExclusive(v11);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((volatile signed __int32 **)&v19, v10);
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  v12 = (volatile signed __int32 *)v19;
  if ( v19 )
  {
    v13 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____(
            v17,
            (__int64)v19,
            (__int64)v10);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v12);
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
