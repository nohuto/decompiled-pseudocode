/*
 * XREFs of CheckCallerMatchesSid @ 0x1C02C6078
 * Callers:
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02C63CC (DxgkPrepareCcdDatabaseForAccess.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall CheckCallerMatchesSid(PSID Sid)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rax
  ULONG v8; // edi
  struct _ACL *PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _ACL *v13; // rbx
  __int64 v14; // rax
  NTSTATUS Acl; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int AccessStatus; // [rsp+58h] [rbp-19h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-15h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-11h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+80h] [rbp+Fh] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+A8h] [rbp+37h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v2 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v6 = v2;
  if ( v2 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
    goto LABEL_18;
  }
  v8 = RtlLengthSid(Sid) + 20;
  PoolWithTag = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x4B677844u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v8, 2u);
    v6 = Acl;
    if ( Acl >= 0 )
    {
      v19 = RtlAddAccessAllowedAce(v13, 2u, 0x1F0000u, Sid);
      v6 = v19;
      if ( v19 >= 0 )
      {
        v20 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v13, 0);
        v6 = v20;
        if ( v20 >= 0 )
        {
          if ( !RtlValidSecurityDescriptor(SecurityDescriptor) )
          {
            v23 = WdLogNewEntry5_WdAssertion(v22, v21);
            *(_QWORD *)(v23 + 24) = 2685LL;
            WdLogEvent5_WdAssertion(v23);
          }
          GenericMapping.GenericAll = 2031616;
          GenericMapping.GenericRead = 0x20000;
          GenericMapping.GenericWrite = 0x20000;
          GenericMapping.GenericExecute = 0x20000;
          if ( SeAccessCheck(
                 SecurityDescriptor,
                 &SubjectContext,
                 0,
                 0x1F0000u,
                 0,
                 0LL,
                 &GenericMapping,
                 1,
                 &GrantedAccess,
                 &AccessStatus)
            || g_OSTestSigningEnabled )
          {
            LODWORD(v6) = 0;
          }
          else
          {
            LODWORD(v6) = AccessStatus;
          }
          goto LABEL_16;
        }
      }
    }
    v14 = WdLogNewEntry5_WdError(v17, v16, v18);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v12);
    v6 = -1073741670LL;
  }
  *(_QWORD *)(v14 + 24) = v6;
  WdLogEvent5_WdError(v14);
LABEL_16:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x4B677844u);
LABEL_18:
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)v6;
}
