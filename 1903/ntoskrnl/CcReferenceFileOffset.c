/*
 * XREFs of CcReferenceFileOffset @ 0x14027E21C
 * Callers:
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140076FA8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140077028 (CcAcquireBcbLockAndVacbLock.c)
 *     SetVacb @ 0x14007A558 (SetVacb.c)
 *     CcAllocateVacbLevels @ 0x14009A458 (CcAllocateVacbLevels.c)
 *     CcFreeUnusedVacbLevels @ 0x140130090 (CcFreeUnusedVacbLevels.c)
 */

void __fastcall CcReferenceFileOffset(__int64 a1, __int64 a2)
{
  int v4; // edx
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+3Ch] [rbp-Ch]

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v7 = 0;
    v4 = *(_DWORD *)(a1 + 152);
    v5[2] = 0LL;
    v5[1] = v5;
    v5[0] = v5;
    v6 = 0;
    if ( !CcAllocateVacbLevels(CcMaxVacbLevelsSeen - 1, (v4 & 0x200) != 0, (__int64)v5) )
      RtlRaiseStatus(-1073741670);
    CcAcquireBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFFuLL, (__int64)v5);
    CcReleaseBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    CcFreeUnusedVacbLevels((__int64)v5);
  }
}
