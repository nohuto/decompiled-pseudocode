/*
 * XREFs of xxxUnloadKeyboardLayout @ 0x1C012AE60
 * Callers:
 *     NtUserUnloadKeyboardLayout @ 0x1C00BB190 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     HKLtoPKL @ 0x1C005BC40 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0129C00 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 */

struct tagKL *__fastcall xxxUnloadKeyboardLayout(struct tagKL **a1, __int64 a2)
{
  struct tagKL *result; // rax

  result = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, a2);
  if ( result )
    return (struct tagKL *)xxxInternalUnloadKeyboardLayout(a1, result, 0);
  return result;
}
