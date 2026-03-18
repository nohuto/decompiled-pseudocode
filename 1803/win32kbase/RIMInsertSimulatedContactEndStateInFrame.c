/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x1C00FFD24
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00EDDB0 (RIMSuppressAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0101028 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C00EA068 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C00F94A0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     RIMSetContactEndState @ 0x1C00FFFE8 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, __int64 a2, _DWORD *a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rcx
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // [rsp+28h] [rbp-20h]
  unsigned int v18; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v19 = 0LL;
  v18 = 0;
  if ( !*(_QWORD *)(v6 + 696) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( (a3[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v11 = a6;
  v12 = a5;
  a3[580] |= 1u;
  RIMSetContactEndState(v6, (_DWORD)a3, a4, v12, v11);
  result = (unsigned int)a3[8];
  if ( (result & 4) == 0 )
  {
    v15 = RIMAddSimulatedPointerDeviceData(v13, v6, (__int64)a3, (__int64)(a3 + 596), &v19, &v18);
    v16 = v19;
    if ( v15 < 0 )
    {
      LODWORD(v17) = v15;
      result = WPP_RECORDER_SF_D(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 3u,
                 0x15u,
                 0x2Au,
                 (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
                 v17);
    }
    else
    {
      result = (__int64)RIMStoreRawDataInPointerDeviceFrame(a1, a2, v19, v18, a3 + 594);
    }
    if ( v16 )
      return Win32FreePool(v16);
  }
  return result;
}
