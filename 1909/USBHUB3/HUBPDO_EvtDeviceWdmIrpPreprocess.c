/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016580
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     McTemplateK0pjq @ 0x1C0012118 (McTemplateK0pjq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0012C28 (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetHubName @ 0x1C00140D4 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C0014244 (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0014404 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x1C0015480 (HUBPDO_ValidateURB.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0019D1C (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_GetControllerName @ 0x1C0025178 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x1C00252C8 (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_WaitForSignal @ 0x1C002EB20 (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C00302C8 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBIDLE_AddEvent @ 0x1C003AB30 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPreprocess(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx
  __int64 v4; // rax
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned int LowPart; // r12d
  int v11; // edi
  char v12; // dl
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  _IO_STACK_LOCATION *v17; // rax
  __int64 v18; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  unsigned __int16 v21; // cx
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int16 v25; // r9
  unsigned __int8 v26; // dl
  __int64 v27; // rax
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  __int64 v29; // rdx
  unsigned __int16 *v30; // rdx
  unsigned int AccessState_high; // ebx
  size_t v32; // r8
  _SECURITY_QUALITY_OF_SERVICE *v33; // rcx
  unsigned int v34; // ecx
  unsigned int ControllerSuffix; // eax
  unsigned __int16 v36; // r9
  __int64 v37; // rcx
  unsigned __int16 v38; // r9
  _IO_SECURITY_CONTEXT *v39; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _IO_SECURITY_CONTEXT *v41; // rax
  __int64 v42; // rcx
  _IO_SECURITY_CONTEXT *v43; // rcx
  __int64 v44; // rax
  __int16 v45; // dx
  _IO_SECURITY_CONTEXT *v46; // rax
  int v47; // eax
  int v48; // ecx
  _IO_SECURITY_CONTEXT *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  char v52; // cl
  __int64 v53; // rcx
  char v54; // cl
  int v55; // eax
  _IO_STACK_LOCATION *v56; // rax
  _IO_STACK_LOCATION *v57; // rax
  int v58; // eax
  unsigned __int16 v59; // r9
  unsigned __int8 v60; // dl
  _IO_STACK_LOCATION *v61; // rax
  _IO_STACK_LOCATION *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  struct _MCGEN_TRACE_CONTEXT *v65; // rcx
  _IO_SECURITY_CONTEXT *v66; // rdi
  __int64 v68; // [rsp+20h] [rbp-49h]
  __int64 v69; // [rsp+20h] [rbp-49h]
  ULONG Priority[2]; // [rsp+28h] [rbp-41h]
  struct _KEVENT Event; // [rsp+38h] [rbp-31h] BYREF
  __int128 Source1; // [rsp+50h] [rbp-19h] BYREF
  GUID v74; // [rsp+60h] [rbp-9h] BYREF
  GUID v75; // [rsp+70h] [rbp+7h] BYREF

  memset(&Event, 0, sizeof(Event));
  Status = 0;
  Source1 = 0uLL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0064040);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = (__int64)&WPP_RECORDER_INITIALIZED;
  v8 = v4;
  v9 = 5LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( LowPart != 2229348 )
    {
      if ( LowPart == 2229352 )
      {
        *(_QWORD *)(&a2->AssociatedIrp.MasterIrp->Size + 1) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
      }
      else if ( LowPart != 2229356
             && LowPart != 2229360
             && LowPart != 2229364
             && LowPart != 2229368
             && LowPart != 2229372 )
      {
        if ( LowPart == 2229376 )
        {
          v11 = 1;
          *(_QWORD *)(&a2->AssociatedIrp.MasterIrp->Size + 1) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
        }
        else
        {
          v11 = 3;
        }
        goto LABEL_25;
      }
    }
    goto LABEL_15;
  }
  v12 = 0;
  if ( LowPart == 2228227 )
  {
    v5 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned __int16 *)(CurrentStackLocation->Parameters.WMI.ProviderId + 2);
    LOWORD(v5) = (_WORD)v5 - 53;
    if ( (unsigned __int16)v5 > 1u )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( LowPart == 4784135 || LowPart == 4788299 )
  {
    v12 = 1;
LABEL_37:
    if ( LowPart == 2229347 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
          4u,
          5u,
          0x39u,
          (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
          a2);
      *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) |= 0x80000u;
      goto LABEL_41;
    }
    goto LABEL_19;
  }
  if ( LowPart != 2232243 )
    goto LABEL_37;
  if ( (*(_DWORD *)(v4 + 32) & 0x20) != 0 )
LABEL_18:
    v12 = 1;
LABEL_19:
  if ( *(_BYTE *)v4 && !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x3Au,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
        a2);
    Status = -1073741810;
    v11 = 2;
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    goto LABEL_25;
  }
  if ( LowPart == 2228227 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v21 = WORD1(SecurityContext->SecurityQos);
    if ( (unsigned __int16)(v21 - 9) <= 1u || (unsigned __int16)(v21 - 57) <= 1u )
      goto LABEL_106;
    if ( v21 <= 0x2Au )
    {
      if ( v21 != 42 )
      {
        if ( v21 <= 1u )
          goto LABEL_52;
        v7 = 11LL;
        if ( v21 != 11 )
        {
          if ( v21 != 19 )
          {
            v22 = v21 == 30;
            goto LABEL_51;
          }
          v24 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v24 + 1632) & 0x80000) == 0 )
            goto LABEL_106;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v25 = 60;
            v26 = 4;
LABEL_58:
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v24 + 8) + 1432LL),
              v26,
              5u,
              v25,
              (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
            goto LABEL_59;
          }
          goto LABEL_59;
        }
        v27 = *(_QWORD *)(v4 + 24);
        if ( *(_WORD *)(v27 + 1990) <= 0x200u )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(v27 + 24);
          goto LABEL_15;
        }
        Status = HUBPDO_ValidateURB(
                   (struct _MCGEN_TRACE_CONTEXT *)v8,
                   (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext,
                   5LL);
        if ( (Status & 0x80000000) != 0 )
          goto LABEL_41;
        SecurityQos = SecurityContext[2].SecurityQos;
        if ( SecurityQos )
        {
          if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
            v7 = *(_QWORD *)&SecurityQos[2].Length;
          else
            v7 = (__int64)MmMapLockedPagesSpecifyCache(
                            (PMDL)SecurityQos,
                            0,
                            MmCached,
                            0LL,
                            0,
                            ExDefaultMdlProtection | 0x10u);
        }
        else
        {
          v7 = *(_QWORD *)&SecurityContext[1].DesiredAccess;
        }
        if ( !v7 )
        {
          Status = -1073741811;
          HIDWORD(SecurityContext->SecurityQos) = -2147482880;
          goto LABEL_41;
        }
        if ( BYTE3(SecurityContext[5].AccessState) == 1 )
        {
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
          v30 = (unsigned __int16 *)(*(_QWORD *)(v8 + 24) + 1988LL);
          if ( AccessState_high > 0x12 )
            AccessState_high = 18;
        }
        else
        {
          if ( BYTE3(SecurityContext[5].AccessState) != 2 )
          {
            SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v8 + 24) + 24LL);
LABEL_73:
            Status = 0;
            v11 = 1;
            goto LABEL_25;
          }
          v29 = *(_QWORD *)(v8 + 24);
          if ( BYTE2(SecurityContext[5].AccessState) )
          {
            SecurityContext->AccessState = *(_ACCESS_STATE **)(v29 + 24);
            goto LABEL_73;
          }
          v30 = *(unsigned __int16 **)(v29 + 2016);
          AccessState_high = v30[1];
          if ( AccessState_high >= HIDWORD(SecurityContext[1].AccessState) )
            AccessState_high = HIDWORD(SecurityContext[1].AccessState);
        }
        LODWORD(SecurityContext[1].AccessState) |= 1u;
        if ( ((__int64)SecurityContext[1].AccessState & 8) != 0 )
          WORD1(SecurityContext->SecurityQos) = 8;
        v32 = AccessState_high;
