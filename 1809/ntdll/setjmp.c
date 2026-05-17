/*
 * XREFs of setjmp @ 0x1800A5FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl setjmp(jmp_buf Buf)
{
  return _setjmp(Buf);
}
