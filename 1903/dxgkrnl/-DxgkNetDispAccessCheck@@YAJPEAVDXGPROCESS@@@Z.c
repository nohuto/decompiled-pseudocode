/*
 * XREFs of ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C003ABE0
 * Callers:
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C02036D0 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C0203900 (DxgkNetDispStartMiracastDisplayDevice.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C0203B60 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000BE6C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DxgkNetDispAccessCheck(struct DXGPROCESS *this, __int64 a2)
{
  NTSTATUS Acl; // ebx
  struct _ACL *v4; // rdi
  ULONG v5; // eax
  PVOID v6; // rax
  void *v7; // rsi
  ULONG v8; // ebx
  struct _ACL *v9; // rax
  BOOLEAN v10; // al
  int AccessStatus; // [rsp+58h] [rbp-19h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-15h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-11h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+80h] [rbp+Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp+37h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B0h] [rbp+3Fh] BYREF

  Acl = 0;
  if ( !this
    || (!g_OSTestSigningEnabled || (unsigned int)PsGetCurrentProcessSessionId(this, a2))
    && DXGPROCESS::IsRemoteConnection(this) )
  {
    v4 = 0LL;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v5 = RtlLengthRequiredSid(6u);
    v6 = operator new[](v5, 0x4B677844u, PagedPool);
    v7 = v6;
    if ( !v6 )
      goto LABEL_13;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(v6, &IdentifierAuthority, 6u);
    *RtlSubAuthoritySid(v7, 0) = 80;
    *RtlSubAuthoritySid(v7, 1u) = 1495648203;
    *RtlSubAuthoritySid(v7, 2u) = -1791465185;
    *RtlSubAuthoritySid(v7, 3u) = 1597754693;
    *RtlSubAuthoritySid(v7, 4u) = -849792585;
    *RtlSubAuthoritySid(v7, 5u) = 1316708627;
    v8 = RtlLengthSid(v7) + 20;
    v9 = (struct _ACL *)operator new[](v8, 0x4B677844u, PagedPool);
    v4 = v9;
    if ( v9 )
    {
      Acl = RtlCreateAcl(v9, v8, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v4, 2u, 0x1F0000u, v7);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
          if ( Acl >= 0 )
          {
            GenericMapping.GenericAll = 2031616;
            GenericMapping.GenericRead = 0x20000;
            GenericMapping.GenericWrite = 0x20000;
            GenericMapping.GenericExecute = 0x20000;
            v10 = SeAccessCheck(
                    SecurityDescriptor,
                    &SubjectContext,
                    0,
                    0x1F0000u,
                    0,
                    0LL,
                    &GenericMapping,
                    1,
                    &GrantedAccess,
                    &AccessStatus);
            Acl = AccessStatus;
            if ( v10 )
              Acl = 0;
          }
        }
      }
    }
    else
    {
LABEL_13:
      Acl = -1073741801;
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)Acl;
}
