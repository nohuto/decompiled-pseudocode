/*
 * XREFs of _HamCreateActivity@20 @ 0x1000A800
 * Callers:
 *     <none>
 * Callees:
 *     _HamCreateActivityEx@24 @ 0x1000ADC0 (_HamCreateActivityEx@24.c)
 */

int __stdcall HamCreateActivity(int a1, int a2, int a3, int a4, int a5)
{
  return HamCreateActivityEx(a1, a2, a3, a4, 0, a5);
}
