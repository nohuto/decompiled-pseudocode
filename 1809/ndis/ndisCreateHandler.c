/*
 * XREFs of ndisCreateHandler @ 0x1C000F8B0
 * Callers:
 *     ndisCreateIrpHandler @ 0x1C000FE00 (ndisCreateIrpHandler.c)
 *     NdisWdfCreateIrpHandler @ 0x1C0065220 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C006BFC0 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     NdisWaitEvent @ 0x1C00B8130 (NdisWaitEvent.c)
 *     ndisCheckAccess @ 0x1C00B818C (ndisCheckAccess.c)
 *     ndisDummyHandler @ 0x1C00EE614 (ndisDummyHandler.c)
 */

__int64 __fastcall ndisCreateHandler(__int64 a1, __int64 a2, _IRP *a3)
{
  __int64 v5; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _KTHREAD *CurrentThread; // r14
  int *ThreadProperty; // rax
  __int64 v9; // rcx
  int v10; // edi
  unsigned int v11; // ebx
  PACCESS_TOKEN v12; // rax
  void *v13; // rdi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  KIRQL v16; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v18; // r8
  unsigned int v19; // edx
  __int64 v20; // rbx
  KIRQL v21; // r14
  __int64 v22; // rdx
  bool v23; // r14
  KIRQL v24; // al
  __int64 v25; // rdi
  KIRQL v26; // r13
  ULONG_PTR v27; // r8
  __int64 v28; // rdx
  unsigned __int8 v29; // r10
  unsigned __int8 v30; // r9
  KIRQL v32; // dl
  unsigned int v33; // ecx
  char v34; // r14
  KIRQL v35; // di
  struct _NDIS_REFCOUNT_BLOCK *v36; // rcx
  int v37; // edx
  KIRQL v38; // al
  KSPIN_LOCK *v39; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v41; // r13
  _QWORD *v42; // r14
  int v43; // edi
  __int64 v44; // rax
  NTSTATUS v46; // ebx
  unsigned int v47; // eax
  char v48; // al
  KIRQL v49; // al
  __int64 v50; // rcx
  ULONG_PTR v51; // rbx
  unsigned int v52; // edx
  int v53; // ecx
  __int64 v54; // rax
  struct _KEVENT *v55; // rcx
  __int64 v56; // rcx
  KIRQL v57; // al
  KIRQL v58; // al
  KIRQL v59; // al
  char v60; // [rsp+30h] [rbp-39h]
  char v61; // [rsp+31h] [rbp-38h]
  char v62; // [rsp+32h] [rbp-37h]
  char v63; // [rsp+33h] [rbp-36h]
  char v64; // [rsp+34h] [rbp-35h]
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-29h] BYREF
  BOOLEAN CopyOnOpen[7]; // [rsp+41h] [rbp-28h] BYREF
  _QWORD *v68; // [rsp+48h] [rbp-21h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+50h] [rbp-19h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-11h] BYREF
  _IO_STACK_LOCATION *v71; // [rsp+60h] [rbp-9h]
  __int128 v72; // [rsp+70h] [rbp+7h]

  v68 = 0LL;
  v60 = 0;
  v64 = 0;
  v5 = a1;
  v62 = 0;
  v63 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qq(15LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, a3);
    v5 = a1;
  }
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v71 = CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return 3221225473LL;
  }
  if ( *(_BYTE *)a2 != 17 )
    return ndisDummyHandler(v5, a2, a3);
  v61 = ndisCheckAccess(a3, CurrentStackLocation, *(_QWORD *)(a2 + 3816));
  ndisReferencePackage(&ndisPkgs);
  CurrentThread = KeGetCurrentThread();
  v72 = 0uLL;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v10 = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
    v11 = v10;
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( !v11 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    }
    else
    {
      v12 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v13 = v12;
      if ( v12 )
      {
        v46 = SeQueryInformationToken(v12, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v13);
        if ( v46 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_12;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_12:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v10 = 0;
      v49 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v10 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v49);
      if ( !v10 )
        v10 = 1;
    }
    else
    {
      v10 = 1;
    }
    v11 = v10;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfCompartmentList.Flink;
  v18 = 0LL;
  while ( Flink != &ndisIfCompartmentList )
  {
    v19 = (unsigned int)Flink[1].Flink;
    if ( v19 == v11 )
    {
      v18 = Flink;
      break;
    }
    if ( v19 > v11 )
      break;
    Flink = Flink->Flink;
  }
  v72 = *(__int128 *)((char *)&v18[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v16);
  v20 = 0LL;
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a2 + 4064) )
  {
    v20 = *(_QWORD *)(a2 + 4072);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v20 + 1448), 0x16u);
    ++*(_DWORD *)(v20 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v21);
  if ( !v20 )
    goto LABEL_107;
  v22 = *(_QWORD *)(v20 + 1384);
  if ( v10 == *(_DWORD *)(v22 + 16) )
    goto LABEL_25;
  v50 = v72 - *(_QWORD *)(v22 + 1684);
  if ( (_QWORD)v72 == *(_QWORD *)(v22 + 1684) )
    v50 = *((_QWORD *)&v72 + 1) - *(_QWORD *)(v22 + 1692);
  if ( !v50 )
