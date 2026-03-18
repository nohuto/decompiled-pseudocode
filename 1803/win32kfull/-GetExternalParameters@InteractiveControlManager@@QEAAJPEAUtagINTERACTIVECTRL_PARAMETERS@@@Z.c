/*
 * XREFs of ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C020C174
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0103D58 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlManager::GetExternalParameters(
        InteractiveControlManager *this,
        struct tagINTERACTIVECTRL_PARAMETERS *a2,
        const GUID *a3,
        const GUID *a4)
{
  unsigned int v6; // ecx
  int Settings; // [rsp+38h] [rbp-9h] BYREF
  int v9; // [rsp+3Ch] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  const char *v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+74h] [rbp+33h]
  int *p_Settings; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+84h] [rbp+43h]

  Settings = 0;
  if ( dword_1C031C7D0 > 4u )
  {
    v13 = 0;
    v11 = "InteractiveControlManager::GetExternalParameters entry";
    v12 = 55;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E36D8, a3, a4, 3u, &pData);
  }
  if ( a2 )
  {
    Settings = InteractiveControlSettings::ReadSettings(
                 (InteractiveControlManager *)((char *)this + 84),
                 (__int64)a2,
                 (__int64)a3);
    v6 = Settings;
    if ( Settings < 0 && dword_1C031C7D0 > 2u )
    {
      v13 = 0;
      v16 = 0;
      v11 = "Function failed.";
      p_Settings = &v9;
      v12 = 17;
      v9 = Settings;
      v15 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, a3, a4, 4u, &pData);
      v6 = Settings;
    }
    *(_DWORD *)a2 = *((_DWORD *)this + 25);
  }
  else
  {
    v6 = -1073741811;
    Settings = -1073741811;
  }
  if ( dword_1C031C7D0 > 4u )
  {
    v13 = 0;
    v16 = 0;
    v11 = "InteractiveControlManager::GetExternalParameters exit";
    p_Settings = &Settings;
    v12 = 54;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, a3, a4, 4u, &pData);
    return (unsigned int)Settings;
  }
  return v6;
}
