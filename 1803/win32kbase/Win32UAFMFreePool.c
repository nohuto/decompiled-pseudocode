/*
 * XREFs of Win32UAFMFreePool @ 0x1C00BD5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32UAFMFreePool(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = IsWin32UAFMFreePoolImplSupported();
  if ( (int)result >= 0 )
    return Win32UAFMFreePoolImpl(a1, a2);
  return result;
}
