/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1C0019D3C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012660 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaForwardIrpSynchronous @ 0x1C0012274 (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
 *     RaidAdapterStartMiniport @ 0x1C001909C (RaidAdapterStartMiniport.c)
 *     RaidAdapterInitializeWmi @ 0x1C0019CA4 (RaidAdapterInitializeWmi.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C001A028 (RaidAdapterRegisterDeviceInterface.c)
 *     RaidAdapterCompleteInitialization @ 0x1C001A4B0 (RaidAdapterCompleteInitialization.c)
 *     RaidGetD3ColdInterface @ 0x1C001B854 (RaidGetD3ColdInterface.c)
 *     RaidAdapterConfigureResources @ 0x1C001D45C (RaidAdapterConfigureResources.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001ED44 (RaidAdapterPoFxIdleComponent.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq @ 0x1C003215C (McTemplateK0pqtqq.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0033B14 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0033B34 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C00372B4 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qD @ 0x1C003799C (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0037AC0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0037B10 (WPP_SF_qqD.c)
 *     RaInitializeConfiguration @ 0x1C006F580 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(char *Context, PIRP Irp)
{
  int v4; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  _UNICODE_STRING *FileName; // r15
  int started; // esi
  __int64 v9; // rbp
  __int64 *v10; // r14
  __int64 v11; // r8
  __int64 v12; // rcx
  int (__fastcall *v13)(_QWORD, __int64, _DWORD *); // rax
  int v14; // r8d
  _QWORD *v15; // r9
  __int64 v16; // rax
  unsigned int v17; // r8d
  int *v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  PIO_WORKITEM WorkItem; // rax
  PVOID *v23; // rbx
  __int64 v24; // rdx
  NTSTATUS v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // r8
  KIRQL v28; // bl
  _DWORD v29[4]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int SystemPowerHint; // [rsp+50h] [rbp-38h]
  int SystemPowerResumeLatency; // [rsp+54h] [rbp-34h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids, Context, Irp);
  }
  v4 = *((_DWORD *)Context + 22);
  *((_DWORD *)Context + 22) = 1;
  if ( v4 != 2 && v4 != 8 )
  {
    v17 = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
    return RaidCompleteRequestEx(Irp, 0, v17);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  started = RaInitializeConfiguration(
              (int)Context + 304,
              *((_QWORD *)Context + 66),
              *((_DWORD *)Context + 188),
              *((_DWORD *)Context + 189),
              (Context[110] & 2) != 0);
  if ( started >= 0 )
  {
    started = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
    if ( started >= 0 )
    {
      v9 = *((_QWORD *)Context + 66);
      if ( !v9 )
      {
        started = -1073741810;
        goto LABEL_23;
      }
      started = RaidAdapterConfigureResources(Context, SecurityContext, FileName);
      if ( started < 0 )
        goto LABEL_23;
      if ( *((_DWORD *)Context + 78) == 5 )
        (*((void (__fastcall **)(_QWORD, __int64, char *, _QWORD, int))Context + 82))(
          *((_QWORD *)Context + 76),
          4LL,
          Context + 4816,
          0LL,
          64);
      *((_DWORD *)Context + 522) = 64;
      KeInitializeSpinLock((PKSPIN_LOCK)Context + 264);
      *((_QWORD *)Context + 263) = Context + 2096;
      v10 = (__int64 *)(Context + 5400);
      *((_QWORD *)Context + 262) = Context + 2096;
      *((_QWORD *)Context + 265) = 0LL;
      *((_DWORD *)Context + 536) = 1;
      RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1));
      started = RaidAdapterStartMiniport((__int64)Context, v9, v11);
      if ( started < 0 )
        goto LABEL_23;
      if ( v4 == 8 )
      {
        v28 = KfRaiseIrql(2u);
        RaidResumeAndRestartAdapterQueues(Context);
        KeLowerIrql(v28);
      }
      else
      {
        v12 = *v10;
        if ( *v10 )
        {
          if ( *((_QWORD *)Context + 628) )
          {
            v29[0] = 0;
            v13 = *(int (__fastcall **)(_QWORD, __int64, _DWORD *))(v12 + 40);
            if ( v13 )
            {
              if ( v13(*(_QWORD *)(v12 + 8), 1LL, v29) >= 0 && (unsigned int)(v29[0] - 4) <= 1 )
              {
                *(_DWORD *)(*((_QWORD *)Context + 628) + 20LL) |= 0x40u;
                WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
                *((_QWORD *)Context + 710) = WorkItem;
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
            v15 = (_QWORD *)*((_QWORD *)Context + 628);
            if ( v15 )
            {
              v19 = (int *)v15[1];
              v20 = *v19;
              if ( *v19 == 1 )
              {
                v21 = (__int64)(v19 + 6);
              }
              else
              {
                v21 = (__int64)(v19 + 8);
                if ( v20 != 2 && v20 != 3 )
                  v21 = 8LL;
              }
              if ( (byte_1C0061741 & 1) != 0 )
                McTemplateK0pqtqq(
                  ((unsigned __int8)Context[108] >> 3) & 1,
                  v21,
                  v14,
                  *v15,
                  *((_DWORD *)Context + 14),
                  (Context[108] & 8) != 0,
                  *((_DWORD *)Context + 1260),
                  *(_DWORD *)v21);
            }
          }
          RaidAdapterInitializeWmi((__int64)Context);
          RaidAdapterRegisterDeviceInterface(Context);
          if ( *((_DWORD *)Context + 1394)
            && IoRegisterDeviceInterface(
                 *((PDEVICE_OBJECT *)Context + 4),
                 &GUID_DEVINTERFACE_UNIFIED_ACCESS_RPMB,
                 0LL,
                 (PUNICODE_STRING)(Context + 5560)) >= 0
            && IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5560), 1u) < 0 )
          {
            RtlFreeUnicodeString((PUNICODE_STRING)(Context + 5560));
          }
          if ( IsSystemAoAC != 1 || !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12) )
            goto LABEL_22;
          v23 = (PVOID *)(Context + 5032);
          v25 = PoRegisterPowerSettingCallback(
                  *((PDEVICE_OBJECT *)Context + 1),
                  &GUID_LOW_POWER_EPOCH,
                  (PPOWER_SETTING_CALLBACK)RaidPowerSettingCallback,
                  Context,
                  (PVOID *)Context + 629);
          if ( v25 < 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            {
              WPP_SF_qD(
                WPP_GLOBAL_Control->AttachedDevice,
                18LL,
                &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
                Context,
                v25);
            }
          }
          else
          {
            LOBYTE(v24) = 1;
            started = PoRegisterCoalescingCallback(RaidCoalescingCallback, v24, Context + 5048, Context);
            if ( started >= 0 )
            {
              Context[108] &= ~0x80u;
              Context[109] &= ~1u;
              v29[2] = 1;
              v29[3] = 16;
              SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
              SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint, v26, v27);
              RaCallMiniportAdapterControl((__int64)(Context + 296));
LABEL_22:
              if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 14) )
              {
                PoRegisterPowerSettingCallback(
                  *((PDEVICE_OBJECT *)Context + 1),
                  &GUID_DISK_MAX_POWER,
                  (PPOWER_SETTING_CALLBACK)RaidPowerSettingCallback,
                  Context,
                  (PVOID *)Context + 632);
                started = IoRegisterDeviceInterface(
                            *((PDEVICE_OBJECT *)Context + 4),
                            &GUID_DEVINTERFACE_THERMAL_COOLING,
                            0LL,
                            (PUNICODE_STRING)(Context + 5064));
                if ( started >= 0 )
                {
                  Context[109] |= 8u;
                  IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5064), 1u);
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
                &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
                Context,
                started);
            }
            *((_QWORD *)Context + 631) = 0LL;
            PoUnregisterPowerSettingCallback(*v23);
          }
          *v23 = 0LL;
          started = 0;
          goto LABEL_22;
        }
      }
    }
  }
LABEL_23:
  v16 = *((_QWORD *)Context + 628);
  if ( v16 && (*(_DWORD *)(v16 + 20) & 4) != 0 )
  {
    RaidAdapterPoFxIdleComponent(Context, 0LL, 0LL);
    *(_DWORD *)(*((_QWORD *)Context + 628) + 20LL) &= ~4u;
  }
  *((_DWORD *)Context + 1416) = 0;
  *((_DWORD *)Context + 1417) = 0;
  if ( started < 0 )
    *((_DWORD *)Context + 22) = 2;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      19LL,
      &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
      Context,
      Irp,
      started);
  }
  v17 = started;
  return RaidCompleteRequestEx(Irp, 0, v17);
}
