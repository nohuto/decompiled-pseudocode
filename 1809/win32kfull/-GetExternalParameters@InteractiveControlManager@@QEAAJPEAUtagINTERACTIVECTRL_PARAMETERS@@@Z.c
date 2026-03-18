/*
 * XREFs of ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C0235500
 * Callers:
 *     ?GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C02262A4 (-GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0123B90 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlManager::GetExternalParameters(
        InteractiveControlManager *this,
        struct tagINTERACTIVECTRL_PARAMETERS *a2,
        int a3)
{
  unsigned int v5; // ecx
  int Settings; // [rsp+38h] [rbp-9h] BYREF
  int v8; // [rsp+3Ch] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  const char *v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+70h] [rbp+2Fh]
  int v12; // [rsp+74h] [rbp+33h]
  int *p_Settings; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]

  Settings = 0;
  if ( dword_1C030C400 > 4u )
  {
    v12 = 0;
    v10 = "InteractiveControlManager::GetExternalParameters entry";
    v11 = 55;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D618A, 0LL, 0LL, 3u, &pData);
  }
  if ( a2 )
  {
    Settings = InteractiveControlSettings::ReadSettings(
                 (InteractiveControlManager *)((char *)this + 84),
                 (__int64)a2,
                 a3);
    v5 = Settings;
    if ( Settings < 0 && dword_1C030C400 > 2u )
    {
      v12 = 0;
      v15 = 0;
      v10 = "Function failed.";
      p_Settings = &v8;
      v11 = 17;
      v8 = Settings;
      v14 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &pData);
      v5 = Settings;
    }
    *(_DWORD *)a2 = *((_DWORD *)this + 25);
  }
  else
  {
    v5 = -1073741811;
    Settings = -1073741811;
  }
  if ( dword_1C030C400 > 4u )
  {
    v12 = 0;
    v15 = 0;
    v10 = "InteractiveControlManager::GetExternalParameters exit";
    p_Settings = &Settings;
    v11 = 54;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D60DF, 0LL, 0LL, 4u, &pData);
    return (unsigned int)Settings;
  }
  return v5;
}
