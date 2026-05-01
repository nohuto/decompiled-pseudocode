/*
 * XREFs of _RmApplyResourceSet@12 @ 0x100112D0
 * Callers:
 *     <none>
 * Callees:
 *     _RmpClientApplyResourceSet@12 @ 0x100116B1 (_RmpClientApplyResourceSet@12.c)
 */

int __stdcall RmApplyResourceSet(int a1, int a2, int a3)
{
  return RmpClientApplyResourceSet(a2, a3);
}
