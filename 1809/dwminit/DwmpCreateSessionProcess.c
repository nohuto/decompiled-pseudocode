/*
 * XREFs of DwmpCreateSessionProcess @ 0x180002F80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001090 (_TlgWrite.c)
 *     ?IsRunningInWininit@@YA_NXZ @ 0x180001504 (-IsRunningInWininit@@YA_NXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B10 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x180002F10 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x18000375C (-DoStackCapture@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x1800050C0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmpCreateSessionProcess(int a1)
{
  HANDLE Thread; // rbx
  signed int LastError; // eax
  signed int v3; // ecx
  bool v4; // al
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  bool v8; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-55h] BYREF
  LPVOID lpParameter; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  GUID *v12; // [rsp+60h] [rbp-29h]
  int v13; // [rsp+68h] [rbp-21h]
  int v14; // [rsp+6Ch] [rbp-1Dh]
  unsigned int *v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  LPVOID *p_lpParameter; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  bool *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  GUID *v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+ACh] [rbp+23h]
  unsigned __int16 *v27; // [rsp+B0h] [rbp+27h]
  int v28; // [rsp+B8h] [rbp+2Fh]
  int v29; // [rsp+BCh] [rbp+33h]
  unsigned __int16 *v30; // [rsp+C0h] [rbp+37h]
  int v31; // [rsp+C8h] [rbp+3Fh]
  int v32; // [rsp+CCh] [rbp+43h]

  v9 = 0;
  Thread = 0LL;
  LODWORD(lpParameter) = a1;
  if ( OneCoreSkipDwmLaunch() )
  {
    v9 = 1;
  }
  else if ( gDwmFirstLaunch )
  {
    SetLastError(0);
    Thread = CreateThread(
               0LL,
               0LL,
               (LPTHREAD_START_ROUTINE)DwmpCreateSessionProcessWorker,
               (LPVOID)(unsigned int)lpParameter,
               0,
               0LL);
    if ( !Thread )
    {
      LastError = GetLastError();
      v3 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v3 = LastError;
      if ( v3 >= 0 )
        v3 = -2003304445;
      v9 = v3;
      DoStackCapture(v3, 0x5CEu);
    }
  }
  else
  {
    DwmpCreateSessionProcessWorker((PVOID)(unsigned int)lpParameter);
  }
  if ( (unsigned int)dword_18000B000 > 5
    && (qword_18000B010 & 0x400000000000LL) != 0
    && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v12 = &gDwmInitTelemetryActivityId;
    v15 = &v9;
    p_lpParameter = &lpParameter;
    v13 = 16;
    v16 = 4;
    v19 = 4;
    v4 = IsRunningInWininit();
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v8 = v4;
    v21 = &v8;
    v24 = &gDwmInitTargetAppSessionGuid;
    v27 = &gBootId;
    v30 = &gSessionId;
    v22 = 1;
    v25 = 16;
    v28 = 2;
    v31 = 2;
    TlgWrite((TraceLoggingHProvider)2, &unk_18000881D, v5, v6, 9u, &pData);
  }
  if ( Thread )
    CloseHandle(Thread);
  return v9;
}
