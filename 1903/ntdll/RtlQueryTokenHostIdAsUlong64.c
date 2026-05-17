/*
 * XREFs of RtlQueryTokenHostIdAsUlong64 @ 0x180081780
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySecurityAttributesToken @ 0x18009F150 (ZwQuerySecurityAttributesToken.c)
 */

__int64 __fastcall RtlQueryTokenHostIdAsUlong64(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _BYTE v4[8]; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v5[4]; // [rsp+38h] [rbp-340h] BYREF
  int v6; // [rsp+3Ch] [rbp-33Ch]
  __int64 v7; // [rsp+40h] [rbp-338h]

  result = ZwQuerySecurityAttributesToken(a1, &unk_180118898, 1LL, v5, 816, v4);
  if ( (int)result >= 0 )
  {
    if ( v6 )
    {
      *a2 = **(_QWORD **)(v7 + 32);
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
