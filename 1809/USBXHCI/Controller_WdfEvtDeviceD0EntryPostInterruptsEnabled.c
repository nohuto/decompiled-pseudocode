/*
 * XREFs of Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0010730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00077B4 (Command_D0EntryPostInterruptsEnabled.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     Controller_Start @ 0x1C000DCE8 (Controller_Start.c)
 *     McTemplateK0pqqh @ 0x1C001183C (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C00118D0 (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0012590 (WPP_RECORDER_SF_qdd.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C001D924 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0039E98 (Wmi_CreateControllerCapabilities.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // r14d
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // edi
  unsigned __int16 v12; // r9
  struct _MCGEN_TRACE_CONTEXT *v13; // rcx
  const GUID *v14; // r8
  __int64 v15; // rbp
  unsigned int i; // edi
  unsigned int Arg2[2]; // [rsp+28h] [rbp-30h]
  __int64 Arg3; // [rsp+30h] [rbp-28h]

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3B0)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3104))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v8 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v4 + 404),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 404));
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qdd(*(_QWORD *)(v4 + 72), v6, 4, 71, (__int64)&Context.Logger + 4, a1, a2, *(_DWORD *)(v4 + 352));
  LODWORD(Arg3) = a2;
  WPP_RECORDER_SF_qd(*(_QWORD *)(v4 + 72), 4u, 4u, 0x76u, (__int64)&Context.Logger + 4, v4, Arg3);
  v9 = Controller_Start(v4);
  v11 = v9;
  if ( v9 < 0 )
  {
    v12 = 72;
LABEL_5:
    Arg2[0] = v9;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), 2u, 4u, v12, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
    goto LABEL_13;
  }
  v15 = *(_QWORD *)(v4 + 152);
  for ( i = 1; i <= *(_DWORD *)(v15 + 16); ++i )
  {
    LOBYTE(v10) = 1;
    RootHub_DetectAndAcknowledgePortResume(v15, i, v10);
  }
  v9 = Command_D0EntryPostInterruptsEnabled(*(_QWORD *)(v4 + 144), a2);
  v11 = v9;
  if ( v9 < 0 )
  {
    v12 = 74;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(v4 + 272) & 0x10) != 0 )
  {
    v11 = -1073741637;
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 2u, 4u, 0x4Bu, (__int64)&Context.Logger + 4);
  }
  else
  {
    Wmi_CreateControllerCapabilities(*(_QWORD *)(v4 + 160));
  }
LABEL_13:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(
      v13,
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_COMPLETE,
      v14,
      *(const void **)(v4 + 8),
      a2,
      v8,
      v11);
  return v11;
}
