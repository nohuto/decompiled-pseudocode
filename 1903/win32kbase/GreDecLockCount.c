/*
 * XREFs of GreDecLockCount @ 0x1C0023DF0
 * Callers:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003AE70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 */

__int64 GreDecLockCount()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
    --*(_DWORD *)(result + 104);
  return result;
}
