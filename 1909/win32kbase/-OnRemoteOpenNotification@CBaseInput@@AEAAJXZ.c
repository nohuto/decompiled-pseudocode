/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00B7460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RimInputTypeToDeviceInputType @ 0x1C0054E9C (RimInputTypeToDeviceInputType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0135600 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // bl
  __int64 v7; // r9
  int v8; // ebx
  int v10; // edx
  struct _UNICODE_STRING v11; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v11.Length = 0LL;
  v11.Buffer = 0LL;
  RtlInitUnicodeString(&v11, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  v6 = v2;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      goto LABEL_12;
    }
    v7 = ghRemoteKeyboardChannel;
  }
  else
  {
    v7 = ghRemoteMouseChannel;
  }
  if ( v7 != -1 )
  {
    if ( v7 )
    {
      v8 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(*((_QWORD *)this + 1), (unsigned int)&v11, v2, v7, 0, 0LL);
      if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_D((_DWORD)gBaseLog, v10, 3, 13, (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids, v8);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v3, 3, 12, (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids);
      }
      return 0;
    }
    return (unsigned int)v8;
  }
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v3, 3, 11, (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids, v6);
  }
  return (unsigned int)-1073741816;
}
