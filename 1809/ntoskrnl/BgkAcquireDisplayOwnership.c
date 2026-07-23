/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x14027DBE0
 * Callers:
 *     <none>
 * Callees:
 *     BgLibraryEnable @ 0x140159928 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall BgkAcquireDisplayOwnership(__int64 a1))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  char v2; // cl
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[40]; // [rsp+28h] [rbp-40h] BYREF

  if ( byte_14043D7F5 && !byte_14043D7E0 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(0LL, 1);
  result = qword_14043D7D8;
  if ( qword_14043D7D8 )
  {
    v3 = 0LL;
    LOBYTE(a1) = 1;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_14043D7D8(a1, v4, &v3);
    if ( (int)result >= 0 )
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable((__int64)v4, 1);
      v2 = byte_14043D7F5;
      if ( (int)result >= 0 )
        v2 = 1;
      qword_14043D7D0 = 0LL;
      byte_14043D7F5 = v2;
    }
  }
  return result;
}
