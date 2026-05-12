/*
 * XREFs of RaidBusEnumeratorProbeLunZero @ 0x1C00136C0
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x1C0013970 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C001374C (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0013BC8 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00147A4 (RaidBusEnumeratorGetUnit.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall RaidBusEnumeratorProbeLunZero(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _BYTE v5[104]; // [rsp+30h] [rbp-68h] BYREF

  memset(v5, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v5);
  if ( (int)result >= 0 )
  {
    RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumProbeLunZeroCallback, a1, a2, (unsigned int)v5, 36);
    RaidBusEnumeratorReleaseUnit(a1, v5);
    return v5[93] == 0 ? 0xC000000E : 0;
  }
  return result;
}
