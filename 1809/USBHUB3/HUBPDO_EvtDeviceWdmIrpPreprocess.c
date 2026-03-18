/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00150A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     McTemplateK0pjq @ 0x1C0010F6C (McTemplateK0pjq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0011A7C (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetHubName @ 0x1C0012EF0 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C001302C (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C00131A8 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x1C00140A8 (HUBPDO_ValidateURB.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0018550 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_GetControllerName @ 0x1C0022F78 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x1C00230C8 (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_WaitForSignal @ 0x1C002C420 (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C002D808 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBIDLE_AddEvent @ 0x1C003680C (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPreprocess(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx
  __int64 v4; // rax
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned int LowPart; // r12d
  char v11; // dl
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  _IO_STACK_LOCATION *v16; // rax
  __int64 v17; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  unsigned __int16 v20; // cx
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rcx
  unsigned __int16 v24; // r9
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v28; // r9
  __int64 v29; // rdx
  unsigned __int16 *v30; // rdx
  unsigned int AccessState_high; // ebx
  size_t v32; // r8
  _SECURITY_QUALITY_OF_SERVICE *v33; // rcx
  unsigned int v34; // ecx
  unsigned int ControllerSuffix; // eax
  unsigned __int16 v36; // r9
  signed __int32 v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int16 v40; // r9
  _IO_SECURITY_CONTEXT *v41; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _IO_SECURITY_CONTEXT *v43; // rax
  __int64 v44; // rcx
  _IO_SECURITY_CONTEXT *v45; // rcx
  __int64 v46; // rax
  __int16 v47; // dx
  _IO_SECURITY_CONTEXT *v48; // rax
  int v49; // eax
  int v50; // ecx
  _IO_SECURITY_CONTEXT *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  char v54; // cl
  __int64 v55; // rcx
  char v56; // cl
  int v57; // eax
  _IO_STACK_LOCATION *v58; // rax
  _IO_STACK_LOCATION *v59; // rax
  int v60; // eax
  unsigned __int16 v61; // r9
  unsigned __int8 v62; // dl
  _IO_STACK_LOCATION *v63; // rax
  _IO_STACK_LOCATION *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  struct _MCGEN_TRACE_CONTEXT *v67; // rcx
  _IO_SECURITY_CONTEXT *v68; // rdi
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-49h]
  ULONG BugCheckOnFailurea[2]; // [rsp+20h] [rbp-49h]
  ULONG Priority[2]; // [rsp+28h] [rbp-41h]
  struct _KEVENT Event; // [rsp+40h] [rbp-29h] BYREF
  __int128 Source1; // [rsp+58h] [rbp-11h] BYREF
  GUID v76; // [rsp+68h] [rbp-1h] BYREF
  GUID v77; // [rsp+78h] [rbp+Fh] BYREF

  Status = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F040);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 4;
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
          v7 = 1;
          *(_QWORD *)(&a2->AssociatedIrp.MasterIrp->Size + 1) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
        }
        else
        {
          v7 = 3;
        }
        goto LABEL_22;
      }
    }
    goto LABEL_14;
  }
  v11 = 0;
  switch ( LowPart )
  {
    case 0x220003u:
      v5 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned __int16 *)(CurrentStackLocation->Parameters.WMI.ProviderId + 2);
      LOWORD(v5) = (_WORD)v5 - 53;
      if ( (unsigned __int16)v5 <= 1u )
LABEL_17:
        v11 = 1;
      break;
    case 0x490007u:
    case 0x49104Bu:
      v11 = 1;
      break;
    case 0x220FB3u:
      if ( (*(_DWORD *)(v4 + 32) & 0x20) == 0 )
        break;
      goto LABEL_17;
    case 0x220463u:
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        4u,
        5u,
        0x39u,
        (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
        a2);
      *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) |= 0x80000u;
      goto LABEL_36;
  }
  if ( *(_BYTE *)v4 && !v11 )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      0x3Au,
      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
      a2);
    Status = -1073741810;
    v7 = 2;
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    goto LABEL_22;
  }
  if ( LowPart == 2228227 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v20 = WORD1(SecurityContext->SecurityQos);
    if ( (unsigned __int16)(v20 - 9) <= 1u || (unsigned __int16)(v20 - 57) <= 1u )
      goto LABEL_98;
    if ( v20 <= 0x2Au )
    {
      if ( v20 != 42 )
      {
        if ( v20 <= 1u )
          goto LABEL_47;
        if ( v20 != 11 )
        {
          if ( v20 != 19 )
          {
            v21 = v20 == 30;
            goto LABEL_46;
          }
          v23 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v23 + 1632) & 0x80000) == 0 )
            goto LABEL_98;
          v24 = 60;
          v25 = 4;
          goto LABEL_52;
        }
        v26 = *(_QWORD *)(v4 + 24);
        if ( *(_WORD *)(v26 + 1990) <= 0x200u )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(v26 + 24);
          goto LABEL_14;
        }
        Status = HUBPDO_ValidateURB(
                   v8,
                   (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext,
                   5LL);
        if ( (Status & 0x80000000) != 0 )
          goto LABEL_36;
        SecurityQos = SecurityContext[2].SecurityQos;
        if ( SecurityQos )
        {
          if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
            v28 = *(PVOID *)&SecurityQos[2].Length;
          else
            v28 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
        }
        else
        {
          v28 = *(PVOID *)&SecurityContext[1].DesiredAccess;
        }
        if ( !v28 )
        {
          Status = -1073741811;
          HIDWORD(SecurityContext->SecurityQos) = -2147482880;
          goto LABEL_36;
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
LABEL_67:
            Status = 0;
            v7 = 1;
            goto LABEL_22;
          }
          v29 = *(_QWORD *)(v8 + 24);
          if ( BYTE2(SecurityContext[5].AccessState) )
          {
            SecurityContext->AccessState = *(_ACCESS_STATE **)(v29 + 24);
            goto LABEL_67;
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
LABEL_78:
        memmove(v28, v30, v32);
        HIDWORD(SecurityContext[1].AccessState) = AccessState_high;
LABEL_79:
        Status = 0;
        goto LABEL_36;
      }
      v23 = *(_QWORD *)(v4 + 24);
      if ( WORD2(SecurityContext[5].AccessState) != 7 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v23 + 1990) - 256) > 0xFFu && (*(_DWORD *)(v23 + 1632) & 0x80u) == 0
          || (*(_DWORD *)(v23 + 1644) & 2) != 0 )
        {
          BYTE1(SecurityContext[5].AccessState) = *(_BYTE *)(v23 + 2052);
          goto LABEL_98;
        }
        v24 = 59;
        v25 = 3;
