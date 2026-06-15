/*
 * XREFs of ?_Xlength@?$vector@KV?$allocator@K@std@@@std@@CAXXZ @ 0x18006866C
 * Callers:
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180067828 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 * Callees:
 *     <none>
 */

void __noreturn std::vector<unsigned long>::_Xlength()
{
  std::_Xlength_error("vector<T> too long");
}
