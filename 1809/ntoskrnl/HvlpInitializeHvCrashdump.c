/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x140277D5C
 * Callers:
 *     HvlPhase1Initialize @ 0x1401939D4 (HvlPhase1Initialize.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140001010 (MmFreeIndependentPages.c)
 *     MmMapIoSpaceEx @ 0x1400E5D40 (MmMapIoSpaceEx.c)
 *     MmAllocateIndependentPagesEx @ 0x140108F9C (MmAllocateIndependentPagesEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140173240 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     KiRegisterNmiSxCallback @ 0x14028F454 (KiRegisterNmiSxCallback.c)
 *     MmAllocateMappingAddress @ 0x1406F9300 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // r9
  void *IndependentPages; // rax

  v1 = *(_DWORD *)(a1 + 4);
  v2 = -1073741823;
  v3 = *(_QWORD *)(a1 + 16);
  dword_14043751C = *(_DWORD *)a1;
  qword_140437520 = *(_QWORD *)(a1 + 8);
  dword_140437518 = v1;
  qword_140437510 = v3;
  if ( !v1 || (qword_140437508 = (void *)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
  {
    IndependentPages = (void *)MmAllocateIndependentPagesEx(0x1000uLL, -1, 0LL, 0);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    if ( !VslVsmEnabled )
    {
      CallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &CallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlBugCheckCallbackRoutine,
              KbCallbackSecondaryDumpData,
              (PUCHAR)"HypervisorCrashdumpArea") )
        goto LABEL_16;
      stru_140437478.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140437478,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      HvlpCrashdumpData = KiRegisterNmiSxCallback(HvlCrashdumpCallbackRoutine, 0LL);
      qword_140437528 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140437528 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_1404374A8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_1404374A8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140437478.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140437478,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_1404374D8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_1404374D8,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          HvlpCrashdumpData = KiRegisterNmiSxCallback(HvlSkCrashdumpCallbackRoutine, 0LL);
          return 0;
        }
      }
    }
  }
LABEL_16:
  if ( HvlpFallbackScratchPage )
  {
    MmFreeIndependentPages((unsigned __int64)HvlpFallbackScratchPage, 0x1000uLL);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}
