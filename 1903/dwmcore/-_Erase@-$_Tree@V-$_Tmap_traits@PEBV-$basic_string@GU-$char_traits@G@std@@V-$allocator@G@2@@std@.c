/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@Z @ 0x1800CEC68
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@0@Z @ 0x1800CEBDC (-erase@-$_Tree@V-$_Tmap_traits@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@$0A@@std@.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@Z @ 0x1800CEC68 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@2@0@Z @ 0x1800D0770 (-erase@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18017C7F4 (-clear@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U-$less@PEAVIDevic.c)
 *     ??1CSceneComponent@@MEAA@XZ @ 0x18020DDF8 (--1CSceneComponent@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@Z @ 0x1800CEC68 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Erase(
        __int64 a1,
        void *a2)
{
  void *v2; // rbx
  _QWORD *v4; // rdi

  v2 = a2;
  v4 = a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Erase(
        a1,
        v4[2]);
      v4 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v2, 0x30uLL);
      v2 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
}
