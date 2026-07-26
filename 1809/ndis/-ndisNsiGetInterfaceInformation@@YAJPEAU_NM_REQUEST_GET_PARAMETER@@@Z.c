/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0009F20
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C001F9F4 (ndisIsCompartmentAccessibleByClient.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023BE0 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C003EF88 (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ndisIfFreeIfIndex @ 0x1C003EFBC (ndisIfFreeIfIndex.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0041344 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisIfDeleteStackEntries @ 0x1C0042508 (ndisIfDeleteStackEntries.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C006BFC0 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B68D0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B6E90 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B7170 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B7570 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B7E90 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *v1; // r13
  struct _NDIS_IF_BLOCK *TopIfBlockFromMiniport; // r12
  struct _NM_REQUEST_GET_PARAMETER *v3; // r14
  int v4; // r15d
  union _NET_LUID_LH *v5; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  union _NET_LUID_LH v7; // rbx
  int *ThreadProperty; // rax
  int *v9; // rcx
  int v10; // ebp
  unsigned int v11; // edi
  PACCESS_TOKEN v12; // rax
  void *v13; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  KIRQL v16; // al
  _LIST_ENTRY *v17; // rcx
  KIRQL v18; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v20; // edx
  KIRQL v21; // al
  int v22; // ecx
  KIRQL v23; // di
  _LIST_ENTRY *v24; // rax
  _LIST_ENTRY *v25; // rcx
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  KIRQL v28; // di
  int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  int v33; // ebp
  KIRQL v34; // r14
  unsigned __int16 v35; // cx
  KIRQL v36; // di
  ULONG_PTR v37; // r8
  int v38; // ecx
  __int64 v39; // r10
  unsigned __int8 v40; // r9
  _BYTE *v41; // rdx
  bool v42; // zf
  struct _KEVENT *v43; // rcx
  char v44; // bp
  KIRQL v45; // al
  ULONG_PTR v46; // r8
  KIRQL v47; // r14
  int v48; // ecx
  __int64 v49; // r10
  unsigned __int8 v50; // r9
  _BYTE *v51; // rdx
  KIRQL v52; // al
  ULONG_PTR MpRefCountTracker; // r8
  KIRQL v54; // di
  int v55; // ecx
  __int64 v56; // r9
  unsigned __int8 v57; // dl
  _BYTE *v58; // r10
  __int64 v59; // rax
  int v60; // eax
  int InterfaceRodInformation; // eax
  KIRQL v62; // bp
  __int64 p_SystemArgument1; // rbx
  KIRQL v64; // al
  ULONG_PTR v65; // r8
  KIRQL v66; // si
  int v67; // ecx
  __int64 v68; // r10
  unsigned __int8 v69; // r9
  _BYTE *v70; // rdx
  char v71; // al
  ULONG_PTR RefCountTracker; // r8
  int v73; // ecx
  __int64 v74; // r10
  unsigned __int8 v75; // r9
  _BYTE *v76; // rdx
  ULONG_PTR v77; // r8
  int v78; // ecx
  __int64 v79; // r10
  unsigned __int8 v80; // r9
  _BYTE *v81; // rdx
  char v83; // al
  char v84; // al
  NTSTATUS v85; // edi
  KIRQL v86; // r8
  int v87; // ecx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  __int64 v89; // rdx
  ULONG_PTR v90; // rbx
  unsigned int v91; // edx
  int v92; // ecx
  char v93; // al
  ULONG_PTR v94; // rbx
  unsigned int v95; // edx
  int v96; // ecx
  char v97; // al
  struct _KEVENT *v98; // rcx
  ULONG_PTR v99; // rbx
  unsigned int v100; // edx
  int v101; // ecx
  char v102; // al
  _NDIS_MINIPORT_BLOCK *v103; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  int v105; // eax
  ULONG_PTR v106; // rdi
  unsigned int v107; // edx
  int v108; // ecx
  ULONG_PTR v109; // rbx
  unsigned int v110; // edx
  int v111; // ecx
  _LIST_ENTRY *v112; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v114; // rdx
  _LIST_ENTRY *v115; // rcx
  _LIST_ENTRY *v116; // rdx
  _LIST_ENTRY *v117; // rcx
  ULONG_PTR v118; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v122; // rbx
  unsigned int v123; // edx
  int v124; // ecx
  _LIST_ENTRY *v125; // rdx
  _LIST_ENTRY *v126; // rcx
  _LIST_ENTRY *v127; // rdx
  _LIST_ENTRY *v128; // rcx
  _LIST_ENTRY *v129; // rdx
  _LIST_ENTRY *v130; // rcx
  ULONG_PTR v131; // rcx
  _IF_COUNTED_STRING_LH *v132; // rcx
  _NDIS_IF_RCV_ADDRESS *v133; // rcx
  struct _KEVENT *v134; // rcx
  KIRQL v135; // [rsp+30h] [rbp-68h]
  BOOLEAN EffectiveOnly; // [rsp+31h] [rbp-67h] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+32h] [rbp-66h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+38h] [rbp-60h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp-58h] BYREF
  struct _NM_REQUEST_GET_PARAMETER *v140; // [rsp+48h] [rbp-50h]
  __int64 v141; // [rsp+50h] [rbp-48h] BYREF
  __int128 v142; // [rsp+58h] [rbp-40h]

  v1 = 0LL;
  v140 = a1;
  TopIfBlockFromMiniport = 0LL;
  v3 = a1;
  v4 = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(66LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 8 )
  {
    v4 = -1073741808;
    goto LABEL_97;
  }
  if ( !*((_DWORD *)v3 + 12) )
  {
    v4 = -1073741808;
    goto LABEL_97;
  }
  if ( !*((_QWORD *)v3 + 5) )
  {
    v4 = -1073741808;
    goto LABEL_97;
  }
  v5 = (union _NET_LUID_LH *)*((_QWORD *)v3 + 2);
  CurrentThread = KeGetCurrentThread();
  v141 = 0LL;
  v142 = 0uLL;
  v7.Value = v5->Value;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v9 = ThreadProperty;
  if ( ThreadProperty )
  {
    v10 = *ThreadProperty;
    LODWORD(v141) = ThreadProperty[1];
    HIDWORD(v141) = v10;
    ObfDereferenceObject(ThreadProperty);
    v11 = v10;
  }
  else
  {
    v10 = 0;
    v141 = 0LL;
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
        v85 = SeQueryInformationToken(v12, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v13);
        if ( v85 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_13;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_13:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v10 = 0;
      v86 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v10 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v86);
      if ( !v10 )
        v10 = 1;
    }
    else
    {
      v10 = 1;
    }
    HIDWORD(v141) = v10;
    v11 = v10;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v17 = 0LL;
  v18 = v16;
  Flink = ndisIfCompartmentList.Flink;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    while ( 1 )
    {
      v20 = (unsigned int)Flink[1].Flink;
      if ( v20 == v11 )
        break;
      if ( v20 <= v11 )
      {
        Flink = Flink->Flink;
        if ( Flink != &ndisIfCompartmentList )
          continue;
      }
      goto LABEL_21;
    }
    v17 = Flink;
  }
LABEL_21:
  v142 = *(__int128 *)((char *)&v17[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v18);
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v22 = *((_DWORD *)v3 + 14);
  v23 = v21;
  v135 = v21;
  if ( v22 )
  {
    v87 = v22 - 1;
    if ( v87 )
    {
      if ( v87 == 1 )
        goto LABEL_167;
      v4 = -1073741808;
    }
    else
    {
      v7.Value = 0LL;
LABEL_167:
      while ( 1 )
      {
        NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v7);
        v1 = NextInterfaceByNetLuid;
        if ( !NextInterfaceByNetLuid )
          break;
        v7.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
        if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(NextInterfaceByNetLuid->Compartment, &v141, 0LL) )
          goto LABEL_30;
      }
    }
  }
  else
  {
    v24 = ndisIfList.Flink;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( 1 )
      {
        v25 = v24[5].Flink;
        if ( v25 == (_LIST_ENTRY *)v7.Value )
          break;
        if ( (unsigned __int64)v25 <= v7.Value )
        {
          v24 = v24->Flink;
          if ( v24 != &ndisIfList )
            continue;
        }
        goto LABEL_28;
      }
      v1 = (struct _NDIS_IF_BLOCK *)&v24[-77];
    }
LABEL_28:
    if ( v1 )
    {
      Compartment = v1->Compartment;
      if ( v10 != Compartment->CompartmentId )
      {
        v89 = v142 - *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1;
        if ( (_QWORD)v142 == *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1 )
          v89 = *((_QWORD *)&v142 + 1) - *(_QWORD *)Compartment->LoopbackInfo.NamespaceGuid.Data4;
        if ( v89 && ((Compartment->LoopbackInfo.Flags & 2) != 0 || v10 != 1) )
        {
          v1 = 0LL;
          goto LABEL_89;
        }
      }
LABEL_30:
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1->RefCountTracker);
      ++v1->Ref;
      if ( !v1->bNdisIsProvider || *((_QWORD *)v3 + 1) >= 2uLL )
      {
LABEL_88:
        **((_QWORD **)v3 + 2) = v1->NetLuid.Value;
        goto LABEL_89;
      }
      Miniport = 0LL;
      v28 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      if ( v1->MiniportAvailable )
      {
        Miniport = v1->Miniport;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1->MpRefCountTracker);
        ++v1->MiniportLinkReference;
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v28);
      if ( !Miniport )
      {
        if ( !v1->IsNdisFilter )
        {
LABEL_87:
          v23 = v135;
          goto LABEL_88;
        }
        TopIfBlockFromMiniport = ndisNsiGetTopIfBlockFromMiniport(*(struct _NDIS_MINIPORT_BLOCK **)&v1->Miniport->Reserved4.Length);
LABEL_85:
        if ( TopIfBlockFromMiniport )
        {
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)TopIfBlockFromMiniport->RefCountTracker);
          ++TopIfBlockFromMiniport->Ref;
        }
        goto LABEL_87;
      }
      v30 = ndisReferenceTopMiniportByNameForNsi((_DWORD)Miniport, 0, v29, 0, 2, 60);
      v31 = v30;
      if ( !v30 )
      {
LABEL_74:
        v52 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        MpRefCountTracker = (ULONG_PTR)v1->MpRefCountTracker;
        v54 = v52;
        if ( MpRefCountTracker - 2 <= 1 )
          goto LABEL_83;
        if ( MpRefCountTracker <= 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, MpRefCountTracker, 0LL);
        if ( *(_BYTE *)(MpRefCountTracker + 2) <= 3u )
          ndisBugCheckEx(0x1EuLL, 2uLL, MpRefCountTracker, 3uLL);
        v55 = *(unsigned __int8 *)(MpRefCountTracker + 1);
        if ( *(_BYTE *)(MpRefCountTracker + 1) )
        {
          if ( v55 != 1 )
            goto LABEL_83;
          v99 = MpRefCountTracker + 200;
          v100 = *(_DWORD *)(MpRefCountTracker + 256);
          v101 = (unsigned __int16)v100 >> 1;
          if ( v100 >> 17 < 0x3FFE && v101 == (v100 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 200));
            *(_DWORD *)(v99 + 56) &= 0x10001u;
            goto LABEL_83;
          }
          if ( v101 != 0 || (v100 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 200), 0);
            goto LABEL_83;
          }
        }
        else
        {
          v56 = *(_QWORD *)(MpRefCountTracker + 8);
          if ( v56 )
          {
            v57 = *(_BYTE *)(MpRefCountTracker + 3);
            if ( v57 )
            {
              while ( 1 )
              {
                v58 = (_BYTE *)(v56 + 2LL * (unsigned __int8)v55);
                if ( *v58 == 3 )
                {
                  v102 = v58[1];
                  if ( v102 )
                    break;
                }
                LOBYTE(v55) = v55 + 1;
                if ( (unsigned __int8)v55 >= v57 )
                  goto LABEL_82;
              }
              v58[1] = v102 - 1;
              goto LABEL_83;
            }
          }
LABEL_82:
          if ( _bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 3u) )
          {
LABEL_83:
            v42 = v1->MiniportLinkReference-- == 1;
            if ( v42 )
            {
              v103 = v1->Miniport;
              if ( v103 )
              {
                IfBlockPointerRefZeroEvent = v103->IfBlockPointerRefZeroEvent;
                if ( IfBlockPointerRefZeroEvent )
                  KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
              }
            }
            KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v54);
            goto LABEL_85;
          }
        }
        ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 3uLL);
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v30 + 96));
      v32 = *(_QWORD *)(v31 + 2064);
      *(_QWORD *)(v31 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v31 + 1864) = 2234941;
      if ( v32 )
      {
        while ( 1 )
        {
          v33 = 1;
          v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v32 + 320));
          if ( !*(_BYTE *)(v32 + 330) )
          {
            v35 = *(_WORD *)(v32 + 328);
            if ( v35 >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
              v33 = 2;
            }
            else
            {
              *(_WORD *)(v32 + 328) = v35 + 1;
              NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v32 + 336));
              v33 = 0;
            }
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v32 + 320), v34);
          if ( !v33 )
            break;
          v32 = *(_QWORD *)(v32 + 112);
          if ( !v32 )
            goto LABEL_150;
        }
        TopIfBlockFromMiniport = *(struct _NDIS_IF_BLOCK **)(v32 + 704);
      }
      else
      {
LABEL_150:
        TopIfBlockFromMiniport = *(struct _NDIS_IF_BLOCK **)(v31 + 4072);
      }
      *(_QWORD *)(v31 + 520) = 0LL;
      *(_DWORD *)(v31 + 1864) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v31 + 96));
      v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v31 + 96));
      v37 = *(_QWORD *)(v31 + 4936);
      *(_QWORD *)(v31 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v31 + 1864) = 71257;
      if ( v37 - 2 > 1 )
      {
        if ( v37 <= 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v37, 0LL);
        if ( *(_BYTE *)(v37 + 2) <= 2u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v37, 2uLL);
        v38 = *(unsigned __int8 *)(v37 + 1);
        if ( *(_BYTE *)(v37 + 1) )
        {
          if ( v38 != 1 )
            goto LABEL_51;
          v90 = v37 + 136;
          v91 = *(_DWORD *)(v37 + 192);
          v92 = (unsigned __int16)v91 >> 1;
          if ( v91 >> 17 < 0x3FFE && v92 == (v91 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v37 + 136));
            *(_DWORD *)(v90 + 56) &= 0x10001u;
            goto LABEL_51;
          }
          if ( v92 != 0 || (v91 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v37 + 136), 0);
            goto LABEL_51;
          }
        }
        else
        {
          v39 = *(_QWORD *)(v37 + 8);
          if ( v39 )
          {
            v40 = *(_BYTE *)(v37 + 3);
            if ( v40 )
            {
              while ( 1 )
              {
                v41 = (_BYTE *)(v39 + 2LL * (unsigned __int8)v38);
                if ( *v41 == 2 )
                {
                  v93 = v41[1];
                  if ( v93 )
                    break;
                }
                LOBYTE(v38) = v38 + 1;
                if ( (unsigned __int8)v38 >= v40 )
                  goto LABEL_50;
              }
              v41[1] = v93 - 1;
              goto LABEL_51;
            }
          }
LABEL_50:
          if ( _bittestandreset((signed __int32 *)(v37 + 16), 2u) )
            goto LABEL_51;
        }
        ndisBugCheckEx(0x1EuLL, 0LL, v37, 2uLL);
      }
