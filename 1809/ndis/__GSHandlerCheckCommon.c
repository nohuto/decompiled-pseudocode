/*
 * XREFs of __GSHandlerCheckCommon @ 0x1C0026CBC
 * Callers:
 *     __GSHandlerCheck @ 0x1C0026C98 (__GSHandlerCheck.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 */

__int64 __fastcall _GSHandlerCheckCommon(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // dl

  result = *(_QWORD *)(a2 + 8);
  v3 = *(_BYTE *)(*(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL) + result + 3);
  if ( (v3 & 0xF) != 0 )
    return v3 & 0xF0;
  return result;
}
