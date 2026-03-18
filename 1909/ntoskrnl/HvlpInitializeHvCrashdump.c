/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x14028BE8C
 * Callers:
 *     HvlPhase1Initialize @ 0x14019E708 (HvlPhase1Initialize.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     MmMapIoSpaceEx @ 0x1400F6BD0 (MmMapIoSpaceEx.c)
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14017AAF0 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiRegisterNmiSxCallback @ 0x1402A5CB4 (KiRegisterNmiSxCallback.c)
 *     MmAllocateMappingAddress @ 0x140736640 (MmAllocateMappingAddress.c)
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
  dword_140462E3C = *(_DWORD *)a1;
  qword_140462E40 = *(_QWORD *)(a1 + 8);
  dword_140462E38 = v1;
  qword_140462E30 = v3;
  if ( !v1 || (qword_140462E28 = (void *)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
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
      stru_140462D98.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140462D98,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      HvlpCrashdumpData = KiRegisterNmiSxCallback(HvlCrashdumpCallbackRoutine, 0LL);
      qword_140462E48 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140462E48 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140462DC8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140462DC8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140462D98.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140462D98,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140462DF8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140462DF8,
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