LABEL_84:
        memmove((void *)v7, v30, v32);
        HIDWORD(SecurityContext[1].AccessState) = AccessState_high;
LABEL_85:
        Status = 0;
        goto LABEL_41;
      }
      v24 = *(_QWORD *)(v4 + 24);
      if ( WORD2(SecurityContext[5].AccessState) != 7 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v24 + 1990) - 256) > 0xFFu && (*(_DWORD *)(v24 + 1632) & 0x80u) == 0
          || (*(_DWORD *)(v24 + 1644) & 2) != 0 )
        {
          BYTE1(SecurityContext[5].AccessState) = *(_BYTE *)(v24 + 2052);
          goto LABEL_106;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = 59;
          v26 = 3;
          goto LABEL_58;
        }
LABEL_59:
        Status = -1073741637;
        goto LABEL_41;
      }
      if ( (*(_DWORD *)(v24 + 2464) & 2) != 0 )
      {
        v33 = SecurityContext[2].SecurityQos;
        if ( v33 )
        {
          if ( (*(&v33->EffectiveOnly + 1) & 5) != 0 )
            v7 = *(_QWORD *)&v33[2].Length;
          else
            v7 = (__int64)MmMapLockedPagesSpecifyCache((PMDL)v33, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
        }
        else
        {
          v7 = *(_QWORD *)&SecurityContext[1].DesiredAccess;
        }
        if ( !v7 )
          goto LABEL_59;
        v30 = *(unsigned __int16 **)(*(_QWORD *)(v8 + 24) + 2488LL);
        v34 = v30[4];
        if ( v34 >= HIDWORD(SecurityContext[1].AccessState) )
          v34 = HIDWORD(SecurityContext[1].AccessState);
        AccessState_high = v34;
        v32 = v34;
        goto LABEL_84;
      }
      goto LABEL_88;
    }
    if ( v21 < 0x30u )
      goto LABEL_106;
    if ( v21 <= 0x31u )
    {
LABEL_52:
      v23 = HUBPDO_ValidateURB(
              (struct _MCGEN_TRACE_CONTEXT *)v4,
              (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext,
              5LL);
      Status = v23;
      if ( v23 >= 0 )
      {
        if ( v23 != 128 )
        {
          v11 = (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) & 2) != 0 ? 5 : 3;
          goto LABEL_25;
        }
        goto LABEL_85;
      }
LABEL_41:
      v11 = 2;
      goto LABEL_25;
    }
    if ( v21 <= 0x34u )
    {
LABEL_106:
      SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
      goto LABEL_15;
    }
    if ( v21 > 0x36u )
    {
      v22 = v21 == 59;
LABEL_51:
      if ( v22 )
        goto LABEL_52;
      goto LABEL_106;
    }
    SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
