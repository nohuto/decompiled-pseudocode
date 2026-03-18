/*
 * XREFs of RtlIsSandboxedTokenHandle @ 0x14013BDA4
 * Callers:
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwDuplicateToken @ 0x1401C0910 (ZwDuplicateToken.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlIsSandboxedToken @ 0x1405D7B10 (RtlIsSandboxedToken.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

char __fastcall RtlIsSandboxedTokenHandle(HANDLE ExistingTokenHandle)
{
  struct _SECURITY_SUBJECT_CONTEXT *v2; // rbx
  char IsSandboxedToken; // di
  NTSTATUS v4; // eax
  HANDLE Handle; // [rsp+30h] [rbp-39h] BYREF
  PVOID Object; // [rsp+38h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v9[4]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v10; // [rsp+90h] [rbp+27h] BYREF
  int v11; // [rsp+98h] [rbp+2Fh]

  memset(v9, 0, sizeof(v9));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = 0LL;
  Handle = 0LL;
  IsSandboxedToken = 1;
  v10 = 0LL;
  v11 = 0;
  if ( ExistingTokenHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v10;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v10 = 0x20000000CLL;
    LOWORD(v11) = 1;
    if ( ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle) < 0 )
      goto LABEL_7;
    v9[3] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    v4 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
    v9[2] = Object;
    if ( v4 < 0 )
      goto LABEL_7;
    v9[0] = 0LL;
    v2 = (struct _SECURITY_SUBJECT_CONTEXT *)v9;
  }
  IsSandboxedToken = RtlIsSandboxedToken(v2);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2->PrimaryToken, 0x746C6644u);
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  return IsSandboxedToken;
}
