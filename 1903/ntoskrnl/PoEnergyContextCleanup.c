/*
 * XREFs of PoEnergyContextCleanup @ 0x140671134
 * Callers:
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     KeQueryTimelineBitmapTime @ 0x14000E320 (KeQueryTimelineBitmapTime.c)
 *     RtlStateDurationCapture @ 0x1400AD9F4 (RtlStateDurationCapture.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     RtlTimelineBitmapUpdateRange @ 0x14011E844 (RtlTimelineBitmapUpdateRange.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopEtAppIdDereference @ 0x1406131F0 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x14061321C (RtlInternEntryDereference.c)
 *     PopEtEnumEnergyTrackers @ 0x140696E1C (PopEtEnumEnergyTrackers.c)
 */

void __fastcall PoEnergyContextCleanup(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int TimelineBitmapTime; // r15d
  __int64 v6; // rbp
  _QWORD *v7; // rdx
  unsigned int v8; // r8d
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD **)(a1 + 1896);
  memset(v13, 0, 0x20uLL);
  if ( v1 )
  {
    v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4 = 0LL;
    TimelineBitmapTime = KeQueryTimelineBitmapTime();
    v6 = 3LL;
    do
    {
      v8 = RtlStateDurationCapture((__int64)&v1[v4 + 13], &v1[v4 + 13], v3);
      if ( v7 == v1 + 13 )
      {
        v9 = v1 + 38;
      }
      else if ( v7 == v1 + 14 )
      {
        v9 = v1 + 39;
      }
      else
      {
        v9 = 0LL;
      }
      if ( v9 && v8 )
        RtlTimelineBitmapUpdateRange(v9, TimelineBitmapTime - (v8 >> 12), TimelineBitmapTime);
      ++v4;
      --v6;
    }
    while ( v6 );
    RtlStateDurationCapture((__int64)(v1 + 52), v1 + 52, v3);
    v13[2] = 0LL;
    v13[0] = 4LL;
    v13[3] = v1;
    v13[1] = a1;
    PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 54));
    PopEtEnumEnergyTrackers(v10, v13);
    PopReleaseRwLock((ULONG_PTR)(v1 + 54));
    v11 = v1[56];
    if ( v11 )
    {
      PopEtAppIdDereference(v11);
      v1[56] = 0LL;
    }
    v12 = v1[57];
    if ( v12 )
    {
      RtlInternEntryDereference(PopEtGlobals + 56, v12);
      v1[57] = 0LL;
    }
  }
}
