/*
 * XREFs of GreMarkUndeletableRgn @ 0x1C00BF1BC
 * Callers:
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 * Callees:
 *     HmgMarkUndeletable @ 0x1C0051F40 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableRgn(unsigned int a1)
{
  PsGetCurrentProcessId();
  return HmgMarkUndeletable(a1, 4);
}
