/*
 * XREFs of NtCreateLowBoxToken @ 0x140654F90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlEqualSid @ 0x1400A7DD0 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x1400A902C (SepLocateTokenIntegrity.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlSubAuthoritySid @ 0x1400DCAD0 (RtlSubAuthoritySid.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140132CF8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x140136A50 (SepCaptureHandles.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SepFinalizeTokenAcls @ 0x140582ABC (SepFinalizeTokenAcls.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405BCE84 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x1405BCEA4 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BD0D0 (SeCaptureSidAndAttributesArray.c)
 *     SeSetMandatoryPolicyToken @ 0x1405BDA08 (SeSetMandatoryPolicyToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C9190 (SepAppendAceToTokenObjectAcl.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     SeReleaseSid @ 0x1406112AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406112D4 (SeCaptureSid.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1406494A0 (SepDuplicateToken.c)
 *     RtlIsPackageSid @ 0x140654260 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x140654B80 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x140655558 (RtlIsCapabilitySid.c)
 *     SepSetTokenPackage @ 0x14065BD08 (SepSetTokenPackage.c)
 *     SepSetTokenCachedHandles @ 0x14065BDBC (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x14065C104 (SepSetTokenLowboxNumber.c)
 *     SepCheckCapabilities @ 0x1406B3268 (SepCheckCapabilities.c)
 *     SepCheckCreateLowBox @ 0x1406CBE84 (SepCheckCreateLowBox.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
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
  char PreviousMode; // r15
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
  void *v26; // r12
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
  int v43; // [rsp+70h] [rbp-78h] BYREF
  PVOID Token; // [rsp+78h] [rbp-70h] BYREF
  __int64 v45; // [rsp+80h] [rbp-68h] BYREF
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v48; // [rsp+98h] [rbp-50h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-48h] BYREF
  char *v50; // [rsp+A8h] [rbp-40h]
  __int64 v51; // [rsp+B0h] [rbp-38h]

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
    goto LABEL_72;
  AppContainerSidType = SepCaptureHandles(a8, a9, &P);
  if ( AppContainerSidType < 0 )
    goto LABEL_72;
  if ( !RtlIsPackageSid((__int64)v20) )
    goto LABEL_71;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    AppContainerSidType = -1073700350;
    goto LABEL_72;
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
            goto LABEL_33;
        }
        AppContainerSidType = -1073741811;
        goto LABEL_72;
      }
LABEL_33:
      ++v23;
      v24 += 2;
      if ( v23 >= a6 )
      {
        v9 = a4;
        goto LABEL_35;
      }
    }
LABEL_71:
    AppContainerSidType = -1073741811;
    goto LABEL_72;
  }
LABEL_35:
  AppContainerSidType = RtlGetAppContainerSidType(v20, &v43);
  if ( AppContainerSidType < 0 )
  {
LABEL_72:
    v28 = *(_QWORD *)&v40[3];
    goto LABEL_73;
  }
  if ( v43 == 1 )
  {
    AppContainerSidType = SepCheckCapabilities(Token, (__int64)v40);
    if ( !LOBYTE(v40[0]) )
    {
      AppContainerSidType = -1073741790;
      goto LABEL_72;
    }
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_72;
  AppContainerSidType = SepDuplicateToken((__int64)Token, v9, 0, 1, 0, PreviousMode, 0, &v40[3]);
  if ( AppContainerSidType < 0 )
    goto LABEL_72;
  v27 = 1;
  v38 = 1;
  v28 = *(_QWORD *)&v40[3];
  AppContainerSidType = SeSetMandatoryPolicyToken(*(__int64 *)&v40[3], (_DWORD *)&v45 + 1);
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
      goto LABEL_73;
    AppContainerSidType = SepSetTokenCapabilities(v28, Sid, (void *)v42, a6);
    if ( AppContainerSidType < 0 )
      goto LABEL_73;
    AppContainerSidType = SepSetTokenLowboxNumber(v28, v20);
    if ( AppContainerSidType < 0 )
      goto LABEL_73;
    LODWORD(v49) = 0;
    v50 = v20;
    AppContainerSidType = SepSetTokenCachedHandles(v28, &v49, a8, P, Object, HandleInformation, v37);
    if ( AppContainerSidType < 0 )
      goto LABEL_73;
    AppContainerSidType = SepSetTokenPackage(v28, v20);
    if ( AppContainerSidType < 0 )
      goto LABEL_73;
    AppContainerSidType = SepAppendAceToTokenDefaultDacl(v28, (__int64)v20);
    if ( AppContainerSidType < 0 )
      goto LABEL_73;
    *(_QWORD *)(v28 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v34, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v30 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v39 = 0;
    v28 = *(_QWORD *)&v40[3];
    AppContainerSidType = ObInsertObjectEx(
                            *(_QWORD **)&v40[3],
                            0LL,
                            GrantedAccess,
                            1,
                            0,
                            0LL,
                            (unsigned __int64 *)&Handle);
    v20 = (char *)Sid;
    if ( AppContainerSidType >= 0 )
    {
      AppContainerSidType = SepAppendAceToTokenObjectAcl(v28, 983551, Sid);
      if ( AppContainerSidType < 0 )
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
    if ( AppContainerSidType >= 0 )
      *(_QWORD *)(v28 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v34, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v40[3] + 48LL));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v20 = (char *)Sid;
    v28 = *(_QWORD *)&v40[3];
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
