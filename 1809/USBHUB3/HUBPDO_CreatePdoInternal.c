/*
 * XREFs of HUBPDO_CreatePdoInternal @ 0x1C006F900
 * Callers:
 *     HUBPDO_CreatePdo @ 0x1C0070A74 (HUBPDO_CreatePdo.c)
 *     HUBPDO_CreateUnknownPdo @ 0x1C0070B38 (HUBPDO_CreateUnknownPdo.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0ppqq @ 0x1C001106C (McTemplateK0ppqq.c)
 *     WPP_RECORDER_SF_qDDDdddddd @ 0x1C0011B80 (WPP_RECORDER_SF_qDDDdddddd.c)
 *     HUBPDO_RegisterForPowerSettingsForDevice @ 0x1C0016EE4 (HUBPDO_RegisterForPowerSettingsForDevice.c)
 *     HUBPDO_RegisterForPowerSettingsForHub @ 0x1C0017038 (HUBPDO_RegisterForPowerSettingsForHub.c)
 *     HUBIDLE_AddEvent @ 0x1C003680C (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBPDO_MakePdoName @ 0x1C006F620 (HUBPDO_MakePdoName.c)
 *     HUBPDO_AssignPDOIds @ 0x1C006F6FC (HUBPDO_AssignPDOIds.c)
 *     WMI_FireNotification @ 0x1C007A08C (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_CreatePdoInternal(__int64 a1, char a2)
{
  int v3; // r14d
  char v4; // si
  char v5; // r13
  char v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  int v10; // edi
  __int64 v11; // r9
  int PdoName; // eax
  __int64 v13; // r9
  unsigned __int16 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r14
  int v21; // edi
  __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rax
  int v25; // eax
  unsigned __int16 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // r12
  __int16 v32; // cx
  int v33; // eax
  __int64 v34; // r15
  __int64 v35; // rcx
  unsigned __int16 v36; // r9
  unsigned int v37; // ecx
  bool v38; // zf
  __int64 v39; // rcx
  __int64 v40; // rdi
  int v41; // r8d
  int v42; // edx
  int v43; // eax
  BOOL v44; // eax
  __int64 v45; // rax
  _QWORD *v46; // r15
  int v47; // eax
  unsigned __int16 v48; // r9
  struct _KEVENT *v49; // rax
  __int64 v50; // r8
  int *v51; // rcx
  unsigned __int16 *v52; // rdx
  int v53; // eax
  unsigned __int8 v54; // al
  unsigned int v55; // edi
  __int64 v56; // rax
  ULONG RemlockSize[2]; // [rsp+28h] [rbp-E0h]
  int RemlockSizea; // [rsp+28h] [rbp-E0h]
  __int64 v60; // [rsp+30h] [rbp-D8h]
  __int64 v61; // [rsp+30h] [rbp-D8h]
  char v62; // [rsp+88h] [rbp-80h]
  char v63; // [rsp+89h] [rbp-7Fh]
  __int64 v65; // [rsp+98h] [rbp-70h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v68[7]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v69[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v70[6]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v71[5]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v72[16]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v73[8]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v74[18]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v75[12]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v76[18]; // [rsp+298h] [rbp+190h] BYREF
  _QWORD v77[10]; // [rsp+328h] [rbp+220h] BYREF
  _DWORD v78[12]; // [rsp+378h] [rbp+270h] BYREF
  int v79; // [rsp+3A8h] [rbp+2A0h]
  int v80; // [rsp+3ACh] [rbp+2A4h] BYREF
  _DWORD v81[2]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v82; // [rsp+3C8h] [rbp+2C0h]

  v62 = 0;
  v65 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 2u);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFFD);
    v7 = *(_QWORD *)a1;
    if ( (*(_DWORD *)(v7 + 40) & 0x40000) == 0 || (*(_DWORD *)(a1 + 1632) & 0x20) == 0 )
      WMI_FireNotification(v7, *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL), 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)a1);
  v66 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v8);
  if ( v66 )
  {
    v5 = 1;
    memset(v74, 0, sizeof(v74));
    v74[1] = HUBPDO_EvtDeviceD0Entry;
    v74[3] = HUBPDO_EvtDeviceD0Exit;
    v74[5] = HUBPDO_EvtDevicePrepareHardware;
    v74[6] = HUBPDO_EvtDeviceReleaseHardware;
    v74[12] = HUBPDO_EvtDeviceSurpriseRemoval;
    v74[9] = HUBPDO_EvtDeviceSelfManagedIoInit;
    v74[11] = HUBPDO_EvtDeviceSelfManagedIoInit;
    v74[10] = HUBPDO_EvtDeviceSelfManagedIoSuspend;
    v74[17] = HUBPDO_EvtDeviceUsageNotificationEx;
    v74[14] = HUBPDO_EvtDeviceQueryStop;
    v74[13] = HUBPDO_EvtDeviceQueryRemove;
    LODWORD(v74[0]) = 144;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
      WdfDriverGlobals,
      v66,
      v74);
    memset(v73, 0, sizeof(v73));
    v73[5] = HUBPDO_EvtDeviceEnableWakeAtBus;
    v73[6] = HUBPDO_EvtDeviceDisableWakeAtBus;
    v73[7] = HUBPDO_EvtDeviceReportedMissing;
    v73[2] = HUBPDO_EvtDeviceResourceRequirementsQuery;
    LODWORD(v73[0]) = 64;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1688))(
      WdfDriverGlobals,
      v66,
      v73);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
      WdfDriverGlobals,
      v66,
      34LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(
      WdfDriverGlobals,
      v66,
      0LL);
    LOBYTE(v11) = 15;
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                WdfDriverGlobals,
                v66,
                HUBPDO_EvtDeviceWdmIrpPreprocess,
                v11,
                0LL,
                0);
    v10 = PdoName;
    if ( PdoName >= 0 )
    {
      LOBYTE(v13) = 14;
      PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                  WdfDriverGlobals,
                  v66,
                  HUBPDO_EvtDeviceWdmIrpPreprocess,
                  v13,
                  0LL,
                  0);
      v10 = PdoName;
      if ( PdoName >= 0 )
      {
        v81[0] = 419564552;
        LOBYTE(v15) = 27;
        v81[1] = 336271104;
        v82 = 19;
        PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
                    WdfDriverGlobals,
                    v66,
                    HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
                    v15,
                    v81,
                    9);
        v10 = PdoName;
        if ( PdoName >= 0 )
        {
          LOBYTE(v81[0]) = 2;
          LOBYTE(v16) = 22;
          PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
                      WdfDriverGlobals,
                      v66,
                      HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
                      v16,
                      v81,
                      1);
          v10 = PdoName;
          if ( PdoName >= 0 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v66);
            v67 = 0x100000008LL;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
              WdfDriverGlobals,
              v66,
              &v67);
            PdoName = HUBPDO_AssignPDOIds(a1, v66);
            v10 = PdoName;
            if ( PdoName >= 0 )
            {
              if ( (*(_DWORD *)(a1 + 1636) & 2) == 0 )
              {
                v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 1744))(
                        WdfDriverGlobals,
                        v66,
                        &GUID_DEVCLASS_UNKNOWN);
                if ( v17 < 0 )
                {
                  LODWORD(v61) = v17;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                    3u,
                    2u,
                    0x72u,
                    (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
                    v61);
                }
              }
              memset(v68, 0, sizeof(v68));
              v68[6] = off_1C005F040;
              v68[1] = HUBPDO_EvtDeviceCleanup;
              LODWORD(v68[0]) = 56;
              v68[3] = 0x100000001LL;
              v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      a1);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                WdfDriverGlobals,
                v18,
                "DSM PDO Tag",
                8144LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
              v6 = 1;
              v63 = 1;
              while ( 1 )
              {
                PdoName = HUBPDO_MakePdoName(a1, v66);
                v10 = PdoName;
                if ( PdoName < 0 )
                  break;
                PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                            WdfDriverGlobals,
                            v66,
                            &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
                v10 = PdoName;
                if ( PdoName < 0 )
                {
                  v14 = 116;
                  goto LABEL_70;
                }
                v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                        WdfDriverGlobals,
                        &v66,
                        v68,
                        &v65);
                v10 = v19;
                if ( v19 >= 0 )
                {
                  v62 = 1;
                  v6 = 0;
                  v63 = 0;
LABEL_28:
                  if ( v19 < 0 )
                  {
                    LODWORD(v61) = v19;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      2u,
                      2u,
                      0x75u,
                      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
                      v61);
LABEL_30:
                    v4 = v62;
                    goto LABEL_71;
                  }
                  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                          WdfDriverGlobals,
                          v65,
                          off_1C005F040);
                  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v20 + 424), 0x55535257u, 0, 0, 0x20u);
                  memset((void *)(v20 + 456), 0, 0x38uLL);
                  *(_BYTE *)(v20 + 512) = 0;
                  v21 = *(_DWORD *)(a1 + 1632);
                  if ( (v21 & 2) != 0 )
                  {
                    memset(v76, 0, 0x88uLL);
                    v76[3] = HUBFDO_GetPortStatusForDebuggingComplete;
                    v22 = *(_QWORD *)a1;
                    v76[2] = HUBFDO_GetPortStatusForDebuggingComplete;
                    v5 = 1;
                    LODWORD(v76[0]) = 66388104;
                    v23 = *(_BYTE *)(v22 + 240);
                    LODWORD(v76[6]) = *(_DWORD *)(a1 + 172);
                    v24 = *(_QWORD *)(a1 + 24);
                    LOBYTE(v76[4]) = v23 + 1;
                    BYTE5(v76[6]) = (v21 & 0x1000) != 0;
                    v76[5] = v24;
                    v76[16] = 0LL;
                    memset(v70, 0, sizeof(v70));
                    v70[1] = v76;
                    v70[2] = &GUID_HUB_PARENT_INTERFACE;
                    v70[4] = HUBPDO_EvtDeviceProcessQueryInterfaceRequest;
                    LODWORD(v70[0]) = 48;
                    LOBYTE(v70[5]) = 1;
                    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
                            WdfDriverGlobals,
                            v65,
                            v70);
                    v10 = v25;
                    if ( v25 < 0 )
                    {
                      v26 = 118;
LABEL_34:
                      LODWORD(v61) = v25;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                        2u,
                        2u,
                        v26,
                        (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
                        v61);
                      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(
                        WdfDriverGlobals,
                        v65);
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    v5 = 1;
                  }
                  memset(v71, 0, sizeof(v71));
                  LODWORD(v71[0]) = 65576;
                  v71[2] = HUBFDO_GetPortStatusForDebuggingComplete;
                  v71[1] = a1;
                  v71[3] = HUBFDO_GetPortStatusForDebuggingComplete;
                  v71[4] = HUBPDO_GetLocationString;
                  memset(v70, 0, sizeof(v70));
                  v70[1] = v71;
                  v70[2] = &GUID_PNP_LOCATION_INTERFACE;
                  LODWORD(v70[0]) = 48;
                  v70[4] = 0LL;
                  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
                          WdfDriverGlobals,
                          v65,
                          v70);
                  v10 = v25;
                  if ( v25 < 0 )
                  {
                    v26 = 119;
                    goto LABEL_34;
                  }
                  LOBYTE(v27) = 1;
                  v5 = 0;
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                    WdfDriverGlobals,
                    v65,
                    1LL,
                    v27);
                  LOBYTE(v28) = 1;
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                    WdfDriverGlobals,
                    v65,
                    2LL,
                    v28);
                  LOBYTE(v29) = 1;
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                    WdfDriverGlobals,
                    v65,
                    3LL,
                    v29);
                  LOBYTE(v30) = 1;
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                    WdfDriverGlobals,
                    v65,
                    4LL,
                    v30);
                  *(_QWORD *)(v20 + 24) = a1;
                  v31 = 5LL;
                  *(_QWORD *)(v20 + 16) = *(_QWORD *)a1;
                  v32 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 200LL);
                  *(_DWORD *)(v20 + 388) = -1;
                  *(_WORD *)(v20 + 48) = v32;
                  *(_DWORD *)(v20 + 384) = 5;
                  if ( a2 )
                    *(_QWORD *)(v20 + 8) = *(_QWORD *)(*(_QWORD *)a1 + 2448LL);
                  else
                    *(_BYTE *)v20 = 1;
                  *(_QWORD *)(a1 + 16) = v20;
                  memset(v75, 0, sizeof(v75));
                  LODWORD(v75[1]) = 0;
                  v75[6] = HUBPDO_EvtIoInternalDeviceControl;
                  v75[0] = 0x100000060LL;
                  v75[5] = HUBPDO_EvtIoDeviceControl;
                  BYTE5(v75[1]) = 1;
                  v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _BYTE *))(WdfFunctions_01015 + 1216))(
                          WdfDriverGlobals,
                          v65,
                          v75,
                          0LL,
                          v72);
                  v34 = *(_QWORD *)(a1 + 8);
                  v10 = v33;
                  if ( v33 < 0 )
                  {
                    v35 = *(_QWORD *)(v34 + 1432);
                    v36 = 120;
LABEL_43:
                    LODWORD(v61) = v33;
                    WPP_RECORDER_SF_d(v35, 2u, 2u, v36, (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids, v61);
                    v4 = v62;
                    v6 = v63;
                    goto LABEL_71;
                  }
                  memset(v78, 0, sizeof(v78));
                  v37 = *(_DWORD *)(a1 + 1632);
                  v78[7] = 0;
                  v78[1] = 2;
                  v78[2] = 2;
                  v78[4] = 2;
                  v78[6] = 2;
                  v78[8] = 2;
                  v78[9] = 2;
                  v78[10] = -1;
                  v78[11] = -1;
                  v78[0] = 48;
                  v78[3] = ((v37 >> 5) & 1) == 0;
                  v78[5] = (v37 >> 6) & 1;
                  v78[10] = *(unsigned __int16 *)(v34 + 200);
                  v78[11] = -1;
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 664))(
                    WdfDriverGlobals,
                    v65,
                    v78);
                  memset(v77, 0, sizeof(v77));
                  v38 = (*(_DWORD *)(a1 + 1632) & 0x102) == 0;
                  v39 = 2LL;
                  LODWORD(v77[0]) = 80;
                  v40 = *(_QWORD *)a1;
                  v41 = 2;
                  v77[8] = -1LL;
                  v77[9] = 0x5FFFFFFFFLL;
                  *(_QWORD *)((char *)&v77[3] + 4) = 0x500000005LL;
                  *(_QWORD *)((char *)v77 + 4) = 0x200000002LL;
                  *(_QWORD *)((char *)&v77[1] + 4) = 0x200000002LL;
                  *(_QWORD *)((char *)&v77[2] + 4) = 0x200000002LL;
                  *(_QWORD *)((char *)&v77[4] + 4) = 0x500000005LL;
                  *(_QWORD *)((char *)&v77[5] + 4) = 0x500000005LL;
                  HIDWORD(v77[6]) = 5;
                  v77[7] = 0x700000005LL;
                  v42 = *(_DWORD *)(v40 + 740);
                  HIDWORD(v77[7]) = v42;
                  LODWORD(v77[4]) = 1;
                  if ( v38 )
                  {
                    v43 = 0;
                    LODWORD(v77[7]) = 1;
                    *(_QWORD *)((char *)&v77[2] + 4) = 0LL;
                    v77[8] = 0LL;
                    LODWORD(v77[9]) = 0;
                    *(_QWORD *)((char *)v77 + 4) = 0LL;
                    *(_QWORD *)((char *)&v77[1] + 4) = 1LL;
                    while ( 1 )
                    {
                      LOBYTE(v43) = v41++ > v42;
                      *((_DWORD *)&v77[3] + ++v39) = v43 + 3;
                      if ( v39 > 6 )
                        break;
                      v42 = HIDWORD(v77[7]);
                      v43 = 0;
                    }
                    goto LABEL_57;
                  }
                  v77[8] = 0LL;
                  LODWORD(v77[9]) = 0;
                  LODWORD(v77[7]) = 3;
                  *(_QWORD *)((char *)&v77[1] + 4) = 0x100000001LL;
                  *(_QWORD *)((char *)&v77[2] + 4) = 1LL;
                  *(_QWORD *)((char *)v77 + 4) = 0x100000001LL;
                  while ( 1 )
                  {
                    v44 = v41++ > v42;
                    *((_DWORD *)&v77[3] + ++v39) = v44 + 3;
                    if ( v39 > 6 )
                      break;
                    v42 = HIDWORD(v77[7]);
                  }
                  if ( (*(_DWORD *)(a1 + 1456) & 0x800) != 0 )
                  {
                    memset(v68, 0, sizeof(v68));
                    v68[6] = off_1C005F228;
                    v68[4] = v65;
                    LODWORD(v68[0]) = 56;
                    v68[3] = 0x100000001LL;
                    v45 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
                            WdfDriverGlobals,
                            *(_QWORD *)(v40 + 16));
                    v46 = (_QWORD *)(v20 + 264);
                    v47 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
                            WdfDriverGlobals,
                            v68,
                            v45,
                            v20 + 264);
                    v10 = v47;
                    if ( v47 >= 0 )
                    {
                      v49 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                                                WdfDriverGlobals,
                                                *v46,
                                                off_1C005F228);
                      KeInitializeEvent(v49 + 1, NotificationEvent, 0);
                      goto LABEL_57;
                    }
                    v48 = 121;
LABEL_54:
                    LODWORD(v61) = v47;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      2u,
                      2u,
                      v48,
                      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
                      v61);
                    v4 = v62;
                    *v46 = 0LL;
                  }
                  else
                  {
LABEL_57:
                    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 672))(
                      WdfDriverGlobals,
                      v65,
                      v77);
                    KeInitializeSpinLock((PKSPIN_LOCK)(v20 + 208));
                    *(_DWORD *)(v20 + 216) = 6000;
                    *(_DWORD *)(v20 + 232) = 6000;
                    *(_QWORD *)(v20 + 224) = &ISMStateTable;
                    memset(v68, 0, sizeof(v68));
                    v68[6] = off_1C005F200;
                    v68[4] = v65;
                    v69[1] = HUBIDLE_EvtIdleWorkItem;
                    v68[3] = 0x100000001LL;
                    v69[2] = 1LL;
                    v46 = (_QWORD *)(v20 + 256);
                    LODWORD(v68[0]) = 56;
                    v69[0] = 24LL;
                    v47 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
                            WdfDriverGlobals,
                            v69,
                            v68,
                            v20 + 256);
                    v10 = v47;
                    if ( v47 < 0 )
                    {
                      v48 = 122;
                      goto LABEL_54;
                    }
                    HUBIDLE_AddEvent(v20 + 72, 6009, 0LL);
                    _InterlockedOr((volatile signed __int32 *)(v20 + 32), 0x1000u);
                    v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 1064))(
                            WdfDriverGlobals,
                            *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                            v65);
                    v10 = v33;
                    if ( v33 < 0 )
                    {
                      v36 = 123;
                      v35 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
                      goto LABEL_43;
                    }
                    v50 = *(_QWORD *)(v20 + 16);
                    v51 = &v80;
                    v52 = (unsigned __int16 *)(v50 + 322);
                    v79 = *(unsigned __int16 *)(v50 + 320);
                    do
                    {
                      v53 = *v52++;
                      *v51++ = v53;
                      --v31;
                    }
                    while ( v31 );
                    v54 = *(_BYTE *)(v50 + 240);
                    if ( v54 < 6u )
                      *(&v79 + v54) = *(unsigned __int16 *)(v20 + 48);
                    HIDWORD(v60) = HIDWORD(a1);
                    WPP_RECORDER_SF_qDDDdddddd(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      *(unsigned __int16 *)(a1 + 2000),
                      *(unsigned __int16 *)(a1 + 1998),
                      *(unsigned __int16 *)(a1 + 1996),
                      RemlockSizea);
                    v4 = 0;
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 1u);
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 2u);
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 4u);
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 0x10u);
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 8u);
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 0x20u);
                    if ( (*(_DWORD *)(a1 + 1632) & 2) != 0 )
                      HUBPDO_RegisterForPowerSettingsForHub(v20);
                    else
                      HUBPDO_RegisterForPowerSettingsForDevice(v20);
                  }
                  v6 = v63;
                  goto LABEL_71;
                }
                ++v3;
                if ( v19 != -1073741771 )
                  goto LABEL_28;
              }
              v14 = 115;
            }
            else
            {
              v14 = 113;
            }
          }
          else
          {
            v14 = 112;
          }
        }
        else
        {
          v14 = 111;
        }
      }
      else
      {
        v14 = 110;
      }
    }
    else
    {
      v14 = 109;
    }
LABEL_70:
    LODWORD(v61) = PdoName;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      2u,
      v14,
      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
      v61);
    v4 = 0;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_71:
  if ( a2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
    {
      LODWORD(v60) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL);
      McTemplateK0ppqq(
        (struct _MCGEN_TRACE_CONTEXT *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL),
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_COMPLETE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(*(_QWORD *)a1 + 248LL),
        *(_QWORD *)(a1 + 24),
        v60,
        v10);
    }
  }
  else if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
  {
    RemlockSize[0] = v10;
    McTemplateK0pq(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(*(_QWORD *)a1 + 248LL),
      *(_QWORD *)RemlockSize);
  }
  if ( (*(_DWORD *)(a1 + 1636) & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 1516) = 0LL;
    *(_QWORD *)(a1 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  v55 = (v10 >> 31) & 0xFFFFFFF4;
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v66);
  if ( v4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v65);
  if ( v6 )
  {
    v56 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v56,
      "DSM PDO Tag",
      8666LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  return v55 + 4077;
}
