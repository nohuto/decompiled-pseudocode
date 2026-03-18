/*
 * XREFs of RIMFreeSpecificDev @ 0x1C00893B0
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C00892D4 (RIMRemoveDevOfInputType.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C010E850 (RIMIDERemoveInjectionDevice.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     rimDereferenceDev @ 0x1C0089450 (rimDereferenceDev.c)
 *     RIMRemoveHoldingFrame @ 0x1C0089614 (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDev(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v6; // eax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v10; // rdx

  v3 = *(_QWORD *)(a2 + 336);
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_QWORD *)(a2 + 336);
  }
  if ( a1 != v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_QWORD *)(a1 + 640) || *(_DWORD *)(a1 + 864) )
    v6 = 1;
  else
    v6 = (unsigned __int16)(~(unsigned __int16)*(_DWORD *)(a2 + 184) & 0x2000) >> 13;
  if ( v6 )
    rimDoRimDevChange(a1, a2, 4u);
  v7 = (_QWORD *)(a2 + 104);
  v8 = *(_QWORD *)(a2 + 104);
  if ( v8 != a2 + 104 )
  {
    if ( *(_QWORD **)(v8 + 8) != v7 || (v10 = *(_QWORD **)(a2 + 112), (_QWORD *)*v10 != v7) )
      __fastfail(3u);
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
    *(_QWORD *)(a2 + 112) = a2 + 104;
    *v7 = v7;
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
  {
    RIMLockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a2 + 200) |= 4u;
    qword_1C01D0F90 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *(_BYTE *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
