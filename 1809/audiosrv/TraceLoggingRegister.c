/*
 * XREFs of TraceLoggingRegister @ 0x1800514C0
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180051304 (Pdcv2ActivationClientRegister.c)
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