LABEL_51:
      v42 = (*(_DWORD *)(v31 + 3140))-- == 1;
      if ( v42 )
      {
        v43 = *(struct _KEVENT **)(v31 + 3152);
        if ( v43 )
          KeSetEvent(v43, 0, 0);
      }
      *(_QWORD *)(v31 + 520) = 0LL;
      *(_DWORD *)(v31 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v31 + 96), v36);
      if ( (unsigned __int8)byte_1C00A0263 >= 4u )
        WPP_SF_q(25LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v31);
      v44 = 0;
      v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v31 + 4472));
      v46 = *(_QWORD *)(v31 + 4928);
      v47 = v45;
      if ( !v46 || v46 - 2 <= 1 )
        goto LABEL_66;
      if ( v46 == 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *(_BYTE *)(v46 + 2) <= 0x3Cu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v46, 0x3CuLL);
      v48 = *(unsigned __int8 *)(v46 + 1);
      if ( *(_BYTE *)(v46 + 1) )
      {
        if ( v48 != 1 )
          goto LABEL_66;
        v94 = v46 + 3848;
        v95 = *(_DWORD *)(v46 + 3904);
        v96 = (unsigned __int16)v95 >> 1;
        if ( v95 >> 17 < 0x3FFE && v96 == (v95 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v46 + 3848));
          *(_DWORD *)(v94 + 56) &= 0x10001u;
          goto LABEL_66;
        }
        if ( v96 != 0 || (v95 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v46 + 3848), 0);
          goto LABEL_66;
        }
      }
      else
      {
        v49 = *(_QWORD *)(v46 + 8);
        if ( v49 )
        {
          v50 = *(_BYTE *)(v46 + 3);
          if ( v50 )
          {
            while ( 1 )
            {
              v51 = (_BYTE *)(v49 + 2LL * (unsigned __int8)v48);
              if ( *v51 == 60 )
              {
                v97 = v51[1];
                if ( v97 )
                  break;
              }
              LOBYTE(v48) = v48 + 1;
              if ( (unsigned __int8)v48 >= v50 )
                goto LABEL_65;
            }
            v51[1] = v97 - 1;
            goto LABEL_66;
          }
        }
LABEL_65:
        if ( _bittestandreset((signed __int32 *)(v46 + 20), 0x1Cu) )
        {
LABEL_66:
          v42 = (*(_DWORD *)(v31 + 4480))-- == 1;
          if ( v42 )
            v44 = 1;
          if ( (unsigned __int8)byte_1C00A0263 >= 4u )
            WPP_SF_qD(14LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v31, *(unsigned int *)(v31 + 4480));
          KeReleaseSpinLock((PKSPIN_LOCK)(v31 + 4472), v47);
          if ( v44 )
          {
            v98 = *(struct _KEVENT **)(v31 + 1608);
            if ( v98 )
              KeSetEvent(v98, 0, 0);
          }
          if ( (unsigned __int8)byte_1C00A0263 >= 4u )
            WPP_SF_q(26LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v31);
          v3 = v140;
          goto LABEL_74;
        }
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v46, 0x3CuLL);
    }
  }
