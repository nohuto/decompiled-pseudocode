/*
 * XREFs of WritePointerDeviceSettings @ 0x1C01D1FF8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00694D8 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01D1A60 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01D1BC8 (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C01D1D24 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01D1D80 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WritePointerDeviceSettings(int a1, __int64 a2, const unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  int v4; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  struct tagDEVICECONFIG_SETTING *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edi
  HANDLE v14; // rbp
  const unsigned __int16 **v15; // rsi
  NTSTATUS v16; // r14d
  unsigned int v17; // edi
  HANDLE v18; // rbp
  const unsigned __int16 **v19; // rsi
  NTSTATUS v20; // r14d
  unsigned int v21; // ebp
  HANDLE v22; // r15
  const unsigned __int16 **v23; // r14
  NTSTATUS v24; // r12d
  int v25; // edi
  HANDLE v26; // rbp
  const unsigned __int16 **v27; // rsi
  NTSTATUS v28; // r14d
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (int)a3;
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
        if ( v9 )
        {
          v10 = (struct tagDEVICECONFIG_SETTING *)(unsigned int)(v9 - 2);
          if ( (_DWORD)v10 )
          {
            if ( (_DWORD)v10 == 2 )
            {
              v11 = *(_DWORD *)(a2 + 4);
              if ( v11 <= 0x3C )
              {
                dword_1C031CBFC[0] = *(_DWORD *)(a2 + 4);
                glTOUCH_DRIVER_HW_STACK_LATENCY = v11;
              }
              v12 = *(_DWORD *)(a2 + 8);
              if ( v12 <= 0x3C )
              {
                dword_1C031CC0C = *(_DWORD *)(a2 + 8);
                glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v12;
              }
              v3 = 1;
              dword_1C031CC1C = *(_DWORD *)(a2 + 12);
              gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = dword_1C031CC1C;
              if ( (_DWORD)a3 )
                return WritePredictionSettings(v10, (const wchar_t *)a2, a3);
            }
          }
          else
          {
            return SetCustomFlick((struct tagCUSTOM_FLICK *)a2);
          }
        }
        else
        {
          return SetFlickMap((struct tagFLICK_MAP *)a2, (int)a3);
        }
      }
      else
      {
        dword_1C031CCEC[0] = *(_DWORD *)a2;
        dword_1C031CCFC = *(_DWORD *)(a2 + 4);
        dword_1C031CD0C = *(_DWORD *)(a2 + 8);
        dword_1C031CD1C = *(_DWORD *)(a2 + 12);
        dword_1C031CD2C = *(_DWORD *)(a2 + 16);
        dword_1C031CD3C = *(_DWORD *)(a2 + 20);
        dword_1C031CD4C = *(_DWORD *)(a2 + 24);
        if ( !(_DWORD)a3 )
          goto LABEL_50;
        v13 = 0;
        if ( (int)OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20006u, &Handle, 0) >= 0 )
        {
          v14 = Handle;
          v15 = (const unsigned __int16 **)&gaModeSettings;
          do
          {
            v16 = WritePointerDeviceCfgSetting(v14, *v15, 4u, (unsigned __int8 *)&dword_1C031CCEC[4 * v13], 4u);
            if ( v16 < 0 )
              break;
            ++v13;
            v15 += 2;
          }
          while ( v13 < 7 );
          ZwClose(v14);
          if ( v16 >= 0 )
          {
LABEL_50:
            v3 = 1;
            if ( !gModeMonitor )
              gModeMonitor = 1;
          }
        }
      }
    }
    else
    {
      dword_1C031CD5C[0] = *(_DWORD *)a2;
      dword_1C031CD6C = *(_DWORD *)(a2 + 4);
      dword_1C031CD7C = *(_DWORD *)(a2 + 8);
      dword_1C031CD8C = *(_DWORD *)(a2 + 12);
      dword_1C031CD9C = *(_DWORD *)(a2 + 16);
      dword_1C031CDAC = *(_DWORD *)(a2 + 20);
      dword_1C031CDBC = *(_DWORD *)(a2 + 24);
      dword_1C031CDCC = *(_DWORD *)(a2 + 28);
      if ( !(_DWORD)a3 )
        goto LABEL_51;
      v17 = 0;
      if ( (int)OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20006u, &Handle, 0) >= 0 )
      {
        v18 = Handle;
        v19 = (const unsigned __int16 **)&gaPenParameters;
        do
        {
          v20 = WritePointerDeviceCfgSetting(v18, *v19, 4u, (unsigned __int8 *)&dword_1C031CD5C[4 * v17], 4u);
          if ( v20 < 0 )
            break;
          ++v17;
          v19 += 2;
        }
        while ( v17 < 8 );
        ZwClose(v18);
        if ( v20 >= 0 )
        {
LABEL_51:
          v3 = 1;
          if ( !gPenMonitor )
            gPenMonitor = 1;
        }
      }
    }
  }
  else
  {
    dword_1C031CDEC[0] = *(_DWORD *)a2 == 0;
    dword_1C031CDFC = *(_DWORD *)(a2 + 4);
    dword_1C031CE0C = *(_DWORD *)(a2 + 8);
    dword_1C031CE1C = *(_DWORD *)(a2 + 12);
    dword_1C031CE2C = *(_DWORD *)(a2 + 20);
    dword_1C031CE3C = *(_DWORD *)(a2 + 24);
    dword_1C031CE4C = *(_DWORD *)(a2 + 28);
    dword_1C031CE5C = *(_DWORD *)(a2 + 32);
    dword_1C031CE6C = *(_DWORD *)(a2 + 36);
    dword_1C031CE7C = *(_DWORD *)(a2 + 40);
    dword_1C031CE8C = *(_DWORD *)(a2 + 44);
    dword_1C031CE9C = *(_DWORD *)(a2 + 48);
    dword_1C031CEAC = *(_DWORD *)(a2 + 52);
    RawInputManagerObject::bTouchInputAllowed = *(_DWORD *)(a2 + 28);
    if ( !(_DWORD)a3 )
      goto LABEL_37;
    v21 = 0;
    if ( (int)OpenDeviceCfgKey(0x3Eu, L"\\Software\\Microsoft\\Wisp\\Touch", 0x20006u, &Handle, 0) >= 0 )
    {
      v22 = Handle;
      v23 = (const unsigned __int16 **)&gaTouchGestureSettings;
      do
      {
        v24 = WritePointerDeviceCfgSetting(v22, *v23, 4u, (unsigned __int8 *)&dword_1C031CDEC[4 * v21], 4u);
        if ( v24 < 0 )
          break;
        ++v21;
        v23 += 2;
      }
      while ( v21 < 0xD );
      ZwClose(v22);
      if ( v24 >= 0 )
      {
LABEL_37:
        if ( !gTouchMonitor )
          gTouchMonitor = 1;
        dword_1C031CDDC[0] = *(_DWORD *)(a2 + 16);
        if ( !v4 )
          goto LABEL_52;
        v25 = 0;
        if ( (int)OpenDeviceCfgKey(0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 0x20006u, &Handle, 0) >= 0 )
        {
          v26 = Handle;
          v27 = (const unsigned __int16 **)&gMultiTouchGetSettings;
          do
          {
            v28 = WritePointerDeviceCfgSetting(v26, *v27, 4u, (unsigned __int8 *)&dword_1C031CDDC[4 * v25], 4u);
            if ( v28 < 0 )
              break;
            ++v25;
            v27 += 2;
          }
          while ( !v25 );
          ZwClose(v26);
          if ( v28 >= 0 )
          {
LABEL_52:
            v3 = 1;
            if ( !gMultiTouchMonitor )
              gMultiTouchMonitor = 1;
          }
        }
      }
    }
  }
  return v3;
}
