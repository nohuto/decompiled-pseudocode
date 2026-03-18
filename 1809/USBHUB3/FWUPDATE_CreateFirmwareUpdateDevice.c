/*
 * XREFs of FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C007A588
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C006AC40 (HUBFDO_EvtDevicePrepareHardware.c)
 *     FWUPDATE_EvtDeviceReportedMissing @ 0x1C007A230 (FWUPDATE_EvtDeviceReportedMissing.c)
 * Callees:
 *     McTemplateK0ppuq @ 0x1C00016CC (McTemplateK0ppuq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringPrintf @ 0x1C0010EB4 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x1C007A320 (FWUPDATE_AddIdsForFirmwareUpdateDevice.c)
 */

__int64 __fastcall FWUPDATE_CreateFirmwareUpdateDevice(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // esi
  char v4; // r14
  char v5; // r15
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  int updated; // ebx
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // eax
  unsigned __int16 v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx
  BOOL v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v23; // [rsp+30h] [rbp-D8h]
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v27[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v30[7]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v31[12]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v32[8]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v33[18]; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v34[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v35; // [rsp+1F0h] [rbp+E8h]
  __int64 v36; // [rsp+1F8h] [rbp+F0h]
  __int64 v37; // [rsp+200h] [rbp+F8h]
  int v38; // [rsp+208h] [rbp+100h]
  __int64 v39; // [rsp+20Ch] [rbp+104h]
  int v40; // [rsp+214h] [rbp+10Ch]
  _QWORD v41[10]; // [rsp+218h] [rbp+110h] BYREF
  char v42; // [rsp+268h] [rbp+160h] BYREF

  v1 = *(_DWORD *)(a1 + 160);
  v26 = 0LL;
  v3 = 0;
  v25 = 0LL;
  v4 = 0;
  v5 = 0;
  if ( v1 == 1 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v8);
    if ( v25 )
    {
      LOBYTE(v24) = 8;
      LOBYTE(v9) = 27;
      v5 = 1;
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, NTSTATUS (__fastcall *)(__int64, IRP *), __int64, __int64 *, int))(WdfFunctions_01015 + 584))(
              WdfDriverGlobals,
              v25,
              FWUPDATE_EvtDeviceWdmIrpQueryInterfacePreprocess,
              v9,
              &v24,
              1);
      updated = v10;
      if ( v10 >= 0 )
      {
        memset(v33, 0, sizeof(v33));
        v33[1] = FWUPDATE_EvtDeviceD0Entry;
        v33[3] = FWUPDATE_EvtDeviceD0Exit;
        LODWORD(v33[0]) = 144;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
          WdfDriverGlobals,
          v25,
          v33);
        memset(v32, 0, sizeof(v32));
        v32[7] = FWUPDATE_EvtDeviceReportedMissing;
        v32[2] = FWUPDATE_EvtDeviceResourceRequirementsQuery;
        LODWORD(v32[0]) = 64;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1688))(
          WdfDriverGlobals,
          v25,
          v32);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
          WdfDriverGlobals,
          v25,
          34LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(
          WdfDriverGlobals,
          v25,
          0LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v25);
        v27[0] = 8;
        v27[1] = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 3224))(
          WdfDriverGlobals,
          v25,
          v27);
        updated = FWUPDATE_AddIdsForFirmwareUpdateDevice(a1, v25);
        if ( updated >= 0 )
        {
          memset(v30, 0, sizeof(v30));
          v30[6] = off_1C005F0B8;
          v30[1] = FWUPDATE_EvtDeviceCleanup;
          LODWORD(v30[0]) = 56;
          v30[3] = 0x100000001LL;
          while ( 1 )
          {
            v13 = v25;
            DestinationString.Buffer = (wchar_t *)&v42;
            *(_DWORD *)&DestinationString.Length = 12582912;
            updated = RtlUnicodeStringPrintf(&DestinationString, L"\\Device\\USBFWU-%d", v3);
            if ( updated >= 0 )
              updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 536))(
                          WdfDriverGlobals,
                          v13,
                          &DestinationString);
            if ( updated < 0 )
            {
              v11 = 36;
              LODWORD(v23) = updated;
              goto LABEL_30;
            }
            v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015
                                                                                                  + 544))(
                    WdfDriverGlobals,
                    v25,
                    &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
            updated = v10;
            if ( v10 < 0 )
            {
              v11 = 37;
              goto LABEL_7;
            }
            v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                 + 600))(
                    WdfDriverGlobals,
                    &v25,
                    v30,
                    &v26);
            updated = v14;
            if ( v14 >= 0 )
              break;
            ++v3;
            if ( v14 != -1073741771 )
              goto LABEL_18;
          }
          v4 = 1;
