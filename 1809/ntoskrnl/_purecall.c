/*
 * XREFs of _purecall @ 0x14031D4D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
