/*
 * XREFs of ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800986CC
 * Callers:
 *     ??0SpeechRuntimeListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x180098594 (--0SpeechRuntimeListener@@QEAA@PEAVMPCRawInputProvider@@K@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18001B50C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18001B67C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800988E8 (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpeechRuntimeListener::InitializeCoreMessaging(SpeechRuntimeListener *this)
{
  __int64 v2; // rcx
  ISMTracing *v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  int Descriptor; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, const wchar_t *, char *); // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, char *); // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  ISMTracing *v16; // rcx
  __int64 v18; // [rsp+38h] [rbp-20h] BYREF
  char v19; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v2, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogSpeechRuntimeListenerFunct_(v3, L"InitializingCoreMessaging");
  }
  v18 = 0LL;
  v19 = 0;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this);
  v4 = CoreUICreate(this);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      73LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor(
                 (__int64)&v18,
                 v5,
                 (__int64)L"System\\SpeechRuntimeListenerPort");
  if ( Descriptor < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      77LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)Descriptor);
    __debugbreak();
  }
  v7 = *(_QWORD *)this;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(**(_QWORD **)this + 48LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 2);
  v9 = v8(v7, v18, L"System\\SpeechRuntimeListenerPort", (char *)this + 16);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      82LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *, const void *, int), SpeechRuntimeListener *, _QWORD, char *))(**(_QWORD **)this + 88LL))(
          *(_QWORD *)this,
          SpeechRuntimeListener::OnMessageCallbackStatic,
          this,
          *((_QWORD *)this + 2),
          (char *)this + 24);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      88LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = *(_QWORD *)this;
  v12 = *(__int64 (__fastcall **)(__int64, char *))(**(_QWORD **)this + 24LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 1);
  v13 = v12(v11, (char *)this + 8);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      90LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64))(**((_QWORD **)this + 1) + 40LL))(
          *((_QWORD *)this + 1),
          L"System\\SpeechRuntimeListener",
          *((_QWORD *)this + 3),
          1LL);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      95LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  if ( ISMTracing::IsEnabled((__int64)retaddr) )
  {
    wil::details::static_lazy<ISMTracing>::get(v15, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogSpeechRuntimeListenerFunct_(v16, L"InitializedCoreMessaging");
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v18);
  return 0LL;
}
