/*
 * XREFs of EtwRegisterCounters @ 0x14075DA40
 * Callers:
 *     ExpPcwHostCallback @ 0x14075D810 (ExpPcwHostCallback.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PcwRegister @ 0x14070FFF0 (PcwRegister.c)
 */

NTSTATUS EtwRegisterCounters()
{
  int v1; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v2; // [rsp+28h] [rbp-38h]
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+30h] [rbp-30h] BYREF

  v1 = 3407922;
  v2 = L"Event Tracing for Windows";
  memset(&Info, 0, sizeof(Info));
  Info.Version = 256;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`PcwpRegisterEventTracingCounterSet'::`2'::Descriptors;
  Info.CounterCount = 6;
  Info.Name = (const _UNICODE_STRING *)&v1;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))EtwpEventTracingCounterSetCallback;
  Info.CallbackContext = (void *)1;
  PcwRegister(&PcwpEventTracingCounterSet, &Info);
  v1 = 4456514;
  v2 = L"Event Tracing for Windows Session";
  memset(&Info, 0, sizeof(Info));
  Info.Version = 256;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`PcwpRegisterEventTracingSessionCounterSet'::`2'::Descriptors;
  Info.CounterCount = 5;
  Info.Name = (const _UNICODE_STRING *)&v1;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))EtwpEventTracingCounterSetCallback;
  Info.CallbackContext = (void *)2;
  return PcwRegister(&PcwpEventTracingSessionCounterSet, &Info);
}
