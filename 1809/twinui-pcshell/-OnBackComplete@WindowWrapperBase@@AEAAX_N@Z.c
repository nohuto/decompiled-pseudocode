/*
 * XREFs of ?OnBackComplete@WindowWrapperBase@@AEAAX_N@Z @ 0x1802506B0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_cfe8a03ac575afe0641be483f4e1f97d___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1802505B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1802505B0.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E48 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800E5AB0 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BE674 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeOrThrow@VViewHandledEventArgs@@AEA_N@wil@@YA?AV?$ComPtr@VViewHandledEventArgs@@@WRL@Microsoft@@AEA_N@Z @ 0x18024E86C (--$MakeOrThrow@VViewHandledEventArgs@@AEA_N@wil@@YA-AV-$ComPtr@VViewHandledEventArgs@@@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowWrapperBase::OnBackComplete(WindowWrapperBase *this, char a2)
{
  __int64 v3; // rbx
  void *v4; // [rsp+50h] [rbp+20h] BYREF
  char v5; // [rsp+58h] [rbp+28h] BYREF
  __int64 v6; // [rsp+60h] [rbp+30h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+38h] BYREF

  v5 = a2;
  v3 = 0LL;
  v6 = 0LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 184LL))(*((_QWORD *)this + 35), &SRWLock);
  if ( *((_BYTE *)this + 184) )
  {
    *((_BYTE *)this + 184) = 0;
    AgileGitPtr::operator=(&v6, (__int64 *)this + 24);
    v3 = v6;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v4 = 0LL;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
    if ( (int)AgileGitPtr::CopyLocal((AgileGitPtr *)&v6, &GUID_74a6aa4a_97db_52bb_9d5b_d1dc398860b1, &v4) >= 0 )
    {
      wil::MakeOrThrow<ViewHandledEventArgs,bool &>((__int64 *)&SRWLock, &v5);
      (*(void (__fastcall **)(void *, char *, PSRWLOCK))(*(_QWORD *)v4 + 24LL))(v4, (char *)this + 8, SRWLock);
      Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease((__int64 *)&SRWLock);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
}