LABEL_52:
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v23 + 8) + 1432LL),
          v25,
          5u,
          v24,
          (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
LABEL_53:
        Status = -1073741637;
        goto LABEL_36;
      }
      if ( (*(_DWORD *)(v23 + 2464) & 2) != 0 )
      {
        v33 = SecurityContext[2].SecurityQos;
        if ( v33 )
        {
          if ( (*(&v33->EffectiveOnly + 1) & 5) != 0 )
            v28 = *(PVOID *)&v33[2].Length;
          else
            v28 = MmMapLockedPagesSpecifyCache((PMDL)v33, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
        }
        else
        {
          v28 = *(PVOID *)&SecurityContext[1].DesiredAccess;
        }
        if ( !v28 )
          goto LABEL_53;
        v30 = *(unsigned __int16 **)(*(_QWORD *)(v8 + 24) + 2488LL);
        v34 = v30[4];
        if ( v34 >= HIDWORD(SecurityContext[1].AccessState) )
          v34 = HIDWORD(SecurityContext[1].AccessState);
        AccessState_high = v34;
        v32 = v34;
        goto LABEL_78;
      }
      goto LABEL_82;
    }
    if ( v20 < 0x30u )
      goto LABEL_98;
    if ( v20 <= 0x31u )
    {
LABEL_47:
      v22 = HUBPDO_ValidateURB(v4, (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext, 5LL);
      Status = v22;
      if ( v22 >= 0 )
      {
        if ( v22 != 128 )
        {
          v7 = (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) & 2) != 0 ? 5 : 3;
          goto LABEL_22;
        }
        goto LABEL_79;
      }
LABEL_36:
      v7 = 2;
      goto LABEL_22;
    }
    if ( v20 <= 0x34u )
    {
LABEL_98:
      SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
      goto LABEL_14;
    }
    if ( v20 > 0x36u )
    {
      v21 = v20 == 59;
LABEL_46:
      if ( v21 )
        goto LABEL_47;
      goto LABEL_98;
    }
    SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
