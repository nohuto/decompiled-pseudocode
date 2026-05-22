/*
 * XREFs of ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800FF540
 * Callers:
 *     ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800FEA44 (-Create@DragNDropProcessorLegacy@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18001B50C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18001B67C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002736C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessorLegacy::Initialize(DragNDropProcessorLegacy *this)
{
  __int64 *v2; // rsi
  int v3; // eax
  const char *v4; // r9
  __int64 v5; // rdx
  int Descriptor; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, char *); // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 (__fastcall *)(void *, const void *, int), DragNDropProcessorLegacy *, _QWORD, char *); // rbx
  int v12; // eax
  int EndpointHost; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  int v17; // eax
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  char v20; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 32);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 4);
  v3 = CoreUICreate(v2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      61LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  if ( !*v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      62LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      v4);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 5,
    *v2);
  v19 = 0LL;
  v20 = 0;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v19, v5, (__int64)c_wszMessagePortNames);
  if ( Descriptor < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      73LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)Descriptor);
    __debugbreak();
  }
  v7 = *v2;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)*v2 + 56LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 7);
  v9 = v8(v7, v19, (char *)this + 56);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      77LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = *v2;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), DragNDropProcessorLegacy *, _QWORD, char *))(*(_QWORD *)*v2 + 88LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 5,
    *((_QWORD *)this + 5));
  v12 = v11(v10, DragNDropProcessorLegacy::MessageProc, this, *((_QWORD *)this + 7), (char *)this + 48);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      83LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 8);
  EndpointHost = CoreUICallCreateEndpointHost(*v2, (char *)this + 64, (char *)this + 72);
  if ( EndpointHost < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      88LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)EndpointHost);
    __debugbreak();
  }
  v22 = 0LL;
  v14 = *v2;
  v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 24LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v22);
  v16 = v15(v14, &v22);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      96LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v22 + 40LL))(
          v22,
          L"System\\Input\\DragNDrop",
          *((_QWORD *)this + 6),
          1LL);
  if ( v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      101LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v17);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v22);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v19);
  return 0LL;
}
