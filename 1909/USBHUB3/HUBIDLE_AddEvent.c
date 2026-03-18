/*
 * XREFs of HUBIDLE_AddEvent @ 0x1C003AB30
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0015940 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016580 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0017830 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0017A20 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0017E20 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBIDLE_AddEvent @ 0x1C003AB30 (HUBIDLE_AddEvent.c)
 *     HUBIDLE_EvtIdleWorkItem @ 0x1C003AFE0 (HUBIDLE_EvtIdleWorkItem.c)
 *     HUBIDLE_CancelIdle @ 0x1C003B030 (HUBIDLE_CancelIdle.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C0076434 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     McTemplateK0ppqqqq @ 0x1C00094E4 (McTemplateK0ppqqqq.c)
 *     HUBMISC_DbgBreak @ 0x1C002EC84 (HUBMISC_DbgBreak.c)
 *     HUBIDLE_AddEvent @ 0x1C003AB30 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBIDLE_AddEvent(__int64 a1, int a2, IRP *a3)
{
  int v3; // ebx
  __int64 v4; // r13
  unsigned int v8; // edi
  IRP *v9; // rbp
  int v10; // r14d
  KIRQL v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  struct _MCGEN_TRACE_CONTEXT *v18; // rcx
  __int64 (__fastcall *v19)(__int64, IRP *); // rax
  struct _MCGEN_TRACE_CONTEXT *v20; // rcx
  int v21; // ebx
  struct _MCGEN_TRACE_CONTEXT *v22; // rcx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  char v30; // bl
  __int64 v31; // rcx
  __int64 v33; // [rsp+20h] [rbp-88h]
  __int64 v34; // [rsp+28h] [rbp-80h]
  __int64 v35; // [rsp+30h] [rbp-78h]
  __int64 v36; // [rsp+38h] [rbp-70h]
  __int64 v37; // [rsp+40h] [rbp-68h]
  KIRQL v38; // [rsp+51h] [rbp-57h]
  int v39; // [rsp+54h] [rbp-54h]
  GUID v40; // [rsp+58h] [rbp-50h] BYREF

  v3 = *(_DWORD *)(a1 + 160);
  v4 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)&v40.Data1 = 0LL;
  *(_QWORD *)v40.Data4 = 0LL;
  v8 = 259;
  v39 = v3;
  v9 = 0LL;
  v10 = a2;
  v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 136));
  v11 = v38;
  if ( v10 != 1000 )
  {
    while ( 1 )
    {
      LODWORD(v12) = 0;
      v13 = (unsigned int)(*(_DWORD *)(a1 + 144) - v3);
      v14 = 1001;
      v15 = *(_QWORD *)(v4 + 8 * v13);
      v16 = *(_DWORD *)(v15 + 16);
      if ( v16 != 1000 )
      {
        v17 = 0LL;
        while ( v10 != v16 )
        {
          v12 = (unsigned int)(v12 + 1);
          v17 = (unsigned int)v12;
          v16 = *(_DWORD *)(v15 + 8 * v12 + 16);
          if ( v16 == 1000 )
            goto LABEL_8;
        }
        v14 = *(_DWORD *)(v15 + 8 * v17 + 20);
      }
LABEL_8:
      if ( v14 == 1000 )
        break;
      switch ( v14 )
      {
        case 1001:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v34) = a2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 48) + 8LL) + 1432LL),
              2u,
              5u,
              0xBu,
              (__int64)&WPP_101098ba4fe0309f74ea25dce87092d8_Traceguids,
              v34);
          }
          HUBMISC_DbgBreak("Unhandled Event in Idle State Machine");
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
          {
            LODWORD(v37) = 0;
            LODWORD(v36) = a2;
            LODWORD(v35) = *(_DWORD *)(a1 + 144);
            LODWORD(v34) = *(_DWORD *)(a1 + 160);
            McTemplateK0ppqqqq(v20, &USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT, 0LL, 0LL, 0LL, v34, v35, v36, v37);
          }
          goto LABEL_30;
        case 1002:
          v8 = -2147483631;
          goto LABEL_20;
        case 1003:
          v8 = -1073741810;
LABEL_20:
          v9 = a3;
          goto LABEL_30;
      }
      *(_DWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 128) + 4) = v14;
      *(_DWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 128)) = v10;
      *(_BYTE *)(a1 + 128) = (*(_BYTE *)(a1 + 128) + 1) & 0xF;
      if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      {
        LODWORD(v37) = 0;
        v18 = (struct _MCGEN_TRACE_CONTEXT *)(unsigned int)(v14 - *(_DWORD *)(a1 + 160));
        LODWORD(v36) = v10;
        LODWORD(v35) = **(_DWORD **)(*(_QWORD *)(a1 + 152) + 8LL * (_QWORD)v18);
        LODWORD(v34) = *(_DWORD *)(a1 + 160);
        McTemplateK0ppqqqq(
          v18,
          &USBHUB3_ETW_EVENT_STATE_MACHINE,
          0LL,
          *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL),
          a1,
          v34,
          v35,
          v36,
          v37);
      }
      *(_DWORD *)(a1 + 144) = v14;
      v19 = *(__int64 (__fastcall **)(__int64, IRP *))(*(_QWORD *)(v4 + 8LL * (unsigned int)(v14 - v39)) + 8LL);
      if ( v19 )
        v10 = v19(a1, a3);
      else
        v10 = 1000;
      if ( v10 == 1000 )
        goto LABEL_30;
      v3 = v39;
    }
    if ( a2 != v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 48) + 8LL) + 1432LL),
          2u,
          5u,
          0xAu,
          (__int64)&WPP_101098ba4fe0309f74ea25dce87092d8_Traceguids);
      HUBMISC_DbgBreak("Idle State Machine is ignoring a Sync Event");
    }
LABEL_30:
    v11 = v38;
  }
  v21 = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 176) = 0;
  if ( (unsigned int)(v21 - 1) <= 4 || v21 == 8 )
  {
    v9 = *(IRP **)(a1 + 168);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 136), v11);
  v23 = v21 - 1;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
          {
            v8 = 0;
            v30 = 0;
            goto LABEL_56;
          }
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              if ( v29 == 1 )
              {
                v8 = -1073741536;
                v30 = 1;
                goto LABEL_56;
              }
            }
            else
            {
              *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           *(_QWORD *)(a1 + 184),
                           off_1C0064200) = a1;
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3040))(
                WdfDriverGlobals,
                *(_QWORD *)(a1 + 184));
            }
          }
          else
          {
            *(_QWORD *)&v40.Data1 = 0LL;
            *(_QWORD *)v40.Data4 = 0LL;
            if ( a3 && *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
              (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a3, &v40);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
              McTemplateK0p(
                v22,
                &USBHUB3_ETW_EVENT_DEVICE_IDLE_CALLBACK,
                &v40,
                *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL));
            v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 184LL) + 32LL);
            (*(void (__fastcall **)(_QWORD))v31)(*(_QWORD *)(v31 + 8));
            HUBIDLE_AddEvent(a1, 6001LL, 0LL);
          }
        }
        else
        {
          v8 = -1073741101;
        }
      }
      else
      {
        v8 = -1073741810;
      }
    }
    else
    {
      v8 = -2147483631;
    }
  }
  else
  {
    v8 = -1073741536;
  }
  v30 = 0;
LABEL_56:
  if ( v9 )
  {
    *(_QWORD *)&v40.Data1 = 0LL;
    *(_QWORD *)v40.Data4 = 0LL;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v9, &v40);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      LODWORD(v33) = v8;
      McTemplateK0pq(
        v22,
        &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_COMPLETE,
        &v40,
        *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL),
        v33);
    }
    v9->IoStatus.Status = v8;
    IofCompleteRequest(v9, 0);
  }
  if ( v30 )
    return 259;
  return v8;
}
