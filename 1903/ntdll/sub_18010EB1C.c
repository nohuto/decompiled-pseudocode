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

__int64 __fastcall sub_18010EB1C(__int64 a1)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int16 v4; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  bool v7; // cf
  int v8; // r8d
  void *v9; // rcx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v11; // [rsp+38h] [rbp+10h]

  if ( !a1 || (v2 = *(_DWORD *)(a1 + 440)) == 0 )
    v2 = MEMORY[0x7FFE03C0];
  result = *(unsigned int *)(a1 + 424);
  if ( v2 != (_DWORD)result )
  {
    *(_DWORD *)(a1 + 424) = v2;
    v4 = v2 - result;
    _m_prefetchw((const void *)(a1 + 8));
    v5 = *(_QWORD *)(a1 + 8);
    v11 = v5;
    do
    {
      LODWORD(v11) = (unsigned __int16)(v11 ^ (v11 + v4)) ^ (unsigned int)v11;
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v11, v5);
      v11 = v5;
    }
    while ( v6 != v5 );
    v7 = v2 < 4;
    v8 = v2 + 1;
    if ( v7 )
      v8 = 4;
    v9 = *(void **)(a1 + 56);
    WorkerFactoryInformation = v8;
    ZwSetInformationWorkerFactory(v9, WorkerFactoryAdjustThreadGoal, &WorkerFactoryInformation, 4u);
    return sub_180063420(a1);
  }
  return result;
}
