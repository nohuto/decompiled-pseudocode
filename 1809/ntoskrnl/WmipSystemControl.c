/*
 * XREFs of WmipSystemControl @ 0x1406CC0E0
 * Callers:
 *     <none>
 * Callees:
 *     IoWMISystemControl @ 0x1406CC0FC (IoWMISystemControl.c)
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(a1, a1, a2);
}
