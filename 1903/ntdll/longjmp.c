/*
 * XREFs of longjmp @ 0x180090420
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092A68 @ 0x180092A68 (sub_180092A68.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  sub_180092A68();
  sub_1800A31A0(Buf, (unsigned int)Value);
}
