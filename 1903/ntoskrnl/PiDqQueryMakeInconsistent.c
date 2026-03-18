/*
 * XREFs of PiDqQueryMakeInconsistent @ 0x1408659E8
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407136D0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140713A14 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     PiDqQueryFreeActiveData @ 0x1405B6008 (PiDqQueryFreeActiveData.c)
 */

BOOLEAN __fastcall PiDqQueryMakeInconsistent(__int64 a1)
{
  *(_DWORD *)(a1 + 216) |= 1u;
  return PiDqQueryFreeActiveData(a1);
}
