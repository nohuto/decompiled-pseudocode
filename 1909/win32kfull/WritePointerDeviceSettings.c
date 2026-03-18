/*
 * XREFs of WritePointerDeviceSettings @ 0x1C01F8DA4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F8818 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01F89BC (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01F8BA4 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
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
            dword_1C031F69C[0] = *(_DWORD *)(a2 + 4);
            glTOUCH_DRIVER_HW_STACK_LATENCY = v11;
          }
          v12 = *(_DWORD *)(a2 + 8);
          if ( v12 <= 0x3C )
          {
            dword_1C031F6AC = *(_DWORD *)(a2 + 8);
            glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v12;
          }
          v5 = 1;
          dword_1C031F6BC = *(_DWORD *)(a2 + 12);
          gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = dword_1C031F6BC;
          if ( (_DWORD)a3 )
            return WritePredictionSettings(v10, (const unsigned __int16 *)1, a3);
        }
      }
      else
      {
        v5 = 1;
        dword_1C031F78C = *(_DWORD *)a2;
        dword_1C031F79C = *(_DWORD *)(a2 + 4);
        dword_1C031F7AC = *(_DWORD *)(a2 + 8);
        dword_1C031F7BC = *(_DWORD *)(a2 + 12);
        dword_1C031F7CC = *(_DWORD *)(a2 + 16);
        dword_1C031F7DC = *(_DWORD *)(a2 + 20);
        dword_1C031F7EC = *(_DWORD *)(a2 + 24);
        if ( (!(_DWORD)a3 || (v5 = WriteSettingValues(7LL, &gaModeSettings)) != 0) && !gModeMonitor )
          gModeMonitor = 1;
      }
    }
    else
    {
      v5 = 1;
      dword_1C031F7FC = *(_DWORD *)a2;
      dword_1C031F80C = *(_DWORD *)(a2 + 4);
      dword_1C031F81C = *(_DWORD *)(a2 + 8);
      dword_1C031F82C = *(_DWORD *)(a2 + 12);
      dword_1C031F83C = *(_DWORD *)(a2 + 16);
      dword_1C031F84C = *(_DWORD *)(a2 + 20);
      dword_1C031F85C = *(_DWORD *)(a2 + 24);
      dword_1C031F86C = *(_DWORD *)(a2 + 28);
      if ( (!(_DWORD)a3 || (v5 = WriteSettingValues(4LL, &gaPenParameters)) != 0) && !gPenMonitor )
        gPenMonitor = 1;
    }
  }
  else
  {
    v5 = 1;
    dword_1C031F88C = *(_DWORD *)a2 == 0;
    dword_1C031F89C = *(_DWORD *)(a2 + 4);
    dword_1C031F8AC = *(_DWORD *)(a2 + 8);
    dword_1C031F8BC = *(_DWORD *)(a2 + 12);
    dword_1C031F8CC = *(_DWORD *)(a2 + 20);
    dword_1C031F8DC = *(_DWORD *)(a2 + 24);
    dword_1C031F8EC = *(_DWORD *)(a2 + 28);
    dword_1C031F8FC = *(_DWORD *)(a2 + 32);
    dword_1C031F90C = *(_DWORD *)(a2 + 36);
    dword_1C031F91C = *(_DWORD *)(a2 + 40);
    dword_1C031F92C = *(_DWORD *)(a2 + 44);
    dword_1C031F93C = *(_DWORD *)(a2 + 48);
    dword_1C031F94C = *(_DWORD *)(a2 + 52);
    RawInputManagerObject::bTouchInputAllowed = *(_DWORD *)(a2 + 28);
    if ( !(_DWORD)a3 || (v5 = WriteSettingValues(2LL, &gaTouchGestureSettings)) != 0 )
    {
      if ( !gTouchMonitor )
        gTouchMonitor = 1;
      dword_1C031F87C = *(_DWORD *)(a2 + 16);
      if ( v4 )
        v5 = WriteSettingValues(3LL, &gMultiTouchGetSettings);
      if ( v5 && !gMultiTouchMonitor )
        gMultiTouchMonitor = 1;
    }
  }
  return v5;
}
