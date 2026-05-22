/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800F79F0
 * Callers:
 *     ?PopulateDetectedOrLostReport@MPCProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1800F6500 (-PopulateDetectedOrLostReport@MPCProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@XZ @ 0x1800F7720 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@IUInputData@MPCProcessor@@U-$less@I@std@@V-$alloca.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD **a3)
{
  _QWORD *v5; // [rsp+58h] [rbp+20h]

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode0(a1);
  *((_WORD *)v5 + 12) = 0;
  *((_DWORD *)v5 + 8) = **a3;
  memset_0(v5 + 5, 0, 0x648uLL);
  memset_0(v5 + 5, 0, 0x640uLL);
  *((_DWORD *)v5 + 16) = 1600;
  return v5;
}
