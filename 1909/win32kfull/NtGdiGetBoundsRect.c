/*
 * XREFs of NtGdiGetBoundsRect @ 0x1C01277B0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBoundsRect @ 0x1C0127818 (GreGetBoundsRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetBoundsRect(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0uLL;
  result = GreGetBoundsRect(a1, &v4);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v4;
  }
  return result;
}
