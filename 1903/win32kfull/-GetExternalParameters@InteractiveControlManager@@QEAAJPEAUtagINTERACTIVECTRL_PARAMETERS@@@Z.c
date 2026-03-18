/*
 * XREFs of ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C024E140
 * Callers:
 *     ?GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C023E744 (-GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C00D8EB8 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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

  if ( dword_1C0321308 > 4u )
  {
    v12 = 0;
    v10 = "InteractiveControlManager::GetExternalParameters entry";
    v11 = 55;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E65, 0LL, 0LL, 3u, &pData);
  }
  if ( a2 )
  {
    Settings = InteractiveControlSettings::ReadSettings(
                 (InteractiveControlManager *)((char *)this + 84),
                 (__int64)a2,
                 a3);
    v5 = Settings;
    if ( Settings < 0 && dword_1C0321308 > 2u )
    {
      v12 = 0;
      v15 = 0;
      v10 = "Function failed.";
      p_Settings = &v8;
      v11 = 17;
      v8 = Settings;
      v14 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
      v5 = Settings;
    }
    *(_DWORD *)a2 = *((_DWORD *)this + 25);
  }
  else
  {
    v5 = -1073741811;
    Settings = -1073741811;
  }
  if ( dword_1C0321308 > 4u )
  {
    v12 = 0;
    v15 = 0;
    v10 = "InteractiveControlManager::GetExternalParameters exit";
    p_Settings = &Settings;
    v11 = 54;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DBA, 0LL, 0LL, 4u, &pData);
    return (unsigned int)Settings;
  }
  return v5;
}
