/*
 * XREFs of TppCritSetThread @ 0x1800300DC
 * Callers:
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x18009D490 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x18009D6B0 (NtAdjustPrivilegesToken.c)
 *     NtDuplicateToken @ 0x18009D6D0 (NtDuplicateToken.c)
 *     NtSetInformationObject @ 0x18009DA00 (NtSetInformationObject.c)
 */

int __fastcall TppCritSetThread(HANDLE *a1)
{
  struct _TEB *v2; // rax
  __int16 ObjectInformation; // [rsp+30h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-90h] BYREF
  int ThreadInformation; // [rsp+40h] [rbp-88h] BYREF
  __int64 v7; // [rsp+48h] [rbp-80h] BYREF
  HANDLE TokenHandle[2]; // [rsp+50h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-68h] BYREF
  int v10; // [rsp+90h] [rbp-38h] BYREF
  __int64 v11; // [rsp+94h] [rbp-34h]
  _TOKEN_PRIVILEGES NewState; // [rsp+A0h] [rbp-28h] BYREF

  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *a1 = 0LL;
  v2 = NtCurrentTeb();
  if ( (v2->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) != 0 )
  {
    LODWORD(v2) = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2u, 0, TokenHandle);
    if ( (int)v2 >= 0 )
    {
      v11 = 2LL;
      v10 = 12;
      ObjectAttributes.SecurityQualityOfService = &v10;
      if ( NtDuplicateToken(TokenHandle[0], 0x24u, &ObjectAttributes, 0, TokenImpersonation, &Handle) >= 0 )
      {
        ObjectInformation = 256;
        if ( NtSetInformationObject(Handle, ObjectHandleFlagInformation, &ObjectInformation, 2u) >= 0 )
        {
          if ( NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &Handle, 8u) >= 0 )
          {
            NewState.PrivilegeCount = 1;
            TokenHandle[1] = (HANDLE)20;
            NewState.Privileges[0].Luid = (_LUID)20LL;
            NewState.Privileges[0].Attributes = 2;
            if ( NtAdjustPrivilegesToken(Handle, 0, &NewState, 0x10u, 0LL, 0LL) >= 0 )
            {
              ThreadInformation = 1;
              if ( NtSetInformationThread(
                     (HANDLE)0xFFFFFFFFFFFFFFFELL,
                     ThreadBreakOnTermination,
                     &ThreadInformation,
                     4u) >= 0 )
              {
                *a1 = Handle;
                Handle = 0LL;
              }
            }
            v7 = 0LL;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &v7, 8u);
          }
          if ( Handle )
          {
            ObjectInformation = 0;
            NtSetInformationObject(Handle, ObjectHandleFlagInformation, &ObjectInformation, 2u);
          }
        }
        if ( Handle )
          NtClose(Handle);
      }
      LODWORD(v2) = NtClose(TokenHandle[0]);
    }
  }
  return (int)v2;
}
