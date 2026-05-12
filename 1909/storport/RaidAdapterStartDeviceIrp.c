/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1C001C234
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00126FC (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B64 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C001831C (RaForwardIrpSynchronous.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C001A584 (RaidAdapterRegisterDeviceInterface.c)
 *     RaidAdapterCompleteInitialization @ 0x1C001AC2C (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterConfigureResources @ 0x1C001C010 (RaidAdapterConfigureResources.c)
 *     RaidAdapterInitializeWmi @ 0x1C001C520 (RaidAdapterInitializeWmi.c)
 *     RaidAdapterStartMiniport @ 0x1C001C5B8 (RaidAdapterStartMiniport.c)
 *     RaidGetD3ColdInterface @ 0x1C001D5C0 (RaidGetD3ColdInterface.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001FB94 (RaidAdapterPoFxIdleComponent.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq @ 0x1C003354C (McTemplateK0pqtqq.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0034F04 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0034F24 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C00386A4 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qD @ 0x1C0038D8C (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0038EB0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0038F00 (WPP_SF_qqD.c)
 *     RaInitializeConfiguration @ 0x1C006EF54 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(char *Context, PIRP Irp)
{
  int v4; // ebx
  int started; // esi
  __int64 v6; // rbp
  __int64 *v7; // r14
  __int64 v8; // rcx
  int (__fastcall *v9)(_QWORD, __int64, _DWORD *); // rax
  int v10; // r8d
  _QWORD *v11; // r9
  __int64 v12; // rax
  unsigned int v13; // r8d
  int *v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  PIO_WORKITEM WorkItem; // rax
  PVOID *v19; // rbx
  __int64 v20; // rdx
  NTSTATUS v21; // r8d
  KIRQL v22; // bl
  _DWORD v23[4]; // [rsp+40h] [rbp-48h] BYREF
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
    v13 = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
    return RaidCompleteRequestEx(Irp, 0, v13);
  }
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
      v6 = *((_QWORD *)Context + 66);
      if ( !v6 )
      {
        started = -1073741810;
        goto LABEL_23;
      }
      started = RaidAdapterConfigureResources((__int64)Context);
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
      v7 = (__int64 *)(Context + 5400);
      *((_QWORD *)Context + 262) = Context + 2096;
      *((_QWORD *)Context + 265) = 0LL;
      *((_DWORD *)Context + 536) = 1;
      RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1));
      started = RaidAdapterStartMiniport(Context, v6);
      if ( started < 0 )
        goto LABEL_23;
      if ( v4 == 8 )
      {
        v22 = KfRaiseIrql(2u);
        RaidResumeAndRestartAdapterQueues(Context);
        KeLowerIrql(v22);
      }
      else
      {
        v8 = *v7;
        if ( *v7 )
        {
          if ( *((_QWORD *)Context + 628) )
          {
            v23[0] = 0;
            v9 = *(int (__fastcall **)(_QWORD, __int64, _DWORD *))(v8 + 40);
            if ( v9 )
            {
              if ( v9(*(_QWORD *)(v8 + 8), 1LL, v23) >= 0 && (unsigned int)(v23[0] - 4) <= 1 )
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
        started = RaidAdapterCompleteInitialization((__int64)Context);
        if ( started >= 0 )
        {
          if ( StorEtwLoggingEnabled )
          {
            v11 = (_QWORD *)*((_QWORD *)Context + 628);
            if ( v11 )
            {
              v15 = (int *)v11[1];
              v16 = *v15;
              if ( *v15 == 1 )
              {
                v17 = (__int64)(v15 + 6);
              }
              else
              {
                v17 = (__int64)(v15 + 8);
                if ( v16 != 2 && v16 != 3 )
                  v17 = 8LL;
              }
              if ( (byte_1C0062741 & 1) != 0 )
                McTemplateK0pqtqq(
                  ((unsigned __int8)Context[108] >> 3) & 1,
                  v17,
                  v10,
                  *v11,
                  *((_DWORD *)Context + 14),
                  (Context[108] & 8) != 0,
                  *((_DWORD *)Context + 1260),
                  *(_DWORD *)v17);
            }
          }
          RaidAdapterInitializeWmi(Context);
          RaidAdapterRegisterDeviceInterface((__int64)Context);
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
          v19 = (PVOID *)(Context + 5032);
          v21 = PoRegisterPowerSettingCallback(
                  *((PDEVICE_OBJECT *)Context + 1),
                  &GUID_LOW_POWER_EPOCH,
                  RaidPowerSettingCallback,
                  Context,
                  (PVOID *)Context + 629);
          if ( v21 < 0 )
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
                v21);
            }
          }
          else
          {
            LOBYTE(v20) = 1;
            started = PoRegisterCoalescingCallback(RaidCoalescingCallback, v20, Context + 5048, Context);
            if ( started >= 0 )
            {
              Context[108] &= ~0x80u;
              Context[109] &= ~1u;
              v23[2] = 1;
              v23[3] = 16;
              SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
              SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
              RaCallMiniportAdapterControl((__int64)(Context + 296));
LABEL_22:
              if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 14) )
              {
                PoRegisterPowerSettingCallback(
                  *((PDEVICE_OBJECT *)Context + 1),
                  &GUID_DISK_MAX_POWER,
                  RaidPowerSettingCallback,
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
            PoUnregisterPowerSettingCallback(*v19);
          }
          *v19 = 0LL;
          started = 0;
          goto LABEL_22;
        }
      }
    }
  }
LABEL_23:
  v12 = *((_QWORD *)Context + 628);
  if ( v12 && (*(_DWORD *)(v12 + 20) & 4) != 0 )
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
  v13 = started;
  return RaidCompleteRequestEx(Irp, 0, v13);
}
