/*
 * XREFs of Win32UAFMAllocPoolNonPaged @ 0x1C00BD3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32UAFMAllocPoolNonPaged(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (int)IsWin32AllocPoolImplSupported() < 0 )
    return 0LL;
  else
    return Win32UAFMAllocPoolImpl(544LL, a1, a2, a3);
}
