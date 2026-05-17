/*
 * XREFs of InitSecurityCookie @ 0x1800D24DC
 * Callers:
 *     LdrpInitialize @ 0x1800786F8 (LdrpInitialize.c)
 * Callees:
 *     LdrInitSecurityCookie @ 0x1800271C4 (LdrInitSecurityCookie.c)
 *     LdrpGenRandom @ 0x180027464 (LdrpGenRandom.c)
 *     ZwDelayExecution @ 0x1800A0960 (ZwDelayExecution.c)
 */

__int64 InitSecurityCookie()
{
  __int64 result; // rax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF

  result = (unsigned int)_InterlockedIncrement(&SecurityCookieInitCount);
  if ( (_DWORD)result == 1 )
  {
    v1 = LdrpGenRandom();
    result = LdrInitSecurityCookie(0LL, 0LL, &_security_cookie, v1 ^ (unsigned int)dword_180178388, 0LL);
    _InterlockedOr(v2, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    while ( !SecurityCookieInitialized )
      result = ZwDelayExecution();
  }
  return result;
}
