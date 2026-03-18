/*
 * XREFs of ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C024ED30
 * Callers:
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C024EEEC (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C02545C0 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceHapticsMode(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  unsigned int v8; // [rsp+38h] [rbp-29h] BYREF
  int v9; // [rsp+3Ch] [rbp-25h] BYREF
  int v10; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  const char *v12; // [rsp+68h] [rbp+7h]
  int v13; // [rsp+70h] [rbp+Fh]
  int v14; // [rsp+74h] [rbp+13h]
  int *v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  int *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]

  result = 0LL;
  v8 = 0;
  v6 = 5LL;
  if ( dword_1C031F308 > 4u )
  {
    v14 = 0;
    v10 = 0;
    v17 = 0;
    v20 = 0;
    v12 = "InteractiveControlManager::SetDeviceHapticsMode entry";
    v15 = &v10;
    v18 = &v9;
    v13 = 54;
    v16 = 4;
    v9 = a3;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E852C, 0LL, 0LL, 5u, &pData);
    result = v8;
  }
  v7 = (_QWORD *)(a1 + 40);
  do
  {
    if ( *v7 )
    {
      result = InteractiveControlDevice::SetHapticsMode(*v7, a3);
      v8 = result;
      if ( (int)result < 0 && dword_1C031F308 > 2u )
      {
        v14 = 0;
        v17 = 0;
        v9 = result;
        v15 = &v9;
        v12 = "Function failed.";
        v13 = 17;
        v16 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E83ED, 0LL, 0LL, 4u, &pData);
        result = v8;
      }
    }
    ++v7;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(a1 + 32) = a3;
  if ( dword_1C031F308 > 4u )
  {
    v14 = 0;
    v17 = 0;
    v12 = "InteractiveControlManager::SetDeviceHapticsMode exit";
    v15 = (int *)&v8;
    v13 = 53;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E837A, 0LL, 0LL, 4u, &pData);
    return v8;
  }
  return result;
}
