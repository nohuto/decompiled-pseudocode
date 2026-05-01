/*
 * XREFs of __Platform_AcquireSRWLockExclusive @ 0x1800852F4
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1803B19FC (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x1803B1D10 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _Platform_AcquireSRWLockExclusive(PSRWLOCK SRWLock)
{
  AcquireSRWLockExclusive(SRWLock);
}
