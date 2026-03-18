/*
 * XREFs of KiGetTrapFrameMode @ 0x14028D66C
 * Callers:
 *     KiSwInterruptDispatch @ 0x1401A0530 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
