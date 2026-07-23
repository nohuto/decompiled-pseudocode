/*
 * XREFs of VerifierCaptureViolationKernelStack @ 0x140931960
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1401BC400 (KeGetCurrentStackPointer.c)
 *     RtlCaptureContext @ 0x1401C5650 (RtlCaptureContext.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

bool __fastcall VerifierCaptureViolationKernelStack(PCONTEXT ContextRecord, _QWORD *a2)
{
  bool result; // al
  signed __int64 v5; // rdi
  size_t v6; // r8
  unsigned __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF
  void *Src; // [rsp+68h] [rbp+20h] BYREF

  result = KeQueryCurrentStackInformation(&v8, (char **)&Src, v7);
  if ( result )
  {
    RtlCaptureContext(ContextRecord);
    v5 = KeGetCurrentStackPointer() - (_BYTE *)Src;
    memset(&KiPreBugcheckStackSaveArea, 0, 0x6000uLL);
    v6 = v7[0] - (_QWORD)Src;
    if ( v7[0] - (unsigned __int64)Src > 0x6000 )
      v6 = 24576LL;
    memmove(&KiPreBugcheckStackSaveArea, Src, v6);
    *a2 = &KiPreBugcheckStackSaveArea;
    ContextRecord->Rsp = (unsigned __int64)&KiPreBugcheckStackSaveArea + v5;
    return 1;
  }
  return result;
}
