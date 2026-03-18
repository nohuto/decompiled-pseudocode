/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C00E2B70
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C00B8C60 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00DDEA4 (RIMIDEProcessRemoveInjectionDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     RIMFreeSpecificDev @ 0x1C00F7964 (RIMFreeSpecificDev.c)
 *     rimDoRimDevChange @ 0x1C00FC564 (rimDoRimDevChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDERemoveInjectionDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v4; // r14d
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  v4 = 1;
  if ( (*(_DWORD *)(a1 + 264) & 0x1000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v5 = *(_QWORD *)(a1 + 416);
  RIMLockExclusive(v5 + 96);
  RIMLockExclusive(v5 + 552);
  if ( (*(_DWORD *)(a1 + 280) & 0x80u) != 0 )
    RIMEndAllActiveContacts(v5, *(_QWORD *)(a1 + 560), 0LL);
  v6 = *(_DWORD *)(a1 + 264);
  if ( (v6 & 0x20) == 0
    && *(_BYTE *)(a1 + 128) != 3
    && ((v6 & 0x40000000) != 0 || *(_QWORD *)(a1 + 272) || v6 < 0 || (*(_DWORD *)(a1 + 268) & 1) != 0) )
  {
    *(_DWORD *)(a1 + 280) |= 1u;
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x33u,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
      a1 + 80);
    v4 = 0;
  }
  *(_QWORD *)(v5 + 560) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 552, 0LL);
  KeLeaveCriticalRegion();
  if ( (*(_QWORD *)(v5 + 624) || *(_DWORD *)(v5 + 848)) && *(_QWORD *)(v5 + 32) != PsGetCurrentProcess(v7) )
  {
    *(_DWORD *)(a1 + 264) |= 0x40000u;
    RIMLockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a1 + 280) |= 4u;
    qword_1C01A1640 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    *(_DWORD *)(a1 + 264) |= 0x200000u;
    ZwSetEvent(*(HANDLE *)(v5 + 376), 0LL);
  }
  else if ( v4 )
  {
    rimDoRimDevChange(v5, a1 + 80, 3LL);
    if ( *(_BYTE *)(v5 + 73) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x34u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      RIMFreeSpecificDev(v5, a1 + 80);
    }
    else if ( *(_BYTE *)(v5 + 75) )
    {
      v2 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x35u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      v2 = RIMFreeDev(v5, a1 + 80);
    }
  }
  *(_QWORD *)(v5 + 104) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 96, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