LABEL_18:
          if ( v14 < 0 )
          {
            v11 = 38;
            LODWORD(v23) = v14;
LABEL_30:
            v12 = 2;
            goto LABEL_31;
          }
          v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v26,
                  off_1C005F0B8);
          v5 = 0;
          *(_QWORD *)v15 = a1;
          *(_DWORD *)(v15 + 28) = 5;
          memset(v31, 0, sizeof(v31));
          v31[6] = FWUPDATE_EvtIoInternalDeviceControl;
          LODWORD(v31[0]) = 96;
          v31[5] = FWUPDATE_EvtIoDeviceControl;
          BYTE5(v31[1]) = 1;
          *(_QWORD *)((char *)v31 + 4) = 1LL;
          v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, int *))(WdfFunctions_01015
                                                                                                 + 1216))(
                  WdfDriverGlobals,
                  v26,
                  v31,
                  0LL,
                  &v29);
          updated = v10;
          if ( v10 < 0 )
          {
            v11 = 39;
            goto LABEL_7;
          }
          v40 = -1;
          v34[0] = 48;
          v34[1] = 2;
          v35 = 2LL;
          v36 = 2LL;
          v37 = 2LL;
          v38 = 2;
          v39 = 2LL;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 664))(
            WdfDriverGlobals,
            v26,
            v34);
          memset(v41, 0, sizeof(v41));
          v16 = *(_DWORD *)(a1 + 740);
          v17 = 2;
          v41[0] = 80LL;
          *(_QWORD *)((char *)&v41[3] + 4) = 0x100000005LL;
          v18 = 2LL;
          *(_QWORD *)((char *)&v41[4] + 4) = 0x500000005LL;
          *(_QWORD *)((char *)&v41[5] + 4) = 0x500000005LL;
          HIDWORD(v41[6]) = 5;
          HIDWORD(v41[7]) = v16;
          LODWORD(v41[7]) = 1;
          *(_QWORD *)((char *)&v41[1] + 4) = 1LL;
          *(_QWORD *)((char *)&v41[2] + 4) = 0LL;
          v41[8] = 0LL;
          v41[9] = 0x500000000LL;
          LODWORD(v41[1]) = 0;
          while ( 1 )
          {
            v19 = v17++ > v16;
            *((_DWORD *)&v41[3] + ++v18) = v19 + 3;
            if ( v18 > 6 )
              break;
            v16 = HIDWORD(v41[7]);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 672))(
            WdfDriverGlobals,
            v26,
            v41);
          v20 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 2616) = v26;
          v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1064))(
                  WdfDriverGlobals,
                  v20);
          updated = v21;
          if ( v21 >= 0 )
          {
            v4 = 0;
          }
          else
          {
            LODWORD(v23) = v21;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2520),
              2u,
              3u,
              0x28u,
              (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
              v23);
            *(_QWORD *)(a1 + 2616) = 0LL;
          }
        }
      }
      else
      {
        v11 = 35;
LABEL_7:
        LODWORD(v23) = v10;
        v12 = 3;
LABEL_31:
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2520),
          2u,
          v12,
          v11,
          (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
          v23);
      }
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x22u, (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids);
      updated = -1073741670;
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      0x21u,
      (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
      v1);
    updated = -1073741823;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
  {
    LOBYTE(v23) = *(_BYTE *)(a1 + 160);
    McTemplateK0ppuq(
      v6,
      &USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_ENUMERATION_COMPLETE,
      (const GUID *)(a1 + 2276),
      *(_QWORD *)(a1 + 248),
      *(_QWORD *)(a1 + 2616),
      v23,
      updated);
  }
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v25);
  if ( v4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v26);
  return (unsigned int)updated;
}
