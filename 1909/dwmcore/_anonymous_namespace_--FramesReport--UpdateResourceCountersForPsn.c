/*
 * XREFs of _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x18004C17C
 * Callers:
 *     _lambda_8095cef1b1d93dcc9366060e44ed075d_::operator() @ 0x18004C050 (_lambda_8095cef1b1d93dcc9366060e44ed075d_--operator().c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x18004B454 (--$_Insert_nohint@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B850 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x18004C334 (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_std--default_de.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004CB8C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::FramesReport::ResourcesForPsn::IsLessThan @ 0x1800C9018 (_anonymous_namespace_--FramesReport--ResourcesForPsn--IsLessThan.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

void __fastcall anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  char v7; // r12
  _QWORD *v9; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  _QWORD *v14; // rcx
  char *v15; // rax
  char *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  char v19; // [rsp+20h] [rbp-98h]
  char v20; // [rsp+30h] [rbp-88h]
  void *v22; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-68h] BYREF

  v5 = a5;
  v6 = a1 + 112;
  v7 = 0;
  LODWORD(v22) = 0;
  v9 = *(_QWORD **)(a1 + 120);
  v11 = *(_QWORD **)(a1 + 112);
  v23[0] = a5;
  v12 = v9 - v11;
  if ( v12 > 0 )
  {
    do
    {
      if ( (unsigned __int8)anonymous_namespace_::FramesReport::ResourcesForPsn::IsLessThan(&v11[v12 >> 1], a3) )
      {
        v11 += (v12 >> 1) + 1;
        v12 += -1 - (v12 >> 1);
      }
      else
      {
        v12 >>= 1;
      }
    }
    while ( v12 > 0 );
    v9 = *(_QWORD **)(a1 + 120);
    v6 = a1 + 112;
    v5 = v23[0];
  }
  if ( v11 == v9 || (v14 = (_QWORD *)*v11, *(_QWORD *)*v11 != a3) )
  {
    v15 = (char *)operator new(0x70uLL);
    v16 = v15;
    if ( v15 )
      memset_0(v15, 0, 0x70uLL);
    else
      v16 = 0LL;
    *((_DWORD *)v16 + 26) = a2;
    *(_QWORD *)v16 = a3;
    v22 = v16;
    *(_OWORD *)(v16 + 8) = *(_OWORD *)a4;
    *(_OWORD *)(v16 + 24) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v16 + 40) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v16 + 56) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v16 + 72) = *(_OWORD *)(a4 + 64);
    *((_DWORD *)v16 + 22) = *(_DWORD *)(a4 + 80);
    if ( v5 )
    {
      std::wstring::wstring(v24, v5);
      v19 = v20;
      std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_nohint<std::wstring,std::_Not_a_node_tag>(
        a1 + 160,
        (__int64)v23,
        v18,
        (char *)v24);
      v7 = 1;
      v17 = v23[0] + 32LL;
    }
    else
    {
      v17 = 0LL;
    }
    *((_QWORD *)v16 + 12) = v17;
    if ( (v7 & 1) != 0 )
      std::wstring::_Tidy_deallocate(v24);
    std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____(
      v6,
      v23,
      v11,
      &v22,
      v19);
    if ( v22 )
      operator delete(v22);
  }
  else
  {
    *(_OWORD *)(v14 + 1) = *(_OWORD *)a4;
    *(_OWORD *)(v14 + 3) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v14 + 5) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v14 + 7) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v14 + 9) = *(_OWORD *)(a4 + 64);
    *((_DWORD *)v14 + 22) = *(_DWORD *)(a4 + 80);
  }
}
