/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C0058E4C
 * Callers:
 *     RIMReadInput @ 0x1C0057060 (RIMReadInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     rimDoRimDevChange @ 0x1C0055BCC (rimDoRimDevChange.c)
 *     RIMFreeDev @ 0x1C014B7F4 (RIMFreeDev.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(__int64 a1)
{
  __int64 v2; // rsi
  BOOL v3; // ebp
  int v4; // r14d
  int v5; // edx
  __int64 i; // rbx
  int v7; // eax
  unsigned int v8; // edx

  v2 = a1 + 568;
  v3 = 0;
  while ( 2 )
  {
    v4 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      v7 = *(_DWORD *)(i + 184);
      if ( (v7 & 0x40) == 0 )
      {
        if ( (v7 & 0x40000000) != 0 )
        {
          *(_DWORD *)(i + 184) = v7 & 0xBFFFFFFF;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = 4;
            WPP_RECORDER_SF_q((_DWORD)gRimLog, v5, 1, 35, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids, i);
          }
        }
        v5 = *(_DWORD *)(i + 200);
        if ( ((v5 & 1) != 0 || (*(_DWORD *)(i + 200) & 2) != 0)
          && *(int *)(i + 184) >= 0
          && (*(_DWORD *)(i + 188) & 1) == 0
          && !*(_QWORD *)(i + 192) )
        {
          v4 = 1;
          v3 = (*(_DWORD *)(i + 200) & 2) != 0;
          v8 = v5 & 0xFFFFFFFC;
          *(_DWORD *)(i + 200) = v8;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 4;
            WPP_RECORDER_SF_q((_DWORD)gRimLog, v8, 1, 36, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids, i);
          }
          break;
        }
      }
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 )
    {
      if ( v3 )
      {
        RIMLockExclusive(v2);
        *(_DWORD *)(a1 + 884) |= 2u;
      }
      rimDoRimDevChange(a1, i, 3LL);
      RIMFreeDev(a1, i);
      if ( v3 )
      {
        *(_DWORD *)(a1 + 884) &= ~2u;
        *(_QWORD *)(v2 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v2, 0LL);
        KeLeaveCriticalRegion();
      }
      continue;
    }
    break;
  }
}
