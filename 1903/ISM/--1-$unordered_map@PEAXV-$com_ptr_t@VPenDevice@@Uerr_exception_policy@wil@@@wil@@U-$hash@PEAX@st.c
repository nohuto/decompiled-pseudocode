/*
 * XREFs of ??1?$unordered_map@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@U?$hash@PEAX@std@@U?$equal_to@PEAX@4@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x18012775C
 * Callers:
 *     _PenDeviceManager::PenDeviceManager_::_1_::dtor$1 @ 0x18012769D (_PenDeviceManager--PenDeviceManager_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXXZ @ 0x180129844 (-clear@-$list@U-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V-$all.c)
 */

void __fastcall std::unordered_map<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>::~unordered_map<void *,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::clear(a1 + 8);
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x20);
}
