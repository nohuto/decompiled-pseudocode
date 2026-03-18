/*
 * XREFs of longjmp @ 0x14019E920
 * Callers:
 *     <none>
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x1400BFE30 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1401BFDF0 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
