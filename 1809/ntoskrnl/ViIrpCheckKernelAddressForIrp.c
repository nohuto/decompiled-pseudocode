/*
 * XREFs of ViIrpCheckKernelAddressForIrp @ 0x1409318A0
 * Callers:
 *     VfBeforeCallDriver @ 0x1409310A4 (VfBeforeCallDriver.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140935AD4 (VfTargetDriversIsEnabled.c)
 */

struct _KTHREAD *__fastcall ViIrpCheckKernelAddressForIrp(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *result; // rax
  struct _KPROCESS *Process; // r9

  result = (struct _KTHREAD *)(BugCheckParameter3 - 1);
  if ( BugCheckParameter3 - 1 <= 0x7FFFFFFEFFFDLL )
  {
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
    {
      if ( !a3 )
        return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(
                                    0xC4u,
                                    0xE2uLL,
                                    BugCheckParameter2,
                                    BugCheckParameter3,
                                    0LL);
      result = (struct _KTHREAD *)VfTargetDriversIsEnabled(*(_QWORD *)(a3 + 176));
      if ( (_DWORD)result )
        return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(
                                    0xC4u,
                                    0xE2uLL,
                                    BugCheckParameter2,
                                    BugCheckParameter3,
                                    0LL);
    }
  }
  return result;
}
