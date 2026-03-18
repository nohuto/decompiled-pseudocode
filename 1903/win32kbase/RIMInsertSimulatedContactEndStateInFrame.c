/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x1C0154CEC
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C013B7D4 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C013BB8C (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C013EDA0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C014194C (RIMSuppressAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01562B0 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01584F0 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C013D3E0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C014FBA8 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C015478C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4Co.c)
 *     RIMSetContactEndState @ 0x1C0155180 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // eax
  int v15; // edx
  __int64 v16; // rdi
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v18 = 0LL;
  v17 = 0;
  if ( !*(_QWORD *)(v6 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(a3 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v11 = a6;
  v12 = a5;
  *(_DWORD *)(a3 + 2340) |= 1u;
  RIMSetContactEndState(v6, a3, a4, v12, v11);
  InputTraceLogging::RIM::PopulateContact(a2, *(unsigned int *)(v6 + 24), *(_WORD *)(a3 + 2400), a3 + 2408, 2);
  if ( (*(_DWORD *)(a3 + 32) & 4) == 0 )
  {
    v14 = RIMAddSimulatedPointerDeviceData(v13, v6, a3, (int)a3 + 2400, &v18, &v17);
    v16 = v18;
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_D((_DWORD)gRimLog, v15, 1, 48, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids, v14);
      }
    }
    else
    {
      RIMStoreRawDataInPointerDeviceFrame(a1, a2, v18, v17, (_DWORD *)(a3 + 2392));
    }
    if ( v16 )
      Win32FreePool(v16);
  }
}
