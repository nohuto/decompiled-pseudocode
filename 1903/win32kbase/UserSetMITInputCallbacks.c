/*
 * XREFs of UserSetMITInputCallbacks @ 0x1C00AA024
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1C00A9D80 (NtMITSetInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C0094D50 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C00AA0EC (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(InputExtensibilityCallout *a1, __int64 a2, __int64 a3)
{
  InputExtensibilityCallout *v3; // rdi
  InputExtensibilityCallout *v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // ebx

  v3 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (InputExtensibilityCallout *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        2,
        27,
        (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
    }
  }
  v4 = gpInputExtensibilityCallout;
  if ( *(_QWORD *)gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *((_QWORD *)v4 + 3);
  *(_QWORD *)v4 = v3;
  if ( !v5 )
  {
    InputExtensibilityCallout::CreateCoreMsgPort(a1);
    if ( !*((_QWORD *)v4 + 3) )
      KeBugCheck(0x164u);
  }
  if ( CInputThread::DeclareThreadAsInput(a1) )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v7;
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v6, 3, 28, (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      2,
      29,
      (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
  }
  return v7;
}
