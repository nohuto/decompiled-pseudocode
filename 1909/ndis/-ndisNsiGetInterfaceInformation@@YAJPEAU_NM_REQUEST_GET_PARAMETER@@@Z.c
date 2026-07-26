/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C0006780 (ndisDereferenceMiniportForNsi.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015084 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C003671C (ndisIsCompartmentAccessibleByClient.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003685C (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00630CC (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0063CCC (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ndisIfFreeIfIndex @ 0x1C0063D00 (ndisIfFreeIfIndex.c)
 *     ndisIfDeleteStackEntries @ 0x1C0067BB4 (ndisIfDeleteStackEntries.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F98D0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F9F90 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA2A0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA7E0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FAFE0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1, __int16 a2)
{
  struct _NDIS_IF_BLOCK *v2; // r13
  struct _NDIS_IF_BLOCK *TopIfBlockFromMiniport; // r14
  struct _NM_REQUEST_GET_PARAMETER *v4; // r15
  int v5; // r12d
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
  struct _NDIS_IF_COMPARTMENT_BLOCK *v17; // rcx
  KIRQL v18; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // rax
  unsigned int CompartmentId; // edx
  KIRQL v21; // al
  int v22; // ecx
  KIRQL v23; // di
  _LIST_ENTRY *v24; // rax
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  KIRQL v27; // bl
  struct _NDIS_REFCOUNT_BLOCK *MpRefCountTracker; // rcx
  int v29; // ebx
  __int64 v30; // r15
  unsigned int v31; // r14d
  KIRQL v32; // si
  struct _NDIS_M_DRIVER_BLOCK *v33; // rax
  _REFERENCE_EX *p_Ref; // r12
  KIRQL v35; // di
  unsigned __int16 ReferenceCount; // cx
  KIRQL v37; // al
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rdx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  unsigned __int16 Length; // ax
  KIRQL v44; // al
  struct _NDIS_M_DRIVER_BLOCK *v45; // rdi
  KIRQL v46; // al
  ULONG_PTR RefCountTracker; // r8
  KIRQL v48; // bp
  __int64 v49; // r10
  unsigned __int8 v50; // r9
  unsigned __int8 v51; // cl
  _BYTE *v52; // rdx
  bool v53; // zf
  char v54; // bl
  __int16 v55; // dx
  char v56; // al
  __int64 v57; // rdi
  int v58; // esi
  KIRQL v59; // r14
  unsigned __int16 v60; // cx
  KIRQL v61; // bl
  ULONG_PTR v62; // r8
  int v63; // ecx
  __int64 v64; // r9
  unsigned __int8 v65; // dl
  _BYTE *v66; // r10
  struct _KEVENT *v67; // rcx
  __int16 v68; // dx
  char v69; // si
  KIRQL v70; // al
  _BYTE *v71; // rdx
  ULONG_PTR v72; // r8
  KIRQL v73; // bp
  int v74; // ecx
  __int64 v75; // r10
  unsigned __int8 v76; // r9
  __int16 v77; // dx
  KIRQL v78; // al
  ULONG_PTR v79; // r8
  KIRQL v80; // bl
  int v81; // ecx
  __int64 v82; // rdx
  unsigned __int8 v83; // r10
  _BYTE *v84; // r9
  __int64 v85; // rax
  int v86; // eax
  int InterfaceRodInformation; // eax
  KIRQL v88; // bp
  __int64 p_DeferredContext; // rbx
  KIRQL v90; // al
  ULONG_PTR v91; // r8
  KIRQL v92; // di
  int v93; // ecx
  __int64 v94; // r10
  unsigned __int8 v95; // r9
  _BYTE *v96; // rdx
  char v97; // al
  ULONG_PTR v98; // r8
  int v99; // ecx
  __int64 v100; // r9
  unsigned __int8 v101; // dl
  _BYTE *v102; // r10
  ULONG_PTR v103; // r8
  int v104; // ecx
  __int64 v105; // rdx
  unsigned __int8 v106; // r9
  _BYTE *v107; // r10
  int v108; // edx
  char v110; // si
  int v111; // edx
  KIRQL v112; // bp
  struct _NDIS_REFCOUNT_BLOCK *v113; // rcx
  int v114; // ecx
  int *v115; // rax
  char v116; // al
  char v117; // al
  NTSTATUS v118; // edi
  KIRQL v119; // r8
  int v120; // ecx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  __int64 v122; // rdx
  ULONG_PTR v123; // rbx
  unsigned int v124; // r9d
  __int64 v125; // r12
  struct _NDIS_M_DRIVER_BLOCK *v126; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  void *v128; // rcx
  void *v129; // rcx
  _QWORD *v130; // rcx
  _QWORD *v131; // rbx
  __int16 v132; // dx
  ULONG_PTR v133; // rdi
  unsigned int v134; // edx
  int v135; // ecx
  char v136; // al
  ULONG_PTR v137; // rdi
  unsigned int v138; // edx
  int v139; // ecx
  char v140; // al
  struct _KEVENT *v141; // rcx
  ULONG_PTR v142; // rdi
  unsigned int v143; // edx
  int v144; // ecx
  char v145; // al
  _NDIS_MINIPORT_BLOCK *v146; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  int v148; // eax
  ULONG_PTR v149; // rsi
  unsigned int v150; // edx
  int v151; // ecx
  ULONG_PTR v152; // rbx
  unsigned int v153; // edx
  int v154; // ecx
  _LIST_ENTRY *v155; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v157; // rdx
  _LIST_ENTRY *v158; // rcx
  _LIST_ENTRY *v159; // rdx
  _LIST_ENTRY *v160; // rcx
  ULONG_PTR v161; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v165; // rbx
  unsigned int v166; // edx
  int v167; // ecx
  _LIST_ENTRY *v168; // rdx
  _LIST_ENTRY *v169; // rcx
  _LIST_ENTRY *v170; // rdx
  _LIST_ENTRY *v171; // rcx
  _LIST_ENTRY *v172; // rdx
  _LIST_ENTRY *v173; // rcx
  ULONG_PTR v174; // rcx
  _IF_COUNTED_STRING_LH *v175; // rcx
  _NDIS_IF_RCV_ADDRESS *v176; // rcx
  struct _KEVENT *v177; // rcx
  KIRQL v178; // [rsp+40h] [rbp-98h]
  KIRQL v179; // [rsp+41h] [rbp-97h]
  BOOLEAN EffectiveOnly; // [rsp+42h] [rbp-96h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+43h] [rbp-95h] BYREF
  int v182; // [rsp+44h] [rbp-94h]
  _NDIS_MINIPORT_BLOCK *v183; // [rsp+48h] [rbp-90h]
  char v184[8]; // [rsp+50h] [rbp-88h]
  int v185; // [rsp+58h] [rbp-80h]
  char v186[8]; // [rsp+60h] [rbp-78h]
  struct _NDIS_IF_BLOCK *v187; // [rsp+68h] [rbp-70h]
  PVOID TokenInformation; // [rsp+70h] [rbp-68h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+78h] [rbp-60h] BYREF
  _REFERENCE_EX *v190; // [rsp+80h] [rbp-58h]
  struct _NM_REQUEST_GET_PARAMETER *v191; // [rsp+88h] [rbp-50h]
  __int64 v192; // [rsp+90h] [rbp-48h] BYREF
  _GUID NamespaceGuid; // [rsp+98h] [rbp-40h]

  v2 = 0LL;
  v191 = a1;
  TopIfBlockFromMiniport = 0LL;
  v4 = a1;
  v5 = 0;
  v185 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      67,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  }
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v4 + 6) != 8 )
  {
    v5 = -1073741808;
    goto LABEL_127;
  }
  if ( !*((_DWORD *)v4 + 12) )
  {
    v5 = -1073741808;
    goto LABEL_127;
  }
  if ( !*((_QWORD *)v4 + 5) )
  {
    v5 = -1073741808;
    goto LABEL_127;
  }
  CurrentThread = KeGetCurrentThread();
  v7.Value = (*((union _NET_LUID_LH **)v4 + 2))->Value;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v9 = ThreadProperty;
  if ( ThreadProperty )
  {
    v10 = *ThreadProperty;
    LODWORD(v192) = ThreadProperty[1];
    HIDWORD(v192) = v10;
    ObfDereferenceObject(ThreadProperty);
    v11 = v10;
  }
  else
  {
    v10 = 0;
    v192 = 0LL;
    v11 = 0;
  }
  if ( !v11 )
  {
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    }
    else
    {
      v12 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v13 = v12;
      if ( v12 )
      {
        v118 = SeQueryInformationToken(v12, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v13);
        if ( v118 >= 0 )
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
      v119 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v10 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v119);
      if ( !v10 )
        v10 = 1;
    }
    else
    {
      v10 = 1;
    }
    HIDWORD(v192) = v10;
    v11 = v10;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v17 = 0LL;
  v18 = v16;
  Flink = ndisIfCompartmentList;
  if ( ndisIfCompartmentList != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
  {
    while ( 1 )
    {
      CompartmentId = Flink->CompartmentId;
      if ( CompartmentId == v11 )
        break;
      if ( CompartmentId <= v11 )
      {
        Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
        if ( Flink != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
          continue;
      }
      goto LABEL_21;
    }
    v17 = Flink;
  }
LABEL_21:
  NamespaceGuid = v17->LoopbackInfo.NamespaceGuid;
  KeReleaseSpinLock(&ndisIfListLock, v18);
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v22 = *((_DWORD *)v4 + 14);
  v23 = v21;
  v179 = v21;
  if ( v22 )
  {
    v120 = v22 - 1;
    if ( v120 )
    {
      if ( v120 == 1 )
        goto LABEL_216;
      v5 = -1073741808;
    }
    else
    {
      v7.Value = 0LL;
LABEL_216:
      while ( 1 )
      {
        NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v7);
        v187 = NextInterfaceByNetLuid;
        v2 = NextInterfaceByNetLuid;
        if ( !NextInterfaceByNetLuid )
          break;
        v7.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
        if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(NextInterfaceByNetLuid->Compartment, &v192, 0LL) )
          goto LABEL_30;
      }
    }
  }
  else
  {
    v24 = ndisIfList.Flink;
    v187 = 0LL;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( v24[5].Flink != (_LIST_ENTRY *)v7.Value )
      {
        if ( v24[5].Flink <= (_LIST_ENTRY *)v7.Value )
        {
          v24 = v24->Flink;
          if ( v24 != &ndisIfList )
            continue;
        }
        goto LABEL_28;
      }
      v2 = (struct _NDIS_IF_BLOCK *)&v24[-77];
      v187 = (struct _NDIS_IF_BLOCK *)&v24[-77];
    }
LABEL_28:
    if ( v2 )
    {
      Compartment = v2->Compartment;
      if ( v10 != Compartment->CompartmentId )
      {
        v122 = *(_QWORD *)&NamespaceGuid.Data1 - *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1;
        if ( *(_QWORD *)&NamespaceGuid.Data1 == *(_QWORD *)&Compartment->LoopbackInfo.NamespaceGuid.Data1 )
          v122 = *(_QWORD *)NamespaceGuid.Data4 - *(_QWORD *)Compartment->LoopbackInfo.NamespaceGuid.Data4;
        if ( v122 && ((Compartment->LoopbackInfo.Flags & 2) != 0 || v10 != 1) )
        {
          v2 = 0LL;
          goto LABEL_119;
        }
      }
LABEL_30:
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v2->RefCountTracker);
      ++v2->Ref;
      if ( !v2->bNdisIsProvider || *((_QWORD *)v4 + 1) >= 2uLL )
        goto LABEL_118;
      Miniport = 0LL;
      v183 = 0LL;
      v27 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      if ( v2->MiniportAvailable )
      {
        Miniport = v2->Miniport;
        MpRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v2->MpRefCountTracker;
        v183 = Miniport;
        NdisReferenceWithTag(MpRefCountTracker);
        ++v2->MiniportLinkReference;
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v27);
      if ( Miniport )
      {
        v29 = 1;
        *(_QWORD *)v186 = 0LL;
        v30 = 0LL;
        v182 = 1;
        v31 = 1;
        if ( !Miniport->BindPaths )
          goto LABEL_194;
        v32 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v33 = ndisMiniDriverList;
        *(_QWORD *)v184 = ndisMiniDriverList;
        if ( !ndisMiniDriverList )
          goto LABEL_67;
LABEL_37:
        p_Ref = &v33->Ref;
        v190 = &v33->Ref;
        v35 = KeAcquireSpinLockRaiseToDpc(&v33->Ref.SpinLock);
        if ( !p_Ref->Closing )
        {
          ReferenceCount = p_Ref->ReferenceCount;
          if ( ReferenceCount >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
            v29 = 2;
          }
          else
          {
            p_Ref->ReferenceCount = ReferenceCount + 1;
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)p_Ref->RefCountTracker);
            v29 = 0;
          }
        }
        KeReleaseSpinLock(&p_Ref->SpinLock, v35);
        if ( v29 )
        {
          v45 = *(struct _NDIS_M_DRIVER_BLOCK **)(*(_QWORD *)v184 + 8LL);
          goto LABEL_62;
        }
        KeReleaseSpinLock(&ndisMiniDriverListLock, v32);
        v37 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
        v38 = *(_QWORD *)v184;
        v178 = v37;
        v39 = *(_QWORD *)(*(_QWORD *)v184 + 16LL);
        if ( !v39 )
          goto LABEL_49;
        v40 = *(_QWORD *)v186;
        while ( 1 )
        {
          v41 = *(_QWORD *)(v39 + 3768);
          if ( v41 )
          {
            if ( *(_DWORD *)v41 >= v31 )
            {
              BindPaths = Miniport->BindPaths;
              Length = BindPaths->Paths[0].Length;
              if ( Length == *(_WORD *)(v41 + 8)
                && !memcmp(BindPaths->Paths[0].Buffer, *(const void **)(v41 + 16), Length) )
              {
                break;
              }
            }
          }
LABEL_47:
          v39 = *(_QWORD *)(v39 + 8);
          if ( !v39 )
          {
            v2 = v187;
            v37 = v178;
            v38 = *(_QWORD *)v184;
            *(_QWORD *)v186 = v40;
            p_Ref = v190;
LABEL_49:
            KeReleaseSpinLock(&p_Ref->SpinLock, v37);
            v44 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            v45 = *(struct _NDIS_M_DRIVER_BLOCK **)(v38 + 8);
            v32 = v44;
            v46 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
            RefCountTracker = (ULONG_PTR)p_Ref->RefCountTracker;
            v48 = v46;
            if ( RefCountTracker - 2 > 1 )
            {
              if ( RefCountTracker < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, RefCountTracker, 0LL);
              if ( *(_BYTE *)(RefCountTracker + 2) <= 8u )
                ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 8uLL);
              if ( *(_BYTE *)(RefCountTracker + 1) )
              {
                if ( *(_BYTE *)(RefCountTracker + 1) != 1 )
                  goto LABEL_58;
                v123 = RefCountTracker + 520;
                v124 = *(_DWORD *)(RefCountTracker + 576);
                if ( v124 >> 17 < 0x3FFE && (unsigned __int16)v124 >> 1 == (v124 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 520));
                  *(_DWORD *)(v123 + 56) &= 0x10001u;
                  goto LABEL_58;
                }
                if ( (unsigned __int16)v124 >> 1 != 0 || (v124 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 520), 0);
                  goto LABEL_58;
                }
              }
              else
              {
                v49 = *(_QWORD *)(RefCountTracker + 8);
                if ( v49 )
                {
                  v50 = *(_BYTE *)(RefCountTracker + 3);
                  v51 = 0;
                  if ( v50 )
                  {
                    while ( 1 )
                    {
                      v52 = (_BYTE *)(v49 + 2LL * v51);
                      if ( *v52 == 8 )
                      {
                        v56 = v52[1];
                        if ( v56 )
                          break;
                      }
                      if ( ++v51 >= v50 )
                        goto LABEL_57;
                    }
                    v52[1] = v56 - 1;
                    goto LABEL_58;
                  }
                }
LABEL_57:
                if ( _bittestandreset((signed __int32 *)(RefCountTracker + 16), 8u) )
                  goto LABEL_58;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 8uLL);
            }
LABEL_58:
            v53 = p_Ref->ReferenceCount-- == 1;
            if ( v53 )
            {
              v54 = 1;
              if ( !p_Ref->ZeroBased )
              {
                NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
                p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
              }
            }
            else
            {
              v54 = 0;
            }
            KeReleaseSpinLock(&p_Ref->SpinLock, v48);
            if ( v54 )
            {
              v125 = *(_QWORD *)v184;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v55) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v55,
                  20,
                  23,
                  (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                  v184[0]);
              }
              v126 = ndisMiniDriverList;
              p_NextDriver = &ndisMiniDriverList;
              if ( ndisMiniDriverList )
              {
                while ( v126 != (struct _NDIS_M_DRIVER_BLOCK *)v125 )
                {
                  p_NextDriver = &v126->NextDriver;
                  v126 = v126->NextDriver;
                  if ( !v126 )
                    goto LABEL_243;
                }
                *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v125 + 8);
                ObfDereferenceObject(ndisDriverObject);
              }
