/*
 * XREFs of ReadPointerDeviceSettings @ 0x1C00BA1D4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     InitializePointerPrediction @ 0x1C01417C0 (InitializePointerPrediction.c)
 * Callees:
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C00B982C (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C00B9A74 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00B9D2C (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C012DDC8 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C012DF2C (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0140F2C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0141628 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F8834 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 */

__int64 __fastcall ReadPointerDeviceSettings(int a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  struct tagDEVICECONFIG_SETTING near **v11; // rsi
  __m128i v12; // xmm6
  bool v13; // zf
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  struct tagDEVICECONFIG_SETTING near *v24; // rsi
  _BOOL8 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct tagDEVICECONFIG_SETTING *v39; // rsi
  int v40; // eax
  int v41; // ecx
  struct tagDEVICECONFIG_SETTING *v42; // rsi
  unsigned int v43; // edx
  int v44; // eax
  int v45; // ecx
  unsigned int v46; // ecx
  int v47; // eax
  struct tagDEVICECONFIG_SETTING near *v48; // rsi
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax

  v4 = 0;
  v6 = (unsigned int)(a1 - 146);
  if ( !(_DWORD)v6 )
  {
    if ( !gTouchMonitor || !gMultiTouchMonitor )
      LoadPointerDeviceTouchSettings();
    v24 = off_1C0321058;
    GetLocalMachineRegistryDWORDValues(v6, L"\\Software\\Microsoft\\Wisp\\Touch", (__int128 *)off_1C0321058);
    v25 = (unsigned int)(*((_DWORD *)v24 + 3) - 1) > 0xFFFFFFFD;
    *(_DWORD *)a2 = v25;
    v26 = *((_DWORD *)v24 + 7);
    if ( v26 == -1 )
      v26 = *((_DWORD *)v24 + 6);
    *(_DWORD *)(a2 + 4) = v26;
    v27 = *((_DWORD *)v24 + 11);
    if ( v27 == -1 )
      v27 = *((_DWORD *)v24 + 10);
    *(_DWORD *)(a2 + 8) = v27;
    v28 = *((_DWORD *)v24 + 15);
    if ( v28 == -1 )
      v28 = *((_DWORD *)v24 + 14);
    *(_DWORD *)(a2 + 12) = v28;
    v29 = *((_DWORD *)v24 + 19);
    if ( v29 == -1 )
      v29 = *((_DWORD *)v24 + 18);
    *(_DWORD *)(a2 + 20) = v29;
    v30 = *((_DWORD *)v24 + 23);
    if ( v30 == -1 )
      v30 = *((_DWORD *)v24 + 22);
    *(_DWORD *)(a2 + 24) = v30;
    GetLocalMachineRegistryDWORDValues(v25, L"\\Software\\Microsoft\\Wisp\\Touch", (__int128 *)v24 + 6);
    v32 = *((_DWORD *)v24 + 27);
    if ( v32 == -1 )
      v32 = *((_DWORD *)v24 + 26);
    *(_DWORD *)(a2 + 28) = v32;
    v33 = *((_DWORD *)v24 + 31);
    if ( v33 == -1 )
      v33 = *((_DWORD *)v24 + 30);
    *(_DWORD *)(a2 + 32) = v33;
    v34 = *((_DWORD *)v24 + 35);
    if ( v34 == -1 )
      v34 = *((_DWORD *)v24 + 34);
    *(_DWORD *)(a2 + 36) = v34;
    v35 = *((_DWORD *)v24 + 39);
    if ( v35 == -1 )
      v35 = *((_DWORD *)v24 + 38);
    *(_DWORD *)(a2 + 40) = v35;
    v36 = *((_DWORD *)v24 + 43);
    if ( v36 == -1 )
      v36 = *((_DWORD *)v24 + 42);
    *(_DWORD *)(a2 + 44) = v36;
    v37 = *((_DWORD *)v24 + 47);
    if ( v37 == -1 )
      v37 = *((_DWORD *)v24 + 46);
    *(_DWORD *)(a2 + 48) = v37;
    v38 = *((_DWORD *)v24 + 51);
    if ( v38 == -1 )
      v38 = *((_DWORD *)v24 + 50);
    v13 = gMultiTouchMonitor == 0;
    v39 = off_1C0321048;
    *(_DWORD *)(a2 + 52) = v38;
    if ( v13 )
      GetDWORDSettingValues(3LL, v39, 1LL);
    GetLocalMachineRegistryDWORDValues(v31, L"\\Software\\Microsoft\\Wisp\\MultiTouch", (__int128 *)v39);
    v40 = *((_DWORD *)v39 + 3);
    if ( v40 == -1 )
      v40 = *((_DWORD *)v39 + 2);
    *(_DWORD *)(a2 + 16) = v40;
    return 1;
  }
  v7 = (unsigned int)(v6 - 2);
  if ( !(_DWORD)v7 )
  {
    if ( !gPenMonitor )
      LoadPointerDevicePenSettings();
    v11 = off_1C0321038;
    v12 = *((__m128i *)off_1C0321038 + 6);
    v13 = (unsigned int)IsFlicksDisabledByGroupPolicy(v7) == 0;
    v14 = *((_DWORD *)v11 + 3);
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
    if ( !v13 )
      v15 = 0;
    if ( v14 == -1 )
      v14 = *((_DWORD *)v11 + 2);
    *(_DWORD *)a2 = v14;
    v16 = *((_DWORD *)v11 + 7);
    if ( v16 == -1 )
      v16 = *((_DWORD *)v11 + 6);
    *(_DWORD *)(a2 + 4) = v16;
    v17 = *((_DWORD *)v11 + 11);
    if ( v17 == -1 )
      v17 = *((_DWORD *)v11 + 10);
    *(_DWORD *)(a2 + 8) = v17;
    v18 = *((_DWORD *)v11 + 15);
    if ( v18 == -1 )
      v18 = *((_DWORD *)v11 + 14);
    *(_DWORD *)(a2 + 12) = v18;
    v19 = *((_DWORD *)v11 + 19);
    if ( v19 == -1 )
      v19 = *((_DWORD *)v11 + 18);
    *(_DWORD *)(a2 + 16) = v19;
    v20 = *((_DWORD *)v11 + 23);
    if ( v20 == -1 )
      v20 = *((_DWORD *)v11 + 22);
    *(_DWORD *)(a2 + 20) = v20;
    v21 = v12.m128i_i32[2];
    if ( v15 != -1 )
      v21 = v15;
    *(_DWORD *)(a2 + 24) = v21;
    v22 = *((_DWORD *)v11 + 31);
    if ( v22 == -1 )
      v22 = *((_DWORD *)v11 + 30);
    *(_DWORD *)(a2 + 28) = v22;
    return 1;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v48 = off_1C0321688;
    if ( !gModeMonitor )
      GetDWORDSettingValues(7LL, off_1C0321688, 7LL);
    v49 = *((_DWORD *)v48 + 3);
    if ( v49 == -1 )
      v49 = *((_DWORD *)v48 + 2);
    *(_DWORD *)a2 = v49;
    v50 = *((_DWORD *)v48 + 7);
    if ( v50 == -1 )
      v50 = *((_DWORD *)v48 + 6);
    *(_DWORD *)(a2 + 4) = v50;
    v51 = *((_DWORD *)v48 + 11);
    if ( v51 == -1 )
      v51 = *((_DWORD *)v48 + 10);
    *(_DWORD *)(a2 + 8) = v51;
    v52 = *((_DWORD *)v48 + 15);
    if ( v52 == -1 )
      v52 = *((_DWORD *)v48 + 14);
    *(_DWORD *)(a2 + 12) = v52;
    v53 = *((_DWORD *)v48 + 19);
    if ( v53 == -1 )
      v53 = *((_DWORD *)v48 + 18);
    *(_DWORD *)(a2 + 16) = v53;
    v54 = *((_DWORD *)v48 + 23);
    if ( v54 == -1 )
      v54 = *((_DWORD *)v48 + 22);
    *(_DWORD *)(a2 + 20) = v54;
    v55 = *((_DWORD *)v48 + 27);
    if ( v55 == -1 )
      v55 = *((_DWORD *)v48 + 26);
    *(_DWORD *)(a2 + 24) = v55;
    return 1;
  }
  v9 = v8 - 2;
  if ( !v9 )
    return GetFlickMap((struct tagFLICK_MAP *)a2);
  v41 = v9 - 2;
  if ( !v41 )
    return (unsigned int)GetCustomFlick((struct tagCUSTOM_FLICK *)a2);
  if ( v41 == 2 )
  {
    if ( !gPredictionMonitor )
      gPredictionMonitor = (int)CreatePredictionSettings(off_1C0321018, a2, a3, a4) >= 0;
    if ( gPredictionMonitor == 1 )
    {
      v42 = off_1C0321018;
      GetPredictionSettings(off_1C0321018, a2, a3, a4);
      v43 = *((_DWORD *)v42 + 3);
      v44 = 60;
      if ( v43 == -1 )
      {
        v45 = *((_DWORD *)v42 + 2);
      }
      else
      {
        v45 = 60;
        if ( v43 <= 0x3C )
          v45 = *((_DWORD *)v42 + 3);
      }
      *(_DWORD *)(a2 + 4) = v45;
      glTOUCH_DRIVER_HW_STACK_LATENCY = v45;
      v46 = *((_DWORD *)v42 + 7);
      if ( v46 == -1 )
      {
        v44 = *((_DWORD *)v42 + 6);
      }
      else if ( v46 <= 0x3C )
      {
        v44 = *((_DWORD *)v42 + 7);
      }
      *(_DWORD *)(a2 + 8) = v44;
      glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v44;
      v47 = *((_DWORD *)v42 + 11);
      if ( v47 == -1 )
        v47 = *((_DWORD *)v42 + 10);
      *(_DWORD *)(a2 + 12) = v47;
      gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = v47;
      return 1;
    }
  }
  return v4;
}
