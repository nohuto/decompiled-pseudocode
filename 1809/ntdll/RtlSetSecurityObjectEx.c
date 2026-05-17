/*
 * XREFs of RtlSetSecurityObjectEx @ 0x18008C3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18007C610 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObjectEx(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4, __int64 a5, size_t a6)
{
  __int64 v7; // [rsp+28h] [rbp-20h]

  return RtlpSetSecurityObject(a1, a1, a2, a3, a4, v7, a5, a6);
}
