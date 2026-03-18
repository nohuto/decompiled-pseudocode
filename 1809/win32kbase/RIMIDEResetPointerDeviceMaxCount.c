/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x1C011F8B8
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1C00F17E0 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C012E874 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C012EB18 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8

  v3 = a2;
  if ( (a1[77] & 0x8000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = 0;
  if ( !a1[178] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = v3 + 1;
  if ( a1[6] != 7 )
    v6 = v3;
  RIMCmFreePointerDeviceContacts(a1, a2, a3);
  if ( (int)RIMCmAllocPointerDeviceContacts(a1, 1785620818LL) >= 0 )
  {
    if ( Win32AllocPoolZInit(8LL * v6, 0x78707352u) )
    {
      a1[178] = v6;
      return 1;
    }
    else
    {
      RIMCmFreePointerDeviceContacts(a1, v7, v8);
    }
  }
  return v5;
}
