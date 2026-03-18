/*
 * XREFs of Controller_SetLogIdentifier @ 0x1C00628B4
 * Callers:
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     RtlStringCchPrintfA @ 0x1C000B1CC (RtlStringCchPrintfA.c)
 */

__int64 __fastcall Controller_SetLogIdentifier(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-38h]
  int v4; // [rsp+28h] [rbp-30h]
  char pszDest[24]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 72) )
  {
    if ( *(_DWORD *)(a1 + 244) == 1 )
    {
      v4 = *(unsigned __int16 *)(a1 + 252);
      v3 = *(unsigned __int16 *)(a1 + 248);
      RtlStringCchPrintfA(pszDest, 0x18uLL, "%02d %04x %04x", *(unsigned int *)(a1 + 176), v3, v4);
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 0x18uLL, "%02d %s %s", *(unsigned int *)(a1 + 176), a1 + 304, a1 + 309);
    }
    return imp_WppRecorderLogSetIdentifier(WPP_GLOBAL_Control, *(_QWORD *)(a1 + 72), pszDest);
  }
  return result;
}
