/*
 * XREFs of rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C0157D10
 * Callers:
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C0154E34 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01584F0 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C013D3E0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C014FBA8 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C015478C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4Co.c)
 *     rimSetContactKeepAliveState @ 0x1C0159138 (rimSetContactKeepAliveState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInsertSimulatedContactKeepAliveStateInFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  __int64 v15; // rbx
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a2 + 480);
  v17 = 0LL;
  v16 = 0;
  if ( !*(_QWORD *)(v5 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v10 = *(_DWORD *)(a3 + 32);
  if ( (v10 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v10 = *(_DWORD *)(a3 + 32);
  }
  if ( (v10 & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v11 = a5;
  *(_DWORD *)(a3 + 2340) |= 1u;
  rimSetContactKeepAliveState(v5, a3, a4, v11);
  InputTraceLogging::RIM::PopulateContact(a2, *(unsigned int *)(v5 + 24), *(_WORD *)(a3 + 2400), a3 + 2408, 1);
  v13 = RIMAddSimulatedPointerDeviceData(v12, v5, a3, (int)a3 + 2400, &v17, &v16);
  v15 = v17;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v14, 1, 47, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids, v13);
    }
  }
  else
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, a2, v17, v16, (_DWORD *)(a3 + 2392));
  }
  if ( v15 )
    Win32FreePool(v15);
}
