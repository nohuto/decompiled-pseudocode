/*
 * XREFs of ReleaseSRWLockExclusive_0 @ 0x1800852E8
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1803B19FC (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x1803B1D10 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ReleaseSRWLockExclusive_0(PSRWLOCK SRWLock)
{
  ReleaseSRWLockExclusive(SRWLock);
}
