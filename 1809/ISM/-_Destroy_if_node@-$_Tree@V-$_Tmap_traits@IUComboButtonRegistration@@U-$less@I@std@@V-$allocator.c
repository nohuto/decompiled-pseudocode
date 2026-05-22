/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@Z @ 0x1800C7A80
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBIUComboButtonRegistration@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@AEAU?$pair@$$CBIUComboButtonRegistration@@@1@1@Z @ 0x1800C7B98 (--$_Insert_at@AEAU-$pair@$$CBIUComboButtonRegistration@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUCom.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_ComboButtonRegistration_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__ComboButtonRegistration____0___::_Insert_hint_std::pair_unsigned_int_const__ComboButtonRegistration__&___ptr64_std::_Tree_node_std::pair_unsigned_int_const__ComboButtonRegistration__void_____ptr64______ptr64__::_1_::catch$0 @ 0x180133F58 (_std--_Tree_std--_Tmap_traits_unsigned_int_ComboButtonRegistration_std--less_unsigned_int__std--.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_ComboButtonRegistration_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__ComboButtonRegistration____0___::_Insert_nohint_std::pair_unsigned_int_const__ComboButtonRegistration__&___ptr64_std::_Tree_node_std::pair_unsigned_int_const__ComboButtonRegistration__void_____ptr64______ptr64__::_1_::catch$2 @ 0x180133FA7 (_std--_Tree_std--_Tmap_traits_unsigned_int_ComboButtonRegistration_std--less_unsign_ea_180133FA7.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  char *v2; // rcx
  const struct std::nothrow_t *v4; // rdx
  char *v5; // r8
  char *v6; // rcx

  v2 = (char *)a2[6];
  if ( v2 )
  {
    v4 = (const struct std::nothrow_t *)((a2[8] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      v5 = (char *)*((_QWORD *)v2 - 1);
      v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
      v6 = (char *)(v2 - v5);
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, v4);
        JUMPOUT(0x1800C7AEALL);
      }
      v2 = v5;
    }
    operator delete(v2, v4);
    a2[6] = 0LL;
    a2[7] = 0LL;
    a2[8] = 0LL;
  }
  operator delete(a2, (const struct std::nothrow_t *)0x70);
}
