/*
 * XREFs of sub_18010EB1C @ 0x18010EB1C
 * Callers:
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     sub_1800318A8 @ 0x1800318A8 (sub_1800318A8.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     TpStartAsyncIoOperation @ 0x1800629D0 (TpStartAsyncIoOperation.c)
 *     TpSetPoolThreadCpuSets @ 0x18010EA70 (TpSetPoolThreadCpuSets.c)
 * Callees:
 *     sub_180063420 @ 0x180063420 (sub_180063420.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 */

__int64 __fastcall sub_18010EB1C(unsigned int *a1)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int16 v4; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // [rsp+38h] [rbp+10h]

  if ( !a1 || (v2 = a1[110]) == 0 )
    v2 = MEMORY[0x7FFE03C0];
  result = a1[106];
  if ( v2 != (_DWORD)result )
  {
    a1[106] = v2;
    v4 = v2 - result;
    _m_prefetchw(a1 + 2);
    v5 = *((_QWORD *)a1 + 1);
    v7 = v5;
    do
    {
      LODWORD(v7) = (unsigned __int16)(v7 ^ (v7 + v4)) ^ (unsigned int)v7;
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 1, v7, v5);
      v7 = v5;
    }
    while ( v6 != v5 );
    ZwSetInformationWorkerFactory();
    return sub_180063420((__int64)a1);
  }
  return result;
}
