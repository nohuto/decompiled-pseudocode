/*
 * XREFs of CmpVEExecuteParseLogic @ 0x140641F80
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     CmpIsKcbDiscarded @ 0x1405820B4 (CmpIsKcbDiscarded.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1407F4BE8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F4DB0 (CmpVEExecuteVirtualStoreParseLogic.c)
 */

__int64 __fastcall CmpVEExecuteParseLogic(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        char a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  __int16 v13; // cx
  __int64 v14; // rax
  char v15; // al
  int *v16; // rbx
  char v17; // r15
  bool v18; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  struct _KPROCESS *CurrentThreadProcess; // rax
  PACCESS_TOKEN ClientToken; // rax
  PACCESS_TOKEN PrimaryToken; // rcx
  bool v23; // dl
  bool v24; // di
  int v25; // ecx
  int v26; // ecx
  PVOID TokenInformation[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v28[3]; // [rsp+40h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-50h] BYREF

  if ( !CmpVEEnabled || (a3[6] & 0x10) != 0 || *(_WORD *)(a1 + 58) )
    return 3221226097LL;
  if ( *(PVOID *)(a1 + 24) == CmpMasterHive )
    return 3221226097LL;
  if ( !CmpIsKcbDiscarded(a1) )
  {
    v28[2] = 0LL;
    TokenInformation[1] = 0LL;
    v28[1] = 0LL;
    v28[0] = a1;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 < 2 )
        v14 = v28[v13];
      else
        v14 = *(_QWORD *)(8LL * v13 - 16);
      if ( *(_WORD *)(v14 + 58) && *(_BYTE *)(v14 + 57) == 1 )
      {
LABEL_15:
        v15 = 1;
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v14 + 32) != -1 )
        break;
      if ( --v13 < 0 )
        goto LABEL_15;
    }
    v15 = 0;
LABEL_17:
    if ( !v15 && (*(_DWORD *)(v11 + 4152) & 0x10) == 0 && (*(_DWORD *)(a1 + 176) & 0x2000000) == 0 )
      return 3221226097LL;
  }
  v16 = (int *)(v12 + 16);
  v17 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( v12 == -16 || (*v16 & 1) == 0 )
  {
    if ( !a5 )
      return 3221226097LL;
    if ( a6 )
    {
      p_SubjectContext = a6;
    }
    else
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &SubjectContext);
      p_SubjectContext = &SubjectContext;
      v17 = 1;
    }
    ClientToken = p_SubjectContext->ClientToken;
    LODWORD(TokenInformation[0]) = 0;
    if ( ClientToken )
      PrimaryToken = ClientToken;
    else
      PrimaryToken = p_SubjectContext->PrimaryToken;
    v23 = 0;
    if ( !ClientToken )
    {
      SeQueryInformationToken(PrimaryToken, TokenVirtualizationEnabled, TokenInformation);
      if ( LODWORD(TokenInformation[0]) )
        v23 = 1;
    }
    v24 = !v23;
    if ( v16 )
    {
      v25 = *v16;
      *v16 |= 1u;
      if ( v23 )
        v26 = v25 | 5;
      else
        v26 = v25 | 3;
      *v16 = v26;
    }
    v18 = !v23;
    if ( v17 )
    {
      SeReleaseSubjectContext(&SubjectContext);
      v18 = v24;
    }
  }
  else
  {
    v18 = (*v16 & 2) != 0;
  }
  if ( v18 || (*a3 & 8) != 0 )
    return 3221226097LL;
  if ( (a3[40] & 1) == 0 )
  {
    CmpAttachToRegistryProcess((__int64)(a3 + 42));
    a3[40] |= 1u;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x2000000) != 0 )
    return CmpVEExecuteVirtualStoreParseLogic(a1, a2, a3, a4);
  else
    return CmpVEExecuteRealStoreParseLogic(a1, a2, (_DWORD)a3, a4, (__int64)a6);
}
