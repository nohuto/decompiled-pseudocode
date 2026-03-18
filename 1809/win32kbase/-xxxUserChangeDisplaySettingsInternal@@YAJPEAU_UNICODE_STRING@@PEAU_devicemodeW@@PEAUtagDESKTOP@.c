/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B98C
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C004B2B0 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 *     xxxResetDisplayDevice @ 0x1C0046FB0 (xxxResetDisplayDevice.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0049674 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C00496A0 (-TrackFullscreenMode@@YAXH@Z.c)
 *     DrvQueryMDEVPowerState @ 0x1C004B930 (DrvQueryMDEVPowerState.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C004BD5C (DrvChangeDisplaySettingsPreValidate.c)
 *     LogDiagCDS @ 0x1C004BF0C (LogDiagCDS.c)
 *     DrvChangeDisplaySettings @ 0x1C004C198 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 *     PowerDimUndimResend @ 0x1C0099C10 (PowerDimUndimResend.c)
 *     SafeEnableMDEV @ 0x1C00A6220 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00A62F0 (SafeDisableMDEV.c)
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C00E100C (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     DrvSetPruneFlag @ 0x1C0105384 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C01054CC (DrvSetVideoParameters.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        struct _MCGEN_TRACE_CONTEXT *String1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  const UNICODE_STRING *v9; // r15
  int v10; // edi
  __int64 v12; // rdx
  int v13; // r13d
  int v14; // edi
  _DWORD *v15; // rax
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rcx
  int v21; // edx
  enum _MODE v22; // r12d
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  int v29; // [rsp+20h] [rbp-A1h]
  char v30; // [rsp+80h] [rbp-41h] BYREF
  int v31; // [rsp+84h] [rbp-3Dh] BYREF
  int v32; // [rsp+88h] [rbp-39h]
  int v33; // [rsp+8Ch] [rbp-35h]
  int v34; // [rsp+90h] [rbp-31h]
  int v35; // [rsp+94h] [rbp-2Dh]
  __int64 v36; // [rsp+98h] [rbp-29h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-19h]
  _BYTE v39[80]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v41; // [rsp+128h] [rbp+67h] BYREF

  v9 = (const UNICODE_STRING *)String1;
  LOBYTE(v41) = 0;
  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    McTemplateK0(String1, &ChangeDisplayModeStart, 0LL);
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_9;
  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16)) )
  {
    if ( (a4 & 0x20) == 0 || (v10 = DrvSetVideoParameters(v9, 1), v10 < 0) )
      v10 = -5;
    goto LABEL_10;
  }
  if ( gbMDEVDisabled )
  {
    if ( (a4 & 0x20) == 0 )
      goto LABEL_69;
    v29 = 1;
    goto LABEL_84;
  }
  LOBYTE(String1) = (a4 & 0x10000008) != 0;
  if ( ((unsigned __int8)String1 & ((a4 & 1) == 0)) != 0
    || (String1 = (struct _MCGEN_TRACE_CONTEXT *)(a4 & 0x60000000), (a4 & 0x10000000) != 0) && (_DWORD)String1
    || (a4 & 0x80000004) == 0x80000004 && (_DWORD)String1
    || (_DWORD)String1 == 1610612736
    || (a4 & 0x100) != 0 && a4 != 256
    || (a4 & 0x200) != 0 && a4 != 512 )
  {
LABEL_9:
    v10 = -4;
    goto LABEL_10;
  }
  if ( (gdwPUDFlags & 0x20000000) != 0
    && ((PVOID)PsGetCurrentProcess(String1) != gpepCSRSS || !(unsigned int)IsRemoteConnection()) )
  {
    goto LABEL_69;
  }
  if ( !a3 || (*((_DWORD *)a3 + 12) & 8) != 0 )
    a3 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 57);
  if ( (PVOID)PsGetCurrentProcess(String1) == gpepCSRSS )
  {
    if ( !a3 )
      a3 = grpdeskRitInput;
  }
  else if ( a3 != grpdeskRitInput )
  {
    if ( (a4 & 0x20) == 0 )
      goto LABEL_69;
    v29 = 0;
    goto LABEL_84;
  }
  if ( (a4 & 0x100) != 0 )
  {
    v12 = 0LL;
LABEL_78:
    v28 = DrvSetPruneFlag(v9, v12, (unsigned int)a6);
    goto LABEL_100;
  }
  if ( (a4 & 0x200) != 0 )
  {
    LOBYTE(v12) = 1;
    goto LABEL_78;
  }
  v13 = a4 & 0x10000002;
  v14 = a4 & 1;
  v35 = (a4 & 0x10000002) == 0;
  v32 = v14;
  v34 = a4 & 0x80;
  v33 = a4 & 0x20000000;
  v15 = DispBroker::DispBrokerClient::s_pSessionBroker;
  v16 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
  String1 = (struct _MCGEN_TRACE_CONTEXT *)((char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4);
  if ( !v16 )
    String1 = (struct _MCGEN_TRACE_CONTEXT *)DispBroker::DispBrokerClient::s_pSessionBroker;
  if ( LODWORD(String1->RegistrationHandle) != 3 )
  {
    if ( v16 )
      v15 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
    if ( *v15 != 2 )
      goto LABEL_30;
    if ( (a4 & 0x20) == 0 )
      goto LABEL_69;
    v29 = 0;
LABEL_84:
    v10 = DrvSetVideoParameters(v9, v29);
    if ( v10 >= 0 )
      goto LABEL_10;
    goto LABEL_69;
  }
  v22 = a6;
  v37 = 0LL;
  v31 = 1;
  v10 = DrvChangeDisplaySettingsPreValidate(v9, a4 & 1, (__int64)&v37, (__int64)&v31);
  if ( v10 )
    goto LABEL_10;
  if ( v31 )
  {
    v38 = MEMORY[0xFFFFF78000000320];
    v23 = v38 * KeQueryTimeIncrement();
    v10 = xxxDispBrokerChangeDisplaySettings(v9, a2, a4, v22 == UserMode);
    LogDiagCDS(v9, a2, v37, (unsigned int)v22, v32, v35, v34, v33, v23, v10, v10, 11, 0, 0LL);
    goto LABEL_49;
  }
  v14 = v32;
LABEL_30:
  if ( v13 )
    goto LABEL_34;
  if ( !CreateCachedMonitor() )
  {
LABEL_69:
    v10 = -1;
    goto LABEL_10;
  }
  SetPointer(0LL);
  if ( (int)IsFreeAllSpbsSupported() >= 0 )
    FreeAllSpbs();
LABEL_34:
  if ( qword_1C01CFE10 && (int)IsStopFadeSupported() >= 0 )
    StopFade();
  if ( (int)IsbSetDevDragRectSupported() >= 0 )
    bSetDevDragRect(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
  v10 = DrvChangeDisplaySettings(
          v9,
          a6,
          v14,
          v35,
          *(_QWORD *)(gpDispInfo + 16),
          (__int64)&v36,
          -((a4 & 0x40) == 0),
          v34,
          v33,
          a4 & 4,
          (__int64)&v41,
          (__int64)a7);
  PushW32ThreadLock(a3, v39, CompositionObject::Release);
  if ( a3 )
    ObfReferenceObject(a3);
  if ( v13 )
    goto LABEL_48;
  if ( v10 == 2 )
  {
    TrackFullscreenMode(a4 & 4);
    if ( (a4 & 0x40000000) != 0 )
    {
      if ( (unsigned int)SafeDisableMDEV(1LL) )
        SafeEnableMDEV(1LL);
      xxxUserResetDisplayDevice(v25, v24, v26);
    }
    v10 = 0;
    goto LABEL_43;
  }
  if ( v10 )
  {
    if ( v10 >= 0 )
      goto LABEL_43;
    xxxUserResetDisplayDevice(v18, v17, v19);
    if ( !(_BYTE)v41 )
      goto LABEL_43;
    v27 = a3 ? ***((_QWORD ***)a3 + 1) : 0LL;
    if ( (int)DrvSetDisplayConfig(
                0,
                0,
                2447,
                2,
                v27,
                0,
                0LL,
                0LL,
                *(struct _MDEV **)(gpDispInfo + 16),
                (__int64)&v36,
                0LL,
                0LL,
                (__int64)&v30,
                0LL,
                (__int64)a7) < 0 )
      goto LABEL_43;
    TrackFullscreenMode(0);
    if ( v30 )
      goto LABEL_43;
    v21 = 0;
    *(_QWORD *)(gpDispInfo + 16) = v36;
  }
  else
  {
    TrackFullscreenMode(a4 & 4);
    *(_QWORD *)(gpDispInfo + 16) = v36;
    PowerDimUndimResend();
    v21 = a4 & 4;
  }
  xxxResetDisplayDevice((__int64)a3, v21, 0);
LABEL_43:
  if ( a3 )
  {
    v20 = (_QWORD *)*((_QWORD *)a3 + 1);
    if ( (*(_DWORD *)(*v20 + 64LL) & 1) == 0 )
      xxxInternalInvalidate(v20[3], 1LL, 66693LL);
  }
  SetPointer(1LL);
  if ( (int)IszzzUpdateCursorImageSupported() >= 0 )
    zzzUpdateCursorImage();
LABEL_48:
  PopAndFreeW32ThreadLock(v39);
LABEL_49:
  if ( v10 >= 0 && (a4 & 0x20) != 0 )
  {
    v28 = DrvSetVideoParameters(v9, 0);
LABEL_100:
    v10 = v28;
  }
LABEL_10:
  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    McTemplateK0(String1, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v10;
}
