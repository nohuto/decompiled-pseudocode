/*
 * XREFs of Win32UAFMAllocPoolWithPriority @ 0x1C00F4940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32UAFMAllocPoolWithPriority(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  if ( (int)IsWin32UAFMAllocPoolWithPriorityImplSupported() < 0 )
    return 0LL;
  else
    return Win32UAFMAllocPoolWithPriorityImpl(a1, a2, a3, a4, a5);
}
