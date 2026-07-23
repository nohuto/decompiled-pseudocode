/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x1406DAF20
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x1406DAEA4 (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeQueryUserSidToken @ 0x1406112AC (SeQueryUserSidToken.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x1406D4790 (_PnpCtxRegCreateTree.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406DB1C0 (PiDqGetRelativeObjectRegPath.c)
 *     _PnpValidateObjectName @ 0x1406F3A7C (_PnpValidateObjectName.c)
 *     PnpConcatPWSTR @ 0x1406FDD28 (PnpConcatPWSTR.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6)
{
  PVOID v6; // r13
  bool v7; // di
  int RelativeObjectRegPath; // ebx
  bool v9; // zf
  bool v10; // r14
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v12; // rax
  PACCESS_TOKEN PrimaryToken; // rsi
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int Tree; // eax
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+5Ch] [rbp-A4h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  PVOID TokenInformation; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v26; // [rsp+70h] [rbp-90h]
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  int v28[2]; // [rsp+88h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0LL;
  v22 = a2;
  *a6 = 0LL;
  v7 = 0;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)v28 = a1;
  v26 = a6;
  TokenInformation = 0LL;
  v24 = 0LL;
  RelativeObjectRegPath = PnpValidateObjectName(a1, a1, a2);
  if ( RelativeObjectRegPath >= 0 )
  {
    v9 = a5 == 0LL;
    if ( !a5 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v9 = 1;
    }
    v10 = v9;
    p_SubjectContext = &SubjectContext;
    if ( a5 )
      p_SubjectContext = a5;
    v9 = p_SubjectContext->ClientToken == 0LL;
    v12 = &SubjectContext;
    if ( v9 )
    {
      if ( a5 )
        v12 = a5;
      PrimaryToken = v12->PrimaryToken;
    }
    else
    {
      if ( a5 )
        v12 = a5;
      PrimaryToken = v12->ClientToken;
    }
    v14 = SeQueryInformationToken(PrimaryToken, TokenImpersonationLevel, &TokenInformation);
    v6 = TokenInformation;
    RelativeObjectRegPath = v14;
    if ( v14 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        v7 = v10;
        goto LABEL_26;
      }
      goto LABEL_12;
    }
    v7 = v10;
    if ( v14 == -1073741821 )
    {
LABEL_12:
      SeQueryUserSidToken((__int64)PrimaryToken, Sid, 0x44u, 0LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      v7 = v10;
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (char)L"\\REGISTRY\\USER\\");
        if ( RelativeObjectRegPath >= 0 )
        {
          v15 = *(_QWORD *)&PiPnpRtlCtx ? *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL) : 0LL;
          RelativeObjectRegPath = SysCtxRegOpenKey(v15, 0LL, v24, 0, 4u, (__int64)&Handle);
          v7 = v10;
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v28[0]);
            if ( RelativeObjectRegPath >= 0 )
            {
              if ( a4 )
              {
                Tree = PnpCtxRegCreateTree(*(__int64 *)&PiPnpRtlCtx, (__int64)Handle, 0LL, 0LL, a3, 0LL);
              }
              else
              {
                v23 = 2;
                v16 = *(_QWORD *)&PiPnpRtlCtx ? *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL) : 0LL;
                Tree = SysCtxRegOpenKey(v16, (__int64)Handle, 0LL, 0, a3, (__int64)v26);
              }
              RelativeObjectRegPath = Tree;
              v7 = v10;
              if ( Tree >= 0 )
                v7 = v10;
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
  RtlFreeAnsiString(&UnicodeString);
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)RelativeObjectRegPath;
}
