/*
 * XREFs of ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800C1B00
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x1800C01C0 (--$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIServiceProvi.c)
 *     ?add_ref@?$com_ptr@UIUnknown@@@winrt@@AEBAXXZ @ 0x1800C48BC (-add_ref@-$com_ptr@UIUnknown@@@winrt@@AEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::immersive_shell_component::QueryService(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  RTL_SRWLOCK *v8; // r15
  __int64 result; // rax
  char v10; // r12
  __int64 (__fastcall ***v11)(_QWORD, const struct _GUID *, void **); // rbx
  _QWORD *Ptr; // rdx
  _QWORD *i; // rcx
  int v14; // edi
  const char *v15; // r9
  int v16; // edi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall ***v18)(_QWORD, const struct _GUID *, void **); // [rsp+70h] [rbp+8h] BYREF
  RTL_SRWLOCK *v19; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = this - 1;
  if ( (*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *))this[-1].Ptr + 8))(this - 1) )
    return 0LL;
  v10 = 0;
  v11 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 9, &v19);
  Ptr = this[6].Ptr;
  for ( i = this[5].Ptr; i != Ptr && (*(_QWORD *)&a2->Data1 != *i || *(_QWORD *)a2->Data4 != i[1]); i += 4 )
    ;
  if ( i != Ptr )
  {
    v10 = 1;
    if ( i[2] )
    {
      v11 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))i[2];
      v18 = v11;
      winrt::com_ptr<IUnknown>::add_ref(&v18);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v19);
  try
  {
    if ( !v10 )
    {
      winrt::immersive_shell_component::get_site<IServiceProvider>(v8, &v19);
      if ( !v19 )
      {
        if ( v11 )
          winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v18);
        return 2147500033LL;
      }
      v16 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, const struct _GUID *, const struct _GUID *, void **))v19->Ptr + 3))(
              v19,
              a2,
              a3,
              a4);
      if ( v16 < 0 )
      {
        if ( v19 )
          winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v19);
        if ( v11 )
          winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v18);
        return (unsigned int)v16;
      }
      if ( v19 )
        winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v19);
      goto LABEL_27;
    }
    if ( v11 )
    {
      v14 = (**v11)(v11, a3, a4);
      if ( v14 < 0 )
      {
        winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v18);
        return (unsigned int)v14;
      }
LABEL_27:
      if ( v11 )
        winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v18);
      return 0LL;
    }
    result = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, const struct _GUID *, void **))v8->Ptr)(v8, a3, a4);
    if ( (int)result >= 0 )
      goto LABEL_27;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10D,
                           (unsigned int)"internal\\shellcommonshell\\inc\\winrt\\immersive_shell_component.h",
                           v15);
  }
  return result;
}