LABEL_243:
              v128 = *(void **)(v125 + 888);
              if ( v128 )
              {
                ExFreePoolWithTag(v128, 0);
                *(_QWORD *)(v125 + 888) = 0LL;
              }
              v129 = *(void **)(v125 + 32);
              if ( v129 )
              {
                ExFreePoolWithTag(v129, 0);
                *(_QWORD *)(v125 + 32) = 0LL;
              }
              if ( (*(_BYTE *)(v125 + 26) & 1) != 0 )
              {
                v130 = *(_QWORD **)(v125 + 96);
                if ( v130 )
                {
                  do
                  {
                    v131 = (_QWORD *)*v130;
                    ExFreePoolWithTag(v130, 0);
                    v130 = v131;
                  }
                  while ( v131 );
                }
              }
              KeSetEvent((PRKEVENT)(v125 + 368), 0, 0);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v132) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v132,
                  20,
                  24,
                  (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                  v125);
              }
            }
            Miniport = v183;
LABEL_62:
            v33 = v45;
            *(_QWORD *)v184 = v45;
            if ( v45 )
            {
              v29 = 1;
              goto LABEL_37;
            }
            v5 = v185;
LABEL_67:
            KeReleaseSpinLock(&ndisMiniDriverListLock, v32);
            if ( v30 )
            {
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v30 + 96));
              v57 = *(_QWORD *)(v30 + 2048);
              *(_QWORD *)(v30 + 520) = KeGetCurrentThread();
              if ( v57 )
              {
                while ( 1 )
                {
                  v58 = 1;
                  v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v57 + 312));
                  if ( !*(_BYTE *)(v57 + 322) )
                  {
                    v60 = *(_WORD *)(v57 + 320);
                    if ( v60 >= 0xFFEBu )
                    {
                      ndisRefCountReferenceCountOverflow = 1;
                      v58 = 2;
                    }
                    else
                    {
                      *(_WORD *)(v57 + 320) = v60 + 1;
                      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v57 + 328));
                      v58 = 0;
                    }
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v57 + 312), v59);
                  if ( !v58 )
                    break;
                  v57 = *(_QWORD *)(v57 + 112);
                  if ( !v57 )
                    goto LABEL_199;
                }
                TopIfBlockFromMiniport = *(struct _NDIS_IF_BLOCK **)(v57 + 696);
              }
              else
              {
LABEL_199:
                TopIfBlockFromMiniport = *(struct _NDIS_IF_BLOCK **)(v30 + 4040);
              }
              *(_QWORD *)(v30 + 520) = 0LL;
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v30 + 96));
              v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 96));
              v62 = *(_QWORD *)(v30 + 4896);
              *(_QWORD *)(v30 + 520) = KeGetCurrentThread();
              if ( v62 - 2 > 1 )
              {
                if ( v62 <= 1 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v62, 0LL);
                if ( *(_BYTE *)(v62 + 2) <= 2u )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v62, 2uLL);
                v63 = *(unsigned __int8 *)(v62 + 1);
                if ( *(_BYTE *)(v62 + 1) )
                {
                  if ( v63 != 1 )
                    goto LABEL_83;
                  v133 = v62 + 136;
                  v134 = *(_DWORD *)(v62 + 192);
                  v135 = (unsigned __int16)v134 >> 1;
                  if ( v134 >> 17 < 0x3FFE && v135 == (v134 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v62 + 136));
                    *(_DWORD *)(v133 + 56) &= 0x10001u;
                    goto LABEL_83;
                  }
                  if ( v135 != 0 || (v134 & 1) != 0 )
                  {
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v62 + 136), 0);
                    goto LABEL_83;
                  }
                }
                else
                {
                  v64 = *(_QWORD *)(v62 + 8);
                  if ( v64 )
                  {
                    v65 = *(_BYTE *)(v62 + 3);
                    if ( v65 )
                    {
                      while ( 1 )
                      {
                        v66 = (_BYTE *)(v64 + 2LL * (unsigned __int8)v63);
                        if ( *v66 == 2 )
                        {
                          v136 = v66[1];
                          if ( v136 )
                            break;
                        }
                        LOBYTE(v63) = v63 + 1;
                        if ( (unsigned __int8)v63 >= v65 )
                          goto LABEL_82;
                      }
                      v66[1] = v136 - 1;
                      goto LABEL_83;
                    }
                  }
LABEL_82:
                  if ( _bittestandreset((signed __int32 *)(v62 + 16), 2u) )
                    goto LABEL_83;
                }
                ndisBugCheckEx(0x1EuLL, 0LL, v62, 2uLL);
              }
