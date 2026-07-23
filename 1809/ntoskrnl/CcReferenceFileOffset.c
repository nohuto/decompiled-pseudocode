/*
 * XREFs of CcReferenceFileOffset @ 0x14026A990
 * Callers:
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     CcFreeUnusedVacbLevels @ 0x14012CF4C (CcFreeUnusedVacbLevels.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14012CFA4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14012CFE4 (CcAcquireBcbLockAndVacbLock.c)
 *     CcAllocateVacbLevels @ 0x14012D018 (CcAllocateVacbLevels.c)
 *     SetVacb @ 0x14026B264 (SetVacb.c)
 */

void __fastcall CcReferenceFileOffset(__int64 a1, __int64 a2)
{
  int v4; // edx
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-10h]

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v4 = *(_DWORD *)(a1 + 152);
    v5[2] = 0LL;
    v5[1] = v5;
    v5[0] = v5;
    v6 = 0;
    if ( !CcAllocateVacbLevels(CcMaxVacbLevelsSeen - 1, (v4 & 0x200) != 0, (__int64)v5) )
      RtlRaiseStatus(-1073741670);
    CcAcquireBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    SetVacb(a1, a2, -1LL);
    CcReleaseBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    CcFreeUnusedVacbLevels((__int64)v5);
  }
}
