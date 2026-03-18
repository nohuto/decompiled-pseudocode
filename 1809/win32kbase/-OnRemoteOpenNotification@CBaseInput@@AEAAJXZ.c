/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5F00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RimInputTypeToDeviceInputType @ 0x1C004AFEC (RimInputTypeToDeviceInputType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C010CFE0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // r9
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // [rsp+28h] [rbp-20h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  v3 = v2;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM("did you miss adding input type handling?");
      goto LABEL_10;
    }
    v4 = ghRemoteKeyboardChannel;
  }
  else
  {
    v4 = ghRemoteMouseChannel;
  }
  if ( v4 == -1 )
  {
LABEL_10:
    WPP_RECORDER_SF_d(gBaseLog, 4u, 2u, 0xBu, (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids, v3);
    return (unsigned int)-1073741816;
  }
  if ( v4 )
  {
    v7 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
           *((_QWORD *)this + 1),
           (unsigned int)&DestinationString,
           v2,
           v4,
           0,
           0LL);
    v5 = v7;
    if ( v7 < 0 )
    {
      LODWORD(v8) = v7;
      WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0xDu, (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids, v8);
    }
  }
  else
  {
    WPP_RECORDER_SF_(gBaseLog, 2u, 2u, 0xCu, (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids);
    return 0;
  }
  return v5;
}
