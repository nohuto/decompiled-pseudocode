/*
 * XREFs of RtlVirtualUnwind_0 @ 0x14000D50A
 * Callers:
 *     __report_gsfailure @ 0x14000D2A0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind_0(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, struct _CONTEXT *ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  return RtlVirtualUnwind(
           HandlerType,
           ImageBase,
           ControlPc,
           FunctionEntry,
           ContextRecord,
           HandlerData,
           EstablisherFrame,
           ContextPointers);
}
