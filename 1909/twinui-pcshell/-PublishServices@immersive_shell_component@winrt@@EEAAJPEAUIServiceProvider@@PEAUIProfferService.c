/*
 * XREFs of ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800C1590
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E800 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E838 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x1800C4834 (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 *     ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C4FF0 (-query_interface@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService.c)
 *     ?swap@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1800C50F4 (-swap@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_descr.c)
 *     ?unconditional_release_ref@?$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ @ 0x1800C515C (-unconditional_release_ref@-$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall winrt::immersive_shell_component::PublishServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v6; // rdi
  int v7; // eax
  const char *v8; // r9
  __int128 i; // rdi
  __int64 v10; // rbx
  void (__fastcall ***v11)(_QWORD, void *, PSRWLOCK *); // rcx
  PSRWLOCK v12; // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  const char *v16; // r9
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int128 v23; // [rsp+48h] [rbp-50h] BYREF
  __int64 v24; // [rsp+58h] [rbp-40h]
  __int128 v25; // [rsp+60h] [rbp-38h]
  char v26; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+20h] BYREF

  v22 = -2LL;
  LODWORD(SRWLock) = 0;
  v5 = this - 2;
  try
  {
    (*((void (**)(void))this[-2].Ptr + 9))();
    *(_QWORD *)&v21 = 0LL;
    v6 = 0LL;
    if ( v5 )
    {
      *(_QWORD *)&v21 = v5;
      (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
      v6 = v5;
    }
    v29 = 0LL;
    LODWORD(SRWLock) = 2;
    if ( v6 )
    {
      v7 = winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(
             &v6[4],
             &winrt::impl::guid_storage<IServiceProvider>::value,
             &v29);
      if ( v7 < 0 )
        winrt::throw_hresult((unsigned int)v7);
    }
    if ( v6 )
      winrt::com_ptr<winrt::immersive_shell_component>::unconditional_release_ref(&v21);
    v23 = 0LL;
    v24 = 0LL;
    wil::srwlock::lock_exclusive(this + 8, &SRWLock);
    std::vector<winrt::immersive_shell_component::service_description>::swap(&v23, &this[4]);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    *(_QWORD *)&v21 = v5;
    *((_QWORD *)&v21 + 1) = &v23;
    v25 = v21;
    v26 = 1;
    for ( i = v23; (_QWORD)i != *((_QWORD *)&i + 1); *(_QWORD *)&i = i + 32 )
    {
      v10 = v29;
      *(_QWORD *)&v21 = v29;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      v11 = *(void (__fastcall ****)(_QWORD, void *, PSRWLOCK *))(i + 16);
      if ( v11 )
      {
        SRWLock = 0LL;
        (**v11)(v11, &winrt::impl::guid_storage<IServiceProvider>::value, &SRWLock);
        v12 = SRWLock;
        if ( SRWLock )
        {
          if ( v10 )
          {
            winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v21);
            v12 = SRWLock;
          }
          v10 = (__int64)v12;
          *(_QWORD *)&v21 = v12;
        }
      }
      if ( !v10 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          325LL,
          (__int64)"internal\\shellcommonshell\\inc\\winrt\\immersive_shell_component.h",
          v8);
LABEL_29:
        wil::details::in1diag3::Throw_Hr(
          v14,
          327LL,
          (__int64)"internal\\shellcommonshell\\inc\\winrt\\immersive_shell_component.h",
          (const char *)(unsigned int)v13);
        __debugbreak();
        return winrt::immersive_shell_component::PublishServices_::_1_::dtor_0(v19, v18, v20);
      }
      v13 = ((__int64 (__fastcall *)(struct IProfferService *, _QWORD, __int64, _QWORD))a3->lpVtbl->ProfferService)(
              a3,
              i,
              v10,
              i + 24);
      v14 = retaddr;
      if ( v13 < 0 )
        goto LABEL_29;
      winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v21);
    }
    v15 = v25;
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v25 + 80), &SRWLock);
    std::vector<winrt::immersive_shell_component::service_description>::swap(v15 + 48, *((_QWORD *)&v25 + 1));
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v23);
    if ( v29 )
      winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(&v29);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(SRWLock) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x14C,
                         (unsigned int)"internal\\shellcommonshell\\inc\\winrt\\immersive_shell_component.h",
                         v16);
    return (unsigned int)SRWLock;
  }
  return result;
}
