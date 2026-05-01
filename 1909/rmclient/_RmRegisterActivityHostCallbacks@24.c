/*
 * XREFs of _RmRegisterActivityHostCallbacks@24 @ 0x100113E0
 * Callers:
 *     <none>
 * Callees:
 *     _RmpClientRegisterActivityHostCallbacks@24 @ 0x1001191D (_RmpClientRegisterActivityHostCallbacks@24.c)
 */

int __stdcall RmRegisterActivityHostCallbacks(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return RmpClientRegisterActivityHostCallbacks(a2, a3, a5, a6);
}
