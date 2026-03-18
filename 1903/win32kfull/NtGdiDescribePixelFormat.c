/*
 * XREFs of NtGdiDescribePixelFormat @ 0x1C02A74F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     GreDescribePixelFormat @ 0x1C02B5058 (GreDescribePixelFormat.c)
 */

__int64 __fastcall NtGdiDescribePixelFormat(HDC a1, __int64 a2, unsigned int a3, char *a4)
{
  __int64 v5; // rdi
  unsigned int v8; // esi
  _BYTE Src[40]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a3;
  memset(Src, 0, sizeof(Src));
  if ( (_DWORD)v5 && !a4 )
    return 0LL;
  if ( (unsigned int)v5 >= 0x28 )
    v5 = 40LL;
  v8 = GreDescribePixelFormat(a1);
  if ( v8 && (_DWORD)v5 )
  {
    if ( (unsigned __int64)&a4[v5] > MmUserProbeAddress || &a4[v5] <= a4 || ((unsigned __int8)a4 & 3) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a4, Src, (unsigned int)v5);
  }
  return v8;
}
