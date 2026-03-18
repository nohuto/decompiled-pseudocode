/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x140139824
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x14032EFF0 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x1406358EC (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1408FB718 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_1404669A8;
  *((_QWORD *)&v2 + 1) = qword_1404644C8;
  *(_QWORD *)&v3 = qword_140466A38;
  *((_QWORD *)&v3 + 1) = qword_14046A568;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
