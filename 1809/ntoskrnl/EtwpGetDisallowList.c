/*
 * XREFs of EtwpGetDisallowList @ 0x1408B5A88
 * Callers:
 *     NtTraceControl @ 0x1405C2F40 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C51A8 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetDisallowList(__int64 a1, unsigned __int16 *a2, void *a3, unsigned int *a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  unsigned int *v8; // rbp
  unsigned int v9; // esi

  v5 = *a4;
  v6 = 0;
  v8 = EtwpAcquireLoggerContextByLoggerId(a1, *a2, 0);
  if ( v8 )
  {
    memset(a3, 0, *a4);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 176), 0LL);
    v9 = 16 * *((unsigned __int16 *)v8 + 524);
    if ( v9 > v5 )
      v6 = -1073741789;
    else
      memmove(a3, *((const void **)v8 + 132), v9);
    *a4 = v9;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 88, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v8 + 88);
    KeAbPostRelease((ULONG_PTR)(v8 + 176));
    EtwpReleaseLoggerContext(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
