/*
 * XREFs of GreMarkUndeletableRgn @ 0x1C00BCCA0
 * Callers:
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 * Callees:
 *     HmgMarkUndeletable @ 0x1C0050BB0 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableRgn(unsigned int a1)
{
  PsGetCurrentProcessId();
  return HmgMarkUndeletable(a1, 4);
}
