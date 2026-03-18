/*
 * XREFs of ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800B2EC4
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800B2D70 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800B5444 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     McGenEventRegister @ 0x1800B58F8 (McGenEventRegister.c)
 *     TraceLoggingRegisterEx @ 0x1800D5A1C (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _TlgCreateWsz @ 0x180158BD8 (_TlgCreateWsz.c)
 */

void RegisterDwmGuidWithEtw(void)
{
  TLG_PENABLECALLBACK v0; // rdx
  PVOID v1; // r8
  TLG_PENABLECALLBACK v2; // rdx
  PVOID v3; // r8
  TLG_PENABLECALLBACK v4; // rdx
  PVOID v5; // r8
  TLG_PENABLECALLBACK v6; // rdx
  PVOID v7; // r8
  DWORD CurrentProcessId; // eax
  DWORD pdwType; // [rsp+20h] [rbp-E0h]
  DWORD pSessionId; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData[3]; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  GUID *v13; // [rsp+70h] [rbp-90h]
  int v14; // [rsp+78h] [rbp-88h]
  int v15; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  WCHAR Value[40]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR pwsz[40]; // [rsp+E0h] [rbp-20h] BYREF

  McGenEventRegister();
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180337240, v0, v1);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180337208, v2, v3);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1803371D0, v4, v5);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, v6, v7);
  EventActivityIdControl(3u, &gDwmCoreTelemetryActivityId);
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    memset_0(Value, 0, 0x44uLL);
    pdwType = pSessionId;
    if ( StringCchPrintfW(Value, 0x22uLL, L"%s_%08X", L"DwmInitSessionActivityId", pdwType) >= 0 )
    {
      memset_0(pwsz, 0, 0x4AuLL);
      pcbData[0] = 74;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", Value, 2u, 0LL, pwsz, pcbData)
        && dword_1803371D0 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x400000000000uLL) )
        {
          v15 = 0;
          v13 = &gDwmCoreTelemetryActivityId;
          v14 = 16;
          TlgCreateWsz(&pDesc, pwsz);
          TlgWrite((TraceLoggingHProvider)&dword_1803371D0, &unk_1802D6F59, 0LL, 0LL, 4u, &pData);
        }
      }
    }
  }
}
