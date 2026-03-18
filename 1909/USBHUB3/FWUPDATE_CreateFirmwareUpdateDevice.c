/*
 * XREFs of FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C00821AC
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0070DB0 (HUBFDO_EvtDevicePrepareHardware.c)
 *     FWUPDATE_EvtDeviceReportedMissing @ 0x1C0081D80 (FWUPDATE_EvtDeviceReportedMissing.c)
 * Callees:
 *     McTemplateK0ppuq @ 0x1C00017D4 (McTemplateK0ppuq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringPrintf @ 0x1C000B2B8 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x1C0081E80 (FWUPDATE_AddIdsForFirmwareUpdateDevice.c)
 */

__int64 __fastcall FWUPDATE_CreateFirmwareUpdateDevice(__int64 a1)
{
  unsigned int v2; // esi
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  char v4; // r14
  char v5; // r15
  int updated; // ebx
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int16 v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rcx
  BOOL v17; // eax
  __int64 v18; // rdx
  __int64 v20; // [rsp+30h] [rbp-D8h]
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v26[56]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v27[8]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v28[8]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v29[12]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v30[18]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v31[10]; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD v32[6]; // [rsp+238h] [rbp+130h] BYREF
  char v33; // [rsp+268h] [rbp+160h] BYREF

  memset(v26, 0, sizeof(v26));
  memset(v29, 0, sizeof(v29));
  v2 = 0;
  memset(v32, 0, sizeof(v32));
  memset(v31, 0, sizeof(v31));
  v24 = 0LL;
  memset(v28, 0, sizeof(v28));
  memset(v30, 0, sizeof(v30));
  v3 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned int *)(a1 + 160);
  v23 = 0LL;
  v4 = 0;
  v22 = 0LL;
  v5 = 0;
  if ( (_DWORD)v3 == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v7);
    if ( v22 )
    {
      LOBYTE(v21) = 8;
      LOBYTE(v8) = 27;
      v5 = 1;
      updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, NTSTATUS (__fastcall *)(__int64, IRP *), __int64, __int64 *, int))(WdfFunctions_01015 + 584))(
                  WdfDriverGlobals,
                  v22,
                  FWUPDATE_EvtDeviceWdmIrpQueryInterfacePreprocess,
                  v8,
                  &v21,
                  1);
      if ( updated >= 0 )
      {
        v30[1] = FWUPDATE_EvtDeviceD0Entry;
        v30[3] = FWUPDATE_EvtDeviceD0Exit;
        LODWORD(v30[0]) = 144;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
          WdfDriverGlobals,
          v22,
          v30);
        memset(v28, 0, sizeof(v28));
        v28[7] = FWUPDATE_EvtDeviceReportedMissing;
        v28[2] = FWUPDATE_EvtDeviceResourceRequirementsQuery;
        LODWORD(v28[0]) = 64;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1688))(
          WdfDriverGlobals,
          v22,
          v28);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
          WdfDriverGlobals,
          v22,
          34LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(
          WdfDriverGlobals,
          v22,
          0LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v22);
        v24 = 0x100000008LL;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
          WdfDriverGlobals,
          v22,
          &v24);
        updated = FWUPDATE_AddIdsForFirmwareUpdateDevice(a1, v22);
        if ( updated < 0 )
          goto LABEL_43;
        *(_QWORD *)&v26[48] = off_1C00640B8;
        *(_QWORD *)&v26[8] = FWUPDATE_EvtDeviceCleanup;
        *(_QWORD *)v26 = 56LL;
        *(_QWORD *)&v26[16] = 0LL;
        *(_OWORD *)&v26[32] = 0LL;
        *(_DWORD *)&v26[24] = 1;
        *(_DWORD *)&v26[28] = 1;
        while ( 1 )
        {
          v11 = v22;
          DestinationString.Buffer = (wchar_t *)&v33;
          *(_QWORD *)&DestinationString.Length = 12582912LL;
          updated = RtlUnicodeStringPrintf(&DestinationString, L"\\Device\\USBFWU-%d", v2);
          if ( updated >= 0 )
            updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 536))(
                        WdfDriverGlobals,
                        v11,
                        &DestinationString);
          if ( updated < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_43;
            v9 = 36;
            goto LABEL_41;
          }
          updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                      WdfDriverGlobals,
                      v22,
                      &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
          if ( updated < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_43;
            v9 = 37;
            goto LABEL_12;
          }
          v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64 *))(WdfFunctions_01015 + 600))(
                  WdfDriverGlobals,
                  &v22,
                  v26,
                  &v23);
          updated = v12;
          if ( v12 >= 0 )
            break;
          ++v2;
          if ( v12 != -1073741771 )
            goto LABEL_23;
        }
        v4 = 1;
