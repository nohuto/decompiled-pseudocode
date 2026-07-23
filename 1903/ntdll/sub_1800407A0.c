/*
 * XREFs of sub_1800407A0 @ 0x1800407A0
 * Callers:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 * Callees:
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall sub_1800407A0(int a1)
{
  unsigned int v1; // r8d
  __int64 v3; // [rsp+48h] [rbp-20h]
  unsigned __int16 v4; // [rsp+88h] [rbp+20h] BYREF

  if ( (byte_180166058 & 2) != 0 )
  {
    v1 = sub_180040B50(a1, (__int64)&v4);
    if ( v1 && v4 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_180163B58 + 8LL * v4 - 8) + 32LL), -v3);
  }
  else
  {
    return (unsigned int)sub_180040B50(a1, 0LL);
  }
  return v1;
}
