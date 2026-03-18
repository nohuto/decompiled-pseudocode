/*
 * XREFs of ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0212808
 * Callers:
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C020D3A8 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0215688 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::SetHapticsMode(__int64 a1, int a2)
{
  unsigned int v2; // edi
  unsigned __int16 v5; // bp
  SimpleHapticsController *v6; // rcx
  int v7; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  const char *v13; // [rsp+60h] [rbp-48h]
  int v14; // [rsp+68h] [rbp-40h]
  int v15; // [rsp+6Ch] [rbp-3Ch]
  int *v16; // [rsp+70h] [rbp-38h]
  int v17; // [rsp+78h] [rbp-30h]
  int v18; // [rsp+7Ch] [rbp-2Ch]

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
    else if ( dword_1C031C7D0 > 2u )
    {
      v15 = 0;
      v18 = 0;
      v13 = "Function failed.";
      v16 = &v11;
      v14 = 17;
      v11 = v7;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v8, v9, 4u, &pData);
    }
  }
  return v2;
}