LABEL_89:
  KeReleaseSpinLock(&ndisIfListLock, v23);
  if ( v4 < 0 )
    goto LABEL_97;
  if ( v1 )
  {
    v59 = *((_QWORD *)v3 + 1);
    v4 = -1073741811;
    if ( !v59 || v59 == 12 )
    {
      v60 = *((_DWORD *)v3 + 8);
      if ( v60 )
      {
        if ( v60 == 1 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRodInformation(v1, TopIfBlockFromMiniport, v3);
        }
        else
        {
          if ( v60 != 2 )
            goto LABEL_97;
          InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v1, TopIfBlockFromMiniport, v3);
        }
      }
      else
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRwInformation(v1, TopIfBlockFromMiniport, v3);
      }
      goto LABEL_96;
    }
    if ( v59 == 1 || v59 == 13 )
    {
      v105 = *((_DWORD *)v3 + 8);
      if ( v105 == 1 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject(v1, TopIfBlockFromMiniport, v3);
LABEL_96:
        v4 = InterfaceRodInformation;
        goto LABEL_97;
      }
      if ( v105 == 2 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject(v1, TopIfBlockFromMiniport, v3);
        goto LABEL_96;
      }
    }
  }
  else
  {
    v4 = -1073741772;
    if ( *((_DWORD *)v3 + 14) )
      v4 = -2147483622;
  }
