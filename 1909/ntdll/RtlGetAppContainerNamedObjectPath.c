/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x18000B550
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x18000BCF8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlEqualSid @ 0x180067260 (RtlEqualSid.c)
 *     NtQueryInformationToken @ 0x18009D2B0 (NtQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  __int64 v6; // rbx
  char v7; // r14
  NTSTATUS result; // eax
  int TokenInformation; // [rsp+38h] [rbp-99h] BYREF
  int v10; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v11; // [rsp+40h] [rbp-91h] BYREF
  PSID Sid2[12]; // [rsp+48h] [rbp-89h] BYREF
  PSID Sid1[12]; // [rsp+A8h] [rbp-29h] BYREF
  ULONG ReturnLength; // [rsp+150h] [rbp+7Fh] BYREF

  v6 = (__int64)TokenHandle;
  if ( !ObjectPath )
    return -1073741811;
  if ( TokenHandle && AppContainerSid )
    return -1073741776;
  LODWORD(v11) = 0;
  v10 = 0;
  if ( AppContainerSid )
  {
    v6 = -4LL;
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( TokenHandle )
      goto LABEL_7;
    v6 = -6LL;
  }
  if ( !AppContainerSid )
  {
LABEL_7:
    TokenInformation = 0;
    result = NtQueryInformationToken((HANDLE)v6, 0x1Du, &TokenInformation, 4u, &ReturnLength);
    if ( result < 0 )
      return result;
    if ( !TokenInformation )
    {
      result = 0;
      *(_QWORD *)&ObjectPath->Length = 0LL;
      ObjectPath->Buffer = 0LL;
      return result;
    }
  }
  if ( !RelativePath || !v7 )
    return RtlpGetTokenNamedObjectPath((HANDLE)v6);
  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0x2Au, &v10, 4u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( !v10 )
      return RtlpGetTokenNamedObjectPath((HANDLE)v6);
    result = NtQueryInformationToken((HANDLE)v6, 0x2Au, &v11, 4u, &ReturnLength);
    if ( result >= 0 )
    {
      if ( !(_DWORD)v11 )
        return -1073741637;
      result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 1u, Sid2, 0x58u, &ReturnLength);
      if ( result >= 0 )
      {
        result = NtQueryInformationToken((HANDLE)v6, 1u, Sid1, 0x58u, &ReturnLength);
        if ( result >= 0 )
        {
          if ( RtlEqualSid(Sid1[0], Sid2[0]) )
            return RtlpGetTokenNamedObjectPath((HANDLE)v6);
          return -1073741637;
        }
      }
    }
  }
  return result;
}