LABEL_113:
    v11 = 3;
    goto LABEL_25;
  }
  if ( LowPart > 0x22043B )
  {
    if ( LowPart > 0x49000B )
    {
      if ( LowPart == 4788291 )
      {
        v49 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v49->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v4 + 16) + 2448LL);
        v50 = *(_QWORD *)(v4 + 24);
        *(_OWORD *)&v49->AccessState = *(_OWORD *)(v50 + 1988);
        LOWORD(v49[1].SecurityQos) = *(_WORD *)(v50 + 2004);
        WORD1(v49[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2192LL);
        WORD2(v49[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2194LL);
        v49[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v8 + 24) + 2568LL);
        v49[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 2576LL);
        BYTE2(v49[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 202LL);
        HIWORD(v49[1].AccessState) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2202LL);
        LOWORD(v49[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2204LL);
        v7 = *(_QWORD *)(v8 + 16);
        LOWORD(v49[1].FullCreateOptions) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2582LL)
                                         + *(_WORD *)(v7 + 1188)
                                         + *(_WORD *)(v7 + 2492);
        v51 = *(_QWORD *)(v8 + 24);
        if ( (*(_DWORD *)(v51 + 2216) & 1) != 0 )
        {
          HIWORD(v49[1].SecurityQos) = *(unsigned __int8 *)(v51 + 2197);
          v52 = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 240LL);
        }
        else
        {
          HIWORD(v49[1].SecurityQos) = *(_WORD *)(v7 + 2478);
          v52 = *(_BYTE *)(v7 + 2480);
        }
        LOBYTE(v49[1].AccessState) = v52;
        v53 = *(_QWORD *)(v8 + 24);
        if ( (*(_DWORD *)(v53 + 2216) & 2) != 0 )
        {
          WORD1(v49[1].AccessState) = *(_WORD *)(v53 + 2200);
          v54 = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 240LL);
        }
        else
        {
          WORD1(v49[1].AccessState) = *(_WORD *)(v7 + 2482);
          v54 = *(_BYTE *)(v7 + 2484);
        }
        BYTE4(v49[1].AccessState) = v54;
        v55 = *(_DWORD *)(v7 + 2496);
        if ( (v55 & 1) != 0 )
        {
          LODWORD(v49[2].SecurityQos) |= 1u;
          v55 = *(_DWORD *)(v7 + 2496);
        }
        if ( (v55 & 4) != 0 )
          LODWORD(v49[2].SecurityQos) |= 4u;
        if ( (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) & 0x2000) != 0 )
          LODWORD(v49[2].SecurityQos) |= 2u;
        v9 = 8LL;
        if ( (*(_DWORD *)(*(_QWORD *)(v8 + 16) + 44LL) & 8) != 0 || (*(_DWORD *)(v7 + 2496) & 8) != 0 )
          LODWORD(v49[2].SecurityQos) |= 8u;
        goto LABEL_89;
      }
      if ( LowPart == 4788299 )
      {
        v46 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v11 = 1;
        Source1 = *(_OWORD *)&v46->DesiredAccess;
        HIDWORD(v46[1].AccessState) = 0;
        if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
        {
          v47 = -((*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0);
        }
        else
        {
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
          {
            Status = (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0 ? 0xC00000BB : 0;
            v11 = ((*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0) + 1;
            goto LABEL_25;
          }
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE, 0x10uLL) == 16 )
          {
            v48 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x800;
          }
          else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
          {
            v48 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x900;
          }
          else
          {
            if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE, 0x10uLL) != 16 )
            {
              if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE, 0x10uLL) == 16 )
                v11 = 2;
              goto LABEL_25;
            }
            v48 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0xB00;
          }
          v47 = -(v48 == 0);
        }
        v11 = 2;
        Status = v47 & 0xC00000BB;
        goto LABEL_25;
      }
      if ( LowPart != 4788303 )
      {
        switch ( LowPart )
        {
          case 0x491404u:
            a2->AssociatedIrp.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_15;
          case 0x491408u:
LABEL_15:
            v11 = 1;
            goto LABEL_25;
          case 0x49140Fu:
            *(_QWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 8) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_15;
        }
        goto LABEL_207;
      }
    }
    else if ( LowPart != 4784139 )
    {
      switch ( LowPart )
      {
        case 0x22043Fu:
          v43 = CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( v43 )
          {
            v44 = *(_QWORD *)(v4 + 16);
            *(_OWORD *)&v43->SecurityQos = *(_OWORD *)(v44 + 304);
            *(_OWORD *)&v43->DesiredAccess = *(_OWORD *)(v44 + 320);
            v45 = *(_WORD *)(v8 + 48);
            LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 240LL);
            if ( (_BYTE)v9 )
              *((_WORD *)&v43->DesiredAccess + (unsigned __int8)v9) = v45;
            else
              LOWORD(v43->DesiredAccess) = v45;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                3u,
                5u,
                0xBu,
                (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
            Status = -1073741811;
          }
          goto LABEL_41;
        case 0x220443u:
          goto LABEL_88;
        case 0x22044Fu:
          ControllerSuffix = HUBPDO_ReturnDeviceConfigInfo(v4, (__int64)a2);
          goto LABEL_126;
        case 0x220FB3u:
          if ( (*(_DWORD *)(v4 + 32) & 1) == 0 )
          {
            Status = -1073741101;
            v11 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_25;
            v36 = 65;
            goto LABEL_147;
          }
          if ( KeGetCurrentIrql() <= 2u )
          {
            v11 = 5;
            goto LABEL_25;
          }
          Status = -1073741811;
          v11 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v36 = 66;
            goto LABEL_147;
          }
          goto LABEL_25;
        case 0x220FBBu:
          v42 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v42 + 1644) & 0x1000000) == 0 )
          {
            Status = -1073741275;
            goto LABEL_41;
          }
          ControllerSuffix = HUBMISC_GenerateControllerSuffix(
                               v42,
                               CurrentStackLocation->Parameters.WMI.ProviderId,
                               5LL,
                               &WPP_RECORDER_INITIALIZED);
          goto LABEL_126;
        case 0x490003u:
          v41 = CurrentStackLocation->Parameters.Create.SecurityContext;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v8 + 24) + 24LL);
          if ( (v41->DesiredAccess & 1) != 0 )
            _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x10u);
          goto LABEL_15;
      }
      if ( LowPart != 4784135 )
        goto LABEL_207;
    }
    CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v4 + 24) + 24LL);
    goto LABEL_15;
  }
  if ( LowPart == 2229307 )
    goto LABEL_88;
  if ( LowPart > 0x220027 )
  {
    switch ( LowPart )
    {
      case 0x22002Bu:
        ControllerSuffix = HUBPDO_RecordFailure(v4, (__int64)a2);
        goto LABEL_126;
      case 0x220420u:
        ControllerSuffix = HUBUCX_GetDeviceBusInfo(
                             *(_QWORD *)(v4 + 16),
                             *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL),
                             CurrentStackLocation->Parameters.WMI.ProviderId,
                             &WPP_RECORDER_INITIALIZED);
        goto LABEL_126;
      case 0x220424u:
        ControllerSuffix = HUBUCX_GetControllerName(
                             *(_QWORD *)(v4 + 16),
                             CurrentStackLocation->Parameters.WMI.ProviderId,
                             CurrentStackLocation->Parameters.Create.Options,
                             &WPP_RECORDER_INITIALIZED);
        goto LABEL_126;
    }
    if ( LowPart != 2229292 )
    {
      if ( LowPart == 2229299 )
      {
        Status = CurrentStackLocation->Parameters.WMI.ProviderId == 0 ? 0xC000000D : 0;
        goto LABEL_89;
      }
      if ( LowPart != 2229303 )
      {
LABEL_207:
        Status = a2->IoStatus.Status;
        goto LABEL_89;
      }
    }
    goto LABEL_88;
  }
  switch ( LowPart )
  {
    case 0x220027u:
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( !Parameters || !*(_QWORD *)&Parameters->NamedPipeType )
      {
        Status = -1073741224;
        v11 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_25;
        v36 = 69;
        goto LABEL_147;
      }
      *(_QWORD *)&v75.Data1 = 0LL;
      *(_QWORD *)v75.Data4 = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, GUID *, __int64, _UNKNOWN **))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
          a2,
          &v75,
          5LL,
          &WPP_RECORDER_INITIALIZED);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
        McTemplateK0p(
          v5,
          &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
          &v75,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL));
      Status = HUBIDLE_AddEvent(v8 + 72, 6003LL, a2);
      v11 = 6;
      goto LABEL_25;
    case 0x220007u:
      if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
      {
        if ( !KeGetCurrentIrql() )
          goto LABEL_113;
        Status = -1073741811;
        v11 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_25;
        v36 = 64;
      }
      else
      {
        Status = -1073741101;
        v11 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_25;
        v36 = 63;
      }
      goto LABEL_147;
    case 0x22000Fu:
