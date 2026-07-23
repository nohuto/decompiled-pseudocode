/*
 * XREFs of NtCreateLowBoxToken @ 0x14069CB70
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     RtlSubAuthoritySid @ 0x14000A950 (RtlSubAuthoritySid.c)
 *     SepLocateTokenIntegrity @ 0x14000AD1C (SepLocateTokenIntegrity.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1401340A8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x1401388A8 (SepCaptureHandles.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C72C0 (SepAppendAceToTokenObjectAcl.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1405D7F5C (SepAppendAdminAceToTokenAcl.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14061DCF4 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x14061DD14 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x14061DF40 (SeCaptureSidAndAttributesArray.c)
 *     SepSetTokenCachedHandles @ 0x14061F890 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x14061FBD8 (SepSetTokenLowboxNumber.c)
 *     SepSetTokenPackage @ 0x14065817C (SepSetTokenPackage.c)
 *     SeCaptureSid @ 0x140658A6C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140658B6C (SeReleaseSid.c)
 *     RtlGetAppContainerSidType @ 0x14069CAF0 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x14069D16C (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x14069E928 (RtlIsPackageSid.c)
 *     SepCheckCapabilities @ 0x1406D58A0 (SepCheckCapabilities.c)
 *     SeSetMandatoryPolicyToken @ 0x1406E4688 (SeSetMandatoryPolicyToken.c)
 *     SepCheckCreateLowBox @ 0x1406EC154 (SepCheckCreateLowBox.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
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
  KPROCESSOR_MODE PreviousMode; // r12
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
  PSID v26; // r15
  char v27; // r14
  __int64 v28; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v30; // r14
  __int64 TokenIntegrity; // rax
  void *v32; // rcx
  unsigned __int8 v33; // al
  signed __int32 v34[8]; // [rsp+0h] [rbp-F8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-D8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-D0h]
  __int64 v37; // [rsp+30h] [rbp-C8h]
  char v38; // [rsp+50h] [rbp-A8h]
  char v39; // [rsp+51h] [rbp-A7h]
  _WORD v40[7]; // [rsp+52h] [rbp-A6h] BYREF
  PSID Sid; // [rsp+60h] [rbp-98h] BYREF
  __int64 v42; // [rsp+68h] [rbp-90h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-88h] BYREF
  PVOID Token; // [rsp+78h] [rbp-80h] BYREF
  __int64 v45; // [rsp+80h] [rbp-78h] BYREF
  PVOID P; // [rsp+88h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-68h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v48; // [rsp+98h] [rbp-60h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE *v50; // [rsp+A8h] [rbp-50h]
  __int64 v51; // [rsp+B0h] [rbp-48h]
  __int64 v52; // [rsp+B8h] [rbp-40h]
  __int64 v53; // [rsp+C0h] [rbp-38h]
  int v55; // [rsp+118h] [rbp+20h]

  v55 = (int)ObjectAttributes;
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
    goto LABEL_73;
  appended = SepCaptureHandles(HandleCount, (__int64)Handles, &P);
  if ( appended < 0 )
    goto LABEL_73;
  if ( !RtlIsPackageSid(v20) )
    goto LABEL_72;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    appended = -1073700350;
    goto LABEL_73;
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
            goto LABEL_32;
        }
        appended = -1073741811;
        goto LABEL_73;
      }
LABEL_32:
      ++v23;
      v24 += 2;
      if ( v23 >= CapabilityCount )
      {
        v9 = v55;
        goto LABEL_34;
      }
    }
LABEL_72:
    appended = -1073741811;
    goto LABEL_73;
  }
LABEL_34:
  appended = RtlGetAppContainerSidType(v20, &AppContainerSidType);
  if ( appended < 0 )
  {
LABEL_73:
    v28 = *(_QWORD *)&v40[3];
    goto LABEL_74;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(Token, (__int64)v40);
    if ( !LOBYTE(v40[0]) )
    {
      appended = -1073741790;
      goto LABEL_73;
    }
  }
  if ( appended < 0 )
    goto LABEL_73;
  appended = SepDuplicateToken((__int64)Token, v9, 0, 1, 0, PreviousMode, 0, (char **)&v40[3]);
  if ( appended < 0 )
    goto LABEL_73;
  v27 = 1;
  v38 = 1;
  v28 = *(_QWORD *)&v40[3];
  appended = SeSetMandatoryPolicyToken(*(_QWORD *)&v40[3], (char *)&v45 + 4);
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
      goto LABEL_74;
    appended = SepSetTokenCapabilities(v28, Sid, (void *)v42, CapabilityCount);
    if ( appended < 0 )
      goto LABEL_74;
    appended = SepSetTokenLowboxNumber(v28, (__int64)v20);
    if ( appended < 0 )
      goto LABEL_74;
    LODWORD(v49) = 0;
    v50 = v20;
    appended = SepSetTokenCachedHandles((_QWORD *)v28, &v49, HandleCount, (HANDLE *)P);
    if ( appended < 0 )
      goto LABEL_74;
    appended = SepSetTokenPackage(v28, v20);
    if ( appended < 0 )
      goto LABEL_74;
    appended = SepAppendAceToTokenDefaultDacl(v28, (__int64)v20);
    if ( appended < 0 )
      goto LABEL_74;
    v52 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    *(_QWORD *)(v28 + 56) = v52;
    _InterlockedOr(v34, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v30 + 48));
    KeLeaveCriticalRegion();
    v39 = 0;
    v28 = *(_QWORD *)&v40[3];
    appended = ObInsertObject(*(PVOID *)&v40[3], 0LL, GrantedAccess, 1u, 0LL, &Handle);
    v20 = Sid;
    if ( appended >= 0 )
    {
      appended = SepAppendAceToTokenObjectAcl(v28, 0xF01FFu, Sid);
      if ( appended < 0 )
      {
LABEL_74:
        v27 = v38;
        goto LABEL_53;
      }
      SepAppendAdminAceToTokenAcl(v28);
      ObfDereferenceObject((PVOID)v28);
    }
    v27 = 0;
  }
LABEL_53:
  if ( v39 )
  {
    if ( appended >= 0 )
    {
      v53 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      *(_QWORD *)(v28 + 56) = v53;
    }
    _InterlockedOr(v34, 0);
    v28 = *(_QWORD *)&v40[3];
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v40[3] + 48LL));
    KeLeaveCriticalRegion();
    v20 = Sid;
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