LABEL_105:
    v7 = 3;
    goto LABEL_22;
  }
  if ( LowPart > 0x22043B )
  {
    if ( LowPart > 0x49000B )
    {
      if ( LowPart == 4788291 )
      {
        v51 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v51->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v4 + 16) + 2448LL);
        v52 = *(_QWORD *)(v4 + 24);
        *(_OWORD *)&v51->AccessState = *(_OWORD *)(v52 + 1988);
        LOWORD(v51[1].SecurityQos) = *(_WORD *)(v52 + 2004);
        WORD1(v51[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2192LL);
        WORD2(v51[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2194LL);
        v51[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v8 + 24) + 2568LL);
        v51[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 2576LL);
        BYTE2(v51[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 202LL);
        HIWORD(v51[1].AccessState) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2202LL);
        LOWORD(v51[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v8 + 24) + 2204LL);
        v9 = *(_QWORD *)(v8 + 16);
        LOWORD(v51[1].FullCreateOptions) = *(_WORD *)(v9 + 1188)
                                         + *(_WORD *)(*(_QWORD *)(v8 + 24) + 2582LL)
                                         + *(_WORD *)(v9 + 2492);
        v53 = *(_QWORD *)(v8 + 24);
        if ( (*(_DWORD *)(v53 + 2216) & 1) != 0 )
        {
          HIWORD(v51[1].SecurityQos) = *(unsigned __int8 *)(v53 + 2197);
          v54 = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 240LL);
        }
        else
        {
          HIWORD(v51[1].SecurityQos) = *(_WORD *)(v9 + 2478);
          v54 = *(_BYTE *)(v9 + 2480);
        }
        LOBYTE(v51[1].AccessState) = v54;
        v55 = *(_QWORD *)(v8 + 24);
        if ( (*(_DWORD *)(v55 + 2216) & 2) != 0 )
        {
          WORD1(v51[1].AccessState) = *(_WORD *)(v55 + 2200);
          v56 = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 240LL);
        }
        else
        {
          WORD1(v51[1].AccessState) = *(_WORD *)(v9 + 2482);
          v56 = *(_BYTE *)(v9 + 2484);
        }
        BYTE4(v51[1].AccessState) = v56;
        v57 = *(_DWORD *)(v9 + 2496);
        if ( (v57 & 1) != 0 )
        {
          LODWORD(v51[2].SecurityQos) |= 1u;
          v57 = *(_DWORD *)(v9 + 2496);
        }
        if ( (v57 & 4) != 0 )
          LODWORD(v51[2].SecurityQos) |= 4u;
        if ( (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1632LL) & 0x2000) != 0 )
          LODWORD(v51[2].SecurityQos) |= 2u;
        goto LABEL_83;
      }
      if ( LowPart == 4788299 )
      {
        v48 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v7 = 1;
        Source1 = *(_OWORD *)&v48->DesiredAccess;
        HIDWORD(v48[1].AccessState) = 0;
        if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
        {
          v49 = -((*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0);
        }
        else
        {
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
          {
            Status = (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0 ? 0xC00000BB : 0;
            v7 = ((*(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x10000) != 0) + 1;
            goto LABEL_22;
          }
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE, 0x10uLL) == 16 )
          {
            v50 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x800;
          }
          else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
          {
            v50 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0x900;
          }
          else
          {
            if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE, 0x10uLL) != 16 )
            {
              if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE, 0x10uLL) == 16 )
                v7 = 2;
              goto LABEL_22;
            }
            v50 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 1456LL) & 0xB00;
          }
          v49 = -(v50 == 0);
        }
        v7 = 2;
        Status = v49 & 0xC00000BB;
        goto LABEL_22;
      }
      if ( LowPart != 4788303 )
      {
        switch ( LowPart )
        {
          case 0x491404u:
            a2->AssociatedIrp.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_14;
          case 0x491408u:
LABEL_14:
            v7 = 1;
            goto LABEL_22;
          case 0x49140Fu:
            *(_QWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 8) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_14;
        }
        goto LABEL_189;
      }
    }
    else if ( LowPart != 4784139 )
    {
      switch ( LowPart )
      {
        case 0x22043Fu:
          v45 = CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( v45 )
          {
            v46 = *(_QWORD *)(v4 + 16);
            *(_OWORD *)&v45->SecurityQos = *(_OWORD *)(v46 + 304);
            *(_OWORD *)&v45->DesiredAccess = *(_OWORD *)(v46 + 320);
            v47 = *(_WORD *)(v8 + 48);
            LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 240LL);
            if ( (_BYTE)v9 )
              *((_WORD *)&v45->DesiredAccess + (unsigned __int8)v9) = v47;
            else
              LOWORD(v45->DesiredAccess) = v47;
          }
          else
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
              3u,
              5u,
              0xBu,
              (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
            Status = -1073741811;
          }
          goto LABEL_36;
        case 0x220443u:
          goto LABEL_82;
        case 0x22044Fu:
          ControllerSuffix = HUBPDO_ReturnDeviceConfigInfo(v4, (__int64)a2);
          goto LABEL_118;
        case 0x220FB3u:
          if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
          {
            if ( KeGetCurrentIrql() <= 2u )
            {
              v7 = 5;
              goto LABEL_22;
            }
            Status = -1073741811;
            v7 = 2;
            v36 = 66;
          }
          else
          {
            Status = -1073741101;
            v7 = 2;
            v36 = 65;
          }
          goto LABEL_134;
        case 0x220FBBu:
          v44 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v44 + 1644) & 0x1000000) == 0 )
          {
            Status = -1073741275;
            goto LABEL_36;
          }
          ControllerSuffix = HUBMISC_GenerateControllerSuffix(
                               v44,
                               CurrentStackLocation->Parameters.WMI.ProviderId,
                               5LL,
                               3LL);
          goto LABEL_118;
        case 0x490003u:
          v43 = CurrentStackLocation->Parameters.Create.SecurityContext;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v8 + 24) + 24LL);
          if ( (v43->DesiredAccess & 1) != 0 )
            _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x10u);
          goto LABEL_14;
      }
      if ( LowPart != 4784135 )
        goto LABEL_189;
    }
    CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v4 + 24) + 24LL);
    goto LABEL_14;
  }
  if ( LowPart == 2229307 )
  {
LABEL_82:
    Status = -1073741637;
    goto LABEL_83;
  }
  if ( LowPart > 0x220027 )
  {
    switch ( LowPart )
    {
      case 0x22002Bu:
        ControllerSuffix = HUBPDO_RecordFailure(v4, (__int64)a2);
        goto LABEL_118;
      case 0x220420u:
        ControllerSuffix = HUBUCX_GetDeviceBusInfo(
                             *(_QWORD *)(v4 + 16),
                             *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL),
                             CurrentStackLocation->Parameters.WMI.ProviderId,
                             3LL);
        goto LABEL_118;
      case 0x220424u:
        ControllerSuffix = HUBUCX_GetControllerName(
                             *(_QWORD *)(v4 + 16),
                             CurrentStackLocation->Parameters.WMI.ProviderId,
                             CurrentStackLocation->Parameters.Create.Options,
                             3LL);
        goto LABEL_118;
      case 0x22042Cu:
        goto LABEL_82;
      case 0x220433u:
        Status = CurrentStackLocation->Parameters.WMI.ProviderId == 0 ? 0xC000000D : 0;
        goto LABEL_83;
      case 0x220437u:
        goto LABEL_82;
    }
