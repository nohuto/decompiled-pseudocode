/*
 * XREFs of NtGdiGetTransform @ 0x1C00FE8A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GreGetTransform @ 0x1C01657D4 (GreGetTransform.c)
 */

__int64 __fastcall NtGdiGetTransform(HDC a1, __int64 a2, ULONG64 a3)
{
  __int64 result; // rax

  result = GreGetTransform(a1);
  if ( (_DWORD)result )
  {
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = 0uLL;
    *(_QWORD *)(a3 + 16) = 0LL;
  }
  return result;
}
