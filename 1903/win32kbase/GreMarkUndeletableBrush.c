/*
 * XREFs of GreMarkUndeletableBrush @ 0x1C00A9340
 * Callers:
 *     <none>
 * Callees:
 *     HmgMarkUndeletable @ 0x1C0051F40 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableBrush(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return HmgMarkUndeletable(a1, 16);
  return result;
}
