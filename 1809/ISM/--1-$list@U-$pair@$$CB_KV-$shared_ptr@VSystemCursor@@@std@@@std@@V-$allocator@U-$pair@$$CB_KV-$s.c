/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800934E0
 * Callers:
 *     _std::_Ref_count_obj_SystemCursorService_::_Ref_count_obj_SystemCursorService__SystemCursorController_____ptr64_unsigned_long_&___ptr64__::_1_::dtor$10 @ 0x1801329EA (_std--_Ref_count_obj_SystemCursorService_--_Ref_count_obj_SystemCursorService__Syst_ea_1801329EA.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180093508 (-clear@-$list@U-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@std@@V-$allocator@U-$pair@$$CB_K.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::~list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>(
        void **a1)
{
  std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::clear(a1);
  operator delete(*a1, (const struct std::nothrow_t *)0x28);
}