LABEL_97:
  v62 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !TopIfBlockFromMiniport )
    goto LABEL_123;
  if ( TopIfBlockFromMiniport->IsNdisFilter )
  {
    p_SystemArgument1 = (__int64)&TopIfBlockFromMiniport->Miniport->WakeUpDpcTimer.Dpc.SystemArgument1;
    v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_SystemArgument1);
    v65 = *(_QWORD *)(p_SystemArgument1 + 16);
    v66 = v64;
    if ( v65 - 2 <= 1 )
      goto LABEL_109;
    if ( v65 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v65, 0LL);
    if ( *(_BYTE *)(v65 + 2) <= 0xBu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v65, 0xBuLL);
    v67 = *(unsigned __int8 *)(v65 + 1);
    if ( *(_BYTE *)(v65 + 1) )
    {
      if ( v67 != 1 )
        goto LABEL_109;
      v106 = v65 + 712;
      v107 = *(_DWORD *)(v65 + 768);
      v108 = (unsigned __int16)v107 >> 1;
      if ( v107 >> 17 < 0x3FFE && v108 == (v107 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v65 + 712));
        *(_DWORD *)(v106 + 56) &= 0x10001u;
        goto LABEL_109;
      }
      if ( v108 != 0 || (v107 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v65 + 712), 0);
        goto LABEL_109;
      }
    }
    else
    {
      v68 = *(_QWORD *)(v65 + 8);
      if ( v68 )
      {
        v69 = *(_BYTE *)(v65 + 3);
        if ( v69 )
        {
          while ( 1 )
          {
            v70 = (_BYTE *)(v68 + 2LL * (unsigned __int8)v67);
            if ( *v70 == 11 )
            {
              v71 = v70[1];
              if ( v71 )
                break;
            }
            LOBYTE(v67) = v67 + 1;
            if ( (unsigned __int8)v67 >= v69 )
              goto LABEL_108;
          }
          v70[1] = v71 - 1;
          goto LABEL_109;
        }
      }
LABEL_108:
      if ( _bittestandreset((signed __int32 *)(v65 + 16), 0xBu) )
      {
LABEL_109:
        v42 = (*(_WORD *)(p_SystemArgument1 + 8))-- == 1;
        if ( v42 && !*(_BYTE *)(p_SystemArgument1 + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(p_SystemArgument1 + 16));
          *(_QWORD *)(p_SystemArgument1 + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)p_SystemArgument1, v66);
        goto LABEL_113;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v65, 0xBuLL);
  }