LABEL_88:
      Status = -1073741637;
LABEL_89:
      v11 = 2;
      goto LABEL_25;
  }
  if ( LowPart != 2228243 )
  {
    if ( LowPart == 2228247 || LowPart == 2228251 )
      goto LABEL_89;
    if ( LowPart != 2228255 )
    {
      if ( LowPart == 2228256 )
      {
        ControllerSuffix = HUBPDO_GetHubName(v4, a2);
LABEL_126:
        Status = ControllerSuffix;
        goto LABEL_41;
      }
      goto LABEL_207;
    }
    v11 = 2;
    if ( KeGetCurrentIrql() )
    {
      Status = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_25;
      v36 = 67;
      goto LABEL_147;
    }
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4), 1, 0) )
    {
      v37 = *(_QWORD *)(v4 + 24);
      if ( (*(_DWORD *)(v37 + 2436) & 0x400) != 0 )
      {
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v37 + 504);
        v37 = *(_QWORD *)(v8 + 24);
      }
      EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(v37, 2228255LL, 0LL);
      HUBSM_AddEvent(*(_QWORD *)(v8 + 24) + 504LL, 4011);
      goto LABEL_25;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v36 = 68;
LABEL_147:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      v36,
      (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
    goto LABEL_25;
  }
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741811;
    v11 = 2;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v38 = 61;
