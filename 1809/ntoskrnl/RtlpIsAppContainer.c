/*
 * XREFs of RtlpIsAppContainer @ 0x1408966C4
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x140895478 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenThreadTokenEx @ 0x1401B88D0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1401B88F0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x1401B8B30 (ZwDuplicateToken.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 */

__int64 __fastcall RtlpIsAppContainer(HANDLE a1, bool *a2)
{
  NTSTATUS v3; // ebx
  HANDLE Token; // [rsp+38h] [rbp-9h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp-1h] BYREF
  HANDLE TokenHandle; // [rsp+48h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+Fh] BYREF
  _DWORD v9[2]; // [rsp+80h] [rbp+3Fh] BYREF
  __int16 v10; // [rsp+88h] [rbp+47h]

  Token = 0LL;
  *a2 = 0;
  if ( a1 )
  {
LABEL_7:
    v3 = SeQueryInformationToken(a1, TokenIsAppContainer, &TokenInformation);
    if ( v3 >= 0 )
      *a2 = (_DWORD)TokenInformation != 0;
    goto LABEL_9;
  }
  v3 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &Token);
  if ( v3 == -1073741700 )
  {
    v3 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0x200u, &TokenHandle);
    if ( v3 < 0 )
      goto LABEL_9;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = v9;
    v9[1] = 2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v9[0] = 12;
    v10 = 1;
    v3 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Token);
    ZwClose(TokenHandle);
  }
  if ( v3 >= 0 )
  {
    a1 = Token;
    goto LABEL_7;
  }
LABEL_9:
  if ( Token )
    ZwClose(Token);
  return (unsigned int)v3;
}
