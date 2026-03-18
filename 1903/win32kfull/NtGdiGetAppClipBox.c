/*
 * XREFs of NtGdiGetAppClipBox @ 0x1C0059090
 * Callers:
 *     <none>
 * Callees:
 *     GreGetAppClipBox @ 0x1C00590F8 (GreGetAppClipBox.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetAppClipBox(HDC a1, _OWORD *a2)
{
  __int64 result; // rax

  result = GreGetAppClipBox(a1);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = 0uLL;
  }
  return result;
}