LABEL_113:
  RefCountTracker = (ULONG_PTR)TopIfBlockFromMiniport->RefCountTracker;
  if ( RefCountTracker - 2 <= 1 )
    goto LABEL_122;
  if ( RefCountTracker <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, RefCountTracker, 0LL);
  if ( *(_BYTE *)(RefCountTracker + 2) <= 2u )
    ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 2uLL);
  v73 = *(unsigned __int8 *)(RefCountTracker + 1);
  if ( *(_BYTE *)(RefCountTracker + 1) )
  {
    if ( v73 != 1 )
      goto LABEL_122;
    v109 = RefCountTracker + 136;
    v110 = *(_DWORD *)(RefCountTracker + 192);
    v111 = (unsigned __int16)v110 >> 1;
    if ( v110 >> 17 < 0x3FFE && v111 == (v110 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 136));
      *(_DWORD *)(v109 + 56) &= 0x10001u;
      goto LABEL_122;
    }
    if ( v111 != 0 || (v110 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 136), 0);
      goto LABEL_122;
    }
LABEL_242:
    ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 2uLL);
  }
  v74 = *(_QWORD *)(RefCountTracker + 8);
  if ( !v74 || (v75 = *(_BYTE *)(RefCountTracker + 3)) == 0 )
  {
LABEL_121:
    if ( _bittestandreset((signed __int32 *)(RefCountTracker + 16), 2u) )
      goto LABEL_122;
    goto LABEL_242;
  }
  while ( 1 )
  {
    v76 = (_BYTE *)(v74 + 2LL * (unsigned __int8)v73);
    if ( *v76 == 2 )
    {
      v84 = v76[1];
      if ( v84 )
        break;
    }
    LOBYTE(v73) = v73 + 1;
    if ( (unsigned __int8)v73 >= v75 )
      goto LABEL_121;
  }
  v76[1] = v84 - 1;
