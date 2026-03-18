/*
 * XREFs of Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013260
 * Callers:
 *     <none>
 * Callees:
 *     Etw_ControllerRundown @ 0x1C00014AC (Etw_ControllerRundown.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0009608 (Command_D0EntryPostInterruptsEnabled.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     Controller_Start @ 0x1C00103F0 (Controller_Start.c)
 *     McTemplateK0pqqh @ 0x1C001423C (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C00142D0 (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0014F90 (WPP_RECORDER_SF_qdd.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C002127C (RootHub_DetectAndAcknowledgePortResume.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C003F5FC (Wmi_CreateControllerCapabilities.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // r14d
  int v9; // eax
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  const GUID *v11; // r8
  unsigned int v12; // edi
  unsigned __int16 v13; // r9
  __int64 v14; // rbp
  unsigned int i; // edi
  unsigned int Arg2[2]; // [rsp+28h] [rbp-40h]
  __int64 Arg3; // [rsp+30h] [rbp-38h]

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C00563D8)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3104))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v8 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v4 + 468),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 468));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qdd(*(_QWORD *)(v4 + 72), v6, 4, 73, (__int64)&Context.Logger + 4, a1, a2, *(_DWORD *)(v4 + 420));
  }
  if ( *(_DWORD *)(v4 + 464) && *(_QWORD *)(v4 + 832) )
    SleepstudyHelper_ComponentInactive();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(Arg3) = a2;
    WPP_RECORDER_SF_qd(*(_QWORD *)(v4 + 72), 4u, 4u, 0x78u, (__int64)&Context.Logger + 4, v4, Arg3);
  }
  v9 = Controller_Start(v4);
  v12 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v13 = 74;
    goto LABEL_13;
  }
  v14 = *(_QWORD *)(v4 + 152);
  for ( i = 1; i <= *(_DWORD *)(v14 + 16); ++i )
  {
    LOBYTE(v11) = 1;
    RootHub_DetectAndAcknowledgePortResume(v14, i, v11);
  }
  v9 = Command_D0EntryPostInterruptsEnabled(*(_QWORD *)(v4 + 144), a2);
  v12 = v9;
  if ( v9 >= 0 )
  {
    if ( (*(_BYTE *)(v4 + 336) & 0x10) != 0 )
    {
      v12 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 2u, 4u, 0x4Du, (__int64)&Context.Logger + 4);
    }
    else
    {
      Wmi_CreateControllerCapabilities(*(_QWORD *)(v4 + 160));
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 76;
LABEL_13:
    Arg2[0] = v9;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), 2u, 4u, v13, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
  }
LABEL_23:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(
      v10,
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_COMPLETE,
      v11,
      *(const void **)(v4 + 8),
      a2,
      v8,
      v12);
  Etw_ControllerRundown(0LL, v4);
  return v12;
}
