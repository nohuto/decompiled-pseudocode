/*
 * XREFs of ?OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x1800077C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x180006CE0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x180066F3C (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::OnUIAHitTestInputObjectChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  InputSiteElementProxy *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  bool v9; // bp
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // r15
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // r12
  __int64 v12; // rcx
  bool v13; // al
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v18; // rsi
  char *v19; // rdx
  __int64 *v20; // rdx
  InputSiteElementProxy *v21; // [rsp+28h] [rbp-50h] BYREF
  __int64 v22[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  InputSiteElementProxy *v25; // [rsp+88h] [rbp+10h]
  char v26; // [rsp+90h] [rbp+18h] BYREF

  v4 = this;
  v5 = *((_QWORD *)this + 20);
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x88,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
    __debugbreak();
  }
  v25 = this;
  v24 = 0LL;
  v6 = v5 + 392;
  v7 = *(_QWORD **)(v5 + 392);
  v8 = *(_QWORD **)(v5 + 400);
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *v7 == (_QWORD)this;
      v10 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v7[1];
      v11 = **v10;
      v12 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = v11(v10, &GUID_a8b60ac5_1c61_143e_9764_a6fbf67d91ce, &v24) >= 0;
      if ( v9 && v13 )
        break;
      v7 += 2;
      if ( v7 == v8 )
        break;
      this = v25;
    }
  }
  if ( v7 != *(_QWORD **)(v6 + 8) )
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v6, &v26, v7);
  v14 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (_QWORD *)*((_QWORD *)v4 + 20);
  v16 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v4 + 1) + 112LL))((__int64)v4 + 8);
  if ( v16 )
  {
    v21 = v4;
    v18 = v16 + 8;
    v22[0] = v16 + 8;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v22);
    v19 = (char *)v15[50];
    if ( (char *)v15[51] == v19 )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v15 + 49,
        v19,
        &v21);
    }
    else
    {
      *(_QWORD *)v19 = v4;
      v20 = (__int64 *)(v19 + 8);
      *v20 = 0LL;
      if ( v20 != v22 )
      {
        *v20 = v18;
        v22[0] = 0LL;
      }
      v15[50] += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v22);
  }
  return 0LL;
}
