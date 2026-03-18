/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C00FCB10
 * Callers:
 *     RIMReadInput @ 0x1C00E42E0 (RIMReadInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     rimDoRimDevChange @ 0x1C00FC564 (rimDoRimDevChange.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rsi
  BOOL v3; // r14d
  int v4; // r15d
  __int64 i; // rbx
  int v6; // eax
  int v7; // ecx
  int v8; // ebp
  int v9; // r9d

  v2 = BugCheckParameter3 + 552;
  v3 = 0;
  while ( 1 )
  {
    v4 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(BugCheckParameter3 + 408); i; i = *(_QWORD *)(i + 40) )
    {
      v6 = *(_DWORD *)(i + 184);
      if ( (v6 & 0x40000000) != 0 )
      {
        *(_DWORD *)(i + 184) = v6 & 0xBFFFFFFF;
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x15u,
          0x1Eu,
          (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
          i);
      }
      v7 = *(_DWORD *)(i + 200);
      v8 = v7 << 30;
      if ( ((v7 & 1) != 0 || (*(_DWORD *)(i + 200) & 2) != 0)
        && *(int *)(i + 184) >= 0
        && (*(_DWORD *)(i + 188) & 1) == 0
        && !*(_QWORD *)(i + 192) )
      {
        v4 = 1;
        *(_DWORD *)(i + 200) = v7 & 0xFFFFFFFC;
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x15u,
          0x1Fu,
          (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
          i);
        v3 = v8 < 0;
        break;
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
      *(_BYTE *)(BugCheckParameter3 + 74) = 1;
    }
    else if ( *(_BYTE *)(BugCheckParameter3 + 74) )
    {
      KeBugCheckEx(0x164u, 0x12uLL, 0LL, BugCheckParameter3, 0LL);
    }
    rimDoRimDevChange(BugCheckParameter3, i, 3u, v9);
    RIMFreeDev(BugCheckParameter3, i);
    if ( v3 )
    {
      *(_BYTE *)(BugCheckParameter3 + 74) = 0;
      *(_QWORD *)(v2 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v2, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
