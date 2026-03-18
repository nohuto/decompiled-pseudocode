/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C009B1DC
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C009B114 (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     CoreMsgCreatePort @ 0x1C009B2A0 (CoreMsgCreatePort.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(
        InputExtensibilityCallout *this,
        __int64 a2,
        __int64 a3)
{
  InputExtensibilityCallout *v3; // rbx
  int v4; // edx
  int Port; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = this;
  v3 = gpInputExtensibilityCallout;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
           1LL,
           &P);
  if ( Port < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v4, 3, 11, (__int64)&WPP_cf5cb3b8d2a13ffd15699c2f7b186c2c_Traceguids, Port);
    }
  }
  else
  {
    RIMLockExclusive((__int64)v3 + 8);
    Port = CoreMsgCreatePort(v6, P, v7, (char *)v3 + 24);
    if ( Port < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v8, 3, 10, (__int64)&WPP_cf5cb3b8d2a13ffd15699c2f7b186c2c_Traceguids, Port);
    }
    *((_QWORD *)v3 + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v3 + 8, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Port;
}
