/*
 * XREFs of TraceLoggingRegister @ 0x180027BEC
 * Callers:
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x18000FF2C (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
TLG_STATUS __stdcall TraceLoggingRegister(TraceLoggingHProvider hProvider)
{
  void (__stdcall *v1)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v2; // r8

  return TraceLoggingRegisterEx(hProvider, v1, v2);
}
