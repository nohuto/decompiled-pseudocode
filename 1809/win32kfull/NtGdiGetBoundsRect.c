/*
 * XREFs of NtGdiGetBoundsRect @ 0x1C00A3100
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBoundsRect @ 0x1C00A3168 (GreGetBoundsRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetBoundsRect(HDC a1, _OWORD *a2)
{
  __int64 result; // rax
  struct _POINTL v4[2]; // [rsp+20h] [rbp-28h] BYREF

  v4[0] = 0LL;
  v4[1] = 0LL;
  result = GreGetBoundsRect(a1, v4);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = *(_OWORD *)&v4[0].x;
  }
  return result;
}
