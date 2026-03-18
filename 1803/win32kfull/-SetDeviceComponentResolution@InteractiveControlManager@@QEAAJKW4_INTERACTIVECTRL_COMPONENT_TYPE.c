/*
 * XREFs of ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C020D040
 * Callers:
 *     NtUserSetInteractiveCtrlRotationAngle @ 0x1C01F52B0 (NtUserSetInteractiveCtrlRotationAngle.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C02121F8 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceComponentResolution(
        __int64 a1,
        int a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5)
{
  __int64 result; // rax
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // [rsp+30h] [rbp-51h] BYREF
  int v14; // [rsp+34h] [rbp-4Dh] BYREF
  int v15; // [rsp+38h] [rbp-49h] BYREF
  int v16; // [rsp+3Ch] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  const char *v18; // [rsp+60h] [rbp-21h]
  int v19; // [rsp+68h] [rbp-19h]
  int v20; // [rsp+6Ch] [rbp-15h]
  int *v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+7Ch] [rbp-5h]
  int *v24; // [rsp+80h] [rbp-1h]
  int v25; // [rsp+88h] [rbp+7h]
  int v26; // [rsp+8Ch] [rbp+Bh]
  int *v27; // [rsp+90h] [rbp+Fh]
  int v28; // [rsp+98h] [rbp+17h]
  int v29; // [rsp+9Ch] [rbp+1Bh]

  result = 0LL;
  v7 = (unsigned int)a4;
  v13 = 0;
  v8 = (unsigned int)a3;
  if ( dword_1C031C7D0 > 4u )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v18 = "InteractiveControlManager::SetDeviceComponentResolution entry";
    v21 = &v15;
    v24 = &v16;
    v27 = &v14;
    v19 = 62;
    v15 = a2;
    v22 = 4;
    v16 = (int)a3;
    v25 = 4;
    v14 = (int)a4;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3781, a3, a4, 6u, &pData);
    result = v13;
  }
  v10 = (__int64 *)(a1 + 40);
  v11 = 5LL;
  do
  {
    v12 = *v10;
    if ( *v10 && (!a2 || a2 == *(_DWORD *)(v12 + 8)) )
    {
      result = InteractiveControlDevice::SetComponentResolution(v12, v8, v7, a5);
      v13 = result;
      if ( (int)result < 0 && dword_1C031C7D0 > 2u )
      {
        v20 = 0;
        v23 = 0;
        v18 = "Function failed.";
        v14 = result;
        v22 = 4;
        v19 = 17;
        v21 = &v14;
        TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, a3, a4, 4u, &pData);
        result = v13;
      }
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  if ( !a2 && v8 == 3 )
    *(_DWORD *)(a1 + 28) = v7;
  if ( dword_1C031C7D0 > 4u )
  {
    v20 = 0;
    v23 = 0;
    v18 = "InteractiveControlManager::SetDeviceComponentResolution exit";
    v21 = (int *)&v13;
    v19 = 61;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, a3, a4, 4u, &pData);
    return v13;
  }
  return result;
}
