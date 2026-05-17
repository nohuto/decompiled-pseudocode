/*
 * XREFs of sub_1800407A0 @ 0x1800407A0
 * Callers:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 * Callees:
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall sub_1800407A0(int a1, int a2, int a3)
{
  unsigned int v3; // r8d
  __int64 v5; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int16 v6; // [rsp+88h] [rbp+20h] BYREF

  if ( (byte_180166058 & 2) != 0 )
  {
    v3 = sub_180040B50(a1, a2, a3, (unsigned int)&v5, (__int64)&v6);
    if ( v3 && v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_180163B58 + 8LL * v6 - 8) + 32LL), -v5);
  }
  else
  {
    return (unsigned int)sub_180040B50(a1, a2, a3, 0, 0LL);
  }
  return v3;
}
