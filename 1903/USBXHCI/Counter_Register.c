/*
 * XREFs of Counter_Register @ 0x1C006A854
 * Callers:
 *     DriverEntry @ 0x1C0064410 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS Counter_Register()
{
  NTSTATUS result; // eax
  __int64 v1; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v2; // [rsp+28h] [rbp-38h]
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+30h] [rbp-30h] BYREF

  result = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) )
  {
    v1 = 2228256LL;
    v2 = L"XHCI Interrupter";
    *(_QWORD *)&Info.Version = 256LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`Ctr_RegisterInterrupter'::`2'::Descriptors;
    *(_QWORD *)&Info.CounterCount = 6LL;
    Info.Name = (const _UNICODE_STRING *)&v1;
    Info.Callback = 0LL;
    Info.CallbackContext = 0LL;
    PcwRegister((PPCW_REGISTRATION *)&WPP_MAIN_CB.DeviceQueue.32, &Info);
    v1 = 2359330LL;
    v2 = L"XHCI CommonBuffer";
    *(_QWORD *)&Info.Version = 256LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`Ctr_RegisterCommonBuffer'::`2'::Descriptors;
    *(_QWORD *)&Info.CounterCount = 4LL;
    Info.Name = (const _UNICODE_STRING *)&v1;
    Info.Callback = 0LL;
    Info.CallbackContext = 0LL;
    PcwRegister((PPCW_REGISTRATION *)&WPP_MAIN_CB.Dpc.DpcListEntry, &Info);
    v1 = 2359330LL;
    v2 = L"XHCI TransferRing";
    *(_QWORD *)&Info.Version = 256LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`Ctr_RegisterTransferRing'::`2'::Descriptors;
    *(_QWORD *)&Info.CounterCount = 7LL;
    Info.Name = (const _UNICODE_STRING *)&v1;
    Info.Callback = 0LL;
    Info.CallbackContext = 0LL;
    return PcwRegister((PPCW_REGISTRATION *)&WPP_MAIN_CB.Dpc, &Info);
  }
  return result;
}
