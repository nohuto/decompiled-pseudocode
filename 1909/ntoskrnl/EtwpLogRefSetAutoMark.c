/*
 * XREFs of EtwpLogRefSetAutoMark @ 0x1408FB2F8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14008C158 (RtlStringCbCopyA.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwpSetMark @ 0x1408F4E2C (EtwpSetMark.c)
 */

__int64 __fastcall EtwpLogRefSetAutoMark(char a1, __int64 a2)
{
  const char *v2; // r8
  int v6; // [rsp+30h] [rbp-38h] BYREF
  char pszDest[16]; // [rsp+34h] [rbp-34h] BYREF
  __int64 v8; // [rsp+44h] [rbp-24h]

  v8 = 0LL;
  v2 = "RefSetStart::AutoMark";
  v6 = a1 != 0;
  if ( !a1 )
    v2 = "RefSetStop::AutoMark";
  *(_OWORD *)pszDest = 0LL;
  RtlStringCbCopyA(pszDest, 0x16uLL, v2);
  return EtwpSetMark(a2, &v6, (unsigned int)(a1 != 0) + 25, 1, 0);
}
