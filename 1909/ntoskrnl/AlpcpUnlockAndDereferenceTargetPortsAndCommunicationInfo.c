/*
 * XREFs of AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1406E0504
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x1405E28A0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchCloseMessage @ 0x140659028 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1406591CC (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

LONG_PTR __fastcall AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(
        __int64 a1,
        signed __int64 *a2,
        signed __int64 *a3)
{
  ULONG_PTR v3; // rbx

  v3 = a1 - 16;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 - 16));
  KeAbPostRelease(v3);
  if ( _InterlockedCompareExchange64(a2 + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 44);
  KeAbPostRelease((ULONG_PTR)(a2 + 44));
  if ( a3 != a2 )
  {
    if ( _InterlockedCompareExchange64(a3 + 44, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a3 + 44);
    KeAbPostRelease((ULONG_PTR)(a3 + 44));
  }
  ObfDereferenceObject(a2);
  return ObfDereferenceObject(a3);
}