LABEL_25:
    v23 = 1;
  else
    v23 = (*(_DWORD *)(v22 + 1680) & 2) == 0 && v10 == 1;
  v24 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  v25 = *(_QWORD *)(a2 + 4072);
  v26 = v24;
  v27 = *(_QWORD *)(v25 + 1448);
  if ( v27 - 2 <= 1 )
  {
    v27 = 0LL;
  }
  else if ( v27 < 2 )
  {
    ndisBugCheckEx(0x1EuLL, 3uLL, v27, 0LL);
  }
  if ( !v27 )
    goto LABEL_36;
  if ( *(_BYTE *)(v27 + 2) <= 0x16u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v27, 0x16uLL);
  if ( *(_BYTE *)(v27 + 1) )
  {
    if ( *(_BYTE *)(v27 + 1) != 1 )
      goto LABEL_36;
    v51 = v27 + 1416;
    v52 = *(_DWORD *)(v27 + 1472);
    v53 = (unsigned __int16)v52 >> 1;
    if ( v52 >> 17 < 0x3FFE && v53 == (v52 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v27 + 1416));
      *(_DWORD *)(v51 + 56) &= 0x10001u;
      goto LABEL_36;
    }
    if ( v53 != 0 || (v52 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 1416), 0);
      goto LABEL_36;
    }
    goto LABEL_91;
  }
  v28 = *(_QWORD *)(v27 + 8);
  if ( !v28 || (v29 = *(_BYTE *)(v27 + 3), v30 = 0, !v29) )
  {
LABEL_35:
    if ( _bittestandreset((signed __int32 *)(v27 + 16), 0x16u) )
      goto LABEL_36;
LABEL_91:
    ndisBugCheckEx(0x1EuLL, 0LL, v27, 0x16uLL);
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(v28 + 2LL * v30) == 22 )
    {
      v48 = *(_BYTE *)(v28 + 2LL * v30 + 1);
      if ( v48 )
        break;
    }
    if ( ++v30 >= v29 )
      goto LABEL_35;
  }
  *(_BYTE *)(v28 + 2LL * v30 + 1) = v48 - 1;
LABEL_36:
  if ( (*(_DWORD *)(v25 + 1404))-- == 1 )
  {
    v54 = *(_QWORD *)(v25 + 1416);
    if ( v54 )
    {
      v55 = *(struct _KEVENT **)(v54 + 4080);
      if ( v55 )
        KeSetEvent(v55, 0, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v26);
  if ( !v23 )
  {
LABEL_107:
    v42 = v68;
    v43 = -1073741772;
    goto LABEL_108;
  }
  v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4472));
  if ( v61 )
  {
    v33 = *(_DWORD *)(a2 + 3784);
    if ( v33 < 0x1000000 )
    {
      v62 = 1;
      *(_DWORD *)(a2 + 3784) = v33 + 1;
      goto LABEL_41;
    }
LABEL_95:
    v43 = -1073741670;
    v39 = (KSPIN_LOCK *)(a2 + 4472);
    goto LABEL_97;
  }
  v47 = *(_DWORD *)(a2 + 3700);
  if ( v47 >= 0x1000000 )
    goto LABEL_95;
  v63 = 1;
  *(_DWORD *)(a2 + 3700) = v47 + 1;