LABEL_83:
              v53 = (*(_DWORD *)(v30 + 3124))-- == 1;
              if ( v53 )
              {
                v67 = *(struct _KEVENT **)(v30 + 3136);
                if ( v67 )
                  KeSetEvent(v67, 0, 0);
              }
              *(_QWORD *)(v30 + 520) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v30 + 96), v61);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v68) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v68,
                  20,
                  25,
                  (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                  v30);
              }
              v69 = 0;
              v70 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 4432));
              v72 = *(_QWORD *)(v30 + 4888);
              v73 = v70;
              if ( v72 && v72 - 2 > 1 )
              {
                if ( v72 == 1 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                if ( *(_BYTE *)(v72 + 2) <= 0x3Cu )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v72, 0x3CuLL);
                v74 = *(unsigned __int8 *)(v72 + 1);
                if ( *(_BYTE *)(v72 + 1) )
                {
                  if ( v74 != 1 )
                    goto LABEL_98;
                  v137 = v72 + 3848;
                  v138 = *(_DWORD *)(v72 + 3904);
                  v139 = (unsigned __int16)v138 >> 1;
                  if ( v138 >> 17 < 0x3FFE && v139 == (v138 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v72 + 3848));
                    *(_DWORD *)(v137 + 56) &= 0x10001u;
                    goto LABEL_98;
                  }
                  if ( v139 != 0 || (v138 & 1) != 0 )
                  {
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v72 + 3848), 0);
                    goto LABEL_98;
                  }
                }
                else
                {
                  v75 = *(_QWORD *)(v72 + 8);
                  if ( v75 )
                  {
                    v76 = *(_BYTE *)(v72 + 3);
                    if ( v76 )
                    {
                      while ( 1 )
                      {
                        v71 = (_BYTE *)(v75 + 2LL * (unsigned __int8)v74);
                        if ( *v71 == 60 )
                        {
                          v140 = v71[1];
                          if ( v140 )
                            break;
                        }
                        LOBYTE(v74) = v74 + 1;
                        if ( (unsigned __int8)v74 >= v76 )
                          goto LABEL_97;
                      }
                      v71[1] = v140 - 1;
                      goto LABEL_98;
                    }
                  }
LABEL_97:
                  if ( _bittestandreset((signed __int32 *)(v72 + 20), 0x1Cu) )
                    goto LABEL_98;
                }
                ndisBugCheckEx(0x1EuLL, 0LL, v72, 0x3CuLL);
              }
