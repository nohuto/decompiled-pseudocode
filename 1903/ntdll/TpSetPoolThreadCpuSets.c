/*
 * XREFs of TpSetPoolThreadCpuSets @ 0x18010EA70
 * Callers:
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlNumberOfSetBits @ 0x1800780E0 (RtlNumberOfSetBits.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     sub_18010EB1C @ 0x18010EB1C (sub_18010EB1C.c)
 */

__int64 __fastcall TpSetPoolThreadCpuSets(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v6; // rsi
  int v7; // r14d
  int v8; // ebp
  int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  v7 = 8 * a3;
  v8 = ZwSetInformationWorkerFactory();
  if ( v8 >= 0 )
  {
    v10 = v7;
    v11 = a2;
    *(_DWORD *)(a1 + 440) = RtlNumberOfSetBits((unsigned int *)&v10);
    sub_18010EB1C(a1);
  }
  RtlReleaseSRWLockExclusive(v6);
  return (unsigned int)v8;
}
