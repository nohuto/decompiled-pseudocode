/*
 * XREFs of SeAuditingFileOrGlobalEvents @ 0x1408DDB40
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406235B0 (SepAdtAuditThisEventWithContext.c)
 *     SepRmGlobalSaclFind @ 0x1408E1CF8 (SepRmGlobalSaclFind.c)
 */

BOOLEAN __stdcall SeAuditingFileOrGlobalEvents(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  BOOLEAN v5; // bl
  __int64 v7; // r9
  __int16 v8; // ax
  __int64 v9; // rax
  char *v10; // rax
  UNICODE_STRING v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)&v12.Length = 0LL;
  v5 = 0;
  v12.Buffer = 0LL;
  v13 = 0LL;
  RtlInitUnicodeString(&v12, L"File");
  LOBYTE(v7) = 1;
  if ( (unsigned int)SepRmGlobalSaclFind(&v13, 0LL, &v12, v7) != -1073741772 )
    goto LABEL_9;
  v8 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v8 & 0x10) == 0 )
    return 0;
  if ( v8 < 0 )
  {
    v9 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v9 )
    {
      v10 = (char *)SecurityDescriptor + v9;
      goto LABEL_7;
    }
    return 0;
  }
  v10 = (char *)*((_QWORD *)SecurityDescriptor + 3);
LABEL_7:
  if ( !v10 )
    return 0;
LABEL_9:
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(
                          0x74u,
                          AccessGranted,
                          AccessGranted == 0,
                          SubjectSecurityContext)
    || (unsigned __int8)SepAdtAuditThisEventWithContext(
                          0x81u,
                          AccessGranted,
                          AccessGranted == 0,
                          SubjectSecurityContext)
    || (unsigned __int8)SepAdtAuditThisEventWithContext(3u, AccessGranted, AccessGranted == 0, SubjectSecurityContext) )
  {
    return 1;
  }
  return v5;
}
