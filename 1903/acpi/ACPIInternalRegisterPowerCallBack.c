/*
 * XREFs of ACPIInternalRegisterPowerCallBack @ 0x1C00248B8
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C0007290 (ACPICMButtonStartWorker.c)
 *     ACPIInitStartACPI @ 0x1C00BEF3C (ACPIInitStartACPI.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIInternalRegisterPowerCallBack(
        volatile signed __int64 *CallbackContext,
        PCALLBACK_FUNCTION CallbackFunction)
{
  __int64 result; // rax
  NTSTATUS v5; // edi
  __int64 v6; // rcx
  const char *v7; // rax
  const char *v8; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A8h] [rbp+67h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  result = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (CallbackContext[1] & 0x4000000000000000LL) == 0 )
  {
    _InterlockedOr64(CallbackContext + 1, 0x4000000000000000uLL);
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( v5 < 0 )
    {
      v6 = *((_QWORD *)CallbackContext + 1);
      v7 = (const char *)&unk_1C006FE7D;
      v8 = (const char *)&unk_1C006FE7D;
      if ( (v6 & 0x200000000000LL) != 0 )
      {
        v7 = (const char *)*((_QWORD *)CallbackContext + 70);
        if ( (v6 & 0x400000000000LL) != 0 )
          v8 = (const char *)*((_QWORD *)CallbackContext + 71);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0xBu,
          (__int64)&WPP_c50cf807c7783e6199ec897531ccbc60_Traceguids,
          v5,
          (char)CallbackContext,
          v7,
          v8);
      v5 = 0;
      _InterlockedAnd64(CallbackContext + 1, 0xBFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      ExRegisterCallback(CallbackObject, CallbackFunction, (PVOID)CallbackContext);
    }
    return (unsigned int)v5;
  }
  return result;
}
