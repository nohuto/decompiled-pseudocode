/*
 * XREFs of IoCheckRedirectionTrustLevel @ 0x1401B4210
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenGetRedirectionTrustPolicy @ 0x1401B71B4 (SeTokenGetRedirectionTrustPolicy.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140583AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall IoCheckRedirectionTrustLevel(
        int a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        int a4,
        __int64 a5)
{
  int v5; // ebx
  int v7; // r12d
  char v8; // r14
  char v9; // r15
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rsi
  bool v12; // di
  bool v13; // al
  char v15; // [rsp+30h] [rbp-30h] BYREF
  char v16; // [rsp+31h] [rbp-2Fh] BYREF
  _BYTE v17[6]; // [rsp+32h] [rbp-2Eh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-28h] BYREF
  char v19; // [rsp+98h] [rbp+38h] BYREF

  v5 = 1;
  v19 = 1;
  v7 = 1;
  v15 = 1;
  v8 = 1;
  v9 = 1;
  if ( !a2 || (a4 & 0xFFFFFFFD) == 0 )
    return 0LL;
  if ( !a3 )
    SeCaptureSubjectContext(&SubjectContext);
  p_SubjectContext = &SubjectContext;
  if ( a3 )
    p_SubjectContext = a3;
  SeTokenGetRedirectionTrustPolicy(p_SubjectContext->PrimaryToken, &v16, v17);
  if ( p_SubjectContext->ClientToken && p_SubjectContext->ImpersonationLevel >= SecurityImpersonation )
  {
    SeTokenGetRedirectionTrustPolicy(p_SubjectContext->ClientToken, &v19, &v15);
    v8 = v19;
    v7 = 2;
    v9 = v15;
  }
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectContext);
  v12 = v16 && v8;
  v13 = v17[0] && v9;
  if ( v12 )
  {
    v5 = 2;
  }
  else if ( !v13 )
  {
    return 0LL;
  }
  EtwTimLogRedirectionTrustPolicy(v5, KeGetCurrentThread()->ApcState.Process, a1, a5, v7 == 2);
  if ( !v12 )
    return 0LL;
  return 3221226684LL;
}
