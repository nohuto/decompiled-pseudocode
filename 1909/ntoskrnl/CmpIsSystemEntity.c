/*
 * XREFs of CmpIsSystemEntity @ 0x1406A4374
 * Callers:
 *     CmDoVirtualTest @ 0x1400F40D0 (CmDoVirtualTest.c)
 *     KCBNeedsVirtualImage @ 0x1400F4110 (KCBNeedsVirtualImage.c)
 *     KCBNeedsVirtualImage_0 @ 0x14027FB64 (KCBNeedsVirtualImage_0.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406A4254 (CmpVEPerformOpenAccessCheck.c)
 *     CmpVEExecuteOpenLogic @ 0x1406B5BF0 (CmpVEExecuteOpenLogic.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14012B4B0 (PsGetCurrentThreadProcess.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0700 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     CmpIsVirtEnabledForSubject @ 0x1406A4420 (CmpIsVirtEnabledForSubject.c)
 */

bool __fastcall CmpIsSystemEntity(char a1, struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext, int *a3)
{
  char v6; // bp
  bool v7; // bl
  int v9; // eax
  int v10; // eax
  struct _KPROCESS *CurrentThreadProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v7 = 1;
  if ( CmpVEEnabled )
  {
    if ( a3 && (*a3 & 1) != 0 )
    {
      return (*a3 & 2) != 0;
    }
    else if ( a1 )
    {
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
        if ( v7 )
          v10 = v9 | 3;
        else
          v10 = v9 | 5;
        *a3 = v10;
      }
      if ( v6 )
        SeReleaseSubjectContext(&SubjectContext);
    }
  }
  return v7;
}