LABEL_98:
              v53 = (*(_DWORD *)(v30 + 4440))-- == 1;
              if ( v53 )
                v69 = 1;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v71) = 4;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)v71,
                  20,
                  14,
                  (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
                  v30,
                  *(_DWORD *)(v30 + 4440));
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v30 + 4432), v73);
              if ( v69 )
              {
                v141 = *(struct _KEVENT **)(v30 + 1608);
                if ( v141 )
                  KeSetEvent(v141, 0, 0);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v77) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v77,
                  20,
                  26,
                  (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                  v30);
              }
LABEL_105:
              v78 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
              v79 = (ULONG_PTR)v2->MpRefCountTracker;
              v80 = v78;
              if ( v79 - 2 > 1 )
              {
                if ( v79 <= 1 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v79, 0LL);
                if ( *(_BYTE *)(v79 + 2) <= 3u )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v79, 3uLL);
                v81 = *(unsigned __int8 *)(v79 + 1);
                if ( *(_BYTE *)(v79 + 1) )
                {
                  if ( v81 != 1 )
                    goto LABEL_114;
                  v142 = v79 + 200;
                  v143 = *(_DWORD *)(v79 + 256);
                  v144 = (unsigned __int16)v143 >> 1;
                  if ( v143 >> 17 < 0x3FFE && v144 == (v143 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v79 + 200));
                    *(_DWORD *)(v142 + 56) &= 0x10001u;
                    goto LABEL_114;
                  }
                  if ( v144 != 0 || (v143 & 1) != 0 )
                  {
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v79 + 200), 0);
                    goto LABEL_114;
                  }
                }
                else
                {
                  v82 = *(_QWORD *)(v79 + 8);
                  if ( v82 )
                  {
                    v83 = *(_BYTE *)(v79 + 3);
                    if ( v83 )
                    {
                      while ( 1 )
                      {
                        v84 = (_BYTE *)(v82 + 2LL * (unsigned __int8)v81);
                        if ( *v84 == 3 )
                        {
                          v145 = v84[1];
                          if ( v145 )
                            break;
                        }
                        LOBYTE(v81) = v81 + 1;
                        if ( (unsigned __int8)v81 >= v83 )
                          goto LABEL_113;
                      }
                      v84[1] = v145 - 1;
                      goto LABEL_114;
                    }
                  }
LABEL_113:
                  if ( _bittestandreset((signed __int32 *)(v79 + 16), 3u) )
                    goto LABEL_114;
                }
                ndisBugCheckEx(0x1EuLL, 0LL, v79, 3uLL);
              }
