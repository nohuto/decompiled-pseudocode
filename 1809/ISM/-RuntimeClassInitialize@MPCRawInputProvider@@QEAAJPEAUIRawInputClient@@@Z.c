/*
 * XREFs of ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180057230
 * Callers:
 *     ?Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800576E0 (-Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004D78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18003AFA0 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18003B008 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180057A80 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::RuntimeClassInitialize(MPCRawInputProvider *this, struct IRawInputClient *a2)
{
  struct IRawInputClient *v4; // rcx
  struct IRawInputClient *v5; // rdx
  int v6; // ebx
  int v7; // eax
  HANDLE Event; // rbx
  const char *v9; // r9
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  const char *v13; // r9
  int v14; // eax
  RTL_SRWLOCK *Instance; // rcx
  RTL_SRWLOCK *v16; // rax
  __int128 v18; // [rsp+40h] [rbp-11h]
  __int128 v19; // [rsp+50h] [rbp-1h]
  void **v20; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v21; // [rsp+68h] [rbp+17h]
  __int128 v22; // [rsp+78h] [rbp+27h]
  void ***v23; // [rsp+98h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v4 = (struct IRawInputClient *)*((_QWORD *)this + 2);
  if ( v4 != a2 )
  {
    v5 = v4;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IRawInputClient *, struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2, v4);
      v5 = (struct IRawInputClient *)*((_QWORD *)this + 2);
    }
    *((_QWORD *)this + 2) = a2;
    v4 = a2;
    if ( v5 )
    {
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)v5 + 16LL))(v5);
      v4 = (struct IRawInputClient *)*((_QWORD *)this + 2);
    }
  }
  v6 = (*(__int64 (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)v4 + 32LL))(v4);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  *((_DWORD *)this + 6) = v6;
  *((_DWORD *)this + 7) = 512;
  *((_DWORD *)this + 252) = v7;
  *((_DWORD *)this + 253) = 0x20000;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x169C,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      v9);
    __debugbreak();
  }
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    (void **)this + 253,
    Event);
  v10 = (_QWORD *)((char *)this + 2016);
  v11 = *((_QWORD *)this + 252);
  if ( v11 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = CoreUICreate((char *)this + 2016);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  if ( !*v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      v13);
    JUMPOUT(0x180057464LL);
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), MPCRawInputProvider *))(*(_QWORD *)*v10 + 264LL))(
          *v10,
          *((_QWORD *)this + 253),
          MPCRawInputProvider::InputReceivedStatic,
          this);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  *((_BYTE *)this + 2032) = 1;
  *(_QWORD *)&v18 = MPCRawInputProvider::OnCompositorRunningStateChanged;
  DWORD2(v18) = 0;
  *((_QWORD *)&v19 + 1) = this;
  v20 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCRawInputProvider::*)(bool),MPCRawInputProvider *,std::_Ph<1> const &>,void,bool>::`vftable';
  v21 = v18;
  v22 = v19;
  v23 = &v20;
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(Instance, (__int64)&v20, (unsigned int *)this + 526);
  v16 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  if ( MPC3DStateHelper::Is3DCompositorRunning(v16) )
    MPCRawInputProvider::OnCompositorRunningStateChanged(this, 1);
  return 0LL;
}
