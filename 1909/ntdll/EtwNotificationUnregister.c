/*
 * XREFs of EtwNotificationUnregister @ 0x180053850
 * Callers:
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     EtwUnregisterTraceGuids @ 0x1800537F0 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x180053840 (EtwEventUnregister.c)
 *     LdrShutdownProcess @ 0x18006B220 (LdrShutdownProcess.c)
 *     SbCleanupTrace @ 0x18006B7D0 (SbCleanupTrace.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x18007D44C (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbObtainTraceHandle @ 0x18007DE0C (SbObtainTraceHandle.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CC250 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CC2D8 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CFCA0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     EtwpDereferenceUmGuidEntry @ 0x180006330 (EtwpDereferenceUmGuidEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFreeRegistration @ 0x180053958 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180053994 (EtwpRemoveRegistrationFromTable.c)
 *     RtlSetLastWin32Error @ 0x180053C30 (RtlSetLastWin32Error.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

__int64 __fastcall EtwNotificationUnregister(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx

  v2 = HIWORD(a1);
  if ( !HIWORD(a1) )
    goto LABEL_13;
  v4 = a1 & 0xFFFFFFFFFFFFLL;
  if ( (a1 & 1) != 0 || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) || v4 == PrivateLoggerNotificationEntry )
    goto LABEL_13;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
  if ( (_WORD)v2 != _InterlockedCompareExchange16((volatile signed __int16 *)(v4 + 96), 0, v2) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
LABEL_13:
    RtlSetLastWin32Error(6LL);
    return 6LL;
  }
  EtwpRemoveRegistrationFromTable(v4);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
  if ( (*(_WORD *)(v4 + 98) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v4 + 88));
  v5 = *(_QWORD *)(v4 + 248);
  if ( v5 )
  {
    EtwpDereferenceUmGuidEntry(v5);
    *(_QWORD *)(v4 + 248) = 0LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(v4 + 56);
  EtwpFreeRegistration(v4);
  return 0LL;
}
