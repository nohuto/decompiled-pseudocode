/*
 * XREFs of AllocateWindowManagerSid @ 0x1C0017F80
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001CFB0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0098200 (CheckDwmProcessSecurityIdentifier.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall AllocateWindowManagerSid(_QWORD *a1)
{
  ULONG v2; // eax
  void *v3; // rax
  void *v4; // rbx
  NTSTATUS v5; // edi
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v2 = RtlLengthRequiredSid(3u);
  v3 = (void *)Win32AllocPoolWithQuota(v2, 1702064981LL);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    v5 = RtlInitializeSid(v3, &IdentifierAuthority, 3u);
    if ( v5 < 0 )
    {
      Win32FreePool(v4);
    }
    else
    {
      *RtlSubAuthoritySid(v4, 0) = 90;
      *RtlSubAuthoritySid(v4, 1u) = 0;
      *RtlSubAuthoritySid(v4, 2u) = gSessionId;
      *a1 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
