/*
 * XREFs of MiPopulateCfgBitMap @ 0x1405F7560
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1405F731C (MiCfgMarkValidEntries.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1405F7524 (MiMarkPrivateOpenCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x140652574 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiPopulateCfgBitMap(_QWORD *a1, ULONG_PTR a2, __int64 a3, int a4, unsigned __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rdi
  unsigned int *v9; // rbp
  __int64 v10; // r14
  volatile signed __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // edi
  _QWORD v16[2]; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+60h] [rbp-38h]

  v8 = *a1 + ((2 * (a5 >> 4)) >> 3);
  if ( a2 > 1 )
  {
    v9 = (unsigned int *)v16;
    v16[0] = 0LL;
    v16[1] = 0LL;
    v17 = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = a1[2];
  v11 = (volatile signed __int64 *)(v10 + 40);
  ExAcquirePushLockExclusiveEx(v10 + 40, 0LL);
  if ( (unsigned int)MiVadDeleted(v10) )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40));
    KeAbPostRelease(v10 + 40);
    return 3221225738LL;
  }
  else
  {
    v14 = MiCopyToCfgBitMap(v12, a2, v13, a4, v8, v10, 0, v9, (2 * ((a6 - a5) >> 4)) >> 3);
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40));
    KeAbPostRelease(v10 + 40);
    return v14;
  }
}
