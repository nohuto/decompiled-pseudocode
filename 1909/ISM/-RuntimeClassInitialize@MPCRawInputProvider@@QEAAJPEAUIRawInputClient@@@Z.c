/*
 * XREFs of ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18001FB38
 * Callers:
 *     ??$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIRawInputProvider@@AEAPEAUIRawInputClient@@@Z @ 0x180017C5C (--$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@.c)
 * Callees:
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180015F08 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18001F660 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18001F834 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18001FC68 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180024BD8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180052670 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800945E0 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 */

__int64 __fastcall MPCRawInputProvider::RuntimeClassInitialize(MPCRawInputProvider *this, struct IRawInputClient *a2)
{
  HANDLE Event; // rdi
  const char *v4; // r9
  _QWORD *v5; // rdi
  int v6; // eax
  const char *v7; // r9
  int v8; // eax
  RTL_SRWLOCK *Instance; // rax
  RTL_SRWLOCK *v10; // rax
  int v12; // [rsp+28h] [rbp-19h]
  __int128 v13; // [rsp+38h] [rbp-9h]
  char v14; // [rsp+48h] [rbp+7h]
  void **v15; // [rsp+58h] [rbp+17h] BYREF
  __int128 v16; // [rsp+60h] [rbp+1Fh]
  char v17; // [rsp+70h] [rbp+2Fh]
  MPCRawInputProvider *v18; // [rsp+78h] [rbp+37h]
  void ***v19; // [rsp+90h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)this + 2, (__int64)a2);
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x1521,
      (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v4);
    __debugbreak();
  }
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (char *)this + 72,
    Event);
  v5 = (_QWORD *)((char *)this + 64);
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 64);
  v6 = CoreUICreate((char *)this + 64);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v6,
      v12);
    __debugbreak();
  }
  if ( !*v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x23,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), MPCRawInputProvider *))(*(_QWORD *)*v5 + 248LL))(
         *v5,
         *((_QWORD *)this + 9),
         MPCRawInputProvider::InputReceivedStatic,
         this);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v8,
      v12);
    __debugbreak();
  }
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  DWORD2(v13) = 0;
  *(_QWORD *)&v13 = MPCRawInputProvider::OnCompositorRunningStateChanged;
  v18 = this;
  v15 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCRawInputProvider::*)(bool),MPCRawInputProvider *,std::_Ph<1> const &>,void,bool>::`vftable';
  v17 = v14;
  v19 = &v15;
  v16 = v13;
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(Instance, (__int64)&v15, (unsigned int *)this + 21);
  v10 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  if ( MPC3DStateHelper::Is3DCompositorRunning(v10) )
    MPCRawInputProvider::OnCompositorRunningStateChanged(this, 1);
  return 0LL;
}
