/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x1402F45F8
 * Callers:
 *     PoFxAbandonDevice @ 0x140732D24 (PoFxAbandonDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1407722C0 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseAcpiRefDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 268), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 272), 0, 0);
  return result;
}
