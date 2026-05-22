/*
 * XREFs of ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x1800271BC
 * Callers:
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x180026D80 (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180087960 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x1800A734C (--1WGIRawInputProvider@@UEAA@XZ.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180052910 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?WGIRawInputProvider_SetInputFocusProcess_@ISMTracing@@QEAAXAEBK@Z @ 0x1800A80E8 (-WGIRawInputProvider_SetInputFocusProcess_@ISMTracing@@QEAAXAEBK@Z.c)
 */

__int64 __fastcall WGIRawInputProvider::SetInputFocusProcess(WGIRawInputProvider *this, unsigned int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 *v8; // rdx
  __int64 *v9; // r8
  __int64 v10; // rcx
  __int64 result; // rax
  ISMTracing *v12; // rcx
  const char *v13; // r9
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v16; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int32 InBuffer; // [rsp+68h] [rbp+28h] BYREF
  char *v18; // [rsp+78h] [rbp+38h] BYREF

  InBuffer = a2;
  if ( !*((_BYTE *)this + 400) )
    goto LABEL_7;
  v16 = a2;
  if ( !a3 )
  {
    RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v16, 4LL, 0LL);
    if ( ISMTracing::IsEnabled(v5) )
    {
      wil::details::static_lazy<ISMTracing>::get(v6, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::WGIRawInputProvider_SetInputFocusProcess_(v12, &v16);
    }
    if ( !*((_DWORD *)this + 102) )
      goto LABEL_6;
    v16 = 0;
  }
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v16, 4LL, 0LL);
LABEL_6:
  v7 = (void *)*((_QWORD *)this + 8);
  if ( v7 != (void *)-1LL && !DeviceIoControl(v7, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x17C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      v13);
    __debugbreak();
  }
LABEL_7:
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  v8 = (__int64 *)*((_QWORD *)this + 12);
  v9 = (__int64 *)*((_QWORD *)this + 13);
  v18 = (char *)this + 120;
  while ( v8 != v9 )
  {
    v14 = *v8++;
    _InterlockedExchange((volatile __int32 *)(v14 + 172), InBuffer);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v18);
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, InBuffer);
  *((_DWORD *)this + 101) = InBuffer;
  result = 0LL;
  *((_DWORD *)this + 102) = a3;
  return result;
}
