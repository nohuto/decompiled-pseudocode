/*
 * XREFs of ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C020D550
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C020D3A8 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0210CA8 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 */

__int64 __fastcall InteractiveControlManager::SetExternalParameters(
        InteractiveControlManager *this,
        struct tagINTERACTIVECTRL_PARAMETERS *a2,
        const GUID *a3,
        const GUID *a4)
{
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // [rsp+38h] [rbp-19h] BYREF
  _DWORD v9[3]; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  const char *v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  unsigned int *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  int v17; // [rsp+C8h] [rbp+77h] BYREF

  v17 = (int)a3;
  v8 = 0;
  if ( dword_1C031C7D0 > 4u )
  {
    v13 = 0;
    v16 = 0;
    v11 = "InteractiveControlManager::SetExternalParameters entry";
    v14 = (unsigned int *)&v17;
    v12 = 55;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3708, a3, a4, 4u, &pData);
  }
  if ( a2 )
  {
    v7 = *(_DWORD *)a2;
    *((_DWORD *)this + 25) = *(_DWORD *)a2;
    result = InteractiveControlManager::SetDeviceHapticsMode((__int64)this, (__int64)a2, (const GUID *)(v7 == 0), a4);
    v8 = result;
    if ( (int)result < 0 && dword_1C031C7D0 > 2u )
    {
      v13 = 0;
      v16 = 0;
      v9[0] = result;
      v14 = v9;
      v11 = "Function failed.";
      v12 = 17;
      v15 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, a3, a4, 4u, &pData);
      result = v8;
    }
    if ( v17 )
    {
      result = InteractiveControlSettings::WriteSettings((InteractiveControlManager *)((char *)this + 84));
      v8 = result;
      if ( (int)result < 0 && dword_1C031C7D0 > 2u )
      {
        v13 = 0;
        v16 = 0;
        v9[0] = result;
        v14 = v9;
        v11 = "Function failed.";
        v12 = 17;
        v15 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, a3, a4, 4u, &pData);
        result = v8;
      }
    }
  }
  else
  {
    result = 3221225485LL;
    v8 = -1073741811;
  }
  if ( dword_1C031C7D0 > 4u )
  {
    v13 = 0;
    v16 = 0;
    v11 = "InteractiveControlManager::SetExternalParameters exit";
    v14 = &v8;
    v12 = 54;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, a3, a4, 4u, &pData);
    return v8;
  }
  return result;
}
