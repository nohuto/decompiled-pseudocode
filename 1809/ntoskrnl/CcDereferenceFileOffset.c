/*
 * XREFs of CcDereferenceFileOffset @ 0x14026A4D4
 * Callers:
 *     CcPinFileData @ 0x1400AE2B0 (CcPinFileData.c)
 * Callees:
 *     CcReleaseBcbLockAndVacbLock @ 0x14012CEB4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14012CEF4 (CcAcquireBcbLockAndVacbLock.c)
 *     SetVacb @ 0x14026AF74 (SetVacb.c)
 */

void __fastcall CcDereferenceFileOffset(__int64 a1, __int64 a2)
{
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    CcAcquireBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    SetVacb(a1, a2, -2LL);
    CcReleaseBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
  }
}