LABEL_114:
              v53 = v2->MiniportLinkReference-- == 1;
              if ( v53 )
              {
                v146 = v2->Miniport;
                if ( v146 )
                {
                  IfBlockPointerRefZeroEvent = v146->IfBlockPointerRefZeroEvent;
                  if ( IfBlockPointerRefZeroEvent )
                    KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
                }
              }
              KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v80);
              v4 = v191;
              v23 = v179;
LABEL_116:
              if ( TopIfBlockFromMiniport )
              {
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)TopIfBlockFromMiniport->RefCountTracker);
                ++TopIfBlockFromMiniport->Ref;
              }
              goto LABEL_118;
            }
LABEL_194:
            TopIfBlockFromMiniport = 0LL;
            goto LABEL_105;
          }
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v39 + 96));
        *(_QWORD *)(v39 + 520) = KeGetCurrentThread();
        if ( (*(_DWORD *)(v39 + 120) & 0x80200020) != 0
          || (*(_DWORD *)(v39 + 124) & 0x1084110) != 0
          || *(_DWORD *)(v39 + 1520) != 1
          || *(_DWORD *)(v39 + 3868) != 1 )
        {
LABEL_180:
          *(_QWORD *)(v39 + 520) = 0LL;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v39 + 96));
          if ( v40 )
          {
            ndisDereferenceMiniportForNsi(v40);
            v40 = 0LL;
          }
          v31 = v182;
          goto LABEL_47;
        }
        v110 = 1;
        v112 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v39 + 4432));
        if ( !*(_BYTE *)(v39 + 4444) )
        {
          v113 = *(struct _NDIS_REFCOUNT_BLOCK **)(v39 + 4888);
          if ( v113 )
            NdisReferenceWithTag(v113);
          v114 = *(_DWORD *)(v39 + 4440);
          *(_DWORD *)(v39 + 4440) = v114 + 1;
          if ( v114 != -1 )
            goto LABEL_175;
          *(_DWORD *)(v39 + 4440) = -1;
        }
        v110 = 0;
