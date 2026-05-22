/*
 * XREFs of ??0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z @ 0x180015768
 * Callers:
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18001FCE0 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@XZ @ 0x1800157CC (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18001678C (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
AugmentedInputDeviceCollection *__fastcall AugmentedInputDeviceCollection::AugmentedInputDeviceCollection(
        AugmentedInputDeviceCollection *this,
        struct IRawInputClient *a2)
{
  __int64 v3; // rcx

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &AugmentedInputDeviceCollection::`vftable';
  *((_QWORD *)this + 345) = 0LL;
  *((_QWORD *)this + 346) = 0LL;
  *((_QWORD *)this + 345) = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>,std::less<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>,0>>::_Buyheadnode(v3);
  *((_BYTE *)this + 2776) = 1;
  return this;
}
