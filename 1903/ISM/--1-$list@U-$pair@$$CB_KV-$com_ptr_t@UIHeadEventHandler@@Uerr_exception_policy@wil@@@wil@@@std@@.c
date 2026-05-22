/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x180097798
 * Callers:
 *     _MPCHeadUpdateListener::MPCHeadUpdateListener_::_1_::dtor$11 @ 0x18009776F (_MPCHeadUpdateListener--MPCHeadUpdateListener_--_1_--dtor$11.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXXZ @ 0x180098054 (-clear@-$list@U-$pair@$$CB_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@s.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>::~list<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>(
        void **a1)
{
  std::list<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
