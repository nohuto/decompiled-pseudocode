/*
 * XREFs of ?OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180008290
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x180006CF0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x180066CDC (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::OnActuationClientChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  InputSiteElementProxy *v6; // r12
  __int64 v7; // r15
  InputSiteElementProxy **v8; // r14
  InputSiteElementProxy **v9; // r13
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  InputSiteElementProxy *v14; // rbp
  InputSiteElementProxy *v15; // rsi
  int (__fastcall *v16)(InputSiteElementProxy *, GUID *, __int64 *); // rdi
  bool v17; // al
  __int64 v18; // rsi
  char *v19; // rdx
  __int64 *v20; // rdx
  InputSiteElementProxy *v21; // [rsp+28h] [rbp-50h] BYREF
  __int64 v22[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  InputSiteElementProxy *v25; // [rsp+88h] [rbp+10h]
  char v26; // [rsp+90h] [rbp+18h] BYREF

  v5 = *((_QWORD *)this + 20);
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
    __debugbreak();
  }
  v6 = this;
  v25 = this;
  v24 = 0LL;
  v7 = v5 + 392;
  v8 = *(InputSiteElementProxy ***)(v5 + 392);
  v9 = *(InputSiteElementProxy ***)(v5 + 400);
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v14 = *v8;
      v15 = v8[1];
      v16 = **(int (__fastcall ***)(InputSiteElementProxy *, GUID *, __int64 *))v15;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v24);
      v17 = v16(v15, &GUID_4471cf3a_35aa_f774_027a_bb4e36e27700, &v24) >= 0;
      if ( v14 == v6 && v17 )
        break;
      v8 += 2;
      if ( v8 == v9 )
        break;
      v6 = v25;
    }
  }
  if ( v8 != *(InputSiteElementProxy ***)(v7 + 8) )
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v7, &v26, v8);
  v10 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (_QWORD *)*((_QWORD *)this + 20);
  v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
  if ( v12 )
  {
    v21 = this;
    v18 = v12 + 8;
    v22[0] = v12 + 8;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v22);
    v19 = (char *)v11[50];
    if ( (char *)v11[51] == v19 )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v11 + 49,
        v19,
        &v21);
    }
    else
    {
      *(_QWORD *)v19 = this;
      v20 = (__int64 *)(v19 + 8);
      *v20 = 0LL;
      if ( v20 != v22 )
      {
        *v20 = v18;
        v22[0] = 0LL;
      }
      v11[50] += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v22);
  }
  return 0LL;
}
