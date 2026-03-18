/*
 * XREFs of _GetDC @ 0x1C0098810
 * Callers:
 *     <none>
 * Callees:
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetDC(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( a1 )
  {
    v1 = 0x10000LL;
    return GetDCEx(a1, 0LL, v1);
  }
  result = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448);
  if ( result )
  {
    v1 = 3LL;
    a1 = *(_QWORD **)(*(_QWORD *)(result + 8) + 24LL);
    return GetDCEx(a1, 0LL, v1);
  }
  return result;
}
