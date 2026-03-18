/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140331060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140331080 @ 0x140331080 (sub_140331080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140331080();
  __debugbreak();
}
