/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800C8D28
 * Callers:
 *     _SystemCursorService::SystemCursorService_::_1_::dtor$17 @ 0x1800CBAED (_SystemCursorService--SystemCursorService_--_1_--dtor$17.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800CAC70 (-clear@-$list@U-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@std@@V-$allocator@U-$pair@$$CB_K.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::~list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>(
        void **a1)
{
  std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
