/*
 * XREFs of Win32AllocPoolWithPriority @ 0x1C00BD030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32AllocPoolWithPriority(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( (int)IsWin32AllocPoolWithPriorityImplSupported() < 0 )
    return 0LL;
  else
    return Win32AllocPoolWithPriorityImpl(a1, a2, a3, a4);
}
