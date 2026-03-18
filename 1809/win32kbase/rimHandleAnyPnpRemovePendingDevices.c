/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C00520F8
 * Callers:
 *     RIMReadInput @ 0x1C004FC10 (RIMReadInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(__int64 a1)
{
  __int64 v2; // rbp
  BOOL v3; // r14d
  int v4; // r15d
  __int64 i; // rbx
  int v6; // eax
  int v7; // ecx
  int v8; // esi

  v2 = a1 + 568;
  v3 = 0;
  while ( 1 )
  {
    v4 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      v6 = *(_DWORD *)(i + 184);
      if ( (v6 & 0x40) == 0 )
      {
        if ( (v6 & 0x40000000) != 0 )
        {
          *(_DWORD *)(i + 184) = v6 & 0xBFFFFFFF;
          WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, 0x23u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, i);
        }
        v7 = *(_DWORD *)(i + 200);
        v8 = v7 << 30 >> 31;
        if ( ((v7 & 1) != 0 || (*(_DWORD *)(i + 200) & 2) != 0)
          && *(int *)(i + 184) >= 0
          && (*(_DWORD *)(i + 188) & 1) == 0
          && !*(_QWORD *)(i + 192) )
        {
          v4 = 1;
          *(_DWORD *)(i + 200) = v7 & 0xFFFFFFFC;
          WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, 0x24u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, i);
          v3 = v8 != 0;
          break;
        }
      }
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( !v4 )
      break;
    if ( v3 )
    {
      RIMLockExclusive(v2);
      *(_DWORD *)(a1 + 884) |= 2u;
    }
    rimDoRimDevChange(a1, i, 3u);
    RIMFreeDev(a1, i);
    if ( v3 )
    {
      *(_DWORD *)(a1 + 884) &= ~2u;
      *(_QWORD *)(v2 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v2, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