LABEL_122:
  v42 = TopIfBlockFromMiniport->Ref-- == 1;
  if ( v42 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
    ndisIfDeleteStackEntries(TopIfBlockFromMiniport);
    *(_QWORD *)&TopIfBlockFromMiniport->LowerLayerIfCount = 0LL;
    KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
    v112 = TopIfBlockFromMiniport->Link.Flink;
    if ( v112->Blink != &TopIfBlockFromMiniport->Link )
      goto LABEL_278;
    Blink = TopIfBlockFromMiniport->Link.Blink;
    if ( Blink->Flink != &TopIfBlockFromMiniport->Link )
      goto LABEL_278;
    Blink->Flink = v112;
    v112->Blink = Blink;
    v114 = TopIfBlockFromMiniport->ProviderLink.Flink;
    if ( v114->Blink != &TopIfBlockFromMiniport->ProviderLink )
      goto LABEL_278;
    v115 = TopIfBlockFromMiniport->ProviderLink.Blink;
    if ( v115->Flink != &TopIfBlockFromMiniport->ProviderLink )
      goto LABEL_278;
    v115->Flink = v114;
    v114->Blink = v115;
    v116 = TopIfBlockFromMiniport->NetworkLink.Flink;
    if ( v116->Blink != &TopIfBlockFromMiniport->NetworkLink )
      goto LABEL_278;
    v117 = TopIfBlockFromMiniport->NetworkLink.Blink;
    if ( v117->Flink != &TopIfBlockFromMiniport->NetworkLink )
      goto LABEL_278;
    v117->Flink = v116;
    v116->Blink = v117;
    NETWORKBLOCK_DECREMENT_REF(TopIfBlockFromMiniport->Network);
    ndisIfFreeIfIndex(TopIfBlockFromMiniport->ifIndex);
    v118 = (ULONG_PTR)TopIfBlockFromMiniport->RefCountTracker;
    --ndisInterfaceCount;
    NdisFreeRefCount(v118);
    ifL2NetworkInfo = TopIfBlockFromMiniport->ifL2NetworkInfo;
    TopIfBlockFromMiniport->RefCountTracker = 0LL;
    if ( ifL2NetworkInfo )
    {
      ExFreePoolWithTag(ifL2NetworkInfo, 0);
      TopIfBlockFromMiniport->ifL2NetworkInfo = 0LL;
    }
    ifRcvAddressTable = TopIfBlockFromMiniport->ifRcvAddressTable;
    if ( ifRcvAddressTable )
    {
      ExFreePoolWithTag(ifRcvAddressTable, 0);
      TopIfBlockFromMiniport->ifRcvAddressTable = 0LL;
      *(_QWORD *)&TopIfBlockFromMiniport->ifRcvAddressCount = 0LL;
    }
    AsyncEvent = TopIfBlockFromMiniport->AsyncEvent;
    if ( AsyncEvent )
      KeSetEvent(AsyncEvent, 0, 0);
    ExFreePoolWithTag(TopIfBlockFromMiniport, 0);
  }
