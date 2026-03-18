/*
 * XREFs of PoFxNotifySurprisePowerOn @ 0x140168410
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PopPepSurprisePowerOn @ 0x140168498 (PopPepSurprisePowerOn.c)
 *     PopFxLockDevice @ 0x140174320 (PopFxLockDevice.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1402F14BC (PopDirectedDripsStartDisengageTimer.c)
 */

int __fastcall PoFxNotifySurprisePowerOn(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx

  v2 = a1;
  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  LOBYTE(a2) = 1;
  v3 = PopFxLockDevice(a1, a2);
  v4 = v3;
  if ( v3 )
  {
    LODWORD(v3) = PopPepSurprisePowerOn(*(_QWORD *)(v3 + 56));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 236), 0xFFFFFFFF) == 1 )
      LODWORD(v3) = KeSetEvent((PRKEVENT)(v4 + 240), 0, 0);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 312);
      v5 = *(_QWORD *)(v3 + 40);
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      LODWORD(v3) = *(_DWORD *)(v5 + 760);
      if ( (v3 & 0x30000) != 0 )
        LODWORD(v3) = PopDirectedDripsStartDisengageTimer(1LL);
    }
  }
  return v3;
}
