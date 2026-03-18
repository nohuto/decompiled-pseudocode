/*
 * XREFs of _purecall @ 0x14033C570
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
