/*
 * XREFs of _lambda_1862f4448b0c18fc2289e23f0d227847_::_lambda_invoker_cdecl_ @ 0x18008EAC0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_1862f4448b0c18fc2289e23f0d227847_::_lambda_invoker_cdecl_(
        HMONITOR a1,
        HDC a2,
        LPRECT a3,
        _QWORD *a4)
{
  __int64 result; // rax
  _BYTE v7[96]; // [rsp+20h] [rbp-78h] BYREF

  memset_0(v7, 0, sizeof(v7));
  result = GetCurrentDpiInfo(a1, v7);
  if ( (_DWORD)result )
  {
    if ( (v7[92] & 4) != 0 )
      *a4 = a1;
  }
  return result;
}
