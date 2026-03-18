/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C00737D8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0074290 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C000B478 (WPP_RECORDER_SF_Ld.c)
 *     HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher @ 0x1C002CC1C (HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher.c)
 *     HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher @ 0x1C002CC60 (HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002F49C (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00718F0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInformationExV2(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rdx
  _QWORD *i; // rax
  _QWORD *v14; // r14
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  const GUID *v17; // r8
  int v19; // ecx
  __int64 v20; // rbx
  __int64 v21; // r11
  char IsDeviceSuperSpeedPlusCapableOrHigher; // al
  __int64 v23; // r11
  __int64 v24; // r10
  _DWORD *v25; // rbx
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]
  void *v28; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_1C00640E0);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v28,
          0LL);
  if ( v10 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters(v9, 0x10uLL, a4, v28, 0x10uLL, a3);
    if ( v10 >= 0 )
    {
      if ( *((_DWORD *)v28 + 1) >= 0x10u )
      {
        v7 = *(unsigned __int16 *)v28;
        v11 = *((_DWORD *)v28 + 2);
        memset(v28, 0, a3);
        *(_DWORD *)v28 = v7;
        if ( (v11 & 4) != 0 )
        {
          *(_DWORD *)v28 = v7;
          *((_DWORD *)v28 + 1) = 16;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
            WdfDriverGlobals,
            a2,
            16LL);
          for ( i = *(_QWORD **)(v9 + 2360); ; i = (_QWORD *)*i )
          {
            v14 = i - 31;
            if ( (_QWORD *)(v9 + 2360) == i )
              break;
            if ( *((_WORD *)v14 + 100) == (_WORD)v7 )
            {
              if ( i == (_QWORD *)248 )
                break;
              v19 = *((_DWORD *)v14 + 52);
              if ( v19 == 512 )
              {
                *((_DWORD *)v28 + 2) |= 1u;
                if ( *(_DWORD *)(v9 + 256) == 2 || *(_DWORD *)(v9 + 2216) == 4 )
                  *((_DWORD *)v28 + 2) |= 2u;
              }
              else if ( v19 == 768 )
              {
                *((_DWORD *)v28 + 2) |= 4u;
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v27) = *((_DWORD *)v14 + 52);
                WPP_RECORDER_SF_Ld(
                  *(_QWORD *)(v9 + 2520),
                  v12,
                  4u,
                  0x33u,
                  (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
                  v27,
                  v7);
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
                WdfDriverGlobals,
                *(_QWORD *)(v9 + 16));
              v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v9 + 16),
                      0LL,
                      1LL);
              if ( v20 )
              {
                do
                {
                  if ( v20 != *(_QWORD *)(v9 + 2656)
                    && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                               WdfDriverGlobals,
                                               v20,
                                               off_1C0064040)
                                           + 48) == v7 )
                  {
                    break;
                  }
                  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015
                                                                                                 + 1080))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v9 + 16),
                          v20,
                          1LL);
                }
                while ( v20 );
                if ( v20 )
                {
                  v21 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                      WdfDriverGlobals,
                                      v20,
                                      off_1C0064040)
                                  + 24);
                  if ( v21 )
                  {
                    if ( (*(_DWORD *)(v21 + 1632) & 0x800) != 0 )
                      *((_DWORD *)v28 + 3) |= 2u;
                    IsDeviceSuperSpeedPlusCapableOrHigher = HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher(v21);
                    *(_DWORD *)(v24 + 12) = *(_DWORD *)(v24 + 12) & 0xFFFFFFF7 | (IsDeviceSuperSpeedPlusCapableOrHigher != 0
                                                                                ? 8
                                                                                : 0);
                    if ( *((_DWORD *)v14 + 52) == 768 )
                    {
                      *((_DWORD *)v28 + 3) |= 1u;
                      v25 = v28;
                      v25[3] = v25[3] & 0xFFFFFFFB | (HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher(v23) ? 4 : 0);
                    }
                  }
                }
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
                WdfDriverGlobals,
                *(_QWORD *)(v9 + 16));
              goto LABEL_12;
            }
          }
        }
      }
      v10 = -1073741811;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v9 + 2520),
      2u,
      3u,
      0x32u,
      (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
      v10);
  }
LABEL_12:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v29[0] = 0LL;
    v29[1] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v17 = (const GUID *)v29;
      LODWORD(v27) = v10;
      LODWORD(v26) = v7;
      if ( ActivityIdIrp < 0 )
        v17 = 0LL;
      McTemplateK0pqq(
        v16,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_V2_COMPLETE,
        v17,
        *(_QWORD *)(v9 + 248),
        v26,
        v27);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10);
}
