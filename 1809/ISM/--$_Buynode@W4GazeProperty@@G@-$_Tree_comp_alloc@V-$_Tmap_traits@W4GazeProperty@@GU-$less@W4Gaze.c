/*
 * XREFs of ??$_Buynode@W4GazeProperty@@G@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1800C1320
 * Callers:
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800C0870 (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKW4InputType@@@std@@PEAX@2@XZ @ 0x18004A128 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@KW4InputType@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Buynode<enum GazeProperty,unsigned short>(
        _QWORD *a1,
        _DWORD *a2,
        _WORD *a3)
{
  _QWORD *result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  *((_DWORD *)result + 7) = *a2;
  *((_WORD *)result + 16) = *a3;
  return result;
}
