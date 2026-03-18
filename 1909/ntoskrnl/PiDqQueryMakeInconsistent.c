/*
 * XREFs of PiDqQueryMakeInconsistent @ 0x1408650E8
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407157F4 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     PiDqQueryFreeActiveData @ 0x1405B63E8 (PiDqQueryFreeActiveData.c)
 */

BOOLEAN __fastcall PiDqQueryMakeInconsistent(__int64 a1)
{
  *(_DWORD *)(a1 + 216) |= 1u;
  return PiDqQueryFreeActiveData(a1);
}
