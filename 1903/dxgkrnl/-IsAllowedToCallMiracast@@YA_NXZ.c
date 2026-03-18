/*
 * XREFs of ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C003B264
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C0203900 (DxgkNetDispStartMiracastDisplayDevice.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C0203B60 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?OpenThreadToken@@YAJPEAPEAX@Z @ 0x1C003B5A4 (-OpenThreadToken@@YAJPEAPEAX@Z.c)
 */

char IsAllowedToCallMiracast(void)
{
  signed int v0; // r13d
  PSID *v1; // r14
  PSID *v2; // r12
  void *v3; // rdi
  char v4; // bl
  int v5; // eax
  HANDLE v6; // rsi
  PUCHAR v7; // rax
  ULONG v9; // eax
  PVOID v10; // rax
  ULONG *v11; // r15
  PULONG v12; // rax
  ULONG v13; // ecx
  ULONG ReturnLength[6]; // [rsp+30h] [rbp-18h] BYREF
  HANDLE TokenHandle; // [rsp+98h] [rbp+50h] BYREF
  ULONG TokenInformationLength; // [rsp+A0h] [rbp+58h] BYREF
  int TokenInformation; // [rsp+A8h] [rbp+60h] BYREF

  v0 = 0;
  v1 = 0LL;
  TokenHandle = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = OpenThreadToken(&TokenHandle);
  v6 = TokenHandle;
  if ( v5 >= 0 && ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, ReturnLength) >= 0 )
  {
    if ( TokenInformation )
    {
      TokenInformationLength = 0;
      ZwQueryInformationToken(v6, TokenAppContainerSid, 0LL, 0, &TokenInformationLength);
      v4 = 1;
      v1 = (PSID *)operator new[](TokenInformationLength, 0x4B677844u, PagedPool);
      if ( !v1
        || ZwQueryInformationToken(v6, TokenAppContainerSid, v1, TokenInformationLength, &TokenInformationLength) < 0 )
      {
        goto LABEL_6;
      }
      v9 = RtlLengthRequiredSid(8u);
      v10 = operator new[](v9, 0x4B677844u, PagedPool);
      v3 = v10;
      if ( v10 && RtlInitializeSid(v10, &IdentifierAuthority, 8u) >= 0 )
      {
        LODWORD(TokenHandle) = 0;
        v11 = (ULONG *)&unk_1C0076A50;
        while ( 1 )
        {
          do
          {
            v12 = RtlSubAuthoritySid(v3, v0);
            v13 = *v11;
            ++v0;
            ++v11;
            *v12 = v13;
          }
          while ( v0 < 8 );
          v0 = 0;
          if ( RtlEqualSid(*v1, v3) )
            break;
          LODWORD(TokenHandle) = (_DWORD)TokenHandle + 1;
          if ( (unsigned int)TokenHandle >= 6 )
            goto LABEL_24;
        }
      }
      else
      {
LABEL_24:
        v4 = 0;
      }
    }
    else
    {
      LODWORD(TokenHandle) = 0;
      ZwQueryInformationToken(v6, TokenIntegrityLevel, 0LL, 0, (PULONG)&TokenHandle);
      v4 = 1;
      v2 = (PSID *)operator new[]((unsigned int)TokenHandle, 0x4B677844u, PagedPool);
      if ( ZwQueryInformationToken(v6, TokenIntegrityLevel, v2, (ULONG)TokenHandle, (PULONG)&TokenHandle) < 0
        || (v7 = RtlSubAuthorityCountSid(*v2), *RtlSubAuthoritySid(*v2, (unsigned int)*v7 - 1) < 0x1000) )
      {
LABEL_6:
        v4 = 0;
      }
    }
  }
  if ( v6 )
    ZwClose(v6);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v4;
}
