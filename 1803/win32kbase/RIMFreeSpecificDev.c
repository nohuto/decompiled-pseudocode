/*
 * XREFs of RIMFreeSpecificDev @ 0x1C00F7964
 * Callers:
 *     RIMIDERemoveInjectionDevice @ 0x1C00E2B70 (RIMIDERemoveInjectionDevice.c)
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     RIMRemoveDevOfInputType @ 0x1C00F822C (RIMRemoveDevOfInputType.c)
 *     rimPassivateSecondaryRims @ 0x1C00FD684 (rimPassivateSecondaryRims.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     rimDereferenceDev @ 0x1C00F879C (rimDereferenceDev.c)
 *     RIMRemoveHoldingFrame @ 0x1C00F92BC (RIMRemoveHoldingFrame.c)
 *     rimDoRimDevChange @ 0x1C00FC564 (rimDoRimDevChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDev(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx

  v2 = *(_QWORD *)(a2 + 336);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v2 = *(_QWORD *)(a2 + 336);
  }
  if ( a1 != v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !*(_QWORD *)(a1 + 624) || *(_DWORD *)(a1 + 848) )
    v5 = 1;
  else
    v5 = (unsigned __int16)(~(unsigned __int16)*(_DWORD *)(a2 + 184) & 0x1000) >> 12;
  if ( v5 )
    rimDoRimDevChange(a1, a2, 4LL);
  v6 = (_QWORD *)(a2 + 104);
  v7 = *(_QWORD *)(a2 + 104);
  if ( v7 != a2 + 104 )
  {
    if ( *(_QWORD **)(v7 + 8) != v6 || (v8 = *(_QWORD **)(a2 + 112), (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(a2 + 112) = a2 + 104;
    *v6 = v6;
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
  {
    RIMLockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a2 + 200) |= 4u;
    qword_1C01A1640 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *(_BYTE *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
