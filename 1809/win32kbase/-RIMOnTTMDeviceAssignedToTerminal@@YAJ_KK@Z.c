/*
 * XREFs of ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C0120F90
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_dqdSd @ 0x1C01216D8 (WPP_RECORDER_SF_dqdSd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0121E34 (WPP_RECORDER_SF_qdd.c)
 */

__int64 __fastcall RIMOnTTMDeviceAssignedToTerminal(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 336);
  LODWORD(v11) = a2;
  HIDWORD(v10) = HIDWORD(a1);
  WPP_RECORDER_SF_qdd(a1, a2, a3, 18);
  RIMLockExclusive(v3 + 104);
  if ( *(_DWORD *)(a1 + 1172) != a2 )
  {
    v11 = a1;
    WPP_RECORDER_SF_dqdSd(*(unsigned __int8 *)(a1 + 48), v6, v7, v8);
    DbgPrintRIMAlways(
      "rimttm:RIMOnTTMDeviceAssignedToTerminal: TTM changing terminal to %d for pRimDev=%p type=%d ustrName=%ls ulTerminalId=%d\n",
      a2,
      (const void *)a1,
      *(unsigned __int8 *)(a1 + 48),
      *(const wchar_t **)(a1 + 216),
      *(_DWORD *)(a1 + 1172));
    *(_DWORD *)(a1 + 1172) = a2;
  }
  *(_QWORD *)(v3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v10) = 0;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x14u, (__int64)&WPP_6348e708fd723b9140a504851f6d1be1_Traceguids, v10, v11);
  return 0LL;
}
