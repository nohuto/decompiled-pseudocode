/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x18003D28C
 * Callers:
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003CA58 (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_810dcc79efb0a72353c94b2711027391_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180046650 (--$_Callback_once@V-$tuple@$$QEAV_lambda_810dcc79efb0a72353c94b2711027391_@@AEAVexception_ptr@st.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18005C284 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ??0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ @ 0x18011C3EC (--0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax

  result = operator new(0x30uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
