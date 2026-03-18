/*
 * XREFs of longjmp @ 0x14019F040
 * Callers:
 *     <none>
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x14009FCB0 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1401C0970 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
