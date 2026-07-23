/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x14000FE54
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x140311260 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x1405B2B60 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1408BFC9C (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_14043C048;
  *((_QWORD *)&v2 + 1) = qword_140439B18;
  *(_QWORD *)&v3 = qword_14043C0D8;
  *((_QWORD *)&v3 + 1) = qword_14043F7E8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
