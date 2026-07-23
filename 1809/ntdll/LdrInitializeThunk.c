/*
 * XREFs of LdrInitializeThunk @ 0x1800786E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180078708 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1800A0B60 (ZwContinue.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
