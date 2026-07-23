/*
 * XREFs of sub_1800E6498 @ 0x1800E6498
 * Callers:
 *     sub_180009910 @ 0x180009910 (sub_180009910.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x18009CCC0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x18009CCE0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x18009CF20 (ZwDuplicateToken.c)
 */

__int64 __fastcall sub_1800E6498(HANDLE a1, bool *a2)
{
  NTSTATUS v3; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-9h] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-1h] BYREF
  int TokenInformation; // [rsp+44h] [rbp+3h] BYREF
  HANDLE TokenHandle; // [rsp+48h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+Fh] BYREF
  _DWORD v10[2]; // [rsp+80h] [rbp+3Fh] BYREF
  __int16 v11; // [rsp+88h] [rbp+47h]

  Handle = 0LL;
  *a2 = 0;
  if ( a1 )
  {
LABEL_7:
    ReturnLength = 0;
    v3 = ZwQueryInformationToken(a1, 0x1Du, &TokenInformation, 4u, &ReturnLength);
    if ( v3 >= 0 )
      *a2 = TokenInformation != 0;
    goto LABEL_9;
  }
  v3 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0, &Handle);
  if ( v3 == -1073741700 )
  {
    v3 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandle);
    if ( v3 < 0 )
      goto LABEL_9;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = v10;
    v10[1] = 2;
    ObjectAttributes.Length = 48;
    v10[0] = 12;
    v11 = 1;
    v3 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
    ZwClose(TokenHandle);
  }
  if ( v3 >= 0 )
  {
    a1 = Handle;
    goto LABEL_7;
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v3;
}
