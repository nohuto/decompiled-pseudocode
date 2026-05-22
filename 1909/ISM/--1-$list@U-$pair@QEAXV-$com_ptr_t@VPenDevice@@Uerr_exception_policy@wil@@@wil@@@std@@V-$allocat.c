/*
 * XREFs of ??1?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x1801276F0
 * Callers:
 *     _PenDeviceManager::PenDeviceManager_::_1_::dtor$16 @ 0x18012767D (_PenDeviceManager--PenDeviceManager_--_1_--dtor$16.c)
 * Callees:
 *     ?clear@?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXXZ @ 0x180129844 (-clear@-$list@U-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V-$all.c)
 */

void __fastcall std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::~list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>(
        void **a1)
{
  std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