LABEL_189:
    Status = a2->IoStatus.Status;
    goto LABEL_83;
  }
  if ( LowPart != 2228263 )
  {
    if ( LowPart == 2228231 )
    {
      if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
      {
        if ( !KeGetCurrentIrql() )
          goto LABEL_105;
        Status = -1073741811;
        v7 = 2;
        v36 = 64;
      }
      else
      {
        Status = -1073741101;
        v7 = 2;
        v36 = 63;
      }
      goto LABEL_134;
    }
    if ( LowPart != 2228239 )
    {
      if ( LowPart == 2228243 )
      {
        if ( KeGetCurrentIrql() )
        {
          Status = -1073741811;
          v7 = 2;
          v40 = 61;
        }
        else
        {
          v41 = CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( v41 )
          {
            LODWORD(v41->SecurityQos) = 0;
            CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v8;
            goto LABEL_22;
          }
          Status = -1073741811;
          v7 = 2;
          v40 = 62;
        }
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
          2u,
          5u,
          v40,
          (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
        goto LABEL_22;
      }
      if ( LowPart == 2228247 || LowPart == 2228251 )
      {
LABEL_83:
        v7 = 2;
        goto LABEL_22;
      }
      if ( LowPart != 2228255 )
      {
        if ( LowPart == 2228256 )
        {
          ControllerSuffix = HUBPDO_GetHubName(v4, a2);
LABEL_118:
          Status = ControllerSuffix;
          goto LABEL_36;
        }
        goto LABEL_189;
      }
      v7 = 2;
      if ( KeGetCurrentIrql() )
      {
        Status = -1073741811;
        v36 = 67;
LABEL_134:
        v39 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL);
        goto LABEL_135;
      }
      v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4), 1, 0);
      v38 = *(_QWORD *)(v8 + 24);
      if ( v37 )
      {
        v39 = *(_QWORD *)(v38 + 8);
        v36 = 68;
LABEL_135:
        WPP_RECORDER_SF_(
          *(_QWORD *)(v39 + 1432),
          3u,
          5u,
          v36,
          (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
        goto LABEL_22;
      }
      if ( (*(_DWORD *)(v38 + 2436) & 0x400) != 0 )
      {
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v38 + 504);
        v38 = *(_QWORD *)(v8 + 24);
      }
      EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(v38, 2228255LL, 0LL);
      HUBSM_AddEvent(*(_QWORD *)(v8 + 24) + 504LL, 4011);
      goto LABEL_22;
    }
    goto LABEL_82;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( !Parameters || !*(_QWORD *)&Parameters->NamedPipeType )
  {
    Status = -1073741224;
    v7 = 2;
    v36 = 69;
    goto LABEL_134;
  }
  *(_QWORD *)&v77.Data1 = 0LL;
  *(_QWORD *)v77.Data4 = 0LL;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    (*(void (__fastcall **)(IRP *, GUID *, __int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
      a2,
      &v77,
      5LL,
      3LL);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    McTemplateK0p(
      v5,
      &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
      &v77,
      *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL));
  Status = HUBIDLE_AddEvent(v8 + 72, 6003LL, a2);
  v7 = 6;
LABEL_22:
  v12 = v7 - 1;
  if ( !v12 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 8), a2);
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_1C005F130)
                    + 4) & 0x1000) != 0 )
    {
      *(_QWORD *)&v76.Data1 = 0LL;
      *(_QWORD *)v76.Data4 = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v76);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        BugCheckOnFailure[0] = LowPart;
        McTemplateK0pq(
          v67,
          &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
          &v76,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailure);
      }
      if ( LowPart == 2228227 )
      {
        v68 = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
          goto LABEL_238;
        BugCheckOnFailure[0] = WORD1(v68->SecurityQos);
        McTemplateK0pq(
          v67,
          &USBHUB3_ETW_EVENT_DEVICE_URB_START,
          &v76,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailure);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
          goto LABEL_238;
        Priority[0] = HIDWORD(v68->SecurityQos);
        BugCheckOnFailurea[0] = WORD1(v68->SecurityQos);
        McTemplateK0pqq(
          (struct _MCGEN_TRACE_CONTEXT *)WORD1(v68->SecurityQos),
          &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
          &v76,
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailurea,
          *(_QWORD *)Priority);
      }
      if ( LowPart != 4788299 )
        goto LABEL_236;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        Priority[0] = Status;
        McTemplateK0pjq(v67, v66, &v76, *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL), &Source1, *(_QWORD *)Priority);
