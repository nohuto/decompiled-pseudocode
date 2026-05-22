/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IKU?$less@I@std@@V?$allocator@U?$pair@$$CBIK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIK@std@@PEAX@2@XZ @ 0x18009636C
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800952EC (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ??0GazeHidDevice@@QEAA@PEAX0KK@Z @ 0x1800A4914 (--0GazeHidDevice@@QEAA@PEAX0KK@Z.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801457BC (--0HotKeyProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,unsigned long,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned long>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
