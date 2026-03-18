/*
 * XREFs of ?BufferingDisabled@CInteraction@@UEBAHXZ @ 0x1800E6D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::BufferingDisabled(CInteraction *this)
{
  return (*((unsigned __int8 *)this + 184) >> 3) & 1;
}
