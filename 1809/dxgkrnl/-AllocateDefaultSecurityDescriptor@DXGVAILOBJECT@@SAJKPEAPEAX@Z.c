/*
 * XREFs of ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1C025955C
 * Callers:
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1C0259CD4 (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C025A034 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(ACCESS_MASK AccessMask, struct _ACL **a2)
{
  struct _ACL *v4; // rdi
  ULONG v5; // r14d
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  ULONG v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  NTSTATUS SecurityDescriptor; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS Acl; // eax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rax
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-20h] BYREF
  _BYTE Sid[16]; // [rsp+28h] [rbp-18h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v4 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v5 = 0;
  v6 = RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  v10 = v6;
  if ( v6 >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 83;
    *RtlSubAuthoritySid(Sid, 1u) = 0;
    v12 = RtlLengthSid(Sid);
    v5 = v12 + 20;
    v4 = (struct _ACL *)operator new(v12 + 60, 0x4B677844u, 1, PagedPool);
    if ( !v4 )
    {
      LODWORD(v10) = -1073741801;
      v14 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v14 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v14);
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdWarning(v11);
  }
  if ( (int)v10 >= 0 )
  {
    SecurityDescriptor = RtlCreateSecurityDescriptor(v4, 1u);
    v10 = SecurityDescriptor;
    if ( SecurityDescriptor >= 0
      && (Acl = RtlCreateAcl(v4 + 5, v5, 4u), v10 = Acl, Acl >= 0)
      && (v20 = RtlAddAccessAllowedAce(v4 + 5, 4u, AccessMask, Sid), v10 = v20, v20 >= 0)
      && (v21 = RtlSetDaclSecurityDescriptor(v4, 1u, v4 + 5, 0), v10 = v21, v21 >= 0) )
    {
      *a2 = v4;
      v4 = 0LL;
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v22 + 24) = v10;
      WdLogEvent5_WdWarning(v22);
    }
  }
  if ( v4 )
    operator delete[](v4);
  return (unsigned int)v10;
}