LABEL_139:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
      2u,
      5u,
      v38,
      (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
    goto LABEL_25;
  }
  v39 = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( v39 )
  {
    LODWORD(v39->SecurityQos) = 0;
    v11 = 4;
    CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v8;
    goto LABEL_25;
  }
  Status = -1073741811;
  v11 = 2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v38 = 62;
    goto LABEL_139;
  }
LABEL_25:
  v13 = v11 - 1;
  if ( !v13 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 8), a2);
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *, __int64))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_1C0064130,
                        v7)
                    + 4) & 0x1000) != 0 )
    {
      *(_QWORD *)&v74.Data1 = 0LL;
      *(_QWORD *)v74.Data4 = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v74);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        LODWORD(v68) = LowPart;
        McTemplateK0pq(
          v65,
          &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
          &v74,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          v68);
      }
      if ( LowPart == 2228227 )
      {
        v66 = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
          goto LABEL_261;
        LODWORD(v68) = WORD1(v66->SecurityQos);
        McTemplateK0pq(v65, &USBHUB3_ETW_EVENT_DEVICE_URB_START, &v74, *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL), v68);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
          goto LABEL_261;
        Priority[0] = HIDWORD(v66->SecurityQos);
        LODWORD(v69) = WORD1(v66->SecurityQos);
        McTemplateK0pqq(
          (struct _MCGEN_TRACE_CONTEXT *)WORD1(v66->SecurityQos),
          &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
          &v74,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          v69,
          *(_QWORD *)Priority);
      }
      if ( LowPart != 4788299 )
        goto LABEL_259;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        Priority[0] = Status;
        McTemplateK0pjq(v65, v64, &v74, *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL), &Source1, *(_QWORD *)Priority);
