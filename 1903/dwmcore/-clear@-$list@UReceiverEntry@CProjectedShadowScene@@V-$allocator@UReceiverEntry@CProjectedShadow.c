/*
 * XREFs of ?clear@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAXXZ @ 0x180003CE4
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800039E0 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180003C54 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x180008740 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjected_ea_180008740.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::list<CProjectedShadowScene::ReceiverEntry>::clear(__int64 *a1)
{
  __int64 **v2; // rsi
  _QWORD *result; // rax
  __int64 *v4; // rbp
  __int64 *v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(__int64 ***)*a1;
  *(_QWORD *)*a1 = *a1;
  result = (_QWORD *)*a1;
  *(_QWORD *)(*a1 + 8) = *a1;
  a1[1] = 0LL;
  if ( v2 != (__int64 **)*a1 )
  {
    do
    {
      v4 = *v2;
      std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
        v2 + 3,
        &v6,
        *v2[3],
        v2[3]);
      std::_Deallocate<16,0>(v2[3], 48LL);
      v5 = v2[2];
      if ( v5 )
        (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
      result = (_QWORD *)std::_Deallocate<16,0>(v2, 120LL);
      v2 = (__int64 **)v4;
    }
    while ( v4 != (__int64 *)*a1 );
  }
  return result;
}
