/*
 * XREFs of MmFreePoolMemory @ 0x14007BD48
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x140008234 (RtlpHpVaMgrCtxFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140008938 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpEnvFreeVA @ 0x14000D2A8 (RtlpHpEnvFreeVA.c)
 *     MmAllocatePoolMemory @ 0x140099080 (MmAllocatePoolMemory.c)
 *     MiFreePoolPages @ 0x140161200 (MiFreePoolPages.c)
 *     MiReturnNonPagedPoolPde @ 0x1401617A0 (MiReturnNonPagedPoolPde.c)
 *     MiFreePagedPoolPages @ 0x140161B50 (MiFreePagedPoolPages.c)
 * Callees:
 *     MiClearNonPagedPtes @ 0x1400282C4 (MiClearNonPagedPtes.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiDeterminePoolType @ 0x14007BF20 (MiDeterminePoolType.c)
 *     MiCountSystemPool @ 0x1401B4F60 (MiCountSystemPool.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // r12
  ULONG_PTR v3; // rbp
  __int64 v4; // r15
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // r14d
  signed int v8; // esi
  int v9; // ebx
  unsigned __int64 v10; // rdi
  __int64 v11; // r15
  _QWORD v13[6]; // [rsp+30h] [rbp-48h] BYREF

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
  LODWORD(v10) = v9;
  if ( (v9 & 0x4000) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      memset(v13, 0, 0x28uLL);
      if ( (v7 & 0x20) != 0 )
        v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
      else
        v10 = (unsigned __int64)&unk_14043C360;
      MiDeleteSystemPagableVm(v10, 0LL, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v4, (v9 & 0x40000000) != 0, v13);
      v11 = v13[3];
      MiReturnCommit(*(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v10 + 174)), v13[3] - v13[1]);
      LOWORD(v10) = v9;
    }
    else
    {
      if ( (v9 & 0x40000000) == 0 && MmProtectFreedNonPagedPool )
        LODWORD(v10) = v9 | 0x40000000;
      v11 = MiClearNonPagedPtes(v3, v4, v10);
    }
    if ( v11 && (unsigned int)ExpHeapBackedPoolEnabledState >= 2 )
      MiCountSystemPool(v7, v11, 0LL);
  }
  if ( (v10 & 0x8000) != 0 )
    MiReturnSystemVa(v3, v2 + v3, v8);
  return 0LL;
}