LABEL_175:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v111) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v111,
            20,
            12,
            (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
            v39,
            *(_DWORD *)(v39 + 4440));
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 4432), v112);
        if ( v110 )
        {
          v40 = v30;
          NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v39 + 4896));
          v115 = *(int **)(v39 + 3768);
          v30 = v39;
          ++*(_DWORD *)(v39 + 3124);
          v182 = *v115;
        }
        Miniport = v183;
        goto LABEL_180;
      }
      if ( v2->IsNdisFilter )
      {
        TopIfBlockFromMiniport = ndisNsiGetTopIfBlockFromMiniport(*(struct _NDIS_MINIPORT_BLOCK **)&v2->Miniport->Reserved4.Length);
        goto LABEL_116;
      }
LABEL_118:
      **((_QWORD **)v4 + 2) = v2->NetLuid.Value;
    }
  }
LABEL_119:
  KeReleaseSpinLock(&ndisIfListLock, v23);
  if ( v5 < 0 )
    goto LABEL_127;
  if ( v2 )
  {
    v85 = *((_QWORD *)v4 + 1);
    v5 = -1073741811;
    if ( !v85 || v85 == 12 )
    {
      v86 = *((_DWORD *)v4 + 8);
      if ( v86 )
      {
        if ( v86 == 1 )
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRodInformation(v2, TopIfBlockFromMiniport, v4);
        }
        else
        {
          if ( v86 != 2 )
            goto LABEL_127;
          InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v2, TopIfBlockFromMiniport, v4);
        }
      }
      else
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRwInformation(v2, TopIfBlockFromMiniport, v4);
      }
      goto LABEL_126;
    }
    if ( v85 == 1 || v85 == 13 )
    {
      v148 = *((_DWORD *)v4 + 8);
      if ( v148 == 1 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject(v2, TopIfBlockFromMiniport, v4);
LABEL_126:
        v5 = InterfaceRodInformation;
        goto LABEL_127;
      }
      if ( v148 == 2 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject(v2, TopIfBlockFromMiniport, v4);
        goto LABEL_126;
      }
    }
  }
  else if ( *((_DWORD *)v4 + 14) )
  {
    v5 = -2147483622;
  }
  else
  {
    v5 = -1073741772;
  }
