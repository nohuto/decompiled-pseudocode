/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0083E10
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C0083D6C (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     CoreMsgCreatePort @ 0x1C0083ED4 (CoreMsgCreatePort.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(InputExtensibilityCallout *this)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  int Port; // eax
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = this;
  v1 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 40LL) )
    MicrosoftTelemetryAssertTriggeredMsgKM("KM CoreMessagingK port already created, why we are trying to do this again?");
  v2 = SeConvertStringSecurityDescriptorToSecurityDescriptor(
         L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
         1LL,
         &P);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = v2;
    WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0xBu, (__int64)&WPP_ae1264a177d634da784129fd655dc111_Traceguids, v9);
  }
  else
  {
    RIMLockExclusive(v1 + 24);
    Port = CoreMsgCreatePort(v4, P, v5, v1 + 40);
    v3 = Port;
    if ( Port < 0 )
    {
      v8 = Port;
      WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0xAu, (__int64)&WPP_ae1264a177d634da784129fd655dc111_Traceguids, v8);
    }
    *(_QWORD *)(v1 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v1 + 24, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v3;
}