LABEL_259:
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
        {
          Priority[0] = Status;
          LODWORD(v68) = LowPart;
          McTemplateK0pqq(
            v65,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
            &v74,
            *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
            v68,
            *(_QWORD *)Priority);
        }
      }
    }
LABEL_261:
    a2->IoStatus.Status = Status;
    goto LABEL_262;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v61 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v61[-1].MajorFunction = *(_OWORD *)&v61->MajorFunction;
    *(_OWORD *)&v61[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v61->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v61[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v61->Parameters.SetQuota + 6);
    v61[-1].FileObject = v61->FileObject;
    v61[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v62 = a2->Tail.Overlay.CurrentStackLocation;
    v62[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v62[-1].Context = &Event;
    v62[-1].Control = -32;
    v63 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(WdfDriverGlobals, a1);
    v58 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            a1,
            a2,
            v63,
            2);
    if ( v58 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_243;
    v59 = 71;
    v60 = 3;
    goto LABEL_242;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v56 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v56[-1].MajorFunction = *(_OWORD *)&v56->MajorFunction;
    *(_OWORD *)&v56[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v56->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v56[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v56->Parameters.SetQuota + 6);
    v56[-1].FileObject = v56->FileObject;
    v56[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v57 = a2->Tail.Overlay.CurrentStackLocation;
    v57[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v57[-1].Context = &Event;
    v57[-1].Control = -32;
    v58 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            a1,
            a2,
            *(_QWORD *)(*(_QWORD *)(v8 + 16) + 2400LL),
            2);
    if ( v58 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_243;
    v59 = 70;
    v60 = 2;
LABEL_242:
    Priority[0] = v58;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
      v60,
      5u,
      v59,
      (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
      *(_QWORD *)Priority);
LABEL_243:
    HUBMISC_WaitForSignal(&Event);
    Status = a2->IoStatus.Status;
LABEL_262:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  if ( v16 == 1 )
  {
    v17 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
    *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
    v17[-1].FileObject = v17->FileObject;
    v17[-1].Control = 0;
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 736))(
            WdfDriverGlobals,
            a1,
            v9,
            v7);
    return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                           WdfDriverGlobals,
                           a1,
                           a2,
                           v18,
                           2);
  }
  return Status;
}
