/*
 * XREFs of sub_180132A9E @ 0x180132A9E
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@_W@std@@QEAAXQEA_W_K@Z @ 0x1800FC66C (-deallocate@-$allocator@_W@std@@QEAAXQEA_W_K@Z.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132A9E(__int64 a1, __int64 *a2)
{
  std::allocator<wchar_t>::deallocate(a2[6], a2[5], a2[4]);
  throw;
}