LABEL_123:
  if ( !v1 )
    goto LABEL_134;
  v77 = (ULONG_PTR)v1->RefCountTracker;
  if ( v77 - 2 > 1 )
  {
    if ( v77 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v77, 0LL);
    if ( *(_BYTE *)(v77 + 2) <= 1u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v77, 1uLL);
    v78 = *(unsigned __int8 *)(v77 + 1);
    if ( *(_BYTE *)(v77 + 1) )
    {
      if ( v78 != 1 )
        goto LABEL_133;
      v122 = v77 + 72;
      v123 = *(_DWORD *)(v77 + 128);
      v124 = (unsigned __int16)v123 >> 1;
      if ( v123 >> 17 < 0x3FFE && v124 == (v123 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v77 + 72));
        *(_DWORD *)(v122 + 56) &= 0x10001u;
        goto LABEL_133;
      }
      if ( v124 != 0 || (v123 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v77 + 72), 0);
        goto LABEL_133;
      }
    }
    else
    {
      v79 = *(_QWORD *)(v77 + 8);
      if ( v79 )
      {
        v80 = *(_BYTE *)(v77 + 3);
        if ( v80 )
        {
          while ( 1 )
          {
            v81 = (_BYTE *)(v79 + 2LL * (unsigned __int8)v78);
            if ( *v81 == 1 )
            {
              v83 = v81[1];
              if ( v83 )
                break;
            }
            LOBYTE(v78) = v78 + 1;
            if ( (unsigned __int8)v78 >= v80 )
              goto LABEL_132;
          }
          v81[1] = v83 - 1;
          goto LABEL_133;
        }
      }
LABEL_132:
      if ( _bittestandreset((signed __int32 *)(v77 + 16), 1u) )
        goto LABEL_133;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v77, 1uLL);
  }
