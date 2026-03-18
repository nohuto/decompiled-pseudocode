/*
 * XREFs of ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C014D230
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0121340 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_dqdSd @ 0x1C014D7F4 (WPP_RECORDER_SF_dqdSd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C014DD68 (WPP_RECORDER_SF_qdd.c)
 */

__int64 __fastcall RIMOnTTMDeviceAssignedToTerminal(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v6; // edx
  int v7; // r8d
  int v8; // eax
  int v9; // edx

  v3 = *(_QWORD *)(a1 + 336);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdd(a1, a2, a3, 18);
  RIMLockExclusive(v3 + 104);
  v8 = *(_DWORD *)(a1 + 1300);
  if ( v8 != a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dqdSd(*(unsigned __int8 *)(a1 + 48), v6, v7, 19);
      v8 = *(_DWORD *)(a1 + 1300);
    }
    DbgPrintGDI(
      "RIMOnTTMDeviceAssignedToTerminal: TTM changing terminal to %d for pRimDev=%p type=%d ustrName=%ls ulTerminalId=%d\n",
      a2,
      (const void *)a1,
      *(unsigned __int8 *)(a1 + 48),
      *(const wchar_t **)(a1 + 216),
      v8);
    *(_DWORD *)(a1 + 1300) = a2;
  }
  *(_QWORD *)(v3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v9, 1, 20, (__int64)&WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids, 0);
  }
  return 0LL;
}
