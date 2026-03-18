/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140353060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140353080 @ 0x140353080 (sub_140353080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140353080();
  __debugbreak();
}
