/*
 * XREFs of ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C020D3A8
 * Callers:
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C020D550 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0212808 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceHapticsMode(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  unsigned int v9; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  int v11; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  const char *v13; // [rsp+68h] [rbp+7h]
  int v14; // [rsp+70h] [rbp+Fh]
  int v15; // [rsp+74h] [rbp+13h]
  int *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  int *v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+90h] [rbp+2Fh]
  int v21; // [rsp+94h] [rbp+33h]

  result = 0LL;
  v5 = (unsigned int)a3;
  v9 = 0;
  v7 = 5LL;
  if ( dword_1C031C7D0 > 4u )
  {
    v15 = 0;
    v11 = 0;
    v18 = 0;
    v21 = 0;
    v13 = "InteractiveControlManager::SetDeviceHapticsMode entry";
    v16 = &v11;
    v19 = &v10;
    v14 = 54;
    v17 = 4;
    v10 = (int)a3;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E37DF, a3, a4, 5u, &pData);
    result = v9;
  }
  v8 = (_QWORD *)(a1 + 40);
  do
  {
    if ( *v8 )
    {
      result = InteractiveControlDevice::SetHapticsMode(*v8, v5);
      v9 = result;
      if ( (int)result < 0 && dword_1C031C7D0 > 2u )
      {
        v15 = 0;
        v18 = 0;
        v10 = result;
        v16 = &v10;
        v13 = "Function failed.";
        v14 = 17;
        v17 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, a3, a4, 4u, &pData);
        result = v9;
      }
    }
    ++v8;
    --v7;
  }
  while ( v7 );
  *(_DWORD *)(a1 + 32) = v5;
  if ( dword_1C031C7D0 > 4u )
  {
    v15 = 0;
    v18 = 0;
    v13 = "InteractiveControlManager::SetDeviceHapticsMode exit";
    v16 = (int *)&v9;
    v14 = 53;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, a3, a4, 4u, &pData);
    return v9;
  }
  return result;
}
