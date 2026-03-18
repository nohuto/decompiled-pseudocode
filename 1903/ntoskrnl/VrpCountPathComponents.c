/*
 * XREFs of VrpCountPathComponents @ 0x140847A0C
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1408436FC (VrpCreateNamespaceNode.c)
 *     VrpPostOpenOrCreate @ 0x1408447F8 (VrpPostOpenOrCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     VrpGetNextToken @ 0x140847A74 (VrpGetNextToken.c)
 */

__int64 __fastcall VrpCountPathComponents(__int64 a1)
{
  unsigned __int16 v2; // bx
  UNICODE_STRING v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)&v4.Length = 0LL;
  v4.Buffer = 0LL;
  v5 = 0LL;
  v2 = 0;
  RtlInitUnicodeString(&v4, 0LL);
  while ( 1 )
  {
    VrpGetNextToken(a1, &v5, &v4);
    if ( !v4.Length )
      break;
    ++v2;
  }
  return v2;
}
