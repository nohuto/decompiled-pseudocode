/*
 * XREFs of ExpSetTimeZoneInformation @ 0x1408CDC34
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExpReadSiloTimeZoneMarker @ 0x14058487C (ExpReadSiloTimeZoneMarker.c)
 *     ExpWriteSiloTimeZoneMarker @ 0x140584AE4 (ExpWriteSiloTimeZoneMarker.c)
 *     ExAcquireTimeRefreshLock @ 0x1406669FC (ExAcquireTimeRefreshLock.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140896B6C (RtlpSetTimeZoneInformationWorker.c)
 *     NtSetSystemTime @ 0x1408CE570 (NtSetSystemTime.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall ExpSetTimeZoneInformation(_OWORD *a1, int a2)
{
  _OWORD *v2; // r8
  bool SiloTimeZoneMarker; // si
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  _OWORD *v6; // r8
  unsigned __int64 v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rcx
  _OWORD *v10; // rcx
  wchar_t *v11; // rax
  NTSTATUS result; // eax
  int v13; // ebx
  _OWORD ValueData[10]; // [rsp+20h] [rbp-378h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-2D8h]
  int v16; // [rsp+C8h] [rbp-2D0h]
  _BYTE v17[260]; // [rsp+CCh] [rbp-2CCh] BYREF
  wchar_t v18[216]; // [rsp+1D0h] [rbp-1C8h] BYREF

  v2 = a1;
  SiloTimeZoneMarker = 0;
  if ( a2 == 172 )
  {
    v4 = 3LL;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = (unsigned __int64)a1 + 172;
    if ( v5 > 0x7FFFFFFF0000LL || v5 < (unsigned __int64)v2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    ValueData[0] = *v2;
    ValueData[1] = v2[1];
    ValueData[2] = v2[2];
    ValueData[3] = v2[3];
    ValueData[4] = v2[4];
    ValueData[5] = v2[5];
    ValueData[6] = v2[6];
    ValueData[7] = v2[7];
    v6 = v2 + 8;
    ValueData[8] = *v6;
    ValueData[9] = v6[1];
    v15 = *((_QWORD *)v6 + 4);
    v16 = *((_DWORD *)v6 + 10);
    memset(v17, 0, 0x100uLL);
    v17[256] = 1;
  }
  else
  {
    if ( a2 != 432 )
      return -1073741820;
    v4 = 3LL;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)(a1 + 27);
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)v2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v8 = ValueData;
    v9 = 3LL;
    do
    {
      *v8 = *v2;
      v8[1] = v2[1];
      v8[2] = v2[2];
      v8[3] = v2[3];
      v8[4] = v2[4];
      v8[5] = v2[5];
      v8[6] = v2[6];
      v8 += 8;
      *(v8 - 1) = v2[7];
      v2 += 8;
      --v9;
    }
    while ( v9 );
    *v8 = *v2;
    v8[1] = v2[1];
    v8[2] = v2[2];
  }
  ExAcquireTimeRefreshLock(1u);
  v10 = (_OWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
  v11 = v18;
  do
  {
    *(_OWORD *)v11 = *v10;
    *((_OWORD *)v11 + 1) = v10[1];
    *((_OWORD *)v11 + 2) = v10[2];
    *((_OWORD *)v11 + 3) = v10[3];
    *((_OWORD *)v11 + 4) = v10[4];
    *((_OWORD *)v11 + 5) = v10[5];
    *((_OWORD *)v11 + 6) = v10[6];
    v11 += 64;
    *((_OWORD *)v11 - 1) = v10[7];
    v10 += 8;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)v11 = *v10;
  *((_OWORD *)v11 + 1) = v10[1];
  *((_OWORD *)v11 + 2) = v10[2];
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( !PsIsCurrentThreadInServerSilo()
    || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker())
    || (result = ExpWriteSiloTimeZoneMarker(1u), result >= 0) )
  {
    v13 = RtlpSetTimeZoneInformationWorker((wchar_t *)ValueData, 0x1B0u);
    if ( v13 >= 0 )
      v13 = NtSetSystemTime(0LL, 0LL);
    if ( v13 < 0 )
    {
      RtlpSetTimeZoneInformationWorker(v18, 0x1B0u);
      if ( PsIsCurrentThreadInServerSilo() && !SiloTimeZoneMarker )
        ExpWriteSiloTimeZoneMarker(0);
    }
    return v13;
  }
  return result;
}