LABEL_236:
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
        {
          Priority[0] = Status;
          BugCheckOnFailure[0] = LowPart;
          McTemplateK0pqq(
            v67,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
            &v76,
            *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
            *(_QWORD *)BugCheckOnFailure,
            *(_QWORD *)Priority);
        }
      }
    }
LABEL_238:
    a2->IoStatus.Status = Status;
    goto LABEL_239;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v63 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v63[-1].MajorFunction = *(_OWORD *)&v63->MajorFunction;
    *(_OWORD *)&v63[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v63->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v63[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v63->Parameters.SetQuota + 6);
    v63[-1].FileObject = v63->FileObject;
    v63[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v64 = a2->Tail.Overlay.CurrentStackLocation;
    v64[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v64[-1].Context = &Event;
    v64[-1].Control = -32;
    v65 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(WdfDriverGlobals, a1);
    v60 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            a1,
            a2,
            v65,
            2);
    if ( v60 >= 0 )
      goto LABEL_221;
    v61 = 71;
    v62 = 3;
    goto LABEL_220;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v58 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v58[-1].MajorFunction = *(_OWORD *)&v58->MajorFunction;
    *(_OWORD *)&v58[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v58->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v58[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v58->Parameters.SetQuota + 6);
    v58[-1].FileObject = v58->FileObject;
    v58[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v59 = a2->Tail.Overlay.CurrentStackLocation;
    v59[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v59[-1].Context = &Event;
    v59[-1].Control = -32;
    v60 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            a1,
            a2,
            *(_QWORD *)(*(_QWORD *)(v8 + 16) + 2400LL),
            2);
    if ( v60 >= 0 )
    {
LABEL_221:
      HUBMISC_WaitForSignal(&Event);
      Status = a2->IoStatus.Status;
LABEL_239:
      IofCompleteRequest(a2, 0);
      return Status;
    }
    v61 = 70;
    v62 = 2;
LABEL_220:
    Priority[0] = v60;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 1432LL),
      v62,
      5u,
      v61,
      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
      *(_QWORD *)Priority);
    goto LABEL_221;
  }
  if ( v15 == 1 )
  {
    v16 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
    *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
    v16[-1].FileObject = v16->FileObject;
    v16[-1].Control = 0;
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 736))(
            WdfDriverGlobals,
            a1,
            v9);
    return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                           WdfDriverGlobals,
                           a1,
                           a2,
                           v17,
                           2);
  }
  return Status;
}
