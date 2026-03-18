/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x140292470
 * Callers:
 *     <none>
 * Callees:
 *     BgLibraryEnable @ 0x140169F88 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 (__fastcall *BgkAcquireDisplayOwnership())(_QWORD, _QWORD, _QWORD)
{
  __int64 v0; // rcx
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  char v2; // cl
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[40]; // [rsp+28h] [rbp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( byte_140468265 && !byte_140468250 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(0LL, 1);
  result = qword_140468248;
  if ( qword_140468248 )
  {
    v3 = 0LL;
    LOBYTE(v0) = 1;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140468248(v0, v4, &v3);
    if ( (int)result >= 0 )
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable((__int64)v4, 1);
      v2 = byte_140468265;
      if ( (int)result >= 0 )
        v2 = 1;
      qword_140468240 = 0LL;
      byte_140468265 = v2;
    }
  }
  return result;
}
