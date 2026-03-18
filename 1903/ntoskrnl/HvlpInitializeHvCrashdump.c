/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x14028C12C
 * Callers:
 *     HvlPhase1Initialize @ 0x14019DFE8 (HvlPhase1Initialize.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14010DB20 (MmFreeIndependentPages.c)
 *     MmMapIoSpaceEx @ 0x140118AB0 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14017A400 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiRegisterNmiSxCallback @ 0x1402A5F54 (KiRegisterNmiSxCallback.c)
 *     MmAllocateMappingAddress @ 0x1407343E0 (MmAllocateMappingAddress.c)
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
  dword_14046315C = *(_DWORD *)a1;
  qword_140463160 = *(_QWORD *)(a1 + 8);
  dword_140463158 = v1;
  qword_140463150 = v3;
  if ( !v1 || (qword_140463148 = (void *)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
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
      stru_1404630B8.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_1404630B8,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      HvlpCrashdumpData = KiRegisterNmiSxCallback(HvlCrashdumpCallbackRoutine, 0LL);
      qword_140463168 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140463168 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_1404630E8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_1404630E8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_1404630B8.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_1404630B8,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140463118.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140463118,
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
