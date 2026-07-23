/*
 * XREFs of longjmp @ 0x180093B80
 * Callers:
 *     <none>
 * Callees:
 *     __except_validate_jump_buffer @ 0x1800961D8 (__except_validate_jump_buffer.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  _except_validate_jump_buffer();
  _longjmp_internal(Buf, (unsigned int)Value);
}
