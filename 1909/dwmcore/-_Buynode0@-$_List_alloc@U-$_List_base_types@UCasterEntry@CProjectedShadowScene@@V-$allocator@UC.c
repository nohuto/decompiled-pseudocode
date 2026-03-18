/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@@std@@QEAAPEAU?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@2@PEAU32@0@Z @ 0x180004FA4
 * Callers:
 *     ??0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z @ 0x1800038EC (--0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z.c)
 *     ??$_Insert@AEAPEAVCProjectedShadowCaster@@@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UCasterEntry@CProjectedShadowScene@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEAVCProjectedShadowCaster@@@Z @ 0x180004EF4 (--$_Insert@AEAPEAVCProjectedShadowCaster@@@-$list@UCasterEntry@CProjectedShadowScene@@V-$allocat.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<CProjectedShadowScene::CasterEntry>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0xB0uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