LABEL_127:
  v88 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !TopIfBlockFromMiniport )
    goto LABEL_153;
  if ( TopIfBlockFromMiniport->IsNdisFilter )
  {
    p_DeferredContext = (__int64)&TopIfBlockFromMiniport->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
    v90 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
    v91 = *(_QWORD *)(p_DeferredContext + 16);
    v92 = v90;
    if ( v91 - 2 <= 1 )
      goto LABEL_139;
    if ( v91 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v91, 0LL);
    if ( *(_BYTE *)(v91 + 2) <= 0xBu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v91, 0xBuLL);
    v93 = *(unsigned __int8 *)(v91 + 1);
    if ( *(_BYTE *)(v91 + 1) )
    {
      if ( v93 != 1 )
        goto LABEL_139;
      v149 = v91 + 712;
      v150 = *(_DWORD *)(v91 + 768);
      v151 = (unsigned __int16)v150 >> 1;
      if ( v150 >> 17 < 0x3FFE && v151 == (v150 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v91 + 712));
        *(_DWORD *)(v149 + 56) &= 0x10001u;
        goto LABEL_139;
      }
      if ( v151 != 0 || (v150 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v91 + 712), 0);
        goto LABEL_139;
      }
    }
    else
    {
      v94 = *(_QWORD *)(v91 + 8);
      if ( v94 )
      {
        v95 = *(_BYTE *)(v91 + 3);
        if ( v95 )
        {
          while ( 1 )
          {
            v96 = (_BYTE *)(v94 + 2LL * (unsigned __int8)v93);
            if ( *v96 == 11 )
            {
              v97 = v96[1];
              if ( v97 )
                break;
            }
            LOBYTE(v93) = v93 + 1;
            if ( (unsigned __int8)v93 >= v95 )
              goto LABEL_138;
          }
          v96[1] = v97 - 1;
          goto LABEL_139;
        }
      }
LABEL_138:
      if ( _bittestandreset((signed __int32 *)(v91 + 16), 0xBu) )
      {
LABEL_139:
        v53 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
        if ( v53 && !*(_BYTE *)(p_DeferredContext + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(p_DeferredContext + 16));
          *(_QWORD *)(p_DeferredContext + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v92);
        goto LABEL_143;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v91, 0xBuLL);
  }
LABEL_143:
  v98 = (ULONG_PTR)TopIfBlockFromMiniport->RefCountTracker;
  if ( v98 - 2 <= 1 )
    goto LABEL_152;
  if ( v98 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v98, 0LL);
  if ( *(_BYTE *)(v98 + 2) <= 2u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v98, 2uLL);
  v99 = *(unsigned __int8 *)(v98 + 1);
  if ( *(_BYTE *)(v98 + 1) )
  {
    if ( v99 != 1 )
      goto LABEL_152;
    v152 = v98 + 136;
    v153 = *(_DWORD *)(v98 + 192);
    v154 = (unsigned __int16)v153 >> 1;
    if ( v153 >> 17 < 0x3FFE && v154 == (v153 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v98 + 136));
      *(_DWORD *)(v152 + 56) &= 0x10001u;
      goto LABEL_152;
    }
    if ( v154 != 0 || (v153 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v98 + 136), 0);
      goto LABEL_152;
    }
LABEL_320:
    ndisBugCheckEx(0x1EuLL, 0LL, v98, 2uLL);
  }
  v100 = *(_QWORD *)(v98 + 8);
  if ( !v100 || (v101 = *(_BYTE *)(v98 + 3)) == 0 )
  {
LABEL_151:
    if ( _bittestandreset((signed __int32 *)(v98 + 16), 2u) )
      goto LABEL_152;
    goto LABEL_320;
  }
  while ( 1 )
  {
    v102 = (_BYTE *)(v100 + 2LL * (unsigned __int8)v99);
    if ( *v102 == 2 )
    {
      v117 = v102[1];
      if ( v117 )
        break;
    }
    LOBYTE(v99) = v99 + 1;
    if ( (unsigned __int8)v99 >= v101 )
      goto LABEL_151;
  }
  v102[1] = v117 - 1;
