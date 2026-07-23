/*
 * XREFs of sub_1800300DC @ 0x1800300DC
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x18009CCE0 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x18009CF00 (ZwAdjustPrivilegesToken.c)
 *     ZwDuplicateToken @ 0x18009CF20 (ZwDuplicateToken.c)
 *     ZwSetInformationObject @ 0x18009D250 (ZwSetInformationObject.c)
 */

int __fastcall sub_1800300DC(HANDLE *a1)
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
    LODWORD(v2) = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2u, 0, TokenHandle);
    if ( (int)v2 >= 0 )
    {
      v11 = 2LL;
      v10 = 12;
      ObjectAttributes.SecurityQualityOfService = &v10;
      if ( ZwDuplicateToken(TokenHandle[0], 0x24u, &ObjectAttributes, 0, TokenImpersonation, &Handle) >= 0 )
      {
        ObjectInformation = 256;
        if ( ZwSetInformationObject(Handle, ObjectHandleFlagInformation, &ObjectInformation, 2u) >= 0 )
        {
          if ( ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &Handle, 8u) >= 0 )
          {
            NewState.PrivilegeCount = 1;
            TokenHandle[1] = (HANDLE)20;
            NewState.Privileges[0].Luid = (LUID)20LL;
            NewState.Privileges[0].Attributes = 2;
            if ( ZwAdjustPrivilegesToken(Handle, 0, &NewState, 0x10u, 0LL, 0LL) >= 0 )
            {
              ThreadInformation = 1;
              if ( ZwSetInformationThread(
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
            ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &v7, 8u);
          }
          if ( Handle )
          {
            ObjectInformation = 0;
            ZwSetInformationObject(Handle, ObjectHandleFlagInformation, &ObjectInformation, 2u);
          }
        }
        if ( Handle )
          ZwClose(Handle);
      }
      LODWORD(v2) = ZwClose(TokenHandle[0]);
    }
  }
  return (int)v2;
}
