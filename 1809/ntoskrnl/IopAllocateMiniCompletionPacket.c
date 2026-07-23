/*
 * XREFs of IopAllocateMiniCompletionPacket @ 0x14068BA7C
 * Callers:
 *     IoSetIoCompletionEx @ 0x1400C6270 (IoSetIoCompletionEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDE30 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1400FD668 (IoSetIoCompletionEx2.c)
 *     IoAllocateMiniCompletionPacket @ 0x14068B990 (IoAllocateMiniCompletionPacket.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 */

_BYTE *__fastcall IopAllocateMiniCompletionPacket(char a1, char a2)
{
  char v3; // bl
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  _BYTE *result; // rax
  SIZE_T v7; // rdx
  _GENERAL_LOOKASIDE *L; // rdi

  v3 = a1;
  if ( a1 == 4 )
  {
    v7 = 80LL;
    goto LABEL_5;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[7].P;
  ++P->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !result )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[7].L;
    ++L->TotalAllocates;
    result = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !result )
    {
      ++L->AllocateMisses;
      if ( a2 )
      {
        v3 = 3;
        result = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, 0x38uLL, 0x20706349u);
LABEL_6:
        if ( !result )
          return result;
        goto LABEL_7;
      }
      v7 = 56LL;
LABEL_5:
      result = ExAllocatePoolWithTagPriority(NonPagedPoolNx, v7, 0x20706349u, LowPoolPriority);
      goto LABEL_6;
    }
  }
LABEL_7:
  result[16] = v3;
  return result;
}