LABEL_133:
  v42 = v1->Ref-- == 1;
  if ( !v42 )
    goto LABEL_134;
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  ndisIfDeleteStackEntries(v1);
  *(_QWORD *)&v1->LowerLayerIfCount = 0LL;
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  v125 = v1->Link.Flink;
  if ( v125->Blink != &v1->Link )
    goto LABEL_278;
  v126 = v1->Link.Blink;
  if ( v126->Flink != &v1->Link )
    goto LABEL_278;
  v126->Flink = v125;
  v125->Blink = v126;
  v127 = v1->ProviderLink.Flink;
  if ( v127->Blink != &v1->ProviderLink
    || (v128 = v1->ProviderLink.Blink, v128->Flink != &v1->ProviderLink)
    || (v128->Flink = v127, v127->Blink = v128, v129 = v1->NetworkLink.Flink, v129->Blink != &v1->NetworkLink)
    || (v130 = v1->NetworkLink.Blink, v130->Flink != &v1->NetworkLink) )
  {
LABEL_278:
    __fastfail(3u);
  }
  v130->Flink = v129;
  v129->Blink = v130;
  NETWORKBLOCK_DECREMENT_REF(v1->Network);
  ndisIfFreeIfIndex(v1->ifIndex);
  v131 = (ULONG_PTR)v1->RefCountTracker;
  --ndisInterfaceCount;
  NdisFreeRefCount(v131);
  v132 = v1->ifL2NetworkInfo;
  v1->RefCountTracker = 0LL;
  if ( v132 )
  {
    ExFreePoolWithTag(v132, 0);
    v1->ifL2NetworkInfo = 0LL;
  }
  v133 = v1->ifRcvAddressTable;
  if ( v133 )
  {
    ExFreePoolWithTag(v133, 0);
    v1->ifRcvAddressTable = 0LL;
    *(_QWORD *)&v1->ifRcvAddressCount = 0LL;
  }
  v134 = v1->AsyncEvent;
  if ( v134 )
    KeSetEvent(v134, 0, 0);
  ExFreePoolWithTag(v1, 0);
LABEL_134:
  KeReleaseSpinLock(&ndisIfListLock, v62);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qD(67LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v3, (unsigned int)v4);
  return (unsigned int)v4;
}
