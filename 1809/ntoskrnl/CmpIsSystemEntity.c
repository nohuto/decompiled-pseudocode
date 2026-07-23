/*
 * XREFs of CmpIsSystemEntity @ 0x1406B3274
 * Callers:
 *     CmDoVirtualTest @ 0x14012959C (CmDoVirtualTest.c)
 *     KCBNeedsVirtualImage @ 0x1401295DC (KCBNeedsVirtualImage.c)
 *     KCBNeedsVirtualImage_0 @ 0x14026C5AC (KCBNeedsVirtualImage_0.c)
 *     CmpVEPerformOpenAccessCheck @ 0x140597A64 (CmpVEPerformOpenAccessCheck.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpVEExecuteOpenLogic @ 0x14063D020 (CmpVEExecuteOpenLogic.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     CmpIsVirtEnabledForSubject @ 0x1406B332C (CmpIsVirtEnabledForSubject.c)
 */

bool __fastcall CmpIsSystemEntity(char a1, struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext, int *a3)
{
  char v6; // bp
  bool v7; // bl
  int v9; // ecx
  int v10; // ecx
  struct _KPROCESS *CurrentThreadProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !CmpVEEnabled )
    return 1;
  if ( a3 && (*a3 & 1) != 0 )
    return (*a3 & 2) != 0;
  if ( !a1 )
    return 1;
  if ( !p_SubjectContext )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &SubjectContext);
    v6 = 1;
    p_SubjectContext = &SubjectContext;
  }
  v7 = (unsigned __int8)CmpIsVirtEnabledForSubject(p_SubjectContext) == 0;
  if ( a3 )
  {
    v9 = *a3;
    *a3 |= 1u;
    if ( v7 )
      v10 = v9 | 3;
    else
      v10 = v9 | 5;
    *a3 = v10;
  }
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  return v7;
}
