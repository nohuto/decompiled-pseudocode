/*
 * XREFs of xxxUnloadKeyboardLayout @ 0x1C014E530
 * Callers:
 *     NtUserUnloadKeyboardLayout @ 0x1C00F31C0 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0063DFC (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     HKLtoPKL @ 0x1C0065680 (HKLtoPKL.c)
 */

struct tagKL *__fastcall xxxUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, __int64 a2)
{
  struct tagKL *result; // rax

  result = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, a2);
  if ( result )
    return (struct tagKL *)xxxInternalUnloadKeyboardLayout(a1, result, 0);
  return result;
}
