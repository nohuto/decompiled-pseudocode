/*
 * XREFs of _purecall @ 0x14031D2E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
