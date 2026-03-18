/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x1402D91D4
 * Callers:
 *     PoFxAbandonDevice @ 0x1406ED028 (PoFxAbandonDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1407249D8 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseAcpiRefDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 260), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 264), 0, 0);
  return result;
}
