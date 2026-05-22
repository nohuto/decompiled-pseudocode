/*
 * XREFs of ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001EE70
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x18001FA54 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18001FB20 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteElementProxy::OnAttachableInputObjectSampleChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  InputSiteElementProxy *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r15
  InputSiteElementProxy *v10; // r12
  __int64 v11; // rcx
  bool v12; // al
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  __int64 *v18; // rdx
  InputSiteElementProxy *v20; // [rsp+28h] [rbp-18h] BYREF
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v23; // [rsp+80h] [rbp+40h] BYREF
  InputSiteElementProxy *v24; // [rsp+88h] [rbp+48h]
  char v25; // [rsp+90h] [rbp+50h] BYREF

  v5 = *((_QWORD *)this + 15);
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
    JUMPOUT(0x18001EFF7LL);
  }
  v6 = this;
  v24 = this;
  v23 = 0LL;
  v7 = v5 + 392;
  v8 = *(_QWORD *)(v5 + 392);
  v9 = *(_QWORD *)(v5 + 400);
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v10 = *(InputSiteElementProxy **)v8;
      v11 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v8 + 8))(
              *(_QWORD *)(v8 + 8),
              &GUID_0d0ff390_1722_d77a_3592_c63ca2dc2e3a,
              &v23) >= 0;
      if ( v10 == v6 && v12 )
        break;
      v8 += 16LL;
      if ( v8 == v9 )
        break;
      v6 = v24;
    }
  }
  if ( v8 != *(_QWORD *)(v7 + 8) )
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v7, &v25, v8);
  v13 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 15);
  v15 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  if ( v15 )
  {
    v20 = this;
    v16 = v15 + 8;
    v21 = v15 + 8;
    if ( v15 != -8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v15 + 8);
    v17 = *(_QWORD **)(v14 + 400);
    if ( *(_QWORD **)(v14 + 408) == v17 )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        v14 + 392,
        v17,
        &v20);
      v16 = v21;
    }
    else
    {
      *v17 = this;
      v18 = v17 + 1;
      *v18 = 0LL;
      if ( v18 != &v21 )
      {
        *v18 = v16;
        v16 = 0LL;
      }
      *(_QWORD *)(v14 + 400) += 16LL;
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0LL;
}
