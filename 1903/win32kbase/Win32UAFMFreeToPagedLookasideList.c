/*
 * XREFs of Win32UAFMFreeToPagedLookasideList @ 0x1C0120A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32UAFMFreeToPagedLookasideList(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = IsWin32UAFMFreeToPagedLookasideListImplSupported();
  if ( (int)result >= 0 )
    return Win32UAFMFreeToPagedLookasideListImpl(a1, a2, a3);
  return result;
}
