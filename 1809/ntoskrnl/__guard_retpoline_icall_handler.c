/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140332060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140332080 @ 0x140332080 (sub_140332080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140332080();
  __debugbreak();
}
