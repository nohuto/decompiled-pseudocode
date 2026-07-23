/*
 * XREFs of PoFxNotifySurprisePowerOn @ 0x1401587D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopPepSurprisePowerOn @ 0x140158824 (PopPepSurprisePowerOn.c)
 *     PopFxLockDevice @ 0x14015B158 (PopFxLockDevice.c)
 */

int __fastcall PoFxNotifySurprisePowerOn(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  LOBYTE(a2) = 1;
  v2 = PopFxLockDevice(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    LODWORD(v2) = PopPepSurprisePowerOn(*(_QWORD *)(v2 + 56));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 228), 0xFFFFFFFF) == 1 )
      LODWORD(v2) = KeSetEvent((PRKEVENT)(v3 + 232), 0, 0);
  }
  return v2;
}
