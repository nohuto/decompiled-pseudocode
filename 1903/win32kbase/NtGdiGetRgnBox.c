/*
 * XREFs of NtGdiGetRgnBox @ 0x1C0092460
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x1C0015570 (GreGetRgnBox.c)
 */

__int64 __fastcall NtGdiGetRgnBox(HRGN a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0uLL;
  result = GreGetRgnBox(a1, (__int64)&v4);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v4;
  }
  return result;
}
