/*
 * XREFs of NtCreateLowBoxToken @ 0x14067FAD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     RtlSubAuthoritySid @ 0x14000A8C0 (RtlSubAuthoritySid.c)
 *     SepLocateTokenIntegrity @ 0x14000AC8C (SepLocateTokenIntegrity.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1401335B8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x140138258 (SepCaptureHandles.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C6DC0 (SepAppendAceToTokenObjectAcl.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1405D779C (SepAppendAdminAceToTokenAcl.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     ObInsertObject @ 0x1405D9570 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14061C1E4 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x14061C204 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x14061C430 (SeCaptureSidAndAttributesArray.c)
 *     SepSetTokenCachedHandles @ 0x14061DD74 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x14061E0BC (SepSetTokenLowboxNumber.c)
 *     SepSetTokenPackage @ 0x14064462C (SepSetTokenPackage.c)
 *     SeCaptureSid @ 0x140644F1C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14064501C (SeReleaseSid.c)
 *     RtlGetAppContainerSidType @ 0x14067FA50 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1406800CC (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x140680488 (RtlIsPackageSid.c)
 *     SepCheckCapabilities @ 0x1406D6070 (SepCheckCapabilities.c)
 *     SeSetMandatoryPolicyToken @ 0x1406E31D8 (SeSetMandatoryPolicyToken.c)
 *     SepCheckCreateLowBox @ 0x1406EAE94 (SepCheckCreateLowBox.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

int __fastcall NtCreateLowBoxToken(
        HANDLE *a1,
        void *a2,
        ACCESS_MASK a3,
        int a4,
        char *a5,
        unsigned int a6,
        char *Src,
        unsigned int a8,
        unsigned __int64 a9)
{
  int v9; // r14d
  char PreviousMode; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int result; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rsi
  int AppContainerSidType; // ebx
  ACCESS_MASK GrantedAccess; // r13d
  unsigned int v23; // ebx
  _QWORD *v24; // rdi
  unsigned int v25; // r14d
  void *v26; // r15
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
  int v43; // [rsp+70h] [rbp-88h] BYREF
  PVOID Token; // [rsp+78h] [rbp-80h] BYREF
  __int64 v45; // [rsp+80h] [rbp-78h] BYREF
  PVOID P; // [rsp+88h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-68h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v48; // [rsp+98h] [rbp-60h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-58h] BYREF
  char *v50; // [rsp+A8h] [rbp-50h]
  __int64 v51; // [rsp+B0h] [rbp-48h]
  __int64 v52; // [rsp+B8h] [rbp-40h]
  __int64 v53; // [rsp+C0h] [rbp-38h]

  v9 = a4;
  v42 = 0LL;
  v45 = 0x100000000LL;
  P = 0LL;
  Sid = 0LL;
  v48 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v40[3] = 0LL;
  v39 = 0;
  v38 = 0;
  v43 = 0;
  LOBYTE(v40[0]) = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a1;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = 8LL * a8;
    if ( v15 )
    {
      if ( (a9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = a9 + v15;
      if ( v16 > 0x7FFFFFFF0000LL || v16 < a9 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( !a5 )
    return -1073741811;
  if ( !a8 )
  {
    if ( !a9 )
      goto LABEL_13;
    return -1073741776;
  }
  if ( !a9 )
    return -1073741776;
LABEL_13:
  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, &v48);
  if ( result < 0 )
    return result;
  result = SeCaptureSid(a5, PreviousMode, v18, v19, (int)Object, 1, &Sid);
  if ( result < 0 )
    return result;
  v20 = (char *)Sid;
  result = SepCheckCreateLowBox(Sid);
  AppContainerSidType = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    ObfDereferenceObject(Token);
    return -1073741659;
  }
  GrantedAccess = v48.GrantedAccess;
  if ( a3 )
    GrantedAccess = a3;
  if ( Src )
    AppContainerSidType = SeCaptureSidAndAttributesArray(
                            Src,
                            a6,
                            PreviousMode,
                            0LL,
                            0,
                            (int)HandleInformation,
                            v37,
                            (PVOID *)&v42,
                            (unsigned int *)&v45);
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  AppContainerSidType = SepCaptureHandles(a8, a9, &P);
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  if ( !(unsigned __int8)RtlIsPackageSid(v20) )
    goto LABEL_72;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    AppContainerSidType = -1073700350;
    goto LABEL_73;
  }
  v23 = 0;
  if ( a6 )
  {
    v24 = (_QWORD *)v42;
    while ( (unsigned __int8)RtlIsCapabilitySid(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = (void *)*v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v42 + 16LL * v25)) )
        {
          if ( ++v25 >= v23 )
            goto LABEL_32;
        }
        AppContainerSidType = -1073741811;
        goto LABEL_73;
      }
LABEL_32:
      ++v23;
      v24 += 2;
      if ( v23 >= a6 )
      {
        v9 = a4;
        goto LABEL_34;
      }
    }
LABEL_72:
    AppContainerSidType = -1073741811;
    goto LABEL_73;
  }
LABEL_34:
  AppContainerSidType = RtlGetAppContainerSidType(v20, &v43);
  if ( AppContainerSidType < 0 )
  {
LABEL_73:
    v28 = *(_QWORD *)&v40[3];
    goto LABEL_74;
  }
  if ( v43 == 1 )
  {
    AppContainerSidType = SepCheckCapabilities(Token, (__int64)v40);
    if ( !LOBYTE(v40[0]) )
    {
      AppContainerSidType = -1073741790;
      goto LABEL_73;
    }
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  AppContainerSidType = SepDuplicateToken((__int64)Token, v9, 0, 1, 0, PreviousMode, 0, (char **)&v40[3]);
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  v27 = 1;
  v38 = 1;
  v28 = *(_QWORD *)&v40[3];
  AppContainerSidType = SeSetMandatoryPolicyToken(*(_QWORD *)&v40[3], (char *)&v45 + 4);
  if ( AppContainerSidType >= 0 )
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
      AppContainerSidType = -1073740730;
    }
    v20 = (char *)Sid;
    if ( AppContainerSidType < 0 )
      goto LABEL_74;
    AppContainerSidType = SepSetTokenCapabilities(v28, Sid, (void *)v42, a6);
    if ( AppContainerSidType < 0 )
      goto LABEL_74;
    AppContainerSidType = SepSetTokenLowboxNumber(v28, (__int64)v20);
    if ( AppContainerSidType < 0 )
      goto LABEL_74;
    LODWORD(v49) = 0;
    v50 = v20;
    AppContainerSidType = SepSetTokenCachedHandles((_QWORD *)v28, &v49, a8, (HANDLE *)P);
    if ( AppContainerSidType < 0 )
      goto LABEL_74;
    AppContainerSidType = SepSetTokenPackage(v28, (unsigned __int8 *)v20);
    if ( AppContainerSidType < 0 )
      goto LABEL_74;
    AppContainerSidType = SepAppendAceToTokenDefaultDacl(v28, (__int64)v20);
    if ( AppContainerSidType < 0 )
      goto LABEL_74;
    v52 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    *(_QWORD *)(v28 + 56) = v52;
    _InterlockedOr(v34, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v30 + 48));
    KeLeaveCriticalRegion();
    v39 = 0;
    v28 = *(_QWORD *)&v40[3];
    AppContainerSidType = ObInsertObject(*(PVOID *)&v40[3], 0LL, GrantedAccess, 1u, 0LL, &Handle);
    v20 = (char *)Sid;
    if ( AppContainerSidType >= 0 )
    {
      AppContainerSidType = SepAppendAceToTokenObjectAcl(v28, 0xF01FFu, Sid);
      if ( AppContainerSidType < 0 )
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
    if ( AppContainerSidType >= 0 )
    {
      v53 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      *(_QWORD *)(v28 + 56) = v53;
    }
    _InterlockedOr(v34, 0);
    v28 = *(_QWORD *)&v40[3];
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v40[3] + 48LL));
    KeLeaveCriticalRegion();
    v20 = (char *)Sid;
  }
  if ( AppContainerSidType < 0 )
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
  if ( AppContainerSidType >= 0 )
    *a1 = Handle;
  return AppContainerSidType;
}
