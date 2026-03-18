/*
 * XREFs of WritePointerDeviceSettings @ 0x1C01F9054
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F8AC8 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01F8C6C (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01F8E54 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WritePointerDeviceSettings(int a1, __int64 a2, const unsigned __int16 *a3)
{
  int v4; // esi
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  struct tagDEVICECONFIG_SETTING *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // eax

  v4 = (int)a3;
  v5 = 0;
  v6 = a1 - 147;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( !v9 )
          return SetFlickMap((struct tagFLICK_MAP *)a2, (int)a3);
        v10 = (struct tagDEVICECONFIG_SETTING *)(unsigned int)(v9 - 2);
        if ( !(_DWORD)v10 )
          return SetCustomFlick((struct tagCUSTOM_FLICK *)a2);
        if ( (_DWORD)v10 == 2 )
        {
          v11 = *(_DWORD *)(a2 + 4);
          if ( v11 <= 0x3C )
          {
            dword_1C032169C[0] = *(_DWORD *)(a2 + 4);
            glTOUCH_DRIVER_HW_STACK_LATENCY = v11;
          }
          v12 = *(_DWORD *)(a2 + 8);
          if ( v12 <= 0x3C )
          {
            dword_1C03216AC = *(_DWORD *)(a2 + 8);
            glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v12;
          }
          v5 = 1;
          dword_1C03216BC = *(_DWORD *)(a2 + 12);
          gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = dword_1C03216BC;
          if ( (_DWORD)a3 )
            return WritePredictionSettings(v10, (const unsigned __int16 *)1, a3);
        }
      }
      else
      {
        v5 = 1;
        dword_1C032178C = *(_DWORD *)a2;
        dword_1C032179C = *(_DWORD *)(a2 + 4);
        dword_1C03217AC = *(_DWORD *)(a2 + 8);
        dword_1C03217BC = *(_DWORD *)(a2 + 12);
        dword_1C03217CC = *(_DWORD *)(a2 + 16);
        dword_1C03217DC = *(_DWORD *)(a2 + 20);
        dword_1C03217EC = *(_DWORD *)(a2 + 24);
        if ( (!(_DWORD)a3 || (v5 = WriteSettingValues(7LL, &gaModeSettings)) != 0) && !gModeMonitor )
          gModeMonitor = 1;
      }
    }
    else
    {
      v5 = 1;
      dword_1C03217FC = *(_DWORD *)a2;
      dword_1C032180C = *(_DWORD *)(a2 + 4);
      dword_1C032181C = *(_DWORD *)(a2 + 8);
      dword_1C032182C = *(_DWORD *)(a2 + 12);
      dword_1C032183C = *(_DWORD *)(a2 + 16);
      dword_1C032184C = *(_DWORD *)(a2 + 20);
      dword_1C032185C = *(_DWORD *)(a2 + 24);
      dword_1C032186C = *(_DWORD *)(a2 + 28);
      if ( (!(_DWORD)a3 || (v5 = WriteSettingValues(4LL, &gaPenParameters)) != 0) && !gPenMonitor )
        gPenMonitor = 1;
    }
  }
  else
  {
    v5 = 1;
    dword_1C032188C = *(_DWORD *)a2 == 0;
    dword_1C032189C = *(_DWORD *)(a2 + 4);
    dword_1C03218AC = *(_DWORD *)(a2 + 8);
    dword_1C03218BC = *(_DWORD *)(a2 + 12);
    dword_1C03218CC = *(_DWORD *)(a2 + 20);
    dword_1C03218DC = *(_DWORD *)(a2 + 24);
    dword_1C03218EC = *(_DWORD *)(a2 + 28);
    dword_1C03218FC = *(_DWORD *)(a2 + 32);
    dword_1C032190C = *(_DWORD *)(a2 + 36);
    dword_1C032191C = *(_DWORD *)(a2 + 40);
    dword_1C032192C = *(_DWORD *)(a2 + 44);
    dword_1C032193C = *(_DWORD *)(a2 + 48);
    dword_1C032194C = *(_DWORD *)(a2 + 52);
    RawInputManagerObject::bTouchInputAllowed = *(_DWORD *)(a2 + 28);
    if ( !(_DWORD)a3 || (v5 = WriteSettingValues(2LL, &gaTouchGestureSettings)) != 0 )
    {
      if ( !gTouchMonitor )
        gTouchMonitor = 1;
      dword_1C032187C = *(_DWORD *)(a2 + 16);
      if ( v4 )
        v5 = WriteSettingValues(3LL, &gMultiTouchGetSettings);
      if ( v5 && !gMultiTouchMonitor )
        gMultiTouchMonitor = 1;
    }
  }
  return v5;
}
