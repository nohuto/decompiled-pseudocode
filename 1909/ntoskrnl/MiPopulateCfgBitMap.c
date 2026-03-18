/*
 * XREFs of MiPopulateCfgBitMap @ 0x1405ECFEC
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1405ECB7C (MiCfgMarkValidEntries.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1406D42E8 (MiMarkPrivateOpenCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406DEE14 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x1405ED100 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiPopulateCfgBitMap(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  _QWORD *v7; // r14
  volatile signed __int64 *v9; // rbx
  unsigned __int64 v11; // rsi
  __int64 v13; // r8
  unsigned int v14; // edi
  _QWORD v16[2]; // [rsp+50h] [rbp-58h] BYREF
  int v17; // [rsp+60h] [rbp-48h]

  v6 = a1[2];
  v7 = v16;
  v16[0] = 0LL;
  v9 = (volatile signed __int64 *)(v6 + 40);
  v11 = *a1 + ((2 * (a5 >> 4)) >> 3);
  v16[1] = 0LL;
  v17 = 0;
  if ( a2 <= 1 )
    v7 = 0LL;
  ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
  if ( (unsigned int)MiVadDeleted(v6) )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
    KeAbPostRelease(v6 + 40);
    return 3221225738LL;
  }
  else
  {
    v14 = MiCopyToCfgBitMap(a1, a2, v13, a4, v11, v6, 0, v7, (2 * ((a6 - a5) >> 4)) >> 3);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
    KeAbPostRelease(v6 + 40);
    return v14;
  }
}
