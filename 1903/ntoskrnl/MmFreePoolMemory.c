/*
 * XREFs of MmFreePoolMemory @ 0x14010E4BC
 * Callers:
 *     MmAllocatePoolMemory @ 0x14002270C (MmAllocatePoolMemory.c)
 *     RtlpHpEnvFreeVA @ 0x14010E478 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x14010E80C (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     MiCountSystemPool @ 0x140023198 (MiCountSystemPool.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiDeterminePoolType @ 0x140061A60 (MiDeterminePoolType.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiReturnSystemVa @ 0x1400AB840 (MiReturnSystemVa.c)
 *     MiClearNonPagedPtes @ 0x14010E6B8 (MiClearNonPagedPtes.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MmFreePoolMemory(unsigned __int64 *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // r13
  ULONG_PTR v3; // r15
  unsigned __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // r8d
  char v7; // r14
  int v8; // esi
  int v9; // edi
  __int64 AnyMultiplexedVm; // rbp
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r12
  _QWORD v14[6]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *a2;
  v3 = *a1;
  v4 = (*a2 >> 12) + ((*a2 & 0xFFF) != 0);
  v5 = MiDeterminePoolType(*a1);
  v7 = v5;
  if ( v5 == 32 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v3, v2, v6);
  if ( v5 == 33 )
    v8 = 1;
  else
    v8 = (v5 != 0) + 5;
  v9 = v6 | 0x4000;
  if ( (v6 & 0x8000) == 0 )
    v9 = v6;
  LODWORD(AnyMultiplexedVm) = v9;
  if ( (v9 & 0x4000) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      memset(v14, 0, sizeof(v14));
      v11 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (v7 & 0x20) != 0 )
        AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 256;
      else
        AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(2);
      MiDeleteSystemPagableVm(AnyMultiplexedVm, 0LL, v11, v4, (v9 & 0x40000000) != 0, v14);
      v12 = v14[3];
      MiReturnCommit(
        *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174)),
        v14[3] - v14[1]);
      LOWORD(AnyMultiplexedVm) = v9;
    }
    else
    {
      if ( (v9 & 0x40000000) == 0 && MmProtectFreedNonPagedPool )
        LODWORD(AnyMultiplexedVm) = v9 | 0x40000000;
      v12 = MiClearNonPagedPtes(v3, v4, (unsigned int)AnyMultiplexedVm, 1LL);
    }
    if ( v12 )
      MiCountSystemPool(v7, v12, 0);
  }
  if ( (AnyMultiplexedVm & 0x8000) != 0 )
  {
    if ( v8 == 1 )
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 1148),
        -(int)(v4 >> 9));
    MiReturnSystemVa(v3, v3 + v2, v8);
  }
  return 0LL;
}
