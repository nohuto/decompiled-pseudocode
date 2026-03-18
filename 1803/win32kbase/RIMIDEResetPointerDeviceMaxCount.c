/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x1C00F4D80
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1C00B9430 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C010699C (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0106C44 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8

  v3 = a2;
  if ( (a1[69] & 0x8000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v5 = 0;
  if ( !a1[170] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v6 = v3 + 1;
  if ( a1[6] != 7 )
    v6 = v3;
  RIMCmFreePointerDeviceContacts(a1, a2, a3);
  if ( (int)RIMCmAllocPointerDeviceContacts(a1, 1785620818LL) >= 0 )
  {
    if ( Win32AllocPoolZInit(8LL * v6, 0x78707352u) )
    {
      a1[170] = v6;
      return 1;
    }
    else
    {
      RIMCmFreePointerDeviceContacts(a1, v7, v8);
    }
  }
  return v5;
}
