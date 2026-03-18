/*
 * XREFs of _purecall @ 0x14033BFD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
