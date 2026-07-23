/*
 * XREFs of LdrInitializeThunk @ 0x180072040
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180072068 (LdrpInitialize.c)
 *     ZwContinue @ 0x18009D6F0 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
