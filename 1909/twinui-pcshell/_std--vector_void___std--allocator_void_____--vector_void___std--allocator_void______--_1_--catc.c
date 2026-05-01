/*
 * XREFs of _std::vector_void___std::allocator_void_____::vector_void___std::allocator_void______::_1_::catch$16 @ 0x1801E378D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1801896A4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

void __fastcall __noreturn std::vector_void___std::allocator_void_____::vector_void___std::allocator_void______::_1_::catch_16(
        __int64 a1,
        __int64 a2)
{
  std::vector<void *>::_Tidy(*(_QWORD *)(a2 + 64));
  throw;
}
