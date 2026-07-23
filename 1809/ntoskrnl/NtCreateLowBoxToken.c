/*
 * XREFs of NtCreateLowBoxToken @ 0x140656130
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x1400A8F8C (SepLocateTokenIntegrity.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140132DE8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x140136B70 (SepCaptureHandles.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepFinalizeTokenAcls @ 0x140583ABC (SepFinalizeTokenAcls.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405BDE84 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x1405BDEA4 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BE0D0 (SeCaptureSidAndAttributesArray.c)
 *     SeSetMandatoryPolicyToken @ 0x1405BEA08 (SeSetMandatoryPolicyToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405CA190 (SepAppendAceToTokenObjectAcl.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     SeReleaseSid @ 0x1406122AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     RtlIsPackageSid @ 0x140655400 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x140655D20 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1406566F8 (RtlIsCapabilitySid.c)
 *     SepSetTokenPackage @ 0x14065CEA8 (SepSetTokenPackage.c)
 *     SepSetTokenCachedHandles @ 0x14065CF5C (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x14065D2A4 (SepSetTokenLowboxNumber.c)
 *     SepCheckCapabilities @ 0x1406B44E8 (SepCheckCapabilities.c)
 *     SepCheckCreateLowBox @ 0x1406CD104 (SepCheckCreateLowBox.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateLowBoxToken(
        PHANDLE TokenHandle,
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PSID PackageSid,
        ULONG CapabilityCount,
        PSID_AND_ATTRIBUTES Capabilities,
        ULONG HandleCount,
        HANDLE *Handles)
{
  int v9; // r14d
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  HANDLE *v16; // rcx
  NTSTATUS result; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rsi
  NTSTATUS appended; // ebx
  ACCESS_MASK GrantedAccess; // r13d
  ULONG v23; // ebx
  PSID *v24; // rdi
  unsigned int v25; // r14d
  PSID v26; // r12
  char v27; // r14
  __int64 v28; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v30; // r14
  __int64 TokenIntegrity; // rax
  void *v32; // rcx
  unsigned __int8 v33; // al
  signed __int32 v34[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v37; // [rsp+30h] [rbp-B8h]
  char v38; // [rsp+50h] [rbp-98h]
  char v39; // [rsp+51h] [rbp-97h]
  _WORD v40[7]; // [rsp+52h] [rbp-96h] BYREF
  PSID Sid; // [rsp+60h] [rbp-88h] BYREF
  __int64 v42; // [rsp+68h] [rbp-80h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-78h] BYREF
  PVOID Token; // [rsp+78h] [rbp-70h] BYREF
  __int64 v45; // [rsp+80h] [rbp-68h] BYREF
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v48; // [rsp+98h] [rbp-50h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-48h] BYREF
  _BYTE *v50; // [rsp+A8h] [rbp-40h]
  __int64 v51; // [rsp+B0h] [rbp-38h]
  int v53; // [rsp+108h] [rbp+20h]

  v53 = (int)ObjectAttributes;
  v9 = (int)ObjectAttributes;
  v42 = 0LL;
  v45 = 0x100000000LL;
  P = 0LL;
  Sid = 0LL;
  v48 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v40[3] = 0LL;
  v39 = 0;
  v38 = 0;
  AppContainerSidType = NotAppContainerSidType;
  LOBYTE(v40[0]) = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TokenHandle < 0x7FFFFFFF0000LL )
      v14 = (__int64)TokenHandle;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = HandleCount;
    if ( v15 * 8 )
    {
      if ( ((unsigned __int8)Handles & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = &Handles[v15];
      if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( !PackageSid )
    return -1073741811;
  if ( !HandleCount )
  {
    if ( !Handles )
      goto LABEL_13;
    return -1073741776;
  }
  if ( !Handles )
    return -1073741776;
LABEL_13:
  result = ObReferenceObjectByHandle(
             ExistingTokenHandle,
             2u,
             (POBJECT_TYPE)SeTokenObjectType,
             PreviousMode,
             &Token,
             &v48);
  if ( result < 0 )
    return result;
  result = SeCaptureSid((char *)PackageSid, PreviousMode, v18, v19, (int)Object, 1, &Sid);
  if ( result < 0 )
    return result;
  v20 = Sid;
  result = SepCheckCreateLowBox(Sid);
  appended = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    ObfDereferenceObject(Token);
    return -1073741659;
  }
  GrantedAccess = v48.GrantedAccess;
  if ( DesiredAccess )
    GrantedAccess = DesiredAccess;
  if ( Capabilities )
    appended = SeCaptureSidAndAttributesArray(
                 (char *)Capabilities,
                 CapabilityCount,
                 PreviousMode,
                 0LL,
                 0,
                 (int)HandleInformation,
                 v37,
                 (PVOID *)&v42,
                 (unsigned int *)&v45);
  if ( appended < 0 )
    goto LABEL_72;
  appended = SepCaptureHandles(HandleCount, (__int64)Handles, &P);
  if ( appended < 0 )
    goto LABEL_72;
  if ( !RtlIsPackageSid(v20) )
    goto LABEL_71;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    appended = -1073700350;
    goto LABEL_72;
  }
  v23 = 0;
  if ( CapabilityCount )
  {
    v24 = (PSID *)v42;
    while ( RtlIsCapabilitySid(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = *v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v42 + 16LL * v25)) )
        {
          if ( ++v25 >= v23 )
            goto LABEL_33;
        }
        appended = -1073741811;
        goto LABEL_72;
      }
LABEL_33:
      ++v23;
      v24 += 2;
      if ( v23 >= CapabilityCount )
      {
        v9 = v53;
        goto LABEL_35;
      }
    }
LABEL_71:
    appended = -1073741811;
    goto LABEL_72;
  }
LABEL_35:
  appended = RtlGetAppContainerSidType(v20, &AppContainerSidType);
  if ( appended < 0 )
  {
LABEL_72:
    v28 = *(_QWORD *)&v40[3];
    goto LABEL_73;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(Token, (__int64)v40);
    if ( !LOBYTE(v40[0]) )
    {
      appended = -1073741790;
      goto LABEL_72;
    }
  }
  if ( appended < 0 )
    goto LABEL_72;
  appended = SepDuplicateToken((__int64)Token, v9, 0, 1, 0, PreviousMode, 0, &v40[3]);
  if ( appended < 0 )
    goto LABEL_72;
  v27 = 1;
  v38 = 1;
  v28 = *(_QWORD *)&v40[3];
  appended = SeSetMandatoryPolicyToken(*(__int64 *)&v40[3], (_DWORD *)&v45 + 1);
  if ( appended >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v30 = *(_QWORD *)&v40[3];
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&v40[3] + 48LL), 1u);
    _InterlockedOr(v34, 0);
    v39 = 1;
    v28 = *(_QWORD *)&v40[3];
    TokenIntegrity = SepLocateTokenIntegrity(*(__int64 *)&v40[3]);
    if ( TokenIntegrity )
    {
      v32 = *(void **)TokenIntegrity;
      v33 = *(_BYTE *)(*(_QWORD *)TokenIntegrity + 1LL);
      if ( v33 )
        *RtlSubAuthoritySid(v32, (unsigned int)v33 - 1) = 4096;
      *(_QWORD *)(v28 + 72) &= 0x200800000uLL;
      *(_QWORD *)(v28 + 80) &= 0x200800000uLL;
      *(_QWORD *)(v28 + 64) &= 0x200800000uLL;
      *(_DWORD *)(v28 + 200) = *(_DWORD *)(v28 + 200) & 0xFFFF9FFF | 0x4000;
    }
    else
    {
      appended = -1073740730;
    }
    v20 = Sid;
    if ( appended < 0 )
      goto LABEL_73;
    appended = SepSetTokenCapabilities(v28, Sid, (void *)v42, CapabilityCount);
    if ( appended < 0 )
      goto LABEL_73;
    appended = SepSetTokenLowboxNumber(v28, v20);
    if ( appended < 0 )
      goto LABEL_73;
    LODWORD(v49) = 0;
    v50 = v20;
    appended = SepSetTokenCachedHandles(v28, &v49, HandleCount, P, Object, HandleInformation, v37);
    if ( appended < 0 )
      goto LABEL_73;
    appended = SepSetTokenPackage(v28, v20);
    if ( appended < 0 )
      goto LABEL_73;
    appended = SepAppendAceToTokenDefaultDacl(v28, (__int64)v20);
    if ( appended < 0 )
      goto LABEL_73;
    *(_QWORD *)(v28 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v34, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v30 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v39 = 0;
    v28 = *(_QWORD *)&v40[3];
    appended = ObInsertObjectEx(*(_QWORD **)&v40[3], 0LL, GrantedAccess, 1, 0, 0LL, (unsigned __int64 *)&Handle);
    v20 = Sid;
    if ( appended >= 0 )
    {
      appended = SepAppendAceToTokenObjectAcl(v28, 983551, Sid);
      if ( appended < 0 )
      {
LABEL_73:
        v27 = v38;
        goto LABEL_55;
      }
      SepFinalizeTokenAcls((_QWORD *)v28);
      ObfDereferenceObject((PVOID)v28);
    }
    v27 = 0;
  }
LABEL_55:
  if ( v39 )
  {
    if ( appended >= 0 )
      *(_QWORD *)(v28 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v34, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v40[3] + 48LL));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v20 = Sid;
    v28 = *(_QWORD *)&v40[3];
  }
  if ( appended < 0 )
  {
    if ( v27 )
      ObfDereferenceObject((PVOID)v28);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v42 )
    SeReleaseLuidAndAttributesArray((void *)v42, PreviousMode);
  if ( v20 )
    SeReleaseSid(v20, PreviousMode, 1);
  ObfDereferenceObject(Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( appended >= 0 )
    *TokenHandle = Handle;
  return appended;
}
