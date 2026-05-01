/*
 * XREFs of __Platform_AcquireSRWLockExclusive @ 0x180087FE6
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180413D4C (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x180414088 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _Platform_AcquireSRWLockExclusive(PSRWLOCK SRWLock)
{
  AcquireSRWLockExclusive(SRWLock);
}
