/*
 * XREFs of VerifierCaptureViolationKernelStack @ 0x14096F1E0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14001B7E0 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1401C4200 (KeGetCurrentStackPointer.c)
 *     RtlCaptureContext @ 0x1401CBB10 (RtlCaptureContext.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall VerifierCaptureViolationKernelStack(PCONTEXT ContextRecord, _QWORD *a2)
{
  char result; // al
  signed __int64 v5; // rdi
  size_t v6; // r8
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  void *Src; // [rsp+68h] [rbp+20h] BYREF

  result = KeQueryCurrentStackInformation((__int64)&v8, (__int64)&Src, (__int64)v7);
  if ( result )
  {
    RtlCaptureContext(ContextRecord);
    v5 = KeGetCurrentStackPointer() - (_BYTE *)Src;
    memset(&KiPreBugcheckStackSaveArea, 0, 0x6000uLL);
    v6 = v7[0] - (_QWORD)Src;
    if ( v7[0] - (_QWORD)Src > 0x6000uLL )
      v6 = 24576LL;
    memmove(&KiPreBugcheckStackSaveArea, Src, v6);
    *a2 = &KiPreBugcheckStackSaveArea;
    ContextRecord->Rsp = (unsigned __int64)&KiPreBugcheckStackSaveArea + v5;
    return 1;
  }
  return result;
}
