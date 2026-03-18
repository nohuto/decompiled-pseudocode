/*
 * XREFs of GreGetLockCount @ 0x1C0029F50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

__int64 GreGetLockCount()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    return *(unsigned int *)(result + 104);
  return result;
}
