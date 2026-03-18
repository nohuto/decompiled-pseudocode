/*
 * XREFs of ?OpenThreadToken@@YAJPEAPEAX@Z @ 0x1C003B5A4
 * Callers:
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C003B264 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     ?IsInLowBox@@YAHXZ @ 0x1C0272C94 (-IsInLowBox@@YAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OpenThreadToken(void **a1)
{
  NTSTATUS v2; // ebx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF
  int TokenInformation; // [rsp+48h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  TokenHandle = 0LL;
  v2 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &TokenHandle);
  if ( v2 >= 0 )
  {
    ReturnLength = 4;
    v2 = ZwQueryInformationToken(TokenHandle, TokenImpersonationLevel, &TokenInformation, 4u, &ReturnLength);
    if ( v2 < 0 || TokenInformation < 2 )
    {
      v2 = -1073741700;
      ZwClose(TokenHandle);
      TokenHandle = 0LL;
    }
  }
  if ( v2 == -1073741700 )
    v2 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  *a1 = TokenHandle;
  return (unsigned int)v2;
}
