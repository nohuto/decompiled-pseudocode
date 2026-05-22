/*
 * XREFs of ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18001FDF0
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800212B0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180020148 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180021154 (-RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@P.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x180082780 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=17
MPCHolographicInputManager *__fastcall MPCHolographicInputManager::MPCHolographicInputManager(
        MPCHolographicInputManager *this)
{
  char *v2; // rbx
  const char *v3; // r9
  int v4; // eax
  RTL_SRWLOCK *Instance; // rax
  struct MPC3DStateHelper *v6; // rdi
  char v7; // bl
  const char *v9; // r9
  __int64 v10; // rax
  _BYTE v11[16]; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-11h] BYREF
  char v15; // [rsp+68h] [rbp-1h]
  MPCHolographicInputManager *v16; // [rsp+70h] [rbp+7h]
  _QWORD *v17; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  char v19; // [rsp+D0h] [rbp+67h]
  char v20; // [rsp+D8h] [rbp+6Fh] BYREF

  v19 = (char)this;
  v2 = (char *)this + 248;
  memset_0((char *)this + 248, 0, 0x7F0uLL);
  *((_DWORD *)v2 + 6) = 2032;
  *((_QWORD *)this + 286) = 0LL;
  *((_QWORD *)this + 287) = 0LL;
  *((_QWORD *)this + 288) = 0LL;
  *((_QWORD *)this + 289) = 0LL;
  *((_QWORD *)this + 290) = 0LL;
  *((_QWORD *)this + 291) = 0LL;
  *((_QWORD *)this + 292) = 0LL;
  *((_QWORD *)this + 293) = 0LL;
  *((_QWORD *)this + 294) = 0LL;
  *((_QWORD *)this + 295) = 0LL;
  *((_BYTE *)this + 2368) = 0;
  *((_DWORD *)this + 593) = 0;
  *((_QWORD *)this + 297) = 0LL;
  *((_QWORD *)this + 298) = 0LL;
  *((_QWORD *)this + 299) = 0LL;
  memset_0((char *)this + 2400, 0, 0xB0uLL);
  *((_QWORD *)this + 322) = 0LL;
  *((_QWORD *)this + 323) = 0LL;
  *((_QWORD *)this + 324) = 0LL;
  *((_QWORD *)this + 325) = 0LL;
  *((_QWORD *)this + 326) = 0LL;
  *((_QWORD *)this + 327) = 0LL;
  *((_DWORD *)this + 656) = 1;
  *((_QWORD *)this + 329) = 0LL;
  *((_DWORD *)this + 660) = 0;
  *((_DWORD *)this + 661) = 0;
  *((_BYTE *)this + 2648) = 0;
  *(_QWORD *)((char *)this + 2652) = 0LL;
  *((_DWORD *)this + 665) = 50;
  *((_DWORD *)this + 666) = 50;
  if ( MPCManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      v3);
  }
  else
  {
    v20 = 0;
    __ExceptionPtrCreate(v11);
    v12[0] = v11;
    v12[1] = &v20;
    if ( !std::_Execute_once(
            (struct std::once_flag *)&MPCManager::s_singletonCreated,
            (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_3bf0c1641773c9cead522fb3b6204044_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
            v12) )
    {
      if ( __ExceptionPtrToBool(v11) )
      {
        v10 = std::exception_ptr::exception_ptr((std::exception_ptr *)v13, (const struct std::exception_ptr *)v11);
        std::rethrow_exception(v10);
      }
      std::_XGetLastError();
      JUMPOUT(0x18004982ELL);
    }
  }
  __ExceptionPtrDestroy(v11);
  if ( !MPCManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      v9);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 2600);
  v4 = CoreUICreate((char *)this + 2600);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v4,
      -2);
    __debugbreak();
  }
  *((_BYTE *)this + 2280) = 0;
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  v14[0] = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager *,std::_Ph<1> const &>,void,bool>::`vftable';
  v14[1] = MPCHolographicInputManager::OnHitTestingStateChanged;
  v15 = v19;
  v16 = this;
  v17 = v14;
  MPC3DStateHelper::RegisterFor3DHitTestingAvailabilityChanged(Instance);
  v6 = MPC3DStateHelper::GetInstance();
  AcquireSRWLockShared((PSRWLOCK)v6);
  v7 = *((_BYTE *)v6 + 21);
  ReleaseSRWLockShared((PSRWLOCK)v6);
  if ( v7 )
    MPCHolographicInputManager::OnHitTestingStateChanged(this, 1);
  return this;
}
