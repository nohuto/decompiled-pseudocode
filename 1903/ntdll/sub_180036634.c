/*
 * XREFs of sub_180036634 @ 0x180036634
 * Callers:
 *     sub_1800367E0 @ 0x1800367E0 (sub_1800367E0.c)
 *     sub_18004F1D0 @ 0x18004F1D0 (sub_18004F1D0.c)
 *     sub_18010B1BC @ 0x18010B1BC (sub_18010B1BC.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     sub_1801072F0 @ 0x1801072F0 (sub_1801072F0.c)
 */

__int64 __fastcall sub_180036634(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  __int64 result; // rax

  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)a2);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = ~(unsigned __int16)*(_DWORD *)(a2 + 28);
  *(_DWORD *)a2 = -857879331;
  v5 = v4;
  result = *(__int16 *)(a1 + 22);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), -v5);
  if ( (byte_180166058 & 8) != 0 )
    return sub_1801072F0(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
  return result;
}
