/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x1402921D0
 * Callers:
 *     <none>
 * Callees:
 *     BgLibraryEnable @ 0x140169A28 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 (__fastcall *BgkAcquireDisplayOwnership())(_QWORD, _QWORD, _QWORD)
{
  __int64 v0; // rcx
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  char v2; // cl
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[40]; // [rsp+28h] [rbp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( byte_140467FA5 && !byte_140467F90 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(0LL, 1);
  result = qword_140467F88;
  if ( qword_140467F88 )
  {
    v3 = 0LL;
    LOBYTE(v0) = 1;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140467F88(v0, v4, &v3);
    if ( (int)result >= 0 )
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable((__int64)v4, 1);
      v2 = byte_140467FA5;
      if ( (int)result >= 0 )
        v2 = 1;
      qword_140467F80 = 0LL;
      byte_140467FA5 = v2;
    }
  }
  return result;
}
