/*
 * XREFs of GreMarkUndeletableRgn @ 0x1C0077A78
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 * Callees:
 *     HmgMarkUndeletable @ 0x1C00631F0 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableRgn(unsigned int a1)
{
  PsGetCurrentProcessId();
  return HmgMarkUndeletable(a1, 4);
}
