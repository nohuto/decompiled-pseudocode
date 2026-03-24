/*
 * XREFs of CmpIsSystemEntity @ 0x1406B1FD4
 * Callers:
 *     CmDoVirtualTest @ 0x1401294CC (CmDoVirtualTest.c)
 *     KCBNeedsVirtualImage @ 0x14012950C (KCBNeedsVirtualImage.c)
 *     KCBNeedsVirtualImage_0 @ 0x14026C3BC (KCBNeedsVirtualImage_0.c)
 *     CmpVEPerformOpenAccessCheck @ 0x140596A64 (CmpVEPerformOpenAccessCheck.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpVEExecuteOpenLogic @ 0x14063C000 (CmpVEExecuteOpenLogic.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405E07F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     CmpIsVirtEnabledForSubject @ 0x1406B208C (CmpIsVirtEnabledForSubject.c)
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
