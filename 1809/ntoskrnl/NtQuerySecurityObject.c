/*
 * XREFs of NtQuerySecurityObject @ 0x14069A860
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D78D8 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     SeQuerySecurityAccessMask @ 0x14069A9D8 (SeQuerySecurityAccessMask.c)
 */

NTSTATUS __stdcall NtQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  KPROCESSOR_MODE PreviousMode; // di
  PULONG v8; // rbx
  __int64 v9; // rdx
  NTSTATUS result; // eax
  PVOID v11; // r14
  __int64 v12; // r8
  NTSTATUS v13; // edi
  ACCESS_MASK DesiredAccess; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-28h] BYREF
  SECURITY_INFORMATION v17; // [rsp+98h] [rbp+10h] BYREF
  SIZE_T Lengtha; // [rsp+A8h] [rbp+20h] BYREF

  LODWORD(Lengtha) = Length;
  v17 = SecurityInformation;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = LengthNeeded;
    v9 = (__int64)LengthNeeded;
    if ( (unsigned __int64)LengthNeeded >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    ProbeForWrite(SecurityDescriptor, (unsigned int)Lengtha, 4u);
  }
  else
  {
    v8 = LengthNeeded;
  }
  SeQuerySecurityAccessMask(v17, &DesiredAccess);
  result = ObReferenceObjectByHandle(Handle, DesiredAccess, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    v11 = Object;
    v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v13 = (*(__int64 (__fastcall **)(PVOID, __int64, SECURITY_INFORMATION *, PSECURITY_DESCRIPTOR, SIZE_T *, char *, _DWORD, __int64, KPROCESSOR_MODE))(v12 + 152))(
            Object,
            1LL,
            &v17,
            SecurityDescriptor,
            &Lengtha,
            (char *)Object - 8,
            *(_DWORD *)(v12 + 100),
            v12 + 76,
            PreviousMode);
    *v8 = Lengtha;
    ObfDereferenceObject(v11);
    return v13;
  }
  return result;
}
