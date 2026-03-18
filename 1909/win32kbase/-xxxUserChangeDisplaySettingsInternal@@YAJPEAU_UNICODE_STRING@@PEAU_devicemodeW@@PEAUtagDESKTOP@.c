/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0046FBC
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0046620 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     DrvQueryMDEVPowerState @ 0x1C0046F60 (DrvQueryMDEVPowerState.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C00474DC (DrvChangeDisplaySettingsPreValidate.c)
 *     LogDiagCDS @ 0x1C0047688 (LogDiagCDS.c)
 *     DrvChangeDisplaySettings @ 0x1C00478FC (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C0048030 (DrvSetDisplayConfig.c)
 *     xxxResetDisplayDevice @ 0x1C0062FC0 (xxxResetDisplayDevice.c)
 *     PowerDimUndimResend @ 0x1C006354C (PowerDimUndimResend.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C0063670 (-TrackFullscreenMode@@YAXH@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063688 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     SafeEnableMDEV @ 0x1C00B7C00 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00B7CE0 (SafeDisableMDEV.c)
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C01042BC (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 *     DrvSetPruneFlag @ 0x1C012BD98 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C012BEE0 (DrvSetVideoParameters.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        const UNICODE_STRING *String1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  PCUNICODE_STRING v9; // r13
  int v10; // r14d
  int v11; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r15d
  int v16; // edi
  _DWORD *v17; // rax
  char v18; // dl
  enum _MODE v19; // r12d
  int v20; // r8d
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v21; // rsi
  _QWORD *v22; // rcx
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // [rsp+20h] [rbp-A1h]
  _BYTE v28[4]; // [rsp+80h] [rbp-41h] BYREF
  int v29; // [rsp+84h] [rbp-3Dh]
  int v30; // [rsp+88h] [rbp-39h]
  int v31; // [rsp+8Ch] [rbp-35h] BYREF
  int v32; // [rsp+90h] [rbp-31h]
  int v33; // [rsp+94h] [rbp-2Dh]
  int v34; // [rsp+98h] [rbp-29h]
  __int64 v35; // [rsp+A0h] [rbp-21h]
  __int64 v36; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-11h] BYREF
  _QWORD v38[9]; // [rsp+B8h] [rbp-9h] BYREF
  struct _devicemodeW *v39; // [rsp+118h] [rbp+57h]
  __int64 v40; // [rsp+128h] [rbp+67h] BYREF

  v39 = a2;
  LOBYTE(v40) = 0;
  memset(v38, 0, 24);
  v9 = String1;
  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    McTemplateK0(String1, &ChangeDisplayModeStart, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 12, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 13, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
    }
  }
  v29 = a4 & 1;
  if ( (a4 & 1) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 14, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  if ( (a4 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 15, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  v30 = a4 & 4;
  if ( (a4 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 16, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  if ( (a4 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 17, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  if ( (a4 & 0x10) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 18, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  LODWORD(v35) = a4 & 0x40000000;
  if ( (a4 & 0x40000000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 19, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  v33 = a4 & 0x20000000;
  if ( (a4 & 0x20000000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 20, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  if ( (a4 & 0x10000000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 21, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  v10 = a4 & 0x20;
  if ( (a4 & 0x20) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 22, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  if ( (a4 & 0x100) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 23, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  if ( (a4 & 0x200) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 24, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  }
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_25;
  if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16)) )
  {
    if ( gbMDEVDisabled )
    {
      if ( (a4 & 0x20) == 0 )
        goto LABEL_106;
      v27 = 1;
      goto LABEL_121;
    }
    LOBYTE(String1) = (a4 & 0x10000008) != 0;
    if ( ((unsigned __int8)String1 & ((a4 & 1) == 0)) != 0
      || (String1 = (const UNICODE_STRING *)(a4 & 0x60000000), (a4 & 0x10000000) != 0) && (_DWORD)String1
      || (v13 = 2147483652LL, (a4 & 0x80000004) == 0x80000004) && (_DWORD)String1
      || (_DWORD)String1 == 1610612736
      || (a4 & 0x100) != 0 && a4 != 256
      || (a4 & 0x200) != 0 && a4 != 512 )
    {
LABEL_25:
      v11 = -4;
      goto LABEL_26;
    }
    if ( (gdwPUDFlags & 0x20000000) != 0
      && ((PVOID)PsGetCurrentProcess(String1, 2147483652LL) != gpepCSRSS || !(unsigned int)IsRemoteConnection()) )
    {
      goto LABEL_106;
    }
    if ( !a3 || (*((_DWORD *)a3 + 12) & 8) != 0 )
      a3 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 56);
    if ( (PVOID)PsGetCurrentProcess(String1, v13) == gpepCSRSS )
    {
      if ( !a3 )
        a3 = grpdeskRitInput;
    }
    else if ( a3 != grpdeskRitInput )
    {
      if ( (a4 & 0x20) == 0 )
        goto LABEL_106;
      v27 = 0;
      goto LABEL_121;
    }
    if ( (a4 & 0x100) != 0 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( (a4 & 0x200) == 0 )
      {
        v15 = a4 & 0x10000002;
        v16 = a4 & 0x80;
        v34 = (a4 & 0x10000002) == 0;
        v17 = DispBroker::DispBrokerClient::s_pSessionBroker;
        v32 = v16;
        v18 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
        String1 = (const UNICODE_STRING *)((char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4);
        if ( !v18 )
          String1 = (const UNICODE_STRING *)DispBroker::DispBrokerClient::s_pSessionBroker;
        v19 = a6;
        if ( *(_DWORD *)&String1->Length == 3 )
        {
          v37 = 0LL;
          v31 = 1;
          v11 = DrvChangeDisplaySettingsPreValidate(v9, v29, (__int64)&v37, (__int64)&v31);
          if ( v11 )
            goto LABEL_26;
          if ( v31 )
          {
            v35 = MEMORY[0xFFFFF78000000320];
            v25 = v35 * KeQueryTimeIncrement();
            v11 = xxxDispBrokerChangeDisplaySettings(v9, v39, a4, v19 == UserMode);
            LogDiagCDS(v9, v39, v37, (unsigned int)v19, v29, v34, v32, v33, v25, v11, v11, 11, 0, 0LL);
LABEL_65:
            if ( v11 >= 0 && v10 )
              v11 = DrvSetVideoParameters(v9, 0);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v23) = 4;
              WPP_RECORDER_SF_D(
                (_DWORD)gBaseLog,
                v23,
                14,
                25,
                (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids,
                v11);
            }
            goto LABEL_26;
          }
          v16 = v32;
          goto LABEL_46;
        }
        if ( v18 )
          v17 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v17 != 2 )
        {
LABEL_46:
          if ( v15 )
            goto LABEL_50;
          if ( CreateCachedMonitor() )
          {
            SetPointer(0LL);
            if ( (int)IsFreeAllSpbsSupported() >= 0 )
              FreeAllSpbs();
LABEL_50:
            if ( qword_1C0215870 && (int)IsStopFadeSupported() >= 0 )
              StopFade();
            if ( (int)IsbSetDevDragRectSupported() >= 0 )
              bSetDevDragRect(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
            v20 = -((a4 & 0x40) == 0);
            v21 = a7;
            v11 = DrvChangeDisplaySettings(
                    v9,
                    v19,
                    v29,
                    v34,
                    *(_QWORD *)(gpDispInfo + 16),
                    (__int64)&v36,
                    v20,
                    v16,
                    v33,
                    v30,
                    (__int64)&v40,
                    (__int64)a7);
            PushW32ThreadLock(a3, v38, CompositionObject::Release);
            if ( a3 )
              ObfReferenceObject(a3);
            if ( v15 )
              goto LABEL_64;
            if ( v11 == 2 )
            {
              TrackFullscreenMode(v30);
              if ( (_DWORD)v35 )
              {
                if ( (unsigned int)SafeDisableMDEV(1LL) )
                  SafeEnableMDEV(1LL);
                xxxUserResetDisplayDevice();
              }
              v11 = 0;
              goto LABEL_59;
            }
            if ( v11 )
            {
              if ( v11 >= 0 )
                goto LABEL_59;
              xxxUserResetDisplayDevice();
              if ( !(_BYTE)v40 )
                goto LABEL_59;
              v26 = a3 ? ***((_QWORD ***)a3 + 1) : 0LL;
              if ( (int)DrvSetDisplayConfig(
                          0,
                          0,
                          2447,
                          2,
                          v26,
                          0,
                          0LL,
                          0LL,
                          *(struct _MDEV **)(gpDispInfo + 16),
                          (__int64)&v36,
                          0LL,
                          0LL,
                          (__int64)v28,
                          0LL,
                          (__int64)v21) < 0 )
                goto LABEL_59;
              TrackFullscreenMode(0);
              if ( v28[0] )
                goto LABEL_59;
              v24 = 0LL;
              *(_QWORD *)(gpDispInfo + 16) = v36;
            }
            else
            {
              TrackFullscreenMode(v30);
              *(_QWORD *)(gpDispInfo + 16) = v36;
              PowerDimUndimResend();
              v24 = (unsigned int)v30;
            }
            xxxResetDisplayDevice(a3, v24, 0LL);
LABEL_59:
            if ( a3 )
            {
              v22 = (_QWORD *)*((_QWORD *)a3 + 1);
              if ( (*(_DWORD *)(*v22 + 64LL) & 1) == 0 )
                xxxInternalInvalidate(v22[3], 1LL, 66693LL);
            }
            SetPointer(1LL);
            if ( (int)IszzzUpdateCursorImageSupported() >= 0 )
              zzzUpdateCursorImage();
LABEL_64:
            PopAndFreeW32ThreadLock(v38);
            goto LABEL_65;
          }
LABEL_106:
          v11 = -1;
          goto LABEL_26;
        }
        if ( (a4 & 0x20) == 0 )
          goto LABEL_106;
        v27 = 0;
LABEL_121:
        v11 = DrvSetVideoParameters(v9, v27);
        if ( v11 >= 0 )
          goto LABEL_26;
        goto LABEL_106;
      }
      LOBYTE(v14) = 1;
    }
    v11 = DrvSetPruneFlag(v9, v14, (unsigned int)a6);
    goto LABEL_26;
  }
  if ( (a4 & 0x20) == 0 || (v11 = DrvSetVideoParameters(v9, 1), v11 < 0) )
    v11 = -5;
LABEL_26:
  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    McTemplateK0(String1, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v11;
}
