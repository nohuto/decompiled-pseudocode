/*
 * XREFs of ??1?$weak_ptr@VSystemCursorService@@@std@@QEAA@XZ @ 0x1800C8D08
 * Callers:
 *     _CustomCursorApplication::CustomCursorApplication_::_1_::dtor$1 @ 0x1800C8CD5 (_CustomCursorApplication--CustomCursorApplication_--_1_--dtor$1.c)
 *     _SystemCursor::SystemCursor_::_1_::dtor$1 @ 0x1800CB9DE (_SystemCursor--SystemCursor_--_1_--dtor$1.c)
 *     _SystemCursorService::SystemCursorService_::_1_::dtor$0 @ 0x1800CBACD (_SystemCursorService--SystemCursorService_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B050 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::weak_ptr<SystemCursorService>::~weak_ptr<SystemCursorService>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
