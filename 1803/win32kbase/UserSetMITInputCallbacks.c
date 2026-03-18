/*
 * XREFs of UserSetMITInputCallbacks @ 0x1C013147C
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1C00B49E0 (NtMITSetInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0120A58 (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C01334F0 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(__int64 a1, __int64 a2)
{
  InputExtensibilityCallout *v3; // rcx
  InputExtensibilityCallout *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebx

  v3 = (InputExtensibilityCallout *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x1Bu,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  v4 = gpInputExtensibilityCallout;
  if ( *(_QWORD *)gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, a2);
  v5 = *((_QWORD *)v4 + 5);
  *(_QWORD *)v4 = a1;
  if ( !v5 )
  {
    InputExtensibilityCallout::CreateCoreMsgPort(v3, a2);
    if ( !*((_QWORD *)v4 + 5) )
      KeBugCheck(0x164u);
  }
  if ( CInputThread::DeclareThreadAsInput(v3) )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    WPP_RECORDER_SF_(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      2u,
      2u,
      0x1Cu,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x1Du,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  return v6;
}
