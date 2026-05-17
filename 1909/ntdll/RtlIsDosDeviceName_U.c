/*
 * XREFs of RtlIsDosDeviceName_U @ 0x1800292C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsDosDeviceName_Ustr @ 0x1800285E0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlIsDosDeviceName_U(__int64 a1)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx((__int64)v2, a1) < 0 )
    return 0LL;
  else
    return RtlpIsDosDeviceName_Ustr((__int64)v2);
}
