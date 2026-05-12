/*
 * XREFs of RaUnitScsiIrp @ 0x1C00097A0
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0009700 (RaDriverScsiIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C00027C4 (DbgLogRequest.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitSubmitRequest @ 0x1C0009634 (RaidUnitSubmitRequest.c)
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidRestartIoQueue @ 0x1C000D2EC (RaidRestartIoQueue.c)
 *     RaUnitClaimDeviceSrb @ 0x1C00255A4 (RaUnitClaimDeviceSrb.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C003BBF8 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0046028 (RaidNtStatusToSrbStatus.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C0046E34 (RaUnitCheckRemoveStateForDisabled.c)
 *     RaUnitFlushQueueSrb @ 0x1C0047024 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C0047508 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitResetBusSrb @ 0x1C004757C (RaUnitResetBusSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C0048FE4 (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004B2D0 (RaidUnitSubmitResetRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C004CB00 (StorEtwIORequestDispatch.c)
 *     RaUnitUnknownSrb @ 0x1C0075454 (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2)
{
  int v2; // esi
  bool v5; // r12
  _IO_SECURITY_CONTEXT *v6; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  unsigned __int64 v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  int v11; // ecx
  unsigned __int8 v12; // al
  unsigned int FullCreateOptions; // r14d
  int SecurityQos; // r15d
  PDEVICE_OBJECT v15; // rcx
  _IO_SECURITY_CONTEXT *v16; // r9
  unsigned int AccessState; // r10d
  unsigned int i; // r11d
  __int64 v19; // rcx
  unsigned __int64 DesiredAccess; // r8
  int v21; // r14d
  __int64 v22; // rdx
  _IO_STACK_LOCATION *v23; // rax
  _IO_SECURITY_CONTEXT *v24; // rcx
  unsigned __int8 v25; // al
  unsigned __int64 v26; // rdi
  unsigned int AccessState_high; // ebx
  unsigned int v28; // edx
  __int64 v29; // r8
  unsigned int v31; // eax
  unsigned int v32; // ebx
  _DWORD *DeviceContext; // rax
  __int64 v34; // rcx
  int v35; // r14d
  int v36; // ecx
  __int64 v37; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int v39; // r14d
  char v41[16]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v5 = 1;
  v6 = 0LL;
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  v8 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v9 = *(_DWORD *)(v8 + *(_QWORD *)(a1 + 32));
  if ( (v9 & 1) != 0 )
  {
LABEL_77:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
  }
  else
  {
    while ( 1 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + *(_QWORD *)(a1 + 32)), v9 + 2, v9);
      if ( v10 == v9 )
        break;
      if ( (v9 & 1) != 0 )
        goto LABEL_77;
    }
  }
  v11 = *(_DWORD *)(a1 + 48);
  if ( v11 >= 5 )
  {
    v36 = v11 - 5;
    if ( v36 )
    {
      v37 = (unsigned int)(v36 - 1);
      if ( (_DWORD)v37 )
      {
        if ( (_DWORD)v37 != 1 )
          goto LABEL_5;
        v35 = RaUnitCheckRemoveStateForDisabled(v37, a2);
        if ( v35 >= 0 )
          goto LABEL_5;
LABEL_86:
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 912), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
        BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v35);
        a2->IoStatus.Information = 0LL;
        return RaidCompleteRequestEx(a2);
      }
    }
    else
    {
      CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
      if ( CurrentStackLocation->MajorFunction == 27
        || CurrentStackLocation->MajorFunction == 14
        && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 266276 )
      {
        goto LABEL_5;
      }
    }
    v35 = -1073741738;
    goto LABEL_86;
  }
LABEL_5:
  v12 = BYTE2(SecurityContext->SecurityQos);
  if ( v12 == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 418LL) != 1
      || (v6 = SecurityContext,
          FullCreateOptions = SecurityContext->FullCreateOptions,
          SecurityQos = (int)SecurityContext[1].SecurityQos,
          LODWORD(SecurityContext->AccessState) != 1397899864)
      || LODWORD(SecurityContext[2].SecurityQos)
      || SecurityContext[3].SecurityQos )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2);
    }
  }
  else
  {
    SecurityQos = HIDWORD(SecurityContext->AccessState);
    FullCreateOptions = v12;
  }
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      20LL,
      &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v15 = *(PDEVICE_OBJECT *)(a1 + 24), (DeviceContext = v15[15].Queue.Wcb.DeviceContext) != 0LL)
      && (DeviceContext[5] & 1) == 0
      || (BYTE4(v15->Queue.Wcb.DeviceRoutine) & 2) != 0
      || v15->DeviceLock.Header.SignalState != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 36;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2);
    }
  }
  if ( FullCreateOptions )
  {
    if ( FullCreateOptions == 8 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 403LL) )
      {
        v31 = RaidUnitSubmitRequest(a1, (__int64)a2);
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v31 = RaidCompleteRequestEx(a2);
      }
      v32 = v31;
      v5 = v31 != 259;
      goto LABEL_46;
    }
    switch ( FullCreateOptions )
    {
      case 1u:
        v32 = RaUnitClaimDeviceSrb(a1, a2);
        goto LABEL_46;
      case 2u:
      case 7u:
      case 9u:
        v32 = RaidUnitSubmitRequest(a1, (__int64)a2);
        v5 = 0;
        goto LABEL_46;
      case 4u:
        *(_BYTE *)(a1 + 692) = 0;
        RaidRestartIoQueue(a1, 0LL);
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v32 = RaidCompleteRequestEx(a2);
        goto LABEL_46;
      case 6u:
        v32 = RaUnitReleaseDeviceSrb(a1, a2);
        goto LABEL_46;
      case 0x10u:
      case 0x13u:
      case 0x20u:
        v32 = RaidUnitSubmitResetRequest(a1, a2);
        goto LABEL_46;
      case 0x12u:
        v32 = RaUnitResetBusSrb(a1, a2);
        goto LABEL_46;
      case 0x15u:
        v32 = RaUnitFlushQueueSrb(a1, a2);
        goto LABEL_46;
      case 0x17u:
        v32 = RaidCompleteRequestEx(a2);
        goto LABEL_46;
      case 0x18u:
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        *(_BYTE *)(a1 + 693) = 1;
        v32 = RaidCompleteRequestEx(a2);
        goto LABEL_46;
      case 0x19u:
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        *(_BYTE *)(a1 + 693) = 0;
        RaidRestartIoQueue(a1, 0LL);
        v32 = RaidCompleteRequestEx(a2);
        goto LABEL_46;
      case 0x1Au:
        if ( *(int *)(a1 + 732) > 0 )
        {
          *(_QWORD *)(a1 + 1856) = a2;
          a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          IoQueueWorkItem(
            *(PIO_WORKITEM *)(a1 + 1848),
            RaidUnitQuiesceDeviceWorkRoutine,
            CriticalWorkQueue,
            (PVOID)(a1 + 1848));
          v32 = 259;
        }
        else
        {
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          v32 = RaidCompleteRequestEx(a2);
          if ( v32 != 259 )
            goto LABEL_46;
        }
        v5 = 0;
LABEL_46:
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqD(
            WPP_GLOBAL_Control->AttachedDevice,
            23LL,
            &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
            a1,
            a2,
            v32);
        }
        if ( v5 )
          RaUnitReleaseRemoveLock(a1);
        return v32;
      default:
        v32 = RaUnitUnknownSrb(v15, a2);
        goto LABEL_46;
    }
  }
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
  {
    v16 = SecurityContext + 3;
    goto LABEL_24;
  }
  v16 = 0LL;
  if ( BYTE2(v6->SecurityQos) == 40 && !v6->FullCreateOptions )
  {
    AccessState = (unsigned int)v6[2].AccessState;
    for ( i = 0; i < AccessState; ++i )
    {
      v19 = *((unsigned int *)&v6[5].SecurityQos + i);
      if ( (unsigned int)v19 >= 0x80 )
      {
        DesiredAccess = v6->DesiredAccess;
        if ( (unsigned int)v19 <= (unsigned int)DesiredAccess )
        {
          v21 = *(_DWORD *)((char *)&v6->SecurityQos + v19);
          v22 = (__int64)v6 + v19;
          if ( v21 == 64 )
          {
            if ( v19 + 40 <= DesiredAccess )
              goto LABEL_22;
          }
          else
          {
            v39 = v21 - 65;
            if ( v39 )
            {
              if ( v39 == 1 && v19 + 40 <= DesiredAccess )
              {
                v16 = (_IO_SECURITY_CONTEXT *)(v22 + 32);
                if ( !*(_DWORD *)(v22 + 12) )
                  v16 = 0LL;
                break;
              }
            }
            else if ( v19 + 56 <= DesiredAccess )
            {
LABEL_22:
              if ( *(_BYTE *)(v22 + 10) )
                v16 = (_IO_SECURITY_CONTEXT *)(v22 + 24);
              break;
            }
          }
        }
      }
    }
  }
LABEL_24:
  if ( v16 )
  {
    if ( LOBYTE(v16->SecurityQos) == 27 && (BYTE4(v16->SecurityQos) & 1) == 0 )
    {
      if ( (unsigned __int8)RaUnitSwallowStopUnitCommand(a1) )
      {
        BYTE3(SecurityContext->SecurityQos) = 1;
        a2->IoStatus.Information = 0LL;
        v32 = RaidCompleteRequestEx(a2);
        RaUnitReleaseRemoveLock(a1);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids, a1, a2);
        }
        return v32;
      }
    }
  }
  if ( StorEtwLoggingEnabled && (byte_1C00617E1 & 0x1E) != 0 && ((LOBYTE(v16->SecurityQos) - 8) & 0x5D) == 0 )
  {
    IoGetActivityIdIrp(a2, v41);
    StorEtwIORequestDispatch(a2);
  }
  v23 = a2->Tail.Overlay.CurrentStackLocation;
  v24 = v23->Parameters.Create.SecurityContext;
  v23->Control |= 1u;
  BYTE3(v24->SecurityQos) = 0;
  a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
  v25 = BYTE2(v24->SecurityQos);
  if ( v25 == 40 )
  {
    v26 = v24->FullCreateOptions;
    AccessState_high = (unsigned int)v24[1].SecurityQos;
  }
  else
  {
    AccessState_high = HIDWORD(v24->AccessState);
    v26 = v25;
  }
  if ( (qword_1C00612B0 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (__int64)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
      0LL,
      0LL,
      0LL);
  v28 = (AccessState_high >> 17) & 4 | 2;
  if ( (AccessState_high & 0x10) == 0 )
    v28 = (AccessState_high >> 17) & 4;
  if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
  {
    if ( (unsigned int)v26 > 0x20 || (v34 = 0x1000D0000LL, !_bittest64(&v34, v26)) )
      v2 = 1;
  }
  v29 = v28 | 1;
  if ( !v2 )
    v29 = v28;
  RaidStartIoPacket(a1, a2, v29);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids, a1, a2, 259);
  }
  return 259LL;
}
