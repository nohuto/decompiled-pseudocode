/*
 * XREFs of PopBsdUpdateWorker @ 0x1405B18D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     RtlComputeCrc32 @ 0x140114880 (RtlComputeCrc32.c)
 *     PopOkayToQueueNextWorkItem @ 0x14013D6DC (PopOkayToQueueNextWorkItem.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopWriteBsdPoInfo @ 0x1401BEB38 (PopWriteBsdPoInfo.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void PopBsdUpdateWorker()
{
  int v0; // edi
  int v1; // esi
  int v2; // ebx
  char v3; // bl
  _OWORD v4[2]; // [rsp+28h] [rbp-29h] BYREF
  _OWORD v5[2]; // [rsp+48h] [rbp-9h] BYREF
  _OWORD v6[3]; // [rsp+68h] [rbp+17h] BYREF

  memset(v6, 0, sizeof(v6));
  memset(v4, 0, sizeof(v4));
  memset(v5, 0, sizeof(v5));
  while ( 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    v3 = PopBsdUpdateRequests;
    if ( !PopBsdUpdateRequests )
      break;
    v0 = PopBsdUpdateRequests & 1;
    if ( (PopBsdUpdateRequests & 1) != 0 )
    {
      *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)&Buffer + 2) = RtlComputeCrc32(0, &Buffer, 8u);
      v4[0] = PopBsdPowerTransition;
      v4[1] = *(_OWORD *)&Buffer;
    }
    v1 = v3 & 2;
    if ( (v3 & 2) != 0 )
    {
      v5[0] = PopBsdPowerTransitionExtension;
      v5[1] = xmmword_140468120;
    }
    v2 = v3 & 4;
    if ( v2 )
    {
      v6[0] = PopBsdPhysicalPowerButtonInfo;
      v6[1] = xmmword_140467DE8;
      v6[2] = xmmword_140467DF8;
    }
    PopBsdUpdateRequests = 0;
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    if ( v0 )
      PopWriteBsdPoInfo(7u, v4);
    if ( v1 )
      PopWriteBsdPoInfo(0x10u, v5);
    if ( v2 )
      PopWriteBsdPoInfo(0xEu, v6);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopBsdUpdateWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
