/*
 * XREFs of RaUnitScsiIrp @ 0x1C0007D80
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0007CE0 (RaDriverScsiIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000211C (DbgLogRequest.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079F0 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitSubmitRequest @ 0x1C0007C18 (RaidUnitSubmitRequest.c)
 *     RaidStartIoPacket @ 0x1C0008210 (RaidStartIoPacket.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidRestartIoQueue @ 0x1C000B150 (RaidRestartIoQueue.c)
 *     RaUnitClaimDeviceSrb @ 0x1C0022608 (RaUnitClaimDeviceSrb.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0038EB0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0038F00 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00446B0 (RaidNtStatusToSrbStatus.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C00456E4 (RaUnitCheckRemoveStateForDisabled.c)
 *     RaUnitFlushQueueSrb @ 0x1C004585C (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C0045D3C (RaUnitReleaseDeviceSrb.c)
 *     RaUnitResetBusSrb @ 0x1C0045DC0 (RaUnitResetBusSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C0047B30 (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0049C88 (RaidUnitSubmitResetRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C004B6EC (StorEtwIORequestDispatch.c)
 *     RaUnitUnknownSrb @ 0x1C00755BC (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v3; // ebx
  bool v6; // r12
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  _IO_SECURITY_CONTEXT *v8; // r13
  unsigned __int64 v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  volatile signed __int32 *v12; // r10
  int v13; // ecx
  unsigned __int8 v14; // al
  unsigned int FullCreateOptions; // r14d
  int SecurityQos; // r15d
  PDEVICE_OBJECT v17; // rcx
  _IO_SECURITY_CONTEXT *v18; // r9
  unsigned int AccessState; // r10d
  unsigned int v20; // r11d
  __int64 v21; // rcx
  unsigned __int64 DesiredAccess; // r8
  int v23; // r14d
  __int64 v24; // rdx
  _IO_STACK_LOCATION *v25; // rax
  _IO_SECURITY_CONTEXT *v26; // rcx
  unsigned __int8 v27; // al
  unsigned __int64 v28; // r14
  unsigned int AccessState_high; // edi
  unsigned int v30; // edx
  __int64 v31; // r8
  unsigned int v33; // eax
  unsigned int v34; // edi
  __int64 v35; // rcx
  _DWORD *Reserved; // rax
  int v37; // r14d
  int v38; // ecx
  __int64 v39; // rcx
  _IO_STACK_LOCATION *v40; // rcx
  int v41; // r14d
  char v42; // al
  unsigned int v43; // ebx
  _QWORD v44[2]; // [rsp+48h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v44[0] = 0LL;
  v44[1] = 0LL;
  v6 = 1;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  v8 = 0LL;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  v9 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v10 = *(_DWORD *)(v9 + *(_QWORD *)(a1 + 32));
  if ( (v10 & 1) != 0 )
  {
LABEL_76:
    v12 = (volatile signed __int32 *)(a1 + 936);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 936));
  }
  else
  {
    while ( 1 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + *(_QWORD *)(a1 + 32)), v10 + 2, v10);
      if ( v11 == v10 )
        break;
      if ( (v10 & 1) != 0 )
        goto LABEL_76;
    }
    v12 = (volatile signed __int32 *)(a1 + 936);
  }
  v13 = *(_DWORD *)(a1 + 48);
  if ( v13 >= 5 )
  {
    v38 = v13 - 5;
    if ( v38 )
    {
      v39 = (unsigned int)(v38 - 1);
      if ( (_DWORD)v39 )
      {
        if ( (_DWORD)v39 != 1 )
          goto LABEL_6;
        v37 = RaUnitCheckRemoveStateForDisabled(v39, a2);
        if ( v37 >= 0 )
          goto LABEL_6;
LABEL_85:
        if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
        BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v37);
        a2->IoStatus.Information = 0LL;
        return RaidCompleteRequestEx(a2);
      }
    }
    else
    {
      v40 = a2->Tail.Overlay.CurrentStackLocation;
      if ( v40->MajorFunction == 27 || v40->MajorFunction == 14 && v40->Parameters.Read.ByteOffset.LowPart == 266276 )
        goto LABEL_6;
    }
    v37 = -1073741738;
    goto LABEL_85;
  }
LABEL_6:
  v14 = BYTE2(SecurityContext->SecurityQos);
  if ( v14 == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL) != 1
      || (v8 = SecurityContext,
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
    FullCreateOptions = v14;
  }
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      20LL,
      &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v17 = *(PDEVICE_OBJECT *)(a1 + 24), (Reserved = v17[14].Reserved) != 0LL) && (Reserved[5] & 1) == 0
      || (BYTE4(v17->Queue.Wcb.DeviceRoutine) & 2) != 0
      || *(&v17->ActiveThreadCount + 1) != 1 )
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
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
      {
        v33 = RaidUnitSubmitRequest(a1, (__int64)a2);
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v33 = RaidCompleteRequestEx(a2);
      }
      v34 = v33;
      v6 = v33 != 259;
      goto LABEL_47;
    }
    switch ( FullCreateOptions )
    {
      case 1u:
        v34 = RaUnitClaimDeviceSrb(a1, a2);
        goto LABEL_47;
      case 2u:
      case 7u:
      case 9u:
        v34 = RaidUnitSubmitRequest(a1, (__int64)a2);
        v6 = 0;
        goto LABEL_47;
      case 4u:
        *(_BYTE *)(a1 + 692) = 0;
        RaidRestartIoQueue(a1);
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v34 = RaidCompleteRequestEx(a2);
        goto LABEL_47;
      case 6u:
        v34 = RaUnitReleaseDeviceSrb(a1, a2);
        goto LABEL_47;
      case 0x10u:
      case 0x13u:
      case 0x20u:
        v34 = RaidUnitSubmitResetRequest(a1, a2);
        goto LABEL_47;
      case 0x12u:
        v34 = RaUnitResetBusSrb(a1, a2);
        goto LABEL_47;
      case 0x15u:
        v34 = RaUnitFlushQueueSrb(a1, a2);
        goto LABEL_47;
      case 0x17u:
        v34 = RaidCompleteRequestEx(a2);
        goto LABEL_47;
      case 0x18u:
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        *(_BYTE *)(a1 + 693) = 1;
        v34 = RaidCompleteRequestEx(a2);
        goto LABEL_47;
      case 0x19u:
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        *(_BYTE *)(a1 + 693) = 0;
        RaidRestartIoQueue(a1);
        v34 = RaidCompleteRequestEx(a2);
        goto LABEL_47;
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
          v34 = 259;
        }
        else
        {
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          v34 = RaidCompleteRequestEx(a2);
          if ( v34 != 259 )
            goto LABEL_47;
        }
        v6 = 0;
LABEL_47:
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqD(
            WPP_GLOBAL_Control->AttachedDevice,
            23LL,
            &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
            a1,
            a2,
            v34);
        }
        if ( v6 )
          RaUnitReleaseRemoveLock(a1);
        return v34;
      default:
        v34 = RaUnitUnknownSrb(v17, a2);
        goto LABEL_47;
    }
  }
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
  {
    v18 = SecurityContext + 3;
    goto LABEL_25;
  }
  v18 = 0LL;
  if ( BYTE2(v8->SecurityQos) != 40 )
    goto LABEL_25;
  if ( v8->FullCreateOptions )
    goto LABEL_25;
  AccessState = (unsigned int)v8[2].AccessState;
  v20 = 0;
  if ( !AccessState )
    goto LABEL_25;
  while ( 1 )
  {
    v21 = *((unsigned int *)&v8[5].SecurityQos + v20);
    if ( (unsigned int)v21 < 0x80 )
      goto LABEL_101;
    DesiredAccess = v8->DesiredAccess;
    if ( (unsigned int)v21 > (unsigned int)DesiredAccess )
      goto LABEL_101;
    v23 = *(_DWORD *)((char *)&v8->SecurityQos + v21);
    v24 = (__int64)v8 + v21;
    if ( v23 == 64 )
    {
      if ( v21 + 40 <= DesiredAccess )
        goto LABEL_23;
      goto LABEL_101;
    }
    v41 = v23 - 65;
    if ( v41 )
      break;
    if ( v21 + 56 <= DesiredAccess )
    {
LABEL_23:
      if ( *(_BYTE *)(v24 + 10) )
        v18 = (_IO_SECURITY_CONTEXT *)(v24 + 24);
      goto LABEL_25;
    }
LABEL_101:
    if ( ++v20 >= AccessState )
      goto LABEL_25;
  }
  if ( v41 != 1 || v21 + 40 > DesiredAccess )
    goto LABEL_101;
  v18 = (_IO_SECURITY_CONTEXT *)(v24 + 32);
  if ( !*(_DWORD *)(v24 + 12) )
    v18 = 0LL;
LABEL_25:
  if ( v18
    && LOBYTE(v18->SecurityQos) == 27
    && (BYTE4(v18->SecurityQos) & 1) == 0
    && (v42 = RaUnitSwallowStopUnitCommand(a1)) != 0 )
  {
    BYTE3(SecurityContext->SecurityQos) = 1;
    a2->IoStatus.Information = 0LL;
    v43 = RaidCompleteRequestEx(a2);
    RaUnitReleaseRemoveLock(a1);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids, a1, a2);
    }
    return v43;
  }
  else
  {
    if ( StorEtwLoggingEnabled && (byte_1C0062741 & 0x3C) != 0 && ((LOBYTE(v18->SecurityQos) - 8) & 0x5D) == 0 )
    {
      IoGetActivityIdIrp(a2, v44);
      StorEtwIORequestDispatch(a2);
    }
    v25 = a2->Tail.Overlay.CurrentStackLocation;
    v26 = v25->Parameters.Create.SecurityContext;
    v25->Control |= 1u;
    BYTE3(v26->SecurityQos) = 0;
    a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
    v27 = BYTE2(v26->SecurityQos);
    if ( v27 == 40 )
    {
      v28 = v26->FullCreateOptions;
      AccessState_high = (unsigned int)v26[1].SecurityQos;
    }
    else
    {
      AccessState_high = HIDWORD(v26->AccessState);
      v28 = v27;
    }
    if ( (qword_1C00622B0 & 0x20) != 0 )
      DbgLogRequest(
        *(_QWORD *)(a1 + 24),
        3,
        (__int64)a2,
        (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
        0LL,
        0LL,
        0LL);
    v30 = (AccessState_high >> 17) & 4 | 2;
    if ( (AccessState_high & 0x10) == 0 )
      v30 = (AccessState_high >> 17) & 4;
    if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
    {
      if ( (unsigned int)v28 > 0x20 || (v35 = 0x1000D0000LL, !_bittest64(&v35, v28)) )
        v3 = 1;
    }
    v31 = v30 | 1;
    if ( !v3 )
      v31 = v30;
    RaidStartIoPacket(a1, a2, v31);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        22LL,
        &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
        a1,
        a2,
        259);
    }
    return 259LL;
  }
}