LABEL_41:
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4472), v32);
  if ( (*(_DWORD *)(a2 + 124) & 0x20100) != 0 )
  {
    v43 = -1073741823;
    goto LABEL_99;
  }
  NdisWaitEvent((PNDIS_EVENT)(a2 + 3760), 0x32u);
  v34 = 1;
  v60 = 1;
  v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4472));
  if ( !*(_BYTE *)(a2 + 4484) )
  {
    v36 = *(struct _NDIS_REFCOUNT_BLOCK **)(a2 + 4928);
    if ( v36 )
      NdisReferenceWithTag(v36, 0x56u);
    v37 = *(_DWORD *)(a2 + 4480);
    *(_DWORD *)(a2 + 4480) = v37 + 1;
    if ( v37 != -1 )
      goto LABEL_46;
    *(_DWORD *)(a2 + 4480) = -1;
  }
  v60 = 0;
  v34 = 0;
LABEL_46:
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(12LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a2, *(unsigned int *)(a2 + 4480));
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4472), v35);
  if ( !v34 )
  {
    v43 = -1073676282;
    goto LABEL_99;
  }
  v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v39 = (KSPIN_LOCK *)(a2 + 96);
  *(_DWORD *)(a2 + 1864) = 918361;
  v32 = v38;
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1864) = 0;
  if ( *(_DWORD *)(a2 + 1520) != 2 )
  {
    ++*(_DWORD *)(a2 + 1800);
    v64 = 1;
    KeReleaseSpinLock(v39, v38);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x636F444Eu);
    v41 = a1;
    v42 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = 0LL;
      v43 = 0;
      *PoolWithTag = a1;
      PoolWithTag[1] = a2;
      *((_BYTE *)PoolWithTag + 24) = v61;
      v71->FileObject->FsContext = PoolWithTag;
      v44 = *(_QWORD *)(a2 + 1776);
      if ( v44 )
      {
        v42[2] = v44;
      }
      else if ( a3->RequestorMode == 1 )
      {
        v43 = -1073741823;
      }
    }
    else
    {
      v43 = -1073741670;
    }
    goto LABEL_53;
  }
  v43 = -1073676282;
LABEL_97:
  KeReleaseSpinLock(v39, v32);
LABEL_99:
  v42 = 0LL;
LABEL_108:
  v41 = a1;
LABEL_53:
  ndisDereferencePackage(&ndisPkgs);
  if ( v43 < 0 )
    goto LABEL_112;
  if ( (*(_DWORD *)(a2 + 124) & 0x2000) != 0 )
  {
    v56 = *(_QWORD *)(a2 + 4016);
    if ( v56 )
      (*(void (__fastcall **)(_QWORD))(v56 + 32))(*(_QWORD *)(v56 + 8));
    else
      v43 = -1073741823;
  }
  if ( v43 < 0 )
  {
LABEL_112:
    if ( v62 )
    {
      v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4472));
      --*(_DWORD *)(a2 + 3784);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4472), v57);
    }
    if ( v63 )
    {
      v58 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4472));
      --*(_DWORD *)(a2 + 3700);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4472), v58);
    }
    if ( v64 )
    {
      ndisReferencePackage(&ndisPkgs);
      v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      --*(_DWORD *)(a2 + 1800);
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v59);
      ndisDereferencePackage(&ndisPkgs);
    }
    if ( v60 )
      ndisDereferenceMiniport(a2, 0x56u);
    if ( v42 )
      ExFreePoolWithTag(v42, 0);
  }
  a3->IoStatus.Status = v43;
  IofCompleteRequest(a3, 2);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(16LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v41, a3, v43);
  return (unsigned int)v43;
}
