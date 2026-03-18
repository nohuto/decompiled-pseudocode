/*
 * XREFs of NtSetSecurityObject @ 0x14061F770
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1408D46F0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x1408D4B7C (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObSetSecurityObjectByPointer @ 0x1405C8890 (ObSetSecurityObjectByPointer.c)
 *     SeCaptureSecurityDescriptor @ 0x1405DCB50 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DDAA0 (SeReleaseSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     SeSetSecurityAccessMask @ 0x14061FA90 (SeSetSecurityAccessMask.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14061FB18 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140621C30 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140644DD0 (RtlGetSaclSecurityDescriptor.c)
 *     SepRmGlobalSaclFind @ 0x1408E23F8 (SepRmGlobalSaclFind.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  SECURITY_INFORMATION v4; // ebx
  SECURITY_INFORMATION v5; // edx
  int v6; // ecx
  ACCESS_MASK v7; // esi
  KPROCESSOR_MODE PreviousMode; // r13
  HANDLE v9; // r10
  NTSTATUS v10; // edi
  int v11; // eax
  _QWORD *v12; // r14
  void *v13; // r12
  unsigned int v14; // r15d
  PVOID v15; // r13
  PVOID v16; // rbx
  __int64 v17; // rcx
  PVOID v18; // r12
  int v20; // eax
  NTSTATUS SaclSecurityDescriptor; // eax
  __int64 v22; // r9
  bool v23; // al
  __int64 v24; // rdx
  BOOLEAN SaclDefaulted[8]; // [rsp+70h] [rbp-39h] BYREF
  PVOID SecurityDescriptora; // [rsp+78h] [rbp-31h] BYREF
  PVOID v27; // [rsp+80h] [rbp-29h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+88h] [rbp-21h] BYREF
  PVOID P; // [rsp+90h] [rbp-19h] BYREF
  PVOID v30; // [rsp+98h] [rbp-11h] BYREF
  _WORD *v31; // [rsp+A0h] [rbp-9h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-1h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+Fh] BYREF
  PACL Sacl; // [rsp+C0h] [rbp+17h] BYREF
  int SaclPresent; // [rsp+120h] [rbp+77h] BYREF
  KPROCESSOR_MODE v37; // [rsp+128h] [rbp+7Fh]

  HandleInformation = 0LL;
  v4 = SecurityInformation;
  v27 = 0LL;
  SecurityDescriptora = 0LL;
  P = 0LL;
  v30 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v5 = SecurityInformation & 0x80;
  v6 = v4 & 0x100;
  if ( (v4 & 0x10000) != 0 )
  {
    v20 = v4 | 0x1FF;
    v4 = v4 & 0xFFFFFE00 | 0x17F;
    if ( v5 )
      v4 = v20;
    if ( !v6 )
      v4 &= ~0x100u;
  }
  SeSetSecurityAccessMask(v4, &DesiredAccess);
  v7 = DesiredAccess;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = PreviousMode;
  v10 = ObReferenceObjectByHandle(v9, DesiredAccess, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( v10 < 0 )
    return v10;
  v11 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 1, &v31);
  v12 = Object;
  v10 = v11;
  if ( v11 < 0 )
  {
LABEL_32:
    ObfDereferenceObject(v12);
    return v10;
  }
  v13 = v31;
  v14 = v4 & 0xFFFFFE07;
  if ( (v4 & 0x10000) == 0 || (v31[1] & 0x10) != 0 )
    v14 = v4;
  if ( ((v14 & 1) == 0 || *((_DWORD *)v31 + 1)) && ((v14 & 2) == 0 || *((_DWORD *)v31 + 2)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v7 &= 0xFFF3FFFF;
    if ( !v7 )
      goto LABEL_12;
    v10 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 8LL, 0LL, &SecurityDescriptora);
    if ( v10 < 0 )
    {
      v16 = v27;
      v15 = SecurityDescriptora;
LABEL_27:
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      SeReleaseSecurityDescriptor(v13, v37, 1);
      goto LABEL_32;
    }
    if ( (v7 & 0xFEFFFFFF) != 0 )
    {
      v15 = SecurityDescriptora;
      LOBYTE(SaclPresent) = 0;
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 SecurityDescriptora,
                                 (PBOOLEAN)&SaclPresent,
                                 &Sacl,
                                 SaclDefaulted);
      v10 = SaclSecurityDescriptor;
      v23 = SaclPresent;
      if ( !(_BYTE)SaclPresent )
      {
        v34 = 0LL;
        LOBYTE(v22) = 1;
        v23 = (unsigned int)SepRmGlobalSaclFind(
                              &v34,
                              0LL,
                              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *((_BYTE *)v12 - 24) ^ ((unsigned __int16)((_WORD)v12 - 48) >> 8))]
                            + 16,
                              v22) != -1073741772;
      }
      if ( v10 < 0 )
      {
LABEL_63:
        v16 = v27;
        goto LABEL_27;
      }
      if ( v23 )
      {
        v24 = ((v7 & 0x80000) != 0 ? v14 & 0x13 : 0) | 4;
        if ( (v7 & 0x40000) == 0 )
          v24 = (v7 & 0x80000) != 0 ? v14 & 0x13 : 0;
        v10 = ObpAllocateAndQuerySecurityDescriptorInfo(v12, v24, 0LL, &v27);
      }
      else
      {
        v7 &= 0xFFF3FFFF;
      }
    }
    else
    {
LABEL_12:
      v15 = SecurityDescriptora;
    }
    if ( v10 >= 0 )
    {
      if ( (v14 & 0x40) != 0
        && ((POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)] != IoFileObjectType
         || (*(_DWORD *)(v12[1] + 52LL) & 0x10) == 0) )
      {
        v10 = ObpAllocateAndQuerySecurityDescriptorInfo(v12, 64LL, 0LL, &v30);
      }
      v16 = v27;
      if ( v10 < 0 )
        goto LABEL_21;
      SaclPresent = v14 & 0x20;
      if ( (v14 & 0x20) != 0
        && ((POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)] != IoFileObjectType
         || (*(_DWORD *)(v12[1] + 52LL) & 0x10) == 0) )
      {
        v10 = ObpAllocateAndQuerySecurityDescriptorInfo(v12, 32LL, 0LL, &P);
      }
      if ( v10 >= 0
        && (v10 = ObSetSecurityObjectByPointer((__int64)v12, v14, (__int64)v13), v10 >= 0)
        && (v7 || SaclPresent) )
      {
        v18 = P;
        SeSecurityDescriptorChangedAuditAlarm(
          v17,
          v12,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)]
        + 16);
      }
      else
      {
LABEL_21:
        v18 = P;
      }
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      v13 = v31;
      goto LABEL_27;
    }
    goto LABEL_63;
  }
  SeReleaseSecurityDescriptor(v31, PreviousMode, 1);
  ObfDereferenceObject(Object);
  return -1073741703;
}
