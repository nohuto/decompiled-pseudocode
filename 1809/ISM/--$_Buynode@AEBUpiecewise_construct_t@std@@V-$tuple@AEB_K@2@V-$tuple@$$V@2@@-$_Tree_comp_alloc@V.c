/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800983B8
 * Callers:
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x180096D24 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ??A?$map@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursorShape@@@1@AEB_K@Z @ 0x180097C58 (--A-$map@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_KV-$sh.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@2@XZ @ 0x18004AC44 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD **a3)
{
  _QWORD *result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  result[4] = **a3;
  result[5] = 0LL;
  result[6] = 0LL;
  return result;
}
