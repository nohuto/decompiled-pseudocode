/*
 * XREFs of sub_180132E03 @ 0x180132E03
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@D@std@@QEAAXQEAD_K@Z @ 0x18007EB98 (-deallocate@-$allocator@D@std@@QEAAXQEAD_K@Z.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132E03(__int64 a1, __int64 a2)
{
  std::allocator<char>::deallocate(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  throw;
}
