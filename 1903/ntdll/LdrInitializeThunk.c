/*
 * XREFs of LdrInitializeThunk @ 0x180071DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180071E18 @ 0x180071E18 (sub_180071E18.c)
 *     ZwContinue @ 0x18009CF40 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  sub_180071E18(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
