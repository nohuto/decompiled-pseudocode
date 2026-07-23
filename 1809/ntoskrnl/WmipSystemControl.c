/*
 * XREFs of WmipSystemControl @ 0x1406CD380
 * Callers:
 *     <none>
 * Callees:
 *     IoWMISystemControl @ 0x1406CD39C (IoWMISystemControl.c)
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(a1, a1, a2);
}
