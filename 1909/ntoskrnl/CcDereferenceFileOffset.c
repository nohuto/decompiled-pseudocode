/*
 * XREFs of CcDereferenceFileOffset @ 0x14027DDB4
 * Callers:
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 * Callees:
 *     CcReleaseBcbLockAndVacbLock @ 0x140077218 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140077298 (CcAcquireBcbLockAndVacbLock.c)
 *     SetVacb @ 0x14007A918 (SetVacb.c)
 */

void __fastcall CcDereferenceFileOffset(__int64 a1, __int64 a2)
{
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    CcAcquireBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFEuLL, 0LL);
    CcReleaseBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
  }
}
