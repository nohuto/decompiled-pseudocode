/*
 * XREFs of RtlIsDosDeviceName_U @ 0x1800292C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800285E0 @ 0x1800285E0 (sub_1800285E0.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlIsDosDeviceName_U(__int64 a1)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx((__int64)v2, a1) < 0 )
    return 0LL;
  else
    return sub_1800285E0((__int64)v2);
}