LABEL_23:
        if ( v12 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_43;
          v9 = 38;
LABEL_41:
          v10 = 2;
          goto LABEL_42;
        }
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v23,
                off_1C00640B8);
        v5 = 0;
        *(_QWORD *)v13 = a1;
        *(_DWORD *)(v13 + 28) = 5;
        memset(v29, 0, sizeof(v29));
        v29[6] = FWUPDATE_EvtIoInternalDeviceControl;
        LODWORD(v29[0]) = 96;
        v29[5] = FWUPDATE_EvtIoDeviceControl;
        BYTE5(v29[1]) = 1;
        *(_QWORD *)((char *)v29 + 4) = 1LL;
        updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _BYTE *))(WdfFunctions_01015 + 1216))(
                    WdfDriverGlobals,
                    v23,
                    v29,
                    0LL,
                    v27);
        if ( updated >= 0 )
        {
          HIDWORD(v32[5]) = -1;
          v32[0] = 0x200000030LL;
          v32[1] = 2LL;
          v32[2] = 2LL;
          v32[3] = 2LL;
          LODWORD(v32[4]) = 2;
          *(_QWORD *)((char *)&v32[4] + 4) = 2LL;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 664))(
            WdfDriverGlobals,
            v23,
            v32);
          v14 = *(_DWORD *)(a1 + 740);
          v15 = 2;
          *(_QWORD *)((char *)&v31[3] + 4) = 0x100000005LL;
          v16 = 2LL;
          v31[0] = 80LL;
          *(_QWORD *)((char *)&v31[4] + 4) = 0x500000005LL;
          *(_QWORD *)((char *)&v31[5] + 4) = 0x500000005LL;
          HIDWORD(v31[6]) = 5;
          HIDWORD(v31[7]) = v14;
          LODWORD(v31[7]) = 1;
          *(_QWORD *)((char *)&v31[1] + 4) = 1LL;
          *(_QWORD *)((char *)&v31[2] + 4) = 0LL;
          v31[8] = 0LL;
          v31[9] = 0x500000000LL;
          LODWORD(v31[1]) = 0;
          while ( 1 )
          {
            v17 = v15++ > v14;
            *((_DWORD *)&v31[3] + ++v16) = v17 + 3;
            if ( v16 > 6 )
              break;
            v14 = HIDWORD(v31[7]);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 672))(
            WdfDriverGlobals,
            v23,
            v31);
          v18 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 2656) = v23;
          updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1064))(
                      WdfDriverGlobals,
                      v18);
          if ( updated >= 0 )
          {
            v4 = 0;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v20) = updated;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a1 + 2520),
                2u,
                3u,
                0x28u,
                (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
                v20);
            }
            *(_QWORD *)(a1 + 2656) = 0LL;
          }
          goto LABEL_43;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v9 = 39;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v9 = 35;
      }
LABEL_12:
      v10 = 3;
LABEL_42:
      LODWORD(v20) = updated;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        v10,
        v9,
        (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
        v20);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 2520),
          2u,
          3u,
          0x22u,
          (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids);
      updated = -1073741670;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x21u,
        (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
        (_DWORD)v3);
    updated = -1073741823;
  }
LABEL_43:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
  {
    LOBYTE(v20) = *(_BYTE *)(a1 + 160);
    McTemplateK0ppuq(
      v3,
      &USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_ENUMERATION_COMPLETE,
      (const GUID *)(a1 + 2276),
      *(_QWORD *)(a1 + 248),
      *(_QWORD *)(a1 + 2656),
      v20,
      updated);
  }
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v22);
  if ( v4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v23);
  return (unsigned int)updated;
}
