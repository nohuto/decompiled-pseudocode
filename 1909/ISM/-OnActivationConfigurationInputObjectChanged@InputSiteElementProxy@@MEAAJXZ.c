/*
 * XREFs of ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180006BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x180006CF0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$As@UIActivationConfigurationInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActivationConfigurationInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800665E4 (--$As@UIActivationConfigurationInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$Co.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x180066CDC (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::OnActivationConfigurationInputObjectChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  InputSiteElementProxy *v6; // rbp
  __int64 v7; // r14
  InputSiteElementProxy **v8; // rsi
  InputSiteElementProxy **v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rdx
  InputSiteElementProxy *v16; // rdi
  bool v17; // al
  __int64 *v18; // rdx
  InputSiteElementProxy *v19; // [rsp+28h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  InputSiteElementProxy *v23; // [rsp+78h] [rbp+10h]
  char v24; // [rsp+80h] [rbp+18h] BYREF

  v5 = *((_QWORD *)this + 20);
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x42,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
    __debugbreak();
  }
  v6 = this;
  v23 = this;
  v22 = 0LL;
  v7 = v5 + 392;
  v8 = *(InputSiteElementProxy ***)(v5 + 392);
  v9 = *(InputSiteElementProxy ***)(v5 + 400);
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v16 = *v8;
      v17 = (int)Microsoft::WRL::ComPtr<IUnknown>::As<IActivationConfigurationInputObjectProxy>(v8 + 1, &v22) >= 0;
      if ( v16 == v6 && v17 )
        break;
      v8 += 2;
      if ( v8 == v9 )
        break;
      v6 = v23;
    }
  }
  if ( v8 != *(InputSiteElementProxy ***)(v7 + 8) )
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v7, &v24, v8);
  v10 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 20);
  v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  if ( v12 )
  {
    v19 = this;
    v13 = v12 + 8;
    v20 = v12 + 8;
    if ( v12 != -8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v12 + 8);
    v14 = *(_QWORD **)(v11 + 400);
    if ( *(_QWORD **)(v11 + 408) == v14 )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v11 + 392,
        v14,
        &v19);
      v13 = v20;
    }
    else
    {
      *v14 = this;
      v18 = v14 + 1;
      *v18 = 0LL;
      if ( v18 != &v20 )
      {
        *v18 = v13;
        v13 = 0LL;
      }
      *(_QWORD *)(v11 + 400) += 16LL;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 0LL;
}
