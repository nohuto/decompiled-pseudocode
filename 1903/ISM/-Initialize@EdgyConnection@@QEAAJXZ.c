/*
 * XREFs of ?Initialize@EdgyConnection@@QEAAJXZ @ 0x180100228
 * Callers:
 *     ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x180100A14 (-Create@EdgyProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18001B544 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002736C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800674EC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall EdgyConnection::Initialize(EdgyConnection *this)
{
  __int64 *v1; // r14
  int v3; // eax
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, __int64 (__fastcall *)(void *, const void *, int), EdgyConnection *, char *); // rdi
  int v6; // eax
  __int64 v7; // rdi
  _QWORD *v8; // r15
  __int64 (__fastcall *v9)(__int64, char *); // rbx
  int v10; // eax
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, const wchar_t *, _QWORD, char *); // rbx
  int v15; // eax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  const char *v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 16);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 2);
  v3 = CoreUICreate(v1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      72LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 4,
    *v1);
  v4 = *v1;
  v5 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), EdgyConnection *, char *))(*(_QWORD *)*v1 + 96LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 4,
    *((_QWORD *)this + 4));
  v6 = v5(v4, EdgyConnection::OnEdgyCompositionUpdateStatic, this, (char *)this + 40);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      79LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = *v1;
  v8 = (_QWORD *)((char *)this + 24);
  v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v1 + 24LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 3);
  v10 = v9(v7, (char *)this + 24);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      81LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD))(*(_QWORD *)*v8 + 40LL))(
          *v8,
          L"EdgyConfigurationEndpoint",
          *((_QWORD *)this + 5),
          0LL);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      86LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 6,
    *v1);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v12);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v13 = *v8;
    v14 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, char *))(*(_QWORD *)*v8 + 24LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (_QWORD *)this + 6,
      *((_QWORD *)this + 6));
    v15 = v14(v13, L"EdgyNotificationEndpoint", 0LL, (char *)this + 56);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        99LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( !BamoServerConnection )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      107LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      v17);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 40LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
  v19 = *((_QWORD *)this + 8);
  if ( v19 != v18 )
  {
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 24));
      v19 = *((_QWORD *)this + 8);
    }
    v22 = v19;
    *((_QWORD *)this + 8) = v18;
    Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(&v22);
  }
  return 0LL;
}
