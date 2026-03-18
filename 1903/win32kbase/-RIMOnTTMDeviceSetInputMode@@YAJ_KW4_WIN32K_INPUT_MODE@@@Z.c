/*
 * XREFs of ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C014D410
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RimDeviceTypeToRimInputType @ 0x1C006C978 (RimDeviceTypeToRimInputType.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0121340 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C014D588 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     RIMIsInputSuppressed @ 0x1C014D6DC (RIMIsInputSuppressed.c)
 *     WPP_RECORDER_SF_dqdSd @ 0x1C014D7F4 (WPP_RECORDER_SF_dqdSd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C014DD68 (WPP_RECORDER_SF_qdd.c)
 */

__int64 __fastcall RIMOnTTMDeviceSetInputMode(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v6; // ebp
  int v7; // edx
  int v8; // r8d
  int v9; // eax
  int v10; // edx

  v3 = *(_QWORD *)(a1 + 336);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdd(a1, a2, a3, 21);
  RIMLockExclusive(v3 + 104);
  if ( *(_DWORD *)(a1 + 1304) != a2 )
  {
    *(_DWORD *)(a1 + 1304) = a2;
    v6 = 0;
    if ( (unsigned int)RIMIsInputSuppressed(a1) )
    {
      rimInvalidateInputs((struct RIMDEV *)a1);
      v6 = 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_dqdSd(*(_QWORD *)(a1 + 216), v7, v8, 22);
    }
    v9 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    DbgPrintGDI(
      "rimttm:RIMOnTTMDeviceSetInputMode: TTM set input mode to %d for pRimDev=%p type=%d ustrName=%ls suppressed=%d\n",
      *(_DWORD *)(a1 + 1304),
      (const void *)a1,
      v9,
      *(const wchar_t **)(a1 + 216),
      v6);
  }
  *(_QWORD *)(v3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v10, 1, 23, (__int64)&WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids, 0);
  }
  return 0LL;
}
