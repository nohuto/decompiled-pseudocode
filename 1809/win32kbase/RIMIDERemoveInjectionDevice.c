/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C010E850
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C00F1030 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C010B214 (RIMIDEProcessRemoveInjectionDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     RIMFreeSpecificDev @ 0x1C00893B0 (RIMFreeSpecificDev.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDERemoveInjectionDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v5; // r14d
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8

  v3 = 0;
  v5 = 1;
  if ( (*(_DWORD *)(a1 + 272) & 0x2000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 424);
  RIMLockExclusive(v6 + 104);
  RIMLockExclusive(v6 + 568);
  if ( (*(_DWORD *)(a1 + 288) & 0x80u) != 0 && !*(_BYTE *)(v6 + 80) && !*(_BYTE *)(v6 + 81) )
    RIMEndAllActiveContacts(v6, *(_QWORD *)(a1 + 568), 0LL);
  v7 = *(_DWORD *)(a1 + 272);
  if ( (v7 & 0x20) == 0
    && *(_BYTE *)(a1 + 136) != 3
    && ((v7 & 0x40000000) != 0 || *(_QWORD *)(a1 + 280) || v7 < 0 || (*(_DWORD *)(a1 + 276) & 1) != 0) )
  {
    *(_DWORD *)(a1 + 288) |= 1u;
    WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, 0x33u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, a1 + 88);
    v5 = 0;
  }
  *(_QWORD *)(v6 + 576) = 0LL;
  ExReleasePushLockExclusiveEx(v6 + 568, 0LL);
  KeLeaveCriticalRegion();
  if ( (*(_QWORD *)(v6 + 640) || *(_DWORD *)(v6 + 864)) && *(_QWORD *)(v6 + 32) != PsGetCurrentProcess(v8) )
  {
    *(_DWORD *)(a1 + 272) |= 0x40000u;
    RIMLockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a1 + 288) |= 4u;
    qword_1C01D0F90 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    *(_DWORD *)(a1 + 272) |= 0x200000u;
    ZwSetEvent(*(HANDLE *)(v6 + 384), 0LL);
  }
  else if ( v5 )
  {
    rimDoRimDevChange(v6, a1 + 88, 3u);
    if ( *(_BYTE *)(v6 + 81) )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x34u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      RIMFreeSpecificDev(v6, a1 + 88, v9);
    }
    else if ( *(_BYTE *)(v6 + 82) )
    {
      v3 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x35u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      v3 = RIMFreeDev(v6, a1 + 88);
    }
  }
  *(_QWORD *)(v6 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v6 + 104, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
