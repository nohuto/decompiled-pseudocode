/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1C001B7F8
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0016FAC (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C0016EF0 (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterInitializeWmi @ 0x1C001B760 (RaidAdapterInitializeWmi.c)
 *     RaidAdapterConfigureResources @ 0x1C001BAEC (RaidAdapterConfigureResources.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C001C34C (RaidAdapterRegisterDeviceInterface.c)
 *     RaidGetD3ColdInterface @ 0x1C001D4D0 (RaidGetD3ColdInterface.c)
 *     RaidAdapterCompleteInitialization @ 0x1C001E9EC (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterStartMiniport @ 0x1C001F31C (RaidAdapterStartMiniport.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002255C (RaidAdapterPoFxIdleComponent.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq @ 0x1C00368DC (McTemplateK0pqtqq.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0037F2C (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0037F4C (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B438 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qD @ 0x1C003BAD4 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003BBF8 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 *     RaInitializeConfiguration @ 0x1C006C2C4 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(char *Context, PIRP Irp)
{
  int v4; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  _UNICODE_STRING *FileName; // r12
  int started; // esi
  __int64 v9; // rbp
  __int64 *v10; // r14
  __int64 v11; // rcx
  int (__fastcall *v12)(_QWORD, __int64, int *); // rax
  int v13; // r8d
  _QWORD *v14; // r9
  __int64 v15; // rax
  unsigned int v16; // r8d
  int *v18; // rax
  int v19; // ecx
  __int64 v20; // rdx
  PIO_WORKITEM WorkItem; // rax
  PVOID *v22; // rbx
  __int64 v23; // rdx
  NTSTATUS v24; // r8d
  KIRQL v25; // bl
  int v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-40h]
  __int64 v28; // [rsp+50h] [rbp-38h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_2427d071e20036a288b852fd33055616_Traceguids, Context, Irp);
  }
  v4 = *((_DWORD *)Context + 22);
  *((_DWORD *)Context + 22) = 1;
  if ( v4 != 2 && v4 != 8 )
  {
    v16 = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
    return RaidCompleteRequestEx(Irp, 0, v16);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  started = RaInitializeConfiguration(
              (int)Context + 320,
              *((_QWORD *)Context + 68),
              *((_DWORD *)Context + 194),
              *((_DWORD *)Context + 195),
              (Context[110] & 2) != 0);
  if ( started >= 0 )
  {
    started = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
    if ( started >= 0 )
    {
      v9 = *((_QWORD *)Context + 68);
      if ( !v9 )
      {
        started = -1073741810;
        goto LABEL_23;
      }
      started = RaidAdapterConfigureResources(Context, SecurityContext, FileName);
      if ( started < 0 )
        goto LABEL_23;
      if ( *((_DWORD *)Context + 82) == 5 )
        (*((void (__fastcall **)(_QWORD, __int64, char *, _QWORD, int))Context + 85))(
          *((_QWORD *)Context + 79),
          4LL,
          Context + 4892,
          0LL,
          64);
      *((_DWORD *)Context + 538) = 64;
      KeInitializeSpinLock((PKSPIN_LOCK)Context + 272);
      *((_QWORD *)Context + 271) = Context + 2160;
      v10 = (__int64 *)(Context + 5536);
      *((_QWORD *)Context + 270) = Context + 2160;
      *((_QWORD *)Context + 273) = 0LL;
      *((_DWORD *)Context + 552) = 1;
      RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1));
      started = RaidAdapterStartMiniport(Context, v9);
      if ( started < 0 )
        goto LABEL_23;
      if ( v4 == 8 )
      {
        v25 = KfRaiseIrql(2u);
        RaidResumeAndRestartAdapterQueues(Context);
        KeLowerIrql(v25);
      }
      else
      {
        v11 = *v10;
        if ( *v10 )
        {
          if ( *((_QWORD *)Context + 644) )
          {
            v26 = 0;
            v12 = *(int (__fastcall **)(_QWORD, __int64, int *))(v11 + 40);
            if ( v12 )
            {
              if ( v12(*(_QWORD *)(v11 + 8), 1LL, &v26) >= 0 && (unsigned int)(v26 - 4) <= 1 )
              {
                *(_DWORD *)(*((_QWORD *)Context + 644) + 20LL) |= 0x40u;
                WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
                *((_QWORD *)Context + 730) = WorkItem;
                if ( !WorkItem )
                {
                  started = -1073741670;
                  goto LABEL_23;
                }
              }
            }
          }
        }
        started = RaidAdapterCompleteInitialization(Context);
        if ( started >= 0 )
        {
          if ( StorEtwLoggingEnabled )
          {
            v14 = (_QWORD *)*((_QWORD *)Context + 644);
            if ( v14 )
            {
              v18 = (int *)v14[1];
              v19 = *v18;
              if ( *v18 == 1 )
              {
                v20 = (__int64)(v18 + 6);
              }
              else
              {
                v20 = (__int64)(v18 + 8);
                if ( v19 != 2 && v19 != 3 )
                  v20 = 8LL;
              }
              if ( (byte_1C00617E2 & 0x10) != 0 )
                McTemplateK0pqtqq(
                  ((unsigned __int8)Context[108] >> 3) & 1,
                  v20,
                  v13,
                  *v14,
                  *((_DWORD *)Context + 14),
                  (Context[108] & 8) != 0,
                  *((_DWORD *)Context + 1292),
                  *(_DWORD *)v20);
            }
          }
          RaidAdapterInitializeWmi((__int64)Context);
          RaidAdapterRegisterDeviceInterface(Context);
          if ( *((_DWORD *)Context + 1428)
            && IoRegisterDeviceInterface(
                 *((PDEVICE_OBJECT *)Context + 4),
                 &GUID_DEVINTERFACE_UNIFIED_ACCESS_RPMB,
                 0LL,
                 (PUNICODE_STRING)Context + 356) >= 0
            && IoSetDeviceInterfaceState((PUNICODE_STRING)Context + 356, 1u) < 0 )
          {
            RtlFreeUnicodeString((PUNICODE_STRING)Context + 356);
          }
          if ( IsSystemAoAC != 1 || !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12) )
            goto LABEL_22;
          v22 = (PVOID *)(Context + 5160);
          v24 = PoRegisterPowerSettingCallback(
                  *((PDEVICE_OBJECT *)Context + 1),
                  &GUID_LOW_POWER_EPOCH,
                  RaidPowerSettingCallback,
                  Context,
                  (PVOID *)Context + 645);
          if ( v24 < 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            {
              WPP_SF_qD(
                WPP_GLOBAL_Control->AttachedDevice,
                18LL,
                &WPP_2427d071e20036a288b852fd33055616_Traceguids,
                Context,
                v24);
            }
          }
          else
          {
            LOBYTE(v23) = 1;
            started = PoRegisterCoalescingCallback(RaidCoalescingCallback, v23, Context + 5176, Context);
            if ( started >= 0 )
            {
              Context[108] &= ~0x80u;
              Context[109] &= ~1u;
              v27 = 0x1000000001LL;
              v28 = 0LL;
              LODWORD(v28) = RaidAdapterGetSystemPowerHint(Context);
              HIDWORD(v28) = RaidAdapterGetSystemPowerResumeLatency((unsigned int)v28);
              RaCallMiniportAdapterControl((__int64)(Context + 312));
LABEL_22:
              if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 14) )
              {
                PoRegisterPowerSettingCallback(
                  *((PDEVICE_OBJECT *)Context + 1),
                  &GUID_DISK_MAX_POWER,
                  RaidPowerSettingCallback,
                  Context,
                  (PVOID *)Context + 648);
                started = IoRegisterDeviceInterface(
                            *((PDEVICE_OBJECT *)Context + 4),
                            &GUID_DEVINTERFACE_THERMAL_COOLING,
                            0LL,
                            (PUNICODE_STRING)(Context + 5192));
                if ( started >= 0 )
                {
                  Context[109] |= 8u;
                  IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5192), 1u);
                }
              }
              goto LABEL_23;
            }
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            {
              WPP_SF_qD(
                WPP_GLOBAL_Control->AttachedDevice,
                17LL,
                &WPP_2427d071e20036a288b852fd33055616_Traceguids,
                Context,
                started);
            }
            *((_QWORD *)Context + 647) = 0LL;
            PoUnregisterPowerSettingCallback(*v22);
          }
          *v22 = 0LL;
          started = 0;
          goto LABEL_22;
        }
      }
    }
  }
LABEL_23:
  v15 = *((_QWORD *)Context + 644);
  if ( v15 && (*(_DWORD *)(v15 + 20) & 4) != 0 )
  {
    RaidAdapterPoFxIdleComponent(Context, 0LL, 0LL);
    *(_DWORD *)(*((_QWORD *)Context + 644) + 20LL) &= ~4u;
  }
  *((_DWORD *)Context + 1454) = 0;
  *((_DWORD *)Context + 1455) = 0;
  *((_DWORD *)Context + 1456) = 0;
  if ( started < 0 )
    *((_DWORD *)Context + 22) = 2;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      19LL,
      &WPP_2427d071e20036a288b852fd33055616_Traceguids,
      Context,
      Irp,
      started);
  }
  v16 = started;
  return RaidCompleteRequestEx(Irp, 0, v16);
}
