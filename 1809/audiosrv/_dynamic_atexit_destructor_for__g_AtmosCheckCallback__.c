/*
 * XREFs of _dynamic_atexit_destructor_for__g_AtmosCheckCallback__ @ 0x180070700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **dynamic_atexit_destructor_for__g_AtmosCheckCallback__()
{
  void **result; // rax

  result = &MyAtmosCheckCallback::`vftable';
  g_AtmosCheckCallback = &MyAtmosCheckCallback::`vftable';
  return result;
}
