/*
 * XREFs of HUBFDO_EvtDevicePrepareHardware @ 0x1C006AC40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pnq @ 0x1C00012B8 (McTemplateK0pnq.c)
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     McTemplateK0pqn @ 0x1C00017CC (McTemplateK0pqn.c)
 *     McTemplateK0pquuxqqqqqqqsss @ 0x1C0001848 (McTemplateK0pquuxqqqqqqqsss.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBPARENT_GetHubSymbolicLinkName @ 0x1C00069C0 (HUBPARENT_GetHubSymbolicLinkName.c)
 *     HUBSM_AddHsmEvent @ 0x1C0008F30 (HUBSM_AddHsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C002C420 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_SetFriendlyNameForBlockedHub @ 0x1C006A160 (HUBFDO_SetFriendlyNameForBlockedHub.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1C0071AD8 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBCONNECTOR_MapIntegratedHubPorts @ 0x1C0071D80 (HUBCONNECTOR_MapIntegratedHubPorts.c)
 *     HUBCONNECTOR_MapExternalHubPorts @ 0x1C0071E80 (HUBCONNECTOR_MapExternalHubPorts.c)
 *     HUBCONNECTOR_MapAcpiPorts @ 0x1C0071F5C (HUBCONNECTOR_MapAcpiPorts.c)
 *     HUBCONNECTOR_UnMapHubPorts @ 0x1C007200C (HUBCONNECTOR_UnMapHubPorts.c)
 *     HUBREG_QueryValuesInHubHardwareKey @ 0x1C0074BAC (HUBREG_QueryValuesInHubHardwareKey.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0078D48 (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_RegisterHub @ 0x1C0079C44 (WMI_RegisterHub.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C007A588 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 */

__int64 __fastcall HUBFDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rax
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  __int64 v4; // rdi
  const void *v5; // rax
  int v6; // esi
  PVOID PoolWithTag; // rax
  int v8; // eax
  int FirmwareUpdateDevice; // eax
  __int64 v10; // rbp
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // r11d
  int v16; // r15d
  int v17; // r12d
  int v18; // r13d
  int v19; // r10d
  char v20; // bp
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  const EVENT_DESCRIPTOR *v24; // rdx
  int v25; // eax
  int v26; // r15d
  int v27; // r12d
  int v28; // r13d
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rax
  _QWORD *v33; // r8
  _QWORD *v34; // rdx
  struct _MCGEN_TRACE_CONTEXT *v35; // rcx
  __int64 v37; // [rsp+20h] [rbp-C8h]
  __int64 v38; // [rsp+28h] [rbp-C0h]
  __int64 v39; // [rsp+30h] [rbp-B8h]
  __int64 v40; // [rsp+40h] [rbp-A8h]
  __int64 v41; // [rsp+48h] [rbp-A0h]
  __int64 v42; // [rsp+50h] [rbp-98h]
  __int64 v43; // [rsp+58h] [rbp-90h]
  __int64 v44; // [rsp+60h] [rbp-88h]
  __int64 v45; // [rsp+68h] [rbp-80h]
  __int64 v46; // [rsp+70h] [rbp-78h]
  __int64 v47; // [rsp+78h] [rbp-70h]
  __int64 v48; // [rsp+80h] [rbp-68h]
  __int64 v49; // [rsp+88h] [rbp-60h]
  int v50; // [rsp+90h] [rbp-58h]
  int v51; // [rsp+90h] [rbp-58h]
  int v52; // [rsp+94h] [rbp-54h]
  int v53; // [rsp+94h] [rbp-54h]
  int v54; // [rsp+98h] [rbp-50h]
  int v55; // [rsp+98h] [rbp-50h]
  __int64 v56; // [rsp+A0h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-40h] BYREF
  int v58; // [rsp+108h] [rbp+20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F0E0);
  v4 = v2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v3, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v2 + 248));
  HUBREG_QueryValuesInHubHardwareKey(v4);
  KeResetEvent((PRKEVENT)(v4 + 1152));
  HUBSM_AddHsmEvent(v4, 2031LL);
  v5 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v4);
  HUBMISC_WaitForSignal((PVOID)(v4 + 1152), "Hub FDO PnpCallback", v5);
  v6 = *(_DWORD *)(v4 + 1176);
  v58 = v6;
  if ( v6 >= 0 )
  {
    if ( (*(_DWORD *)(v4 + 40) & 0x800000) != 0 )
      HUBFDO_SetFriendlyNameForBlockedHub(v4);
    RtlInitUnicodeString(&DestinationString, 0LL);
    HUBPARENT_GetHubSymbolicLinkName(v4);
    if ( !DestinationString.Length )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2520), 2u, 3u, 0x15u, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids);
      v6 = -1073741823;
