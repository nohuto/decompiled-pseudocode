/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x140667C28
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x140666F54 (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     SeQueryUserSidToken @ 0x1406431CC (SeQueryUserSidToken.c)
 *     _PnpValidateObjectName @ 0x140666FD0 (_PnpValidateObjectName.c)
 *     RtlConvertSidToUnicodeString @ 0x1406677F0 (RtlConvertSidToUnicodeString.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140667EF0 (PiDqGetRelativeObjectRegPath.c)
 *     PnpConcatPWSTR @ 0x140668EC4 (PnpConcatPWSTR.c)
 *     _PnpCtxRegCreateTree @ 0x1406F26C0 (_PnpCtxRegCreateTree.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6)
{
  PVOID v7; // r13
  void *v8; // r12
  bool v9; // di
  __int64 v10; // rcx
  int RelativeObjectRegPath; // ebx
  bool v12; // zf
  bool v13; // r14
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v15; // rax
  PACCESS_TOKEN PrimaryToken; // rsi
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int Tree; // eax
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  void *v27; // [rsp+68h] [rbp-98h]
  PVOID TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v29; // [rsp+78h] [rbp-88h]
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  int v31[2]; // [rsp+90h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-68h] BYREF
  _BYTE Sid[80]; // [rsp+C0h] [rbp-40h] BYREF

  *(_QWORD *)v31 = a1;
  v29 = a6;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Handle = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  TokenInformation = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v27 = 0LL;
  memset(Sid, 0, 0x44uLL);
  *a6 = 0LL;
  v9 = 0;
  RelativeObjectRegPath = PnpValidateObjectName(v10, a1, a2);
  if ( RelativeObjectRegPath >= 0 )
  {
    v12 = a5 == 0LL;
    if ( !a5 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v12 = 1;
    }
    v13 = v12;
    p_SubjectContext = &SubjectContext;
    if ( a5 )
      p_SubjectContext = a5;
    v12 = p_SubjectContext->ClientToken == 0LL;
    v15 = &SubjectContext;
    if ( v12 )
    {
      if ( a5 )
        v15 = a5;
      PrimaryToken = v15->PrimaryToken;
    }
    else
    {
      if ( a5 )
        v15 = a5;
      PrimaryToken = v15->ClientToken;
    }
    v17 = SeQueryInformationToken(PrimaryToken, TokenImpersonationLevel, &TokenInformation);
    v7 = TokenInformation;
    RelativeObjectRegPath = v17;
    if ( v17 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        v9 = v13;
        goto LABEL_26;
      }
      goto LABEL_12;
    }
    v9 = v13;
    if ( v17 == -1073741821 )
    {
LABEL_12:
      SeQueryUserSidToken((__int64)PrimaryToken, Sid, 0x44u, 0LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      v9 = v13;
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (char)L"\\REGISTRY\\USER\\");
        if ( RelativeObjectRegPath < 0 )
        {
          v8 = v27;
        }
        else
        {
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v18 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
          else
            v18 = 0LL;
          v8 = v27;
          RelativeObjectRegPath = SysCtxRegOpenKey(v18, 0LL, (__int64)v27, 0, 4u, (__int64)&Handle);
          v9 = v13;
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v31[0]);
            if ( RelativeObjectRegPath >= 0 )
            {
              if ( a4 )
              {
                Tree = PnpCtxRegCreateTree(PiPnpRtlCtx, (_DWORD)Handle, 0, 0, a3, 0LL, (__int64)v29, (__int64)&v26);
              }
              else
              {
                v26 = 2;
                v19 = *(_QWORD *)&PiPnpRtlCtx ? *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL) : 0LL;
                Tree = SysCtxRegOpenKey(v19, (__int64)Handle, 0LL, 0, a3, (__int64)v29);
              }
              RelativeObjectRegPath = Tree;
              v9 = v13;
              if ( Tree >= 0 )
                v9 = v13;
            }
          }
        }
      }
    }
  }
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
LABEL_26:
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x58706E50u);
  RtlFreeAnsiString(&UnicodeString);
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RelativeObjectRegPath;
}
