/*
 * XREFs of ndisCreateHandler @ 0x1C000FBB0
 * Callers:
 *     ndisCreateIrpHandler @ 0x1C000FB90 (ndisCreateIrpHandler.c)
 *     NdisWdfCreateIrpHandler @ 0x1C009ECB0 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003685C (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ndisDummyHandler @ 0x1C0094F8C (ndisDummyHandler.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisCreateHandler(__int64 a1, __int64 a2, _IRP *a3)
{
  _QWORD *v3; // r12
  char v6; // al
  const struct _GUID *v7; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  void *v9; // r15
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  struct _ACCESS_STATE *v11; // rdi
  KPROCESSOR_MODE AccessMode; // r14
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v14; // r14
  signed __int32 v15; // eax
  struct _KTHREAD *CurrentThread; // r14
  int *ThreadProperty; // rax
  __int64 v18; // rcx
  int v19; // esi
  unsigned int v20; // edi
  PACCESS_TOKEN v21; // rax
  void *v22; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  KIRQL v25; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v27; // r8
  unsigned int CompartmentId; // edx
  __int64 v29; // rdi
  KIRQL v30; // r14
  __int64 v31; // rcx
  char v32; // r14
  KIRQL v33; // al
  __int64 v34; // rsi
  KIRQL v35; // r15
  ULONG_PTR v36; // r8
  int v37; // ecx
  __int64 v38; // r10
  unsigned __int8 v39; // r9
  _BYTE *v40; // rdx
  KIRQL v42; // dl
  unsigned int v43; // ecx
  unsigned __int8 CurrentIrql; // al
  char v45; // r15
  int v46; // edx
  KIRQL v47; // si
  struct _NDIS_REFCOUNT_BLOCK *v48; // rcx
  int v49; // ecx
  KIRQL v50; // al
  KSPIN_LOCK *v51; // rcx
  int v52; // esi
  _QWORD *PoolWithTag; // rax
  char v54; // r15
  __int64 v55; // rax
  int v56; // edx
  unsigned int v58; // eax
  NTSTATUS v59; // edi
  char v60; // al
  KIRQL v61; // al
  __int64 v62; // rdx
  ULONG_PTR v63; // rdi
  unsigned int v64; // edx
  int v65; // ecx
  __int64 v66; // rax
  struct _KEVENT *v67; // rcx
  __int64 v68; // rcx
  KIRQL v69; // al
  KIRQL v70; // al
  KIRQL v71; // al
  char v72; // [rsp+50h] [rbp-49h]
  char v73; // [rsp+51h] [rbp-48h]
  char v74; // [rsp+52h] [rbp-47h]
  char v75; // [rsp+53h] [rbp-46h]
  BOOLEAN v76; // [rsp+54h] [rbp-45h]
  BOOLEAN EffectiveOnly; // [rsp+60h] [rbp-39h] BYREF
  BOOLEAN CopyOnOpen[3]; // [rsp+61h] [rbp-38h] BYREF
  ACCESS_MASK AccessMask; // [rsp+64h] [rbp-35h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+68h] [rbp-31h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-29h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp-21h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-19h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp-11h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+8Ch] [rbp-Dh] BYREF
  _IO_STACK_LOCATION *v87; // [rsp+90h] [rbp-9h]
  __int64 v88; // [rsp+98h] [rbp-1h]
  _GUID NamespaceGuid; // [rsp+A0h] [rbp+7h]

  v3 = 0LL;
  v72 = 0;
  v75 = 0;
  v73 = 0;
  v6 = a1;
  v74 = 0;
  v7 = &WPP_ead076de49c5361e52622447ee4d867c_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v7,
      11,
      15,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      (char)a3);
    v6 = a1;
  }
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v87 = CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return 3221225473LL;
  }
  if ( *(_BYTE *)a2 != 17 )
    return ndisDummyHandler(v6);
  v9 = *(void **)(a2 + 3784);
  Privileges = 0LL;
  AccessMask = 0x10000000;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v11 = *(struct _ACCESS_STATE **)(CurrentStackLocation->Parameters.WMI.ProviderId + 8);
  SeLockSubjectContext(&v11->SubjectSecurityContext);
  if ( (CurrentStackLocation->Flags & 1) != 0 )
    AccessMode = 1;
  else
    AccessMode = a3->RequestorMode;
  GenericMapping = IoGetFileObjectGenericMapping();
  v14 = SeAccessCheck(
          v9,
          &v11->SubjectSecurityContext,
          1u,
          AccessMask,
          0,
          &Privileges,
          GenericMapping,
          AccessMode,
          &GrantedAccess,
          &AccessStatus);
  v76 = v14;
  if ( Privileges )
  {
    SeAppendPrivileges(v11, Privileges);
    SeFreePrivileges(Privileges);
  }
  if ( v14 )
  {
    v11->PreviouslyGrantedAccess |= GrantedAccess;
    v11->RemainingDesiredAccess &= ~(GrantedAccess | 0x2000000);
  }
  SeUnlockSubjectContext(&v11->SubjectSecurityContext);
  v15 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v15 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  CurrentThread = KeGetCurrentThread();
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v19 = *ThreadProperty;
    LODWORD(v88) = ThreadProperty[1];
    HIDWORD(v88) = v19;
    ObfDereferenceObject(ThreadProperty);
    v20 = v19;
  }
  else
  {
    v19 = 0;
    v88 = 0LL;
    v20 = 0;
  }
  if ( !v20 )
  {
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
    }
    else
    {
      v21 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v22 = v21;
      if ( v21 )
      {
        v59 = SeQueryInformationToken(v21, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v22);
        if ( v59 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_19;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_19:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v19 = 0;
      v61 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v19 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v61);
      if ( !v19 )
        v19 = 1;
    }
    else
    {
      v19 = 1;
    }
    HIDWORD(v88) = v19;
    v20 = v19;
  }
  v25 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfCompartmentList;
  v27 = 0LL;
  if ( ndisIfCompartmentList != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
  {
    while ( 1 )
    {
      CompartmentId = Flink->CompartmentId;
      if ( CompartmentId == v20 )
        break;
      if ( CompartmentId <= v20 )
      {
        Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
        if ( Flink != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
          continue;
      }
      goto LABEL_27;
    }
    v27 = Flink;
  }
LABEL_27:
  NamespaceGuid = v27->LoopbackInfo.NamespaceGuid;
  KeReleaseSpinLock(&ndisIfListLock, v25);
  v29 = 0LL;
  v30 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a2 + 4032) )
  {
    v29 = *(_QWORD *)(a2 + 4040);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v29 + 1440), 0x16u);
    ++*(_DWORD *)(v29 + 1396);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v30);
  if ( !v29 )
    goto LABEL_116;
  v31 = *(_QWORD *)(v29 + 1376);
  if ( v19 == *(_DWORD *)(v31 + 16) )
    goto LABEL_31;
  v62 = *(_QWORD *)&NamespaceGuid.Data1 - *(_QWORD *)(v31 + 1684);
  if ( *(_QWORD *)&NamespaceGuid.Data1 == *(_QWORD *)(v31 + 1684) )
    v62 = *(_QWORD *)NamespaceGuid.Data4 - *(_QWORD *)(v31 + 1692);
  if ( !v62 || (*(_DWORD *)(v31 + 1680) & 2) == 0 && v19 == 1 )
LABEL_31:
    v32 = 1;
  else
    v32 = 0;
  v33 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  v34 = *(_QWORD *)(a2 + 4040);
  v35 = v33;
  v36 = *(_QWORD *)(v34 + 1440);
  if ( v36 - 2 <= 1 )
    goto LABEL_41;
  if ( v36 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v36, 0LL);
  if ( *(_BYTE *)(v36 + 2) <= 0x16u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v36, 0x16uLL);
  v37 = *(unsigned __int8 *)(v36 + 1);
  if ( *(_BYTE *)(v36 + 1) )
  {
    if ( v37 != 1 )
      goto LABEL_41;
    v63 = v36 + 1416;
    v64 = *(_DWORD *)(v36 + 1472);
    v65 = (unsigned __int16)v64 >> 1;
    if ( v64 >> 17 < 0x3FFE && v65 == (v64 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v36 + 1416));
      *(_DWORD *)(v63 + 56) &= 0x10001u;
      goto LABEL_41;
    }
    if ( v65 != 0 || (v64 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v36 + 1416), 0);
      goto LABEL_41;
    }
    goto LABEL_101;
  }
  v38 = *(_QWORD *)(v36 + 8);
  if ( !v38 || (v39 = *(_BYTE *)(v36 + 3)) == 0 )
  {
LABEL_40:
    if ( _bittestandreset((signed __int32 *)(v36 + 16), 0x16u) )
      goto LABEL_41;
LABEL_101:
    ndisBugCheckEx(0x1EuLL, 0LL, v36, 0x16uLL);
  }
  while ( 1 )
  {
    v40 = (_BYTE *)(v38 + 2LL * (unsigned __int8)v37);
    if ( *v40 == 22 )
    {
      v60 = v40[1];
      if ( v60 )
        break;
    }
    LOBYTE(v37) = v37 + 1;
    if ( (unsigned __int8)v37 >= v39 )
      goto LABEL_40;
  }
  v40[1] = v60 - 1;
LABEL_41:
  if ( (*(_DWORD *)(v34 + 1396))-- == 1 )
  {
    v66 = *(_QWORD *)(v34 + 1408);
    if ( v66 )
    {
      v67 = *(struct _KEVENT **)(v66 + 4048);
      if ( v67 )
        KeSetEvent(v67, 0, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v35);
  if ( !v32 )
  {
LABEL_116:
    v52 = -1073741772;
    goto LABEL_117;
  }
  v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4432));
  if ( v76 )
  {
    v43 = *(_DWORD *)(a2 + 3752);
    if ( v43 < 0x1000000 )
    {
      v73 = 1;
      *(_DWORD *)(a2 + 3752) = v43 + 1;
      goto LABEL_46;
    }
LABEL_105:
    v52 = -1073741670;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4432), v42);
LABEL_117:
    v54 = a1;
    goto LABEL_59;
  }
  v58 = *(_DWORD *)(a2 + 3676);
  if ( v58 >= 0x1000000 )
    goto LABEL_105;
  v74 = 1;
  *(_DWORD *)(a2 + 3676) = v58 + 1;
LABEL_46:
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4432), v42);
  if ( (*(_DWORD *)(a2 + 124) & 0x20100) != 0 )
  {
    v52 = -1073741823;
    goto LABEL_117;
  }
  Timeout.QuadPart = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    KeBugCheckEx(0x7Cu, 0x14uLL, CurrentIrql, 0LL, 0LL);
  Timeout.QuadPart = -500000LL;
  KeWaitForSingleObject((PVOID)(a2 + 3728), Executive, 0, 0, &Timeout);
  v45 = 1;
  v72 = 1;
  v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4432));
  if ( *(_BYTE *)(a2 + 4444) )
    goto LABEL_109;
  v48 = *(struct _NDIS_REFCOUNT_BLOCK **)(a2 + 4888);
  if ( v48 )
    NdisReferenceWithTag(v48, 0x56u);
  v49 = *(_DWORD *)(a2 + 4440);
  *(_DWORD *)(a2 + 4440) = v49 + 1;
  if ( v49 == -1 )
  {
    *(_DWORD *)(a2 + 4440) = -1;
LABEL_109:
    v45 = 0;
    v72 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v46) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v46,
      20,
      12,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a2,
      *(_DWORD *)(a2 + 4440));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4432), v47);
  if ( !v45 )
  {
    v52 = -1073676282;
    goto LABEL_117;
  }
  v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v51 = (KSPIN_LOCK *)(a2 + 96);
  v52 = 0;
  *(_QWORD *)(a2 + 520) = 0LL;
  if ( *(_DWORD *)(a2 + 1520) == 2 )
  {
    v52 = -1073676282;
    KeReleaseSpinLock(v51, v50);
    goto LABEL_117;
  }
  ++*(_DWORD *)(a2 + 1800);
  v75 = 1;
  KeReleaseSpinLock(v51, v50);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x636F444Eu);
  v54 = a1;
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = a1;
    PoolWithTag[1] = a2;
    PoolWithTag[2] = 0LL;
    *((_BYTE *)PoolWithTag + 24) = v76;
    v87->FileObject->FsContext = PoolWithTag;
    v55 = *(_QWORD *)(a2 + 1776);
    if ( v55 )
    {
      v3[2] = v55;
    }
    else if ( a3->RequestorMode == 1 )
    {
      v52 = -1073741823;
    }
  }
  else
  {
    v52 = -1073741670;
  }
LABEL_59:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v52 < 0 )
    goto LABEL_121;
  if ( (*(_DWORD *)(a2 + 124) & 0x2000) != 0 )
  {
    v68 = *(_QWORD *)(a2 + 3984);
    if ( v68 )
    {
      (*(void (__fastcall **)(_QWORD))(v68 + 32))(*(_QWORD *)(v68 + 8));
      goto LABEL_61;
    }
    v52 = -1073741823;
LABEL_121:
    if ( v73 )
    {
      v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4432));
      --*(_DWORD *)(a2 + 3752);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4432), v69);
    }
    if ( v74 )
    {
      v70 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4432));
      --*(_DWORD *)(a2 + 3676);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4432), v70);
    }
    if ( v75 )
    {
      ndisReferencePackage((__int64)&ndisPkgs);
      v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      --*(_DWORD *)(a2 + 1800);
      *(_QWORD *)(a2 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v71);
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    }
    if ( v72 )
      ndisDereferenceMiniport(a2, 0x56u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
LABEL_61:
  a3->IoStatus.Status = v52;
  IofCompleteRequest(a3, 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v56) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v56,
      11,
      16,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      v54,
      (char)a3,
      v52);
  }
  return (unsigned int)v52;
}