LABEL_8:
      v58 = v6;
      goto LABEL_26;
    }
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2LL * DestinationString.Length, 0x68334855u);
    *(_QWORD *)(v4 + 2552) = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2520), 2u, 3u, 0x16u, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids);
      v6 = -1073741670;
      goto LABEL_8;
    }
    *(_WORD *)(v4 + 2544) = 0;
    *(_WORD *)(v4 + 2546) = DestinationString.Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 2544), &DestinationString);
    HUBACPI_GetAcpiPortAttributes(v4);
    if ( (*(_DWORD *)(v4 + 40) & 0x40000) != 0 )
    {
      v8 = HUBCONNECTOR_MapAcpiPorts(v4);
      if ( v8 >= 0 )
      {
LABEL_19:
        WMI_RegisterHub(a1);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v4 + 552))(*(_QWORD *)(v4 + 248)) )
          _InterlockedOr((volatile signed __int32 *)(v4 + 760), 1u);
        if ( *(_BYTE *)(v4 + 240) )
        {
          if ( *(_DWORD *)(v4 + 160) )
          {
            if ( !*(_QWORD *)(v4 + 2616) )
            {
              FirmwareUpdateDevice = FWUPDATE_CreateFirmwareUpdateDevice(v4);
              if ( FirmwareUpdateDevice < 0 )
              {
                LODWORD(v38) = FirmwareUpdateDevice;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(v4 + 2520),
                  2u,
                  2u,
                  0x17u,
                  (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
                  v38);
              }
            }
          }
        }
        goto LABEL_26;
      }
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 2520),
        2u,
        6u,
        0x1Bu,
        (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids,
        v8);
      HUBCONNECTOR_UnMapHubPorts(v4);
      _InterlockedAnd((volatile signed __int32 *)(v4 + 40), 0xFFFBFFFF);
    }
    if ( *(_BYTE *)(v4 + 240) )
    {
      if ( *(_WORD *)(v4 + 288) )
        HUBCONNECTOR_MapIntegratedHubPorts(v4);
      else
        HUBCONNECTOR_MapExternalHubPorts(v4);
    }
    else
    {
      HUBCONNECTOR_MapRootHubPorts(v4);
    }
    goto LABEL_19;
  }
