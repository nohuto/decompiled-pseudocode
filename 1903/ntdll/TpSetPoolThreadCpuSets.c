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

__int64 __fastcall TpSetPoolThreadCpuSets(__int64 a1, void *a2, int a3)
{
  _RTL_SRWLOCK *v6; // rsi
  ULONG v7; // r14d
  NTSTATUS v8; // ebp
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = (_RTL_SRWLOCK *)(a1 + 72);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v7 = 8 * a3;
  v8 = ZwSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryThreadCpuSets, a2, v7);
  if ( v8 >= 0 )
  {
    BitMapHeader.SizeOfBitMap = v7;
    BitMapHeader.Buffer = (PULONG)a2;
    *(_DWORD *)(a1 + 440) = RtlNumberOfSetBits(&BitMapHeader);
    sub_18010EB1C(a1);
  }
  RtlReleaseSRWLockExclusive(v6);
  return (unsigned int)v8;
}
