/*
 * XREFs of LdrInitializeThunk @ 0x180071DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180071E18 @ 0x180071E18 (sub_180071E18.c)
 *     ZwContinue @ 0x18009CF40 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __fastcall __noreturn LdrInitializeThunk(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // eax

  sub_180071E18();
  LOBYTE(v2) = 1;
  v3 = ZwContinue(a1, v2);
  RtlRaiseStatus(v3);
}
