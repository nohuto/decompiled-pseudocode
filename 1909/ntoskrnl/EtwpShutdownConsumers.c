/*
 * XREFs of EtwpShutdownConsumers @ 0x1406ACB20
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406ACB80 (EtwpRealtimeDisconnectAllConsumers.c)
 */

char __fastcall EtwpShutdownConsumers(__int64 a1)
{
  PRKEVENT *v3; // rbx

  EtwpRealtimeDisconnectAllConsumers();
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  *(_DWORD *)(a1 + 832) |= 0x200u;
  if ( (*(_DWORD *)(a1 + 836) & 0x20) != 0 )
  {
    v3 = *(PRKEVENT **)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    KeSetEvent(v3[6], 0, 0);
    ObfDereferenceObject(v3);
  }
  return ExReleasePushLockEx(a1 + 704, 0LL);
}
