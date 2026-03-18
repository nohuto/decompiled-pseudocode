/*
 * XREFs of UserSetMITInputCallbacks @ 0x1C0083D6C
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1C0083BC0 (NtMITSetInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0083E10 (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C008E8BC (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(__int64 a1)
{
  InputExtensibilityCallout *v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // ebx

  v2 = (InputExtensibilityCallout *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x1Bu,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  v3 = *(_QWORD **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( **(_QWORD **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    MicrosoftTelemetryAssertTriggeredMsgKM("How come we already set-up?");
  v4 = v3[5];
  *v3 = a1;
  if ( !v4 )
  {
    InputExtensibilityCallout::CreateCoreMsgPort(v2);
    if ( !v3[5] )
      KeBugCheck(0x164u);
  }
  if ( CInputThread::DeclareThreadAsInput(v2) )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    WPP_RECORDER_SF_(gBaseLog, 2u, 2u, 0x1Cu, (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x1Du,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  return v5;
}