LABEL_26:
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C005F130);
  v56 = v10;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v10 + 32),
    0LL);
  if ( (*(_DWORD *)(v10 + 4) & 0x1000) != 0 && v6 >= 0 )
  {
    if ( *(_DWORD *)(v4 + 2216) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
      {
        LODWORD(v37) = 71;
        McTemplateK0pnq(
          v4 + 1180,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB20_HUB_INFORMATION,
          0LL,
          *(_QWORD *)(v4 + 248),
          v37,
          v4 + 1180,
          *(_DWORD *)(v4 + 2600));
      }
    }
    else
    {
      v11 = (struct _MCGEN_TRACE_CONTEXT *)(unsigned int)(*(_DWORD *)(v4 + 2216) - 2);
      if ( *(_DWORD *)(v4 + 2216) == 2 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v37) = 12;
          McTemplateK0pnq(
            v4 + 1180,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB30_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 248),
            v37,
            v4 + 1180,
            *(_DWORD *)(v4 + 2600));
        }
      }
      else if ( *(_DWORD *)(v4 + 2216) == 4 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v37) = *(_DWORD *)(v4 + 2600);
          McTemplateK0pq(
            v11,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ROOT_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 248),
            v37);
        }
      }
      else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x20) != 0 )
      {
        McTemplateK0p(v11, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_UNKNOWN_HUB_TYPE, 0LL, *(_QWORD *)(v4 + 248));
      }
    }
    v12 = *(_QWORD *)(v4 + 2360);
    v13 = v12 - 248;
    if ( v4 + 2360 != v12 )
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)(v13 + 1256);
        if ( v14 == 3000 )
        {
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) == 0 )
            goto LABEL_71;
          v15 = *(_DWORD *)(v4 + 168);
          if ( v15 == 1 )
          {
            v26 = *(unsigned __int16 *)(v4 + 184);
            v27 = *(_DWORD *)(v4 + 180);
            v28 = *(_DWORD *)(v4 + 176);
            v55 = *(_DWORD *)(v4 + 196);
            v53 = *(_DWORD *)(v4 + 192);
            v51 = *(_DWORD *)(v4 + 188);
          }
          else
          {
            v26 = 0;
            v55 = 0;
            v27 = 0x7FFFFFFF;
            v53 = 0;
            v28 = 0x7FFFFFFF;
            v51 = 0;
          }
          v19 = *(_DWORD *)(v13 + 204) >> 1;
          if ( (*(_DWORD *)(v13 + 204) & 2) != 0 )
            v20 = *(_BYTE *)(v13 + 1341);
          else
            v20 = 0;
          v29 = 0LL;
          v30 = 0LL;
          if ( v15 == 2 )
            v29 = v4 + 186;
          v23 = 0LL;
          v49 = v29;
          if ( v15 == 2 )
            v30 = v4 + 181;
          v48 = v30;
          if ( v15 == 2 )
            v23 = v4 + 176;
          v24 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_20_PORT_V1;
          v47 = v23;
          LODWORD(v46) = v26;
          LODWORD(v45) = v27;
          LODWORD(v44) = v28;
          LODWORD(v43) = v55;
          LODWORD(v42) = v53;
          v25 = v51;
        }
        else
        {
          if ( v14 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) == 0 )
            goto LABEL_71;
          v15 = *(_DWORD *)(v4 + 168);
          if ( v15 == 1 )
          {
            v16 = *(unsigned __int16 *)(v4 + 184);
            v17 = *(_DWORD *)(v4 + 180);
            v18 = *(_DWORD *)(v4 + 176);
            v50 = *(_DWORD *)(v4 + 196);
            v52 = *(_DWORD *)(v4 + 192);
            v54 = *(_DWORD *)(v4 + 188);
          }
          else
          {
            v16 = 0;
            v50 = 0;
            v17 = 0x7FFFFFFF;
            v52 = 0;
            v18 = 0x7FFFFFFF;
            v54 = 0;
          }
          v19 = *(_DWORD *)(v13 + 204) >> 1;
          if ( (*(_DWORD *)(v13 + 204) & 2) != 0 )
            v20 = *(_BYTE *)(v13 + 1341);
          else
            v20 = 0;
          v21 = 0LL;
          v22 = 0LL;
          if ( v15 == 2 )
            v21 = v4 + 186;
          v23 = 0LL;
          v49 = v21;
          if ( v15 == 2 )
            v22 = v4 + 181;
          v48 = v22;
          if ( v15 == 2 )
            v23 = v4 + 176;
          v24 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_30_PORT_V1;
          v47 = v23;
          LODWORD(v46) = v16;
          LODWORD(v45) = v17;
          LODWORD(v44) = v18;
          LODWORD(v43) = v50;
          LODWORD(v42) = v52;
          v25 = v54;
        }
        LODWORD(v41) = v25;
        LODWORD(v40) = v15;
        LOBYTE(v39) = v20;
        LOBYTE(v38) = v19 & 1;
        LODWORD(v37) = *(unsigned __int16 *)(v13 + 200);
        McTemplateK0pquuxqqqqqqqsss(
          v23,
          v24,
          0LL,
          *(_QWORD *)(v4 + 248),
          v37,
          v38,
          v39,
          *(_QWORD *)(v13 + 1416),
          v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
LABEL_71:
        v31 = *(_DWORD *)(v13 + 204);
        if ( (v31 & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v38) = 12;
          LODWORD(v37) = *(unsigned __int16 *)(v13 + 200);
          McTemplateK0pqn(
            *(unsigned __int16 *)(v13 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_UPC,
            0LL,
            *(_QWORD *)(v4 + 248),
            v37,
            v38,
            v13 + 1340);
          v31 = *(_DWORD *)(v13 + 204);
        }
        if ( (v31 & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v38) = 16;
          LODWORD(v37) = *(unsigned __int16 *)(v13 + 200);
          McTemplateK0pqn(
            *(unsigned __int16 *)(v13 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_PLD,
            0LL,
            *(_QWORD *)(v4 + 248),
            v37,
            v38,
            v13 + 1352);
        }
        v32 = *(_QWORD *)(v13 + 248);
        v13 = v32 - 248;
        if ( v4 + 2360 == v32 )
        {
          v6 = v58;
          v10 = v56;
          break;
        }
      }
    }
  }
  v33 = *(_QWORD **)(v10 + 24);
  v34 = (_QWORD *)(v4 + 2432);
  if ( *v33 != v10 + 16 )
    __fastfail(3u);
  *v34 = v10 + 16;
  *(_QWORD *)(v4 + 2440) = v33;
  *v33 = v34;
  *(_QWORD *)(v10 + 24) = v34;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v10 + 32));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v37) = v6;
    McTemplateK0pq(v35, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v4 + 248), v37);
  }
  LODWORD(v38) = *(_DWORD *)(v4 + 40);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v4 + 2520),
    2u,
    3u,
    0x18u,
    (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
    v38);
  return (unsigned int)v6;
}
