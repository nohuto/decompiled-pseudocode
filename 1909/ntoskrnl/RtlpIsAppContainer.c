/*
 * XREFs of RtlpIsAppContainer @ 0x1408D2C74
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x1408D1CB8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenThreadTokenEx @ 0x1401C1230 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1401C1250 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x1401C1490 (ZwDuplicateToken.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 */

__int64 __fastcall RtlpIsAppContainer(PACCESS_TOKEN Token, bool *a2)
{
  NTSTATUS v4; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-9h] BYREF
  PVOID TokenInformation; // [rsp+38h] [rbp-1h] BYREF
  HANDLE ExistingTokenHandle; // [rsp+40h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp+Fh] BYREF
  __int64 v10; // [rsp+78h] [rbp+3Fh] BYREF
  int v11; // [rsp+80h] [rbp+47h]

  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v10 = 0LL;
  v11 = 0;
  *a2 = 0;
  if ( Token )
  {
LABEL_7:
    v4 = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
    if ( v4 >= 0 )
      *a2 = (_DWORD)TokenInformation != 0;
    goto LABEL_9;
  }
  v4 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &Handle);
  if ( v4 == -1073741700 )
  {
    v4 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0x200u, &ExistingTokenHandle);
    if ( v4 < 0 )
      goto LABEL_9;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v10;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v10 = 0x20000000CLL;
    LOWORD(v11) = 1;
    v4 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
    ZwClose(ExistingTokenHandle);
  }
  if ( v4 >= 0 )
  {
    Token = Handle;
    goto LABEL_7;
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v4;
}
