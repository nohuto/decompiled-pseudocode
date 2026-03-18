/*
 * XREFs of Win32UAFMAllocPool @ 0x1C00BD350
 * Callers:
 *     Win32UAFMAllocPoolZInit @ 0x1C00BD4F0 (Win32UAFMAllocPoolZInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32UAFMAllocPool(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (int)IsWin32AllocPoolImplSupported() < 0 )
    return 0LL;
  else
    return Win32UAFMAllocPoolImpl(33LL, a1, a2, a3);
}
