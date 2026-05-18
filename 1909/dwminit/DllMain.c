/*
 * XREFs of DllMain @ 0x18000158C
 * Callers:
 *     dllmain_dispatch @ 0x1800061DC (dllmain_dispatch.c)
 * Callees:
 *     _TlgWrite @ 0x180001090 (_TlgWrite.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001170 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x1800011F8 (-UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z.c)
 *     __security_check_cookie @ 0x180005060 (__security_check_cookie.c)
 *     memset_0 @ 0x1800059F6 (memset_0.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  HANDLE CurrentProcess; // rax
  struct _GUID *v4; // rdx
  unsigned __int16 *v5; // r8
  unsigned __int16 *v6; // r9
  DWORD CurrentProcessId; // eax
  __int128 v8; // xmm0
  const GUID *v9; // r8
  const GUID *v10; // r9
  int dwOptionsa; // [rsp+20h] [rbp-E0h]
  DWORD dwOptions[2]; // [rsp+20h] [rbp-E0h]
  int samDesired; // [rsp+28h] [rbp-D8h]
  int lpSecurityAttributes; // [rsp+30h] [rbp-D0h]
  int phkResult; // [rsp+38h] [rbp-C8h]
  int lpdwDisposition; // [rsp+40h] [rbp-C0h]
  int v18; // [rsp+48h] [rbp-B8h]
  int v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+58h] [rbp-A8h]
  int v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h]
  DWORD pSessionId; // [rsp+70h] [rbp-90h] BYREF
  HKEY hKey[3]; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR Data[2]; // [rsp+90h] [rbp-70h] BYREF
  GUID *v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  GUID *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  unsigned __int16 *v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+DCh] [rbp-24h]
  unsigned __int16 *v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  WCHAR ValueName[40]; // [rsp+F0h] [rbp-10h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      DisableThreadLibraryCalls(hinstDLL);
      CurrentProcess = GetCurrentProcess();
      UtilGetProcessTelemetryAppSessionGuid(CurrentProcess, v4, v5, v6);
      EventActivityIdControl(3u, &gDwmInitTelemetryActivityId);
      memset_0(Data, 0, 0x4AuLL);
      v22 = gDwmInitTelemetryActivityId.Data4[7];
      v21 = gDwmInitTelemetryActivityId.Data4[6];
      v20 = gDwmInitTelemetryActivityId.Data4[5];
      v19 = gDwmInitTelemetryActivityId.Data4[4];
      v18 = gDwmInitTelemetryActivityId.Data4[3];
      lpdwDisposition = gDwmInitTelemetryActivityId.Data4[2];
      phkResult = gDwmInitTelemetryActivityId.Data4[1];
      lpSecurityAttributes = gDwmInitTelemetryActivityId.Data4[0];
      samDesired = gDwmInitTelemetryActivityId.Data3;
      dwOptionsa = gDwmInitTelemetryActivityId.Data2;
      if ( (int)StringCchPrintfW(
                  (wchar_t *)Data,
                  37LL,
                  L"%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
                  gDwmInitTelemetryActivityId.Data1,
                  dwOptionsa,
                  samDesired,
                  lpSecurityAttributes,
                  phkResult,
                  lpdwDisposition,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22) >= 0 )
      {
        hKey[0] = 0LL;
        if ( !RegCreateKeyExW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\DWM",
                0,
                0LL,
                1u,
                0xF003Fu,
                0LL,
                hKey,
                0LL) )
        {
          pSessionId = 0;
          CurrentProcessId = GetCurrentProcessId();
          if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
          {
            memset_0(ValueName, 0, 0x44uLL);
            dwOptions[0] = pSessionId;
            if ( (int)StringCchPrintfW(ValueName, 34LL, L"%s_%08X", L"DwmInitSessionActivityId", *(_QWORD *)dwOptions) >= 0 )
              RegSetKeyValueW(hKey[0], 0LL, ValueName, 1u, Data, 0x4Au);
          }
          RegCloseKey(hKey[0]);
        }
      }
      v8 = *((_OWORD *)off_18000B008 - 1);
      xmmword_18000B028 = 0LL;
      *(_OWORD *)hKey = v8;
      if ( !EventRegister((LPCGUID)hKey, TlgEnableCallback, &dword_18000B000, &RegHandle) )
        EventSetInformation(RegHandle, 2LL, off_18000B008, *(unsigned __int16 *)off_18000B008);
      if ( (unsigned int)dword_18000B000 > 5
        && (qword_18000B010 & 0x400000000000LL) != 0
        && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
      {
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v29 = &gDwmInitTargetAppSessionGuid;
        v32 = &gBootId;
        v35 = &gSessionId;
        v26 = &gDwmInitTelemetryActivityId;
        v27 = 16;
        v30 = 16;
        v33 = 2;
        v36 = 2;
        TlgWrite((TraceLoggingHProvider)0x10, &unk_18000872B, v9, v10, 6u, Data);
      }
    }
  }
  else
  {
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_18000B000 = 0;
  }
  return 1;
}
