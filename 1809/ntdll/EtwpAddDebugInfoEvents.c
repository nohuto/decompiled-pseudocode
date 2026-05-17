/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x18010FAFC
 * Callers:
 *     EtwpAddProviderTrackingInfo @ 0x180051B90 (EtwpAddProviderTrackingInfo.c)
 * Callees:
 *     EtwpQueryRegString @ 0x1800527DC (EtwpQueryRegString.c)
 *     RtlUnicodeToMultiByteN @ 0x18006E240 (RtlUnicodeToMultiByteN.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     EtwpAddEventToBuffer @ 0x18010FC44 (EtwpAddEventToBuffer.c)
 */

__int64 __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3)
{
  int v4; // edi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 **v8; // rsi
  __int64 *v9; // rbx
  _DWORD v10[4]; // [rsp+40h] [rbp-358h] BYREF
  _BYTE v11[272]; // [rsp+50h] [rbp-348h] BYREF
  unsigned int v12[132]; // [rsp+160h] [rbp-238h] BYREF

  v4 = a3 - *(_DWORD *)(a2 + 48);
  result = EtwpQueryRegString(
             L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",
             L"BuildLabEx",
             v12,
             0x104u);
  if ( (int)result >= 0 )
  {
    result = RtlUnicodeToMultiByteN(v11, 0x104u, 0LL, v12, 0x208u);
    if ( (int)result >= 0 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v11[v7] );
      result = EtwpAddEventToBuffer(a2, 66LL, a2 + 88, v11, (int)v7 + 1, v4, v10);
      if ( (int)result < 0 )
        return result;
      result = (v10[0] + 7) & 0xFFFFFFF8;
      v4 -= result;
    }
  }
  v8 = (__int64 **)(a1 + 464);
  v9 = *v8;
  while ( v9 != (__int64 *)v8 )
  {
    result = EtwpAddEventToBuffer(a2, 64LL, a2 + 88, (char *)v9 + 28, *((_DWORD *)v9 + 5) - 4, v4, v10);
    if ( (int)result < 0 )
      break;
    v9 = (__int64 *)*v9;
    result = (v10[0] + 7) & 0xFFFFFFF8;
    v4 -= result;
  }
  return result;
}
