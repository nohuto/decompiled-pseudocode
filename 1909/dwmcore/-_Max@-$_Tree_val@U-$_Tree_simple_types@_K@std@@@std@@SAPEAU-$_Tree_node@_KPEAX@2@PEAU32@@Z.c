/*
 * XREFs of ?_Max@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x180172104
 * Callers:
 *     _lambda_8095cef1b1d93dcc9366060e44ed075d_::operator() @ 0x18004C050 (_lambda_8095cef1b1d93dcc9366060e44ed075d_--operator().c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@@Z @ 0x180171E74 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801F5648 (--$_Insert_hint@AEAU-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU-$_Tree_node@U-$pair@$$.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801F5830 (--$_Insert_nohint@AEAU-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU-$_Tree_node@U-$pair@.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@@Z @ 0x1801F6120 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@s.c)
 *     ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x1801F64A0 (--$_Copy@U_Copy_tag@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@Scene.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Max(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
    a1 = i;
  return a1;
}
