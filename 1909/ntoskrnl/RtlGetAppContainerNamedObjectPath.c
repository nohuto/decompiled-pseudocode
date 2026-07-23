/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x14030C040
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  NTSTATUS result; // eax
  char v9; // si
  int TokenInformation; // [rsp+38h] [rbp-99h] BYREF
  int v11; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v12; // [rsp+40h] [rbp-91h] BYREF
  PSID Sid2[12]; // [rsp+48h] [rbp-89h] BYREF
  PSID Sid1[12]; // [rsp+A8h] [rbp-29h] BYREF
  ULONG ReturnLength; // [rsp+150h] [rbp+7Fh] BYREF

  memset(Sid2, 0, 0x58uLL);
  memset(Sid1, 0, 0x58uLL);
  if ( !ObjectPath )
    return -1073741811;
  if ( TokenHandle && AppContainerSid )
    return -1073741776;
  LODWORD(v12) = 0;
  v11 = 0;
  if ( AppContainerSid )
  {
    TokenHandle = (HANDLE)-4LL;
    v9 = 0;
  }
  else
  {
    v9 = 1;
    if ( TokenHandle )
      goto LABEL_11;
    TokenHandle = (HANDLE)-6LL;
  }
  if ( !AppContainerSid )
  {
LABEL_11:
    TokenInformation = 0;
    result = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
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
  if ( !RelativePath || !v9 )
    return RtlpGetTokenNamedObjectPath(TokenHandle, AppContainerSid);
  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenPrivateNameSpace, &v11, 4u, &ReturnLength);
  if ( result < 0 )
    return result;
  if ( !v11 )
    return RtlpGetTokenNamedObjectPath(TokenHandle, AppContainerSid);
  result = NtQueryInformationToken(TokenHandle, TokenPrivateNameSpace, &v12, 4u, &ReturnLength);
  if ( result < 0 )
    return result;
  if ( !(_DWORD)v12 )
    return -1073741637;
  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenUser, Sid2, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = NtQueryInformationToken(TokenHandle, TokenUser, Sid1, 0x58u, &ReturnLength);
    if ( result >= 0 )
    {
      if ( !RtlEqualSid(Sid1[0], Sid2[0]) )
        return -1073741637;
      return RtlpGetTokenNamedObjectPath(TokenHandle, AppContainerSid);
    }
  }
  return result;
}
