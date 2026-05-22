/*
 * XREFs of ??$_Buynode@W4GazeProperty@@G@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1800F7EF8
 * Callers:
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800F8A68 (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@XZ @ 0x1800F8C6C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Buynode<enum GazeProperty,unsigned short>(
        __int64 a1,
        _DWORD *a2,
        _WORD *a3)
{
  __int64 result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = *a2;
  *(_WORD *)(result + 32) = *a3;
  return result;
}
