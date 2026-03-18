/*
 * XREFs of EtwpLogRefSetAutoMark @ 0x1408BEB8C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140726194 (EtwpKernelTraceRundown.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140011EF8 (RtlStringCbCopyA.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     EtwpSetMark @ 0x1408B89AC (EtwpSetMark.c)
 */

__int64 __fastcall EtwpLogRefSetAutoMark(char a1, __int64 a2)
{
  const char *v2; // r8
  int v6; // [rsp+30h] [rbp-38h] BYREF
  char pszDest[28]; // [rsp+34h] [rbp-34h] BYREF

  v2 = "RefSetStart::AutoMark";
  v6 = a1 != 0;
  if ( !a1 )
    v2 = "RefSetStop::AutoMark";
  RtlStringCbCopyA(pszDest, 0x16uLL, v2);
  return EtwpSetMark(a2, &v6, (unsigned int)(a1 != 0) + 25, 1, 0);
}
