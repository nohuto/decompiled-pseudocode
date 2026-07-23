/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x18004B240
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x18004AB60 (RtlpGetTokenNamedObjectPath.c)
 *     RtlEqualSid @ 0x18006E5A0 (RtlEqualSid.c)
 *     NtQueryInformationToken @ 0x1800A0720 (NtQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  __int64 v4; // rdi
  char v8; // r13
  int v9; // esi
  char v10; // r14
  NTSTATUS result; // eax
  char v12; // r8
  int TokenInformation; // [rsp+38h] [rbp-99h] BYREF
  int v14; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v15; // [rsp+40h] [rbp-91h] BYREF
  PSID Sid2[12]; // [rsp+48h] [rbp-89h] BYREF
  PSID Sid1[12]; // [rsp+A8h] [rbp-29h] BYREF
  ULONG ReturnLength; // [rsp+150h] [rbp+7Fh] BYREF

  v4 = (__int64)TokenHandle;
  if ( !ObjectPath )
    return -1073741811;
  if ( TokenHandle && AppContainerSid )
    return -1073741776;
  LODWORD(v15) = 0;
  v14 = 0;
  v8 = 0;
  v9 = RelativePath != 0 ? 13 : 8;
  if ( AppContainerSid )
  {
    v4 = -4LL;
    v10 = 0;
LABEL_6:
    if ( AppContainerSid )
      goto LABEL_11;
    goto LABEL_7;
  }
  v10 = 1;
  if ( !TokenHandle )
  {
    v4 = -6LL;
    goto LABEL_6;
  }
LABEL_7:
  TokenInformation = 0;
  result = NtQueryInformationToken((HANDLE)v4, 0x1Du, &TokenInformation, 4u, &ReturnLength);
  if ( result < 0 )
    return result;
  if ( !TokenInformation )
  {
    result = 0;
    *(_QWORD *)&ObjectPath->Length = 0LL;
    ObjectPath->MaximumLength = 0;
    ObjectPath->Buffer = 0LL;
    return result;
  }
LABEL_11:
  if ( RelativePath )
  {
    v8 = 1;
    if ( v10 )
    {
      result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0x2Au, &v14, 4u, &ReturnLength);
      if ( result < 0 )
        return result;
      if ( v14 )
      {
        result = NtQueryInformationToken((HANDLE)v4, 0x2Au, &v15, 4u, &ReturnLength);
        if ( result < 0 )
          return result;
        if ( !(_DWORD)v15 )
          return -1073741637;
        result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 1u, Sid2, 0x58u, &ReturnLength);
        if ( result < 0 )
          return result;
        result = NtQueryInformationToken((HANDLE)v4, 1u, Sid1, 0x58u, &ReturnLength);
        if ( result < 0 )
          return result;
        if ( !RtlEqualSid(Sid1[0], Sid2[0]) )
          return -1073741637;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  v12 = v9 | 2;
  if ( !v8 )
    v12 = v9;
  return RtlpGetTokenNamedObjectPath((HANDLE)v4, AppContainerSid, v12, ObjectPath);
}