LABEL_152:
  v53 = TopIfBlockFromMiniport->Ref-- == 1;
  if ( v53 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
    ndisIfDeleteStackEntries(TopIfBlockFromMiniport);
    *(_QWORD *)&TopIfBlockFromMiniport->LowerLayerIfCount = 0LL;
    KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
    v155 = TopIfBlockFromMiniport->Link.Flink;
    if ( v155->Blink != &TopIfBlockFromMiniport->Link )
      goto LABEL_356;
    Blink = TopIfBlockFromMiniport->Link.Blink;
    if ( Blink->Flink != &TopIfBlockFromMiniport->Link )
      goto LABEL_356;
    Blink->Flink = v155;
    v155->Blink = Blink;
    v157 = TopIfBlockFromMiniport->ProviderLink.Flink;
    if ( v157->Blink != &TopIfBlockFromMiniport->ProviderLink )
      goto LABEL_356;
    v158 = TopIfBlockFromMiniport->ProviderLink.Blink;
    if ( v158->Flink != &TopIfBlockFromMiniport->ProviderLink )
      goto LABEL_356;
    v158->Flink = v157;
    v157->Blink = v158;
    v159 = TopIfBlockFromMiniport->NetworkLink.Flink;
    if ( v159->Blink != &TopIfBlockFromMiniport->NetworkLink )
      goto LABEL_356;
    v160 = TopIfBlockFromMiniport->NetworkLink.Blink;
    if ( v160->Flink != &TopIfBlockFromMiniport->NetworkLink )
      goto LABEL_356;
    v160->Flink = v159;
    v159->Blink = v160;
    NETWORKBLOCK_DECREMENT_REF(TopIfBlockFromMiniport->Network);
    ndisIfFreeIfIndex(TopIfBlockFromMiniport->ifIndex);
    v161 = (ULONG_PTR)TopIfBlockFromMiniport->RefCountTracker;
    --ndisInterfaceCount;
    NdisFreeRefCount(v161);
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
LABEL_153:
  if ( !v2 )
    goto LABEL_164;
  v103 = (ULONG_PTR)v2->RefCountTracker;
  if ( v103 - 2 > 1 )
  {
    if ( v103 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v103, 0LL);
    if ( *(_BYTE *)(v103 + 2) <= 1u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v103, 1uLL);
    v104 = *(unsigned __int8 *)(v103 + 1);
    if ( *(_BYTE *)(v103 + 1) )
    {
      if ( v104 != 1 )
        goto LABEL_163;
      v165 = v103 + 72;
      v166 = *(_DWORD *)(v103 + 128);
      v167 = (unsigned __int16)v166 >> 1;
      if ( v166 >> 17 < 0x3FFE && v167 == (v166 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v103 + 72));
        *(_DWORD *)(v165 + 56) &= 0x10001u;
        goto LABEL_163;
      }
      if ( v167 != 0 || (v166 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v103 + 72), 0);
        goto LABEL_163;
      }
    }
    else
    {
      v105 = *(_QWORD *)(v103 + 8);
      if ( v105 )
      {
        v106 = *(_BYTE *)(v103 + 3);
        if ( v106 )
        {
          while ( 1 )
          {
            v107 = (_BYTE *)(v105 + 2LL * (unsigned __int8)v104);
            if ( *v107 == 1 )
            {
              v116 = v107[1];
              if ( v116 )
                break;
            }
            LOBYTE(v104) = v104 + 1;
            if ( (unsigned __int8)v104 >= v106 )
              goto LABEL_162;
          }
          v107[1] = v116 - 1;
          goto LABEL_163;
        }
      }
LABEL_162:
      if ( _bittestandreset((signed __int32 *)(v103 + 16), 1u) )
        goto LABEL_163;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v103, 1uLL);
  }
LABEL_163:
  v53 = v2->Ref-- == 1;
  if ( !v53 )
    goto LABEL_164;
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  ndisIfDeleteStackEntries(v2);
  *(_QWORD *)&v2->LowerLayerIfCount = 0LL;
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  v168 = v2->Link.Flink;
  if ( v168->Blink != &v2->Link )
    goto LABEL_356;
  v169 = v2->Link.Blink;
  if ( v169->Flink != &v2->Link )
    goto LABEL_356;
  v169->Flink = v168;
  v168->Blink = v169;
  v170 = v2->ProviderLink.Flink;
  if ( v170->Blink != &v2->ProviderLink
    || (v171 = v2->ProviderLink.Blink, v171->Flink != &v2->ProviderLink)
    || (v171->Flink = v170, v170->Blink = v171, v172 = v2->NetworkLink.Flink, v172->Blink != &v2->NetworkLink)
    || (v173 = v2->NetworkLink.Blink, v173->Flink != &v2->NetworkLink) )
  {
LABEL_356:
    __fastfail(3u);
  }
  v173->Flink = v172;
  v172->Blink = v173;
  NETWORKBLOCK_DECREMENT_REF(v2->Network);
  ndisIfFreeIfIndex(v2->ifIndex);
  v174 = (ULONG_PTR)v2->RefCountTracker;
  --ndisInterfaceCount;
  NdisFreeRefCount(v174);
  v175 = v2->ifL2NetworkInfo;
  v2->RefCountTracker = 0LL;
  if ( v175 )
  {
    ExFreePoolWithTag(v175, 0);
    v2->ifL2NetworkInfo = 0LL;
  }
  v176 = v2->ifRcvAddressTable;
  if ( v176 )
  {
    ExFreePoolWithTag(v176, 0);
    v2->ifRcvAddressTable = 0LL;
    *(_QWORD *)&v2->ifRcvAddressCount = 0LL;
  }
  v177 = v2->AsyncEvent;
  if ( v177 )
    KeSetEvent(v177, 0, 0);
  ExFreePoolWithTag(v2, 0);
LABEL_164:
  KeReleaseSpinLock(&ndisIfListLock, v88);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v108) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v108,
      22,
      68,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)v4,
      v5);
  }
  return (unsigned int)v5;
}
