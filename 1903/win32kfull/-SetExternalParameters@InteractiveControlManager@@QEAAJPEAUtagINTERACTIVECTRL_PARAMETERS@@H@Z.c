/*
 * XREFs of ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C024F62C
 * Callers:
 *     ?SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C023E76C (-SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C024F470 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0253004 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 */

__int64 __fastcall InteractiveControlManager::SetExternalParameters(
        InteractiveControlManager *this,
        struct tagINTERACTIVECTRL_PARAMETERS *a2,
        int a3)
{
  __int64 result; // rax
  int v6; // eax
  unsigned int v7; // [rsp+38h] [rbp-19h] BYREF
  _DWORD v8[3]; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  const char *v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+74h] [rbp+23h]
  unsigned int *v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  int v16; // [rsp+C8h] [rbp+77h] BYREF

  v16 = a3;
  if ( dword_1C0321308 > 4u )
  {
    v12 = 0;
    v15 = 0;
    v10 = "InteractiveControlManager::SetExternalParameters entry";
    v13 = (unsigned int *)&v16;
    v11 = 55;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E95, 0LL, 0LL, 4u, &pData);
  }
  if ( a2 )
  {
    v6 = *(_DWORD *)a2;
    *((_DWORD *)this + 25) = *(_DWORD *)a2;
    result = InteractiveControlManager::SetDeviceHapticsMode((__int64)this, (__int64)a2, v6 == 0);
    v7 = result;
    if ( (int)result < 0 && dword_1C0321308 > 2u )
    {
      v12 = 0;
      v15 = 0;
      v8[0] = result;
      v13 = v8;
      v10 = "Function failed.";
      v11 = 17;
      v14 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
      result = v7;
    }
    if ( v16 )
    {
      result = InteractiveControlSettings::WriteSettings((InteractiveControlManager *)((char *)this + 84));
      v7 = result;
      if ( (int)result < 0 && dword_1C0321308 > 2u )
      {
        v12 = 0;
        v15 = 0;
        v8[0] = result;
        v13 = v8;
        v10 = "Function failed.";
        v11 = 17;
        v14 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
        result = v7;
      }
    }
  }
  else
  {
    result = 3221225485LL;
    v7 = -1073741811;
  }
  if ( dword_1C0321308 > 4u )
  {
    v12 = 0;
    v15 = 0;
    v10 = "InteractiveControlManager::SetExternalParameters exit";
    v13 = &v7;
    v11 = 54;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DBA, 0LL, 0LL, 4u, &pData);
    return v7;
  }
  return result;
}
