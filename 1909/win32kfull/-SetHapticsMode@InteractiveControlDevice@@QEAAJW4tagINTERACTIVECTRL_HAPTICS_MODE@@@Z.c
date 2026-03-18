/*
 * XREFs of ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C02545C0
 * Callers:
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C024ED30 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0079528 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0257720 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::SetHapticsMode(__int64 a1, int a2)
{
  unsigned int v2; // edi
  unsigned __int16 v5; // bp
  SimpleHapticsController *v6; // rcx
  int v7; // eax
  int v9; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  const char *v11; // [rsp+60h] [rbp-48h]
  int v12; // [rsp+68h] [rbp-40h]
  int v13; // [rsp+6Ch] [rbp-3Ch]
  int *v14; // [rsp+70h] [rbp-38h]
  int v15; // [rsp+78h] [rbp-30h]
  int v16; // [rsp+7Ch] [rbp-2Ch]

  v2 = 0;
  v5 = 2;
  if ( !a2
    && !*(_DWORD *)(a1 + 64)
    && !*((_DWORD *)InteractiveControlManager::Instance() + 21)
    && *((_DWORD *)InteractiveControlManager::Instance() + 25) )
  {
    v5 = 3;
  }
  v6 = *(SimpleHapticsController **)(a1 + 384);
  if ( v6 )
  {
    v7 = SimpleHapticsController::SetAutoTriggerWaveform(v6, v5);
    v2 = v7;
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a1 + 60) = a2;
    }
    else if ( dword_1C031F308 > 2u )
    {
      v13 = 0;
      v16 = 0;
      v11 = "Function failed.";
      v14 = &v9;
      v12 = 17;
      v9 = v7;
      v15 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E83ED, 0LL, 0LL, 4u, &pData);
    }
  }
  return v2;
}
