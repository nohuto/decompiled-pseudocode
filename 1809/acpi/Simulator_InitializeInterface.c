/*
 * XREFs of Simulator_InitializeInterface @ 0x1C00B7568
 * Callers:
 *     DriverEntry @ 0x1C00B7818 (DriverEntry.c)
 * Callees:
 *     Simulator_UnInitializeInterface @ 0x1C00BCAF0 (Simulator_UnInitializeInterface.c)
 */

__int64 Simulator_InitializeInterface()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  if ( !g_SimulatorCallbackObject )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\AcpiSimulator");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 16;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback((PCALLBACK_OBJECT *)&g_SimulatorCallbackObject, &ObjectAttributes, 0, 1u) >= 0
      && g_SimulatorCallbackObject )
    {
      g_SimulatorCallbackFuncHandle = ExRegisterCallback(
                                        (PCALLBACK_OBJECT)g_SimulatorCallbackObject,
                                        (PCALLBACK_FUNCTION)Simulator_CallbackWorker,
                                        0LL);
      if ( !g_SimulatorCallbackFuncHandle )
        Simulator_UnInitializeInterface();
    }
    else
    {
      g_SimulatorCallbackObject = 0LL;
    }
  }
  return 0LL;
}
