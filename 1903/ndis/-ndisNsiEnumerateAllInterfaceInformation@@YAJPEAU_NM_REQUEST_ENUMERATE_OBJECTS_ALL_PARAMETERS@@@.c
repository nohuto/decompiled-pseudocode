/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0006570 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C0006780 (ndisDereferenceMiniportForNsi.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003686C (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0062EFC (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ndisIfFreeIfIndex @ 0x1C0063B30 (ndisIfFreeIfIndex.c)
 *     ndisIfDeleteStackEntries @ 0x1C00679E4 (ndisIfDeleteStackEntries.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C77F8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7978 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7B10 (NdisFreeRefCount.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F98D0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F9F90 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  void *v1; // r13
  int v3; // edi
  int v4; // edx
  unsigned int v5; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  int *ThreadProperty; // rax
  int *v8; // rcx
  int v9; // r15d
  unsigned int v10; // ebx
  PACCESS_TOKEN v11; // rax
  void *v12; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  KIRQL v15; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rcx
  KIRQL v17; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // rax
  KIRQL v19; // bl
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v21; // rdx
  __int64 v22; // rsi
  int v23; // edx
  void *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // r8d
  unsigned int v28; // r10d
  unsigned int v29; // edx
  _LIST_ENTRY *v30; // r14
  unsigned int v31; // r8d
  _LIST_ENTRY *v32; // rcx
  _LIST_ENTRY *v33; // rdi
  __int64 v34; // r12
  _LIST_ENTRY *v35; // r14
  KIRQL v36; // bl
  _LIST_ENTRY *v37; // rax
  int v38; // ebx
  unsigned int v39; // esi
  KIRQL v40; // al
  struct _NDIS_M_DRIVER_BLOCK *v41; // r12
  KIRQL v42; // r14
  _REFERENCE_EX *p_Ref; // r13
  KIRQL v44; // di
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v47; // r12
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  _REFERENCE_EX *v49; // r13
  _LIST_ENTRY *v50; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 v53; // ax
  KIRQL v54; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rdi
  KIRQL v56; // al
  ULONG_PTR v57; // r8
  KIRQL v58; // si
  int v59; // ecx
  __int64 v60; // r10
  unsigned __int8 v61; // r9
  _BYTE *v62; // rdx
  bool v63; // zf
  char v64; // bl
  int v65; // edx
  __int64 v66; // rdi
  int v67; // esi
  KIRQL v68; // r14
  unsigned __int16 v69; // ax
  struct _NDIS_REFCOUNT_BLOCK *v70; // rcx
  KIRQL v71; // di
  ULONG_PTR v72; // r8
  int v73; // ecx
  __int64 v74; // rdx
  unsigned __int8 v75; // r10
  _BYTE *v76; // r9
  struct _KEVENT *v77; // rcx
  int v78; // edx
  char v79; // si
  KIRQL v80; // al
  _BYTE *v81; // rdx
  ULONG_PTR v82; // r8
  KIRQL v83; // r14
  int v84; // ecx
  __int64 v85; // r10
  unsigned __int8 v86; // r9
  int v87; // edx
  __int64 v88; // rbx
  __int64 v89; // rbx
  __int64 v90; // rbx
  KIRQL v91; // al
  ULONG_PTR v92; // r8
  KIRQL v93; // si
  int v94; // ecx
  __int64 v95; // r10
  unsigned __int8 v96; // r9
  _BYTE *v97; // rdx
  char v98; // al
  ULONG_PTR v99; // r8
  int v100; // ecx
  __int64 v101; // r10
  unsigned __int8 v102; // r9
  _BYTE *v103; // rdx
  ULONG_PTR v104; // r8
  int v105; // ecx
  __int64 v106; // r10
  unsigned __int8 v107; // r9
  _BYTE *v108; // rdx
  char v109; // al
  char v110; // si
  int v111; // edx
  KIRQL v112; // r14
  struct _NDIS_REFCOUNT_BLOCK *v113; // rcx
  unsigned int v114; // ecx
  struct _NDIS_REFCOUNT_BLOCK *NsiRefCountTracker; // rcx
  unsigned int *p_Number; // rax
  char v117; // al
  char v118; // al
  __int64 v119; // rbx
  KIRQL v120; // al
  struct _NDIS_M_DRIVER_BLOCK *v121; // rsi
  KIRQL v122; // r15
  _REFERENCE_EX *v123; // r12
  int v124; // ebx
  KIRQL v125; // di
  unsigned __int16 v126; // cx
  KIRQL v127; // si
  _NDIS_MINIPORT_BLOCK *v128; // rbx
  unsigned int v129; // r12d
  void *v130; // rsi
  _NDIS_BIND_PATHS *v131; // rdx
  _LIST_ENTRY *v132; // rcx
  unsigned __int16 v133; // ax
  KIRQL v134; // al
  struct _NDIS_M_DRIVER_BLOCK *v135; // rdi
  KIRQL v136; // si
  struct _NDIS_REFCOUNT_BLOCK *v137; // rax
  ULONG_PTR v138; // r10
  int Type; // ecx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r9
  unsigned __int8 NumOverflowTaggedEntries; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v142; // rdx
  char v143; // bl
  int v144; // edx
  __int64 v145; // rdi
  int v146; // esi
  KIRQL v147; // r15
  unsigned __int16 v148; // cx
  char v149; // di
  KIRQL v150; // bl
  ULONG_PTR v151; // rcx
  struct _KEVENT *v152; // rcx
  int v153; // edx
  KIRQL v154; // al
  int v155; // edx
  ULONG_PTR v156; // rcx
  KIRQL v157; // si
  int v158; // edx
  KIRQL v159; // bl
  unsigned __int8 RefCount; // al
  unsigned int *v161; // rax
  NTSTATUS v162; // ebx
  KIRQL v164; // r8
  unsigned __int64 v165; // r8
  unsigned __int64 v166; // rdx
  struct _NDIS_REFCOUNT_WITH_STACK *References; // rbx
  unsigned int v168; // r8d
  struct _NDIS_M_DRIVER_BLOCK *v169; // rax
  struct _NDIS_M_DRIVER_BLOCK **v170; // rcx
  wchar_t *v171; // rcx
  _NDIS_WRAPPER_HANDLE *v172; // rcx
  _NDIS_PENDING_IM_INSTANCE *v173; // rcx
  _NDIS_PENDING_IM_INSTANCE *v174; // rbx
  int v175; // edx
  struct _KEVENT *v176; // rcx
  _LIST_ENTRY *v177; // rax
  struct _KEVENT *v178; // rcx
  ULONG_PTR v179; // rbx
  unsigned int v180; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v181; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v187; // edx
  ULONG_PTR v188; // rbx
  unsigned int v189; // r9d
  char v190; // al
  ULONG_PTR v191; // rdi
  unsigned int v192; // r9d
  char v193; // al
  struct _KEVENT *v194; // rcx
  ULONG_PTR v195; // rdi
  unsigned int v196; // r9d
  ULONG_PTR v197; // rbx
  unsigned int v198; // r9d
  __int64 v199; // rdx
  _QWORD *v200; // rcx
  __int64 v201; // rdx
  _QWORD *v202; // rcx
  __int64 v203; // rdx
  _QWORD *v204; // rcx
  ULONG_PTR v205; // rcx
  void *v206; // rcx
  void *v207; // rcx
  struct _KEVENT *v208; // rcx
  ULONG_PTR v209; // rbx
  unsigned int v210; // r9d
  _LIST_ENTRY *v211; // rcx
  _LIST_ENTRY *v212; // rax
  _LIST_ENTRY *v213; // rdx
  _LIST_ENTRY *v214; // rcx
  _LIST_ENTRY *v215; // rdx
  _LIST_ENTRY *v216; // rcx
  ULONG_PTR v217; // rcx
  _LIST_ENTRY *v218; // rcx
  _LIST_ENTRY *v219; // rcx
  struct _KEVENT *v220; // rcx
  KIRQL v221; // [rsp+40h] [rbp-C0h]
  KIRQL v222; // [rsp+41h] [rbp-BFh]
  KIRQL v223; // [rsp+41h] [rbp-BFh]
  int v224; // [rsp+44h] [rbp-BCh]
  int v225; // [rsp+44h] [rbp-BCh]
  int v226; // [rsp+48h] [rbp-B8h]
  _REFERENCE_EX *v227; // [rsp+48h] [rbp-B8h]
  struct _NDIS_M_DRIVER_BLOCK *v228; // [rsp+50h] [rbp-B0h]
  struct _NDIS_M_DRIVER_BLOCK *v229; // [rsp+50h] [rbp-B0h]
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp-A8h] BYREF
  BOOLEAN CopyOnOpen[7]; // [rsp+59h] [rbp-A7h] BYREF
  char v232[8]; // [rsp+60h] [rbp-A0h]
  _LIST_ENTRY *v233; // [rsp+68h] [rbp-98h]
  char v234[8]; // [rsp+70h] [rbp-90h]
  unsigned int v235; // [rsp+78h] [rbp-88h]
  unsigned int v236; // [rsp+7Ch] [rbp-84h]
  int v237; // [rsp+80h] [rbp-80h]
  unsigned int v238; // [rsp+84h] [rbp-7Ch]
  _REFERENCE_EX *v239; // [rsp+88h] [rbp-78h]
  _LIST_ENTRY *v240; // [rsp+90h] [rbp-70h]
  size_t Size; // [rsp+98h] [rbp-68h]
  void *v242; // [rsp+A0h] [rbp-60h]
  PVOID TokenInformation; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v244; // [rsp+B0h] [rbp-50h]
  __int64 v245; // [rsp+B8h] [rbp-48h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+C0h] [rbp-40h] BYREF
  _LIST_ENTRY *v247; // [rsp+C8h] [rbp-38h]
  _LIST_ENTRY *v248; // [rsp+D0h] [rbp-30h]
  _QWORD v249[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v250; // [rsp+120h] [rbp+20h]
  _GUID NamespaceGuid; // [rsp+128h] [rbp+28h]

  v1 = 0LL;
  *(_QWORD *)v234 = a1;
  v3 = 0;
  memset(v249, 0, sizeof(v249));
  v5 = *((_DWORD *)a1 + 22);
  v238 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      22,
      79,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  }
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v8 = ThreadProperty;
  if ( ThreadProperty )
  {
    v9 = *ThreadProperty;
    LODWORD(v250) = ThreadProperty[1];
    v226 = v9;
    HIDWORD(v250) = v9;
    ObfDereferenceObject(ThreadProperty);
    v10 = v9;
  }
  else
  {
    v9 = 0;
    v226 = 0;
    v250 = 0LL;
    v10 = 0;
  }
  if ( !v10 )
  {
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    }
    else
    {
      v11 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v12 = v11;
      if ( v11 )
      {
        v162 = SeQueryInformationToken(v11, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v12);
        if ( v162 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_10;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_10:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v9 = 0;
      v164 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v9 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v164);
      if ( !v9 )
        v9 = 1;
      v226 = v9;
    }
    else
    {
      v9 = 1;
      v226 = 1;
    }
    HIDWORD(v250) = v9;
    v10 = v9;
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v16 = 0LL;
  v17 = v15;
  Flink = ndisIfCompartmentList;
  if ( ndisIfCompartmentList != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
  {
    while ( Flink->CompartmentId != v10 )
    {
      if ( Flink->CompartmentId <= v10 )
      {
        Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
        if ( Flink != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
          continue;
      }
      goto LABEL_18;
    }
    v16 = Flink;
  }
LABEL_18:
  NamespaceGuid = v16->LoopbackInfo.NamespaceGuid;
  KeReleaseSpinLock(&ndisIfListLock, v17);
  v221 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v19 = v221;
  if ( !v5 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      v21 = i[9].Flink;
      if ( v9 == LODWORD(v21[1].Flink) )
        goto LABEL_21;
      if ( (_DWORD)v250 == -1 )
      {
        v165 = *(_QWORD *)&NamespaceGuid.Data1 - *(unsigned __int64 *)((char *)&v21[105].Flink + 4);
        if ( *(_LIST_ENTRY **)&NamespaceGuid.Data1 == *(_LIST_ENTRY **)((char *)&v21[105].Flink + 4) )
          v165 = *(_QWORD *)NamespaceGuid.Data4 - *(unsigned __int64 *)((char *)&v21[105].Blink + 4);
        if ( !v165 )
          goto LABEL_21;
      }
      if ( ((__int64)v21[105].Flink & 2) == 0 && v9 == 1 )
LABEL_21:
        ++v3;
    }
    LOBYTE(v22) = v234[0];
    *(_DWORD *)(*(_QWORD *)v234 + 88LL) = v3;
    if ( v3 )
      LODWORD(v1) = 261;
    goto LABEL_25;
  }
  v22 = *(_QWORD *)v234;
  v24 = *(void **)(*(_QWORD *)v234 + 16LL);
  v25 = *(_QWORD *)(*(_QWORD *)v234 + 56LL);
  v26 = *(_QWORD *)(*(_QWORD *)v234 + 72LL);
  v27 = *(_DWORD *)(*(_QWORD *)v234 + 24LL);
  v28 = *(_DWORD *)(*(_QWORD *)v234 + 64LL);
  v29 = *(_DWORD *)(*(_QWORD *)v234 + 80LL);
  LODWORD(Size) = v27;
  v235 = v28;
  v236 = v29;
  v242 = v24;
  v244 = v25;
  v245 = v26;
  if ( v24 && v27 != 8
    || *(_QWORD *)(*(_QWORD *)v234 + 40LL)
    || *(_DWORD *)(*(_QWORD *)v234 + 48LL)
    || v25 && v28 < 0x28C
    || v26 && v29 < 0x238 )
  {
    LODWORD(v1) = -1073741306;
    goto LABEL_25;
  }
  memset(v249, 0, sizeof(v249));
  v30 = ndisIfList.Flink;
  v240 = ndisIfList.Flink;
  v31 = 0;
  if ( ndisIfList.Flink != &ndisIfList )
  {
    while ( 1 )
    {
      v32 = v30[9].Flink;
      v33 = v30 - 77;
      v248 = v30;
      v233 = v30 - 77;
      if ( v9 == LODWORD(v32[1].Flink) )
        break;
      if ( (_DWORD)v250 == -1 )
      {
        v166 = *(_QWORD *)&NamespaceGuid.Data1 - *(unsigned __int64 *)((char *)&v32[105].Flink + 4);
        if ( *(_LIST_ENTRY **)&NamespaceGuid.Data1 == *(_LIST_ENTRY **)((char *)&v32[105].Flink + 4) )
          v166 = *(_QWORD *)NamespaceGuid.Data4 - *(unsigned __int64 *)((char *)&v32[105].Blink + 4);
        if ( !v166 )
          break;
      }
      if ( ((__int64)v32[105].Flink & 2) == 0 && v9 == 1 )
        break;
      v30 = v30->Flink;
      v240 = v30;
LABEL_161:
      if ( v30 == &ndisIfList )
        goto LABEL_162;
    }
    v237 = ++v31;
    if ( v31 > v5 )
    {
      v30 = v30->Flink;
      v240 = v30;
      goto LABEL_161;
    }
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v33[89].Blink);
    ++LODWORD(v33[81].Blink);
    v34 = 0LL;
    if ( !BYTE1(v33[87].Flink) || *(_QWORD *)(v22 + 8) >= 2uLL )
      goto LABEL_118;
    v35 = 0LL;
    v36 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    if ( BYTE3(v33[87].Flink) )
    {
      v35 = v33[88].Flink;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v33[90].Flink);
      ++HIDWORD(v33[87].Flink);
    }
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v36);
    if ( !v35 )
    {
      if ( !BYTE2(v33[87].Flink) )
        goto LABEL_117;
      v37 = v33[88].Flink;
      v38 = 1;
      v239 = 0LL;
      v39 = 1;
      *(_QWORD *)v232 = 0LL;
      v224 = 1;
      v247 = v37[2].Flink;
      if ( !v247[235].Blink )
        goto LABEL_252;
      v40 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v41 = ndisMiniDriverList;
      v42 = v40;
      v228 = ndisMiniDriverList;
      if ( !ndisMiniDriverList )
        goto LABEL_74;
LABEL_47:
      p_Ref = &v41->Ref;
      v227 = &v41->Ref;
      v44 = KeAcquireSpinLockRaiseToDpc(&v41->Ref.SpinLock);
      if ( !v41->Ref.Closing )
      {
        ReferenceCount = v41->Ref.ReferenceCount;
        if ( ReferenceCount >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v38 = 2;
        }
        else
        {
          RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v41->Ref.RefCountTracker;
          v41->Ref.ReferenceCount = ReferenceCount + 1;
          NdisReferenceWithTag(RefCountTracker);
          v38 = 0;
        }
      }
      KeReleaseSpinLock(&v41->Ref.SpinLock, v44);
      if ( v38 )
      {
        NextDriver = v41->NextDriver;
        goto LABEL_72;
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v42);
      v47 = KeAcquireSpinLockRaiseToDpc(&v41->Ref.SpinLock);
      v222 = v47;
      MiniportQueue = v228->MiniportQueue;
      if ( !MiniportQueue )
        goto LABEL_59;
      v49 = v239;
      v50 = v247;
      while ( 1 )
      {
        BindPaths = MiniportQueue->BindPaths;
        if ( BindPaths )
        {
          if ( BindPaths->Number >= v39 )
          {
            Blink = v50[235].Blink;
            v53 = (unsigned __int16)Blink->Blink;
            if ( v53 == BindPaths->Paths[0].Length && !memcmp(Blink[1].Flink, BindPaths->Paths[0].Buffer, v53) )
              break;
          }
        }
LABEL_57:
        MiniportQueue = MiniportQueue->NextMiniport;
        if ( !MiniportQueue )
        {
          v47 = v222;
          v239 = v49;
          p_Ref = v227;
LABEL_59:
          KeReleaseSpinLock(&p_Ref->SpinLock, v47);
          v54 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          NextDriver = v228->NextDriver;
          v42 = v54;
          v56 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
          v57 = (ULONG_PTR)p_Ref->RefCountTracker;
          v58 = v56;
          if ( v57 - 2 > 1 )
          {
            if ( v57 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v57, 0LL);
            if ( *(_BYTE *)(v57 + 2) <= 8u )
              ndisBugCheckEx(0x1EuLL, 2uLL, v57, 8uLL);
            v59 = *(unsigned __int8 *)(v57 + 1);
            if ( *(_BYTE *)(v57 + 1) )
            {
              if ( v59 != 1 )
                goto LABEL_68;
              v179 = v57 + 520;
              v180 = *(_DWORD *)(v57 + 576);
              if ( v180 >> 17 < 0x3FFE && (unsigned __int16)v180 >> 1 == (v180 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v57 + 520));
                *(_DWORD *)(v179 + 56) &= 0x10001u;
                goto LABEL_68;
              }
              if ( (unsigned __int16)v180 >> 1 != 0 || (v180 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v57 + 520), 0);
                goto LABEL_68;
              }
            }
            else
            {
              v60 = *(_QWORD *)(v57 + 8);
              if ( v60 )
              {
                v61 = *(_BYTE *)(v57 + 3);
                if ( v61 )
                {
                  while ( 1 )
                  {
                    v62 = (_BYTE *)(v60 + 2LL * (unsigned __int8)v59);
                    if ( *v62 == 8 )
                    {
                      v109 = v62[1];
                      if ( v109 )
                        break;
                    }
                    LOBYTE(v59) = v59 + 1;
                    if ( (unsigned __int8)v59 >= v61 )
                      goto LABEL_67;
                  }
                  v62[1] = v109 - 1;
                  goto LABEL_68;
                }
              }
LABEL_67:
              if ( _bittestandreset((signed __int32 *)(v57 + 16), 8u) )
                goto LABEL_68;
            }
            ndisBugCheckEx(0x1EuLL, 0LL, v57, 8uLL);
          }
LABEL_68:
          v63 = p_Ref->ReferenceCount-- == 1;
          if ( v63 )
          {
            v64 = 1;
            if ( !p_Ref->ZeroBased )
            {
              NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
              p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
            }
          }
          else
          {
            v64 = 0;
          }
          KeReleaseSpinLock(&p_Ref->SpinLock, v58);
          if ( v64 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v65) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v65,
                20,
                23,
                (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                (char)v228);
            }
            v181 = ndisMiniDriverList;
            p_NextDriver = &ndisMiniDriverList;
            if ( ndisMiniDriverList )
            {
              while ( v181 != v228 )
              {
                p_NextDriver = &v181->NextDriver;
                v181 = v181->NextDriver;
                if ( !v181 )
                  goto LABEL_334;
              }
              *p_NextDriver = v228->NextDriver;
              ObfDereferenceObject(ndisDriverObject);
            }
LABEL_334:
            Buffer = v228->ImageName.Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0);
              v228->ImageName.Buffer = 0LL;
            }
            NdisDriverInfo = v228->NdisDriverInfo;
            if ( NdisDriverInfo )
            {
              ExFreePoolWithTag(NdisDriverInfo, 0);
              v228->NdisDriverInfo = 0LL;
            }
            if ( (v228->Flags & 1) != 0 )
            {
              PendingDeviceList = v228->PendingDeviceList;
              if ( PendingDeviceList )
              {
                do
                {
                  Next = PendingDeviceList->Next;
                  ExFreePoolWithTag(PendingDeviceList, 0);
                  PendingDeviceList = Next;
                }
                while ( Next );
              }
            }
            KeSetEvent(&v228->MiniportsRemovedEvent, 0, 0);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v187) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v187,
                20,
                24,
                (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                (char)v228);
            }
          }
          v39 = v224;
LABEL_72:
          v228 = NextDriver;
          v41 = NextDriver;
          if ( NextDriver )
          {
            v38 = 1;
            goto LABEL_47;
          }
          v9 = HIDWORD(v250);
          v1 = v239;
          v33 = v233;
          v226 = HIDWORD(v250);
LABEL_74:
          KeReleaseSpinLock(&ndisMiniDriverListLock, v42);
          if ( v1 )
          {
            KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v1 + 12);
            v66 = *((_QWORD *)v1 + 256);
            *((_QWORD *)v1 + 65) = KeGetCurrentThread();
            if ( v66 )
            {
              while ( 1 )
              {
                v67 = 1;
                v68 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v66 + 312));
                if ( !*(_BYTE *)(v66 + 322) )
                {
                  v69 = *(_WORD *)(v66 + 320);
                  if ( v69 >= 0xFFEBu )
                  {
                    ndisRefCountReferenceCountOverflow = 1;
                    v67 = 2;
                  }
                  else
                  {
                    v70 = *(struct _NDIS_REFCOUNT_BLOCK **)(v66 + 328);
                    *(_WORD *)(v66 + 320) = v69 + 1;
                    NdisReferenceWithTag(v70);
                    v67 = 0;
                  }
                }
                KeReleaseSpinLock((PKSPIN_LOCK)(v66 + 312), v68);
                if ( !v67 )
                  break;
                v66 = *(_QWORD *)(v66 + 112);
                if ( !v66 )
                  goto LABEL_346;
              }
              v34 = *(_QWORD *)(v66 + 696);
            }
            else
            {
LABEL_346:
              v34 = *((_QWORD *)v1 + 505);
            }
            *((_QWORD *)v1 + 65) = 0LL;
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v1 + 12);
            v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1 + 12);
            v72 = *((_QWORD *)v1 + 612);
            *((_QWORD *)v1 + 65) = KeGetCurrentThread();
            if ( v72 - 2 > 1 )
            {
              if ( v72 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v72, 0LL);
              if ( *(_BYTE *)(v72 + 2) <= 2u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v72, 2uLL);
              v73 = *(unsigned __int8 *)(v72 + 1);
              if ( *(_BYTE *)(v72 + 1) )
              {
                if ( v73 != 1 )
                  goto LABEL_90;
                v188 = v72 + 136;
                v189 = *(_DWORD *)(v72 + 192);
                if ( v189 >> 17 < 0x3FFE && (unsigned __int16)v189 >> 1 == (v189 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v72 + 136));
                  *(_DWORD *)(v188 + 56) &= 0x10001u;
                  goto LABEL_90;
                }
                if ( (unsigned __int16)v189 >> 1 != 0 || (v189 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v72 + 136), 0);
                  goto LABEL_90;
                }
              }
              else
              {
                v74 = *(_QWORD *)(v72 + 8);
                if ( v74 )
                {
                  v75 = *(_BYTE *)(v72 + 3);
                  if ( v75 )
                  {
                    while ( 1 )
                    {
                      v76 = (_BYTE *)(v74 + 2LL * (unsigned __int8)v73);
                      if ( *v76 == 2 )
                      {
                        v190 = v76[1];
                        if ( v190 )
                          break;
                      }
                      LOBYTE(v73) = v73 + 1;
                      if ( (unsigned __int8)v73 >= v75 )
                        goto LABEL_89;
                    }
                    v76[1] = v190 - 1;
                    goto LABEL_90;
                  }
                }
LABEL_89:
                if ( _bittestandreset((signed __int32 *)(v72 + 16), 2u) )
                  goto LABEL_90;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, v72, 2uLL);
            }
LABEL_90:
            v63 = (*((_DWORD *)v1 + 781))-- == 1;
            if ( v63 )
            {
              v77 = (struct _KEVENT *)*((_QWORD *)v1 + 392);
              if ( v77 )
                KeSetEvent(v77, 0, 0);
            }
            *((_QWORD *)v1 + 65) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v71);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v78) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v78,
                20,
                25,
                (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                (char)v1);
            }
            v79 = 0;
            v80 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1 + 554);
            v82 = *((_QWORD *)v1 + 611);
            v83 = v80;
            if ( v82 && v82 - 2 > 1 )
            {
              if ( v82 == 1 )
                ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
              if ( *(_BYTE *)(v82 + 2) <= 0x3Cu )
                ndisBugCheckEx(0x1EuLL, 2uLL, v82, 0x3CuLL);
              v84 = *(unsigned __int8 *)(v82 + 1);
              if ( *(_BYTE *)(v82 + 1) )
              {
                if ( v84 != 1 )
                  goto LABEL_105;
                v191 = v82 + 3848;
                v192 = *(_DWORD *)(v82 + 3904);
                if ( v192 >> 17 < 0x3FFE && (unsigned __int16)v192 >> 1 == (v192 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v82 + 3848));
                  *(_DWORD *)(v191 + 56) &= 0x10001u;
                  goto LABEL_105;
                }
                if ( (unsigned __int16)v192 >> 1 != 0 || (v192 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v82 + 3848), 0);
                  goto LABEL_105;
                }
              }
              else
              {
                v85 = *(_QWORD *)(v82 + 8);
                if ( v85 )
                {
                  v86 = *(_BYTE *)(v82 + 3);
                  if ( v86 )
                  {
                    while ( 1 )
                    {
                      v81 = (_BYTE *)(v85 + 2LL * (unsigned __int8)v84);
                      if ( *v81 == 60 )
                      {
                        v193 = v81[1];
                        if ( v193 )
                          break;
                      }
                      LOBYTE(v84) = v84 + 1;
                      if ( (unsigned __int8)v84 >= v86 )
                        goto LABEL_104;
                    }
                    v81[1] = v193 - 1;
                    goto LABEL_105;
                  }
                }
LABEL_104:
                if ( _bittestandreset((signed __int32 *)(v82 + 20), 0x1Cu) )
                  goto LABEL_105;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, v82, 0x3CuLL);
            }
LABEL_105:
            v63 = (*((_DWORD *)v1 + 1110))-- == 1;
            if ( v63 )
              v79 = 1;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v81) = 4;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v81,
                20,
                14,
                (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
                (char)v1,
                *((_DWORD *)v1 + 1110));
            }
            KeReleaseSpinLock((PKSPIN_LOCK)v1 + 554, v83);
            if ( v79 )
            {
              v194 = (struct _KEVENT *)*((_QWORD *)v1 + 201);
              if ( v194 )
                KeSetEvent(v194, 0, 0);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v87) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v87,
                20,
                26,
                (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                (char)v1);
            }
            v9 = HIDWORD(v250);
            v33 = v233;
            v226 = HIDWORD(v250);
LABEL_113:
            if ( v34 )
            {
              NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v34 + 1432));
              ++*(_DWORD *)(v34 + 1304);
            }
            v1 = 0LL;
LABEL_116:
            v22 = *(_QWORD *)v234;
LABEL_117:
            v30 = v240;
            v19 = v221;
LABEL_118:
            KeReleaseSpinLock(&ndisIfListLock, v19);
            if ( *(_QWORD *)(v22 + 16) )
            {
              v88 = (unsigned int)Size;
              memmove(v242, &v33[82], (unsigned int)Size);
              v242 = (char *)v242 + v88;
            }
            if ( *(_QWORD *)(v22 + 56) )
            {
              v119 = v244;
              v249[5] = v244;
              LODWORD(v249[4]) = 1;
              LODWORD(v249[6]) = v235;
              ndisNsiGetInterfaceRodEnumObject(
                (struct _NDIS_IF_BLOCK *)v33,
                (struct _NDIS_IF_BLOCK *)v34,
                (struct _NM_REQUEST_GET_PARAMETER *)v249);
              v244 = v235 + v119;
            }
            if ( *(_QWORD *)(v22 + 72) )
            {
              v89 = v245;
              v249[5] = v245;
              LODWORD(v249[4]) = 2;
              LODWORD(v249[6]) = v236;
              ndisNsiGetInterfaceRosEnumObject(
                (struct _NDIS_IF_BLOCK *)v33,
                (struct _NDIS_IF_BLOCK *)v34,
                (struct _NM_REQUEST_GET_PARAMETER *)v249);
              v245 = v236 + v89;
            }
            v221 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
            v19 = v221;
            if ( !v34 )
              goto LABEL_150;
            if ( !*(_BYTE *)(v34 + 1394) )
              goto LABEL_140;
            v90 = *(_QWORD *)(v34 + 1408) + 312LL;
            v91 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v90);
            v92 = *(_QWORD *)(v90 + 16);
            v93 = v91;
            if ( v92 - 2 <= 1 )
              goto LABEL_136;
            if ( v92 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v92, 0LL);
            if ( *(_BYTE *)(v92 + 2) <= 0xBu )
              ndisBugCheckEx(0x1EuLL, 2uLL, v92, 0xBuLL);
            v94 = *(unsigned __int8 *)(v92 + 1);
            if ( *(_BYTE *)(v92 + 1) )
            {
              if ( v94 != 1 )
                goto LABEL_136;
              v195 = v92 + 712;
              v196 = *(_DWORD *)(v92 + 768);
              if ( v196 >> 17 < 0x3FFE && (unsigned __int16)v196 >> 1 == (v196 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v92 + 712));
                *(_DWORD *)(v195 + 56) &= 0x10001u;
                v33 = v233;
                goto LABEL_136;
              }
              if ( (unsigned __int16)v196 >> 1 != 0 || (v196 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v92 + 712), 0);
                v33 = v233;
                goto LABEL_136;
              }
            }
            else
            {
              v95 = *(_QWORD *)(v92 + 8);
              if ( v95 )
              {
                v96 = *(_BYTE *)(v92 + 3);
                if ( v96 )
                {
                  while ( 1 )
                  {
                    v97 = (_BYTE *)(v95 + 2LL * (unsigned __int8)v94);
                    if ( *v97 == 11 )
                    {
                      v98 = v97[1];
                      if ( v98 )
                        break;
                    }
                    LOBYTE(v94) = v94 + 1;
                    if ( (unsigned __int8)v94 >= v96 )
                      goto LABEL_135;
                  }
                  v97[1] = v98 - 1;
LABEL_136:
                  v63 = (*(_WORD *)(v90 + 8))-- == 1;
                  if ( v63 && !*(_BYTE *)(v90 + 11) )
                  {
                    NdisFreeRefCount(*(_QWORD *)(v90 + 16));
                    *(_QWORD *)(v90 + 16) = 1LL;
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)v90, v93);
                  v22 = *(_QWORD *)v234;
                  v19 = v221;
LABEL_140:
                  v99 = *(_QWORD *)(v34 + 1432);
                  if ( v99 - 2 > 1 )
                  {
                    if ( v99 < 2 )
                      ndisBugCheckEx(0x1EuLL, 3uLL, v99, 0LL);
                    if ( *(_BYTE *)(v99 + 2) <= 7u )
                      ndisBugCheckEx(0x1EuLL, 2uLL, v99, 7uLL);
                    v100 = *(unsigned __int8 *)(v99 + 1);
                    if ( *(_BYTE *)(v99 + 1) )
                    {
                      if ( v100 != 1 )
                        goto LABEL_149;
                      v197 = v99 + 456;
                      v198 = *(_DWORD *)(v99 + 512);
                      if ( v198 >> 17 < 0x3FFE && (unsigned __int16)v198 >> 1 == (v198 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v99 + 456));
                        *(_DWORD *)(v197 + 56) &= 0x10001u;
                        v19 = v221;
                        goto LABEL_149;
                      }
                      if ( (unsigned __int16)v198 >> 1 != 0 || (v198 & 1) != 0 )
                      {
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v99 + 456), 0);
                        v19 = v221;
                        goto LABEL_149;
                      }
                    }
                    else
                    {
                      v101 = *(_QWORD *)(v99 + 8);
                      if ( v101 )
                      {
                        v102 = *(_BYTE *)(v99 + 3);
                        if ( v102 )
                        {
                          while ( 1 )
                          {
                            v103 = (_BYTE *)(v101 + 2LL * (unsigned __int8)v100);
                            if ( *v103 == 7 )
                            {
                              v117 = v103[1];
                              if ( v117 )
                                break;
                            }
                            LOBYTE(v100) = v100 + 1;
                            if ( (unsigned __int8)v100 >= v102 )
                              goto LABEL_148;
                          }
                          v103[1] = v117 - 1;
                          goto LABEL_149;
                        }
                      }
LABEL_148:
                      if ( _bittestandreset((signed __int32 *)(v99 + 16), 7u) )
                        goto LABEL_149;
                    }
                    ndisBugCheckEx(0x1EuLL, 0LL, v99, 7uLL);
                  }
LABEL_149:
                  v63 = (*(_DWORD *)(v34 + 1304))-- == 1;
                  if ( !v63 )
                  {
LABEL_150:
                    v104 = (ULONG_PTR)v33[89].Blink;
                    v30 = v30->Flink;
                    v240 = v30;
                    if ( v104 - 2 <= 1 )
                      goto LABEL_159;
                    if ( v104 < 2 )
                      ndisBugCheckEx(0x1EuLL, 3uLL, v104, 0LL);
                    if ( *(_BYTE *)(v104 + 2) <= 6u )
                      ndisBugCheckEx(0x1EuLL, 2uLL, v104, 6uLL);
                    v105 = *(unsigned __int8 *)(v104 + 1);
                    if ( *(_BYTE *)(v104 + 1) )
                    {
                      if ( v105 != 1 )
                        goto LABEL_159;
                      v209 = v104 + 392;
                      v210 = *(_DWORD *)(v104 + 448);
                      if ( v210 >> 17 < 0x3FFE && (unsigned __int16)v210 >> 1 == (v210 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v104 + 392));
                        *(_DWORD *)(v209 + 56) &= 0x10001u;
                        v19 = v221;
                        goto LABEL_159;
                      }
                      if ( (unsigned __int16)v210 >> 1 != 0 || (v210 & 1) != 0 )
                      {
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v104 + 392), 0);
                        v19 = v221;
                        goto LABEL_159;
                      }
                    }
                    else
                    {
                      v106 = *(_QWORD *)(v104 + 8);
                      if ( v106 )
                      {
                        v107 = *(_BYTE *)(v104 + 3);
                        if ( v107 )
                        {
                          while ( 1 )
                          {
                            v108 = (_BYTE *)(v106 + 2LL * (unsigned __int8)v105);
                            if ( *v108 == 6 )
                            {
                              v118 = v108[1];
                              if ( v118 )
                                break;
                            }
                            LOBYTE(v105) = v105 + 1;
                            if ( (unsigned __int8)v105 >= v107 )
                              goto LABEL_158;
                          }
                          v108[1] = v118 - 1;
LABEL_159:
                          v63 = LODWORD(v33[81].Blink)-- == 1;
                          if ( !v63 )
                          {
LABEL_160:
                            v5 = v238;
                            v31 = v237;
                            goto LABEL_161;
                          }
                          KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
                          ndisIfDeleteStackEntries(v33);
                          v33[81].Flink = 0LL;
                          KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
                          v211 = v248->Flink;
                          if ( v248->Flink->Blink == v248 )
                          {
                            v212 = v248->Blink;
                            if ( v212->Flink == v248 )
                            {
                              v212->Flink = v211;
                              v211->Blink = v212;
                              v213 = v33[78].Flink;
                              if ( v213->Blink == &v33[78] )
                              {
                                v214 = v33[78].Blink;
                                if ( v214->Flink == &v33[78] )
                                {
                                  v214->Flink = v213;
                                  v213->Blink = v214;
                                  v215 = v33[79].Flink;
                                  if ( v215->Blink == &v33[79] )
                                  {
                                    v216 = v33[79].Blink;
                                    if ( v216->Flink == &v33[79] )
                                    {
                                      v216->Flink = v215;
                                      v215->Blink = v216;
                                      NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v33[85].Blink);
                                      ndisIfFreeIfIndex(HIDWORD(v33->Flink));
                                      v217 = (ULONG_PTR)v33[89].Blink;
                                      --ndisInterfaceCount;
                                      NdisFreeRefCount(v217);
                                      v218 = v33[89].Flink;
                                      v33[89].Blink = 0LL;
                                      if ( v218 )
                                      {
                                        ExFreePoolWithTag(v218, 0);
                                        v33[89].Flink = 0LL;
                                      }
                                      v219 = v33[80].Flink;
                                      if ( v219 )
                                      {
                                        ExFreePoolWithTag(v219, 0);
                                        v33[80].Flink = 0LL;
                                        v33[80].Blink = 0LL;
                                      }
                                      v220 = (struct _KEVENT *)v33[86].Blink;
                                      if ( v220 )
                                        KeSetEvent(v220, 0, 0);
                                      ExFreePoolWithTag(v33, 0);
                                      goto LABEL_160;
                                    }
                                  }
                                }
                              }
                            }
                          }
LABEL_429:
                          __fastfail(3u);
                        }
                      }
LABEL_158:
                      if ( _bittestandreset((signed __int32 *)(v104 + 16), 6u) )
                        goto LABEL_159;
                    }
                    ndisBugCheckEx(0x1EuLL, 0LL, v104, 6uLL);
                  }
                  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
                  ndisIfDeleteStackEntries(v34);
                  *(_QWORD *)(v34 + 1296) = 0LL;
                  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
                  v199 = *(_QWORD *)(v34 + 1232);
                  if ( *(_QWORD *)(v199 + 8) == v34 + 1232 )
                  {
                    v200 = *(_QWORD **)(v34 + 1240);
                    if ( *v200 == v34 + 1232 )
                    {
                      *v200 = v199;
                      *(_QWORD *)(v199 + 8) = v200;
                      v201 = *(_QWORD *)(v34 + 1248);
                      if ( *(_QWORD *)(v201 + 8) == v34 + 1248 )
                      {
                        v202 = *(_QWORD **)(v34 + 1256);
                        if ( *v202 == v34 + 1248 )
                        {
                          *v202 = v201;
                          *(_QWORD *)(v201 + 8) = v202;
                          v203 = *(_QWORD *)(v34 + 1264);
                          if ( *(_QWORD *)(v203 + 8) == v34 + 1264 )
                          {
                            v204 = *(_QWORD **)(v34 + 1272);
                            if ( *v204 == v34 + 1264 )
                            {
                              *v204 = v203;
                              *(_QWORD *)(v203 + 8) = v204;
                              NETWORKBLOCK_DECREMENT_REF(*(struct _NDIS_IF_NETWORK_BLOCK **)(v34 + 1368));
                              ndisIfFreeIfIndex(*(unsigned int *)(v34 + 4));
                              v205 = *(_QWORD *)(v34 + 1432);
                              --ndisInterfaceCount;
                              NdisFreeRefCount(v205);
                              v206 = *(void **)(v34 + 1424);
                              *(_QWORD *)(v34 + 1432) = 0LL;
                              if ( v206 )
                              {
                                ExFreePoolWithTag(v206, 0);
                                *(_QWORD *)(v34 + 1424) = 0LL;
                              }
                              v207 = *(void **)(v34 + 1280);
                              if ( v207 )
                              {
                                ExFreePoolWithTag(v207, 0);
                                *(_QWORD *)(v34 + 1280) = 0LL;
                                *(_QWORD *)(v34 + 1288) = 0LL;
                              }
                              v208 = *(struct _KEVENT **)(v34 + 1384);
                              if ( v208 )
                                KeSetEvent(v208, 0, 0);
                              ExFreePoolWithTag((PVOID)v34, 0);
                              goto LABEL_150;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_429;
                }
              }
LABEL_135:
              if ( _bittestandreset((signed __int32 *)(v92 + 16), 0xBu) )
                goto LABEL_136;
            }
            ndisBugCheckEx(0x1EuLL, 0LL, v92, 0xBuLL);
          }
LABEL_252:
          v1 = 0LL;
          v34 = 0LL;
          goto LABEL_116;
        }
      }
      KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
      v63 = (MiniportQueue->Flags & 0x80200020) == 0;
      MiniportQueue->MiniportThread = KeGetCurrentThread();
      if ( !v63
        || (MiniportQueue->PnPFlags & 0x1084110) != 0
        || MiniportQueue->PnPDeviceState != NdisPnPDeviceStarted
        || MiniportQueue->CurrentDevicePowerState != PowerDeviceD0 )
      {
LABEL_178:
        MiniportQueue->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
        if ( *(_QWORD *)v232 )
        {
          ndisDereferenceMiniportForNsi(v232[0]);
          *(_QWORD *)v232 = 0LL;
        }
        goto LABEL_57;
      }
      v110 = 1;
      v112 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
      if ( !MiniportQueue->Ref.Closing )
      {
        v113 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
        if ( v113 )
          NdisReferenceWithTag(v113);
        v114 = MiniportQueue->Ref.ReferenceCount;
        MiniportQueue->Ref.ReferenceCount = v114 + 1;
        if ( v114 != -1 )
          goto LABEL_174;
        MiniportQueue->Ref.ReferenceCount = -1;
      }
      v110 = 0;
LABEL_174:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v111) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v111,
          20,
          12,
          (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
          (char)MiniportQueue,
          MiniportQueue->Ref.ReferenceCount);
      }
      KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v112);
      if ( v110 )
      {
        NsiRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker;
        *(_QWORD *)v232 = v49;
        NdisReferenceWithTag(NsiRefCountTracker);
        p_Number = &MiniportQueue->BindPaths->Number;
        v49 = (_REFERENCE_EX *)MiniportQueue;
        ++MiniportQueue->NsiOpenReferences;
        v39 = *p_Number;
        v224 = *p_Number;
      }
      else
      {
        v39 = v224;
      }
      goto LABEL_178;
    }
    v34 = 0LL;
    v225 = 1;
    *(_QWORD *)v232 = 0LL;
    if ( v35[235].Blink )
    {
      v120 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v121 = ndisMiniDriverList;
      v122 = v120;
      v229 = ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v123 = &v121->Ref;
          v239 = &v121->Ref;
          v124 = 1;
          v125 = KeAcquireSpinLockRaiseToDpc(&v121->Ref.SpinLock);
          if ( !v121->Ref.Closing )
          {
            v126 = v121->Ref.ReferenceCount;
            if ( v126 >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
              v124 = 2;
            }
            else
            {
              v121->Ref.ReferenceCount = v126 + 1;
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v121->Ref.RefCountTracker);
              v124 = 0;
            }
          }
          KeReleaseSpinLock(&v121->Ref.SpinLock, v125);
          if ( v124 )
          {
            v135 = v121->NextDriver;
          }
          else
          {
            KeReleaseSpinLock(&ndisMiniDriverListLock, v122);
            v127 = KeAcquireSpinLockRaiseToDpc(&v121->Ref.SpinLock);
            v223 = v127;
            v128 = v229->MiniportQueue;
            if ( v128 )
            {
              v129 = v225;
              v130 = *(void **)v232;
              do
              {
                v131 = v128->BindPaths;
                if ( v131 )
                {
                  if ( v131->Number >= v129 )
                  {
                    v132 = v35[235].Blink;
                    v133 = (unsigned __int16)v132->Blink;
                    if ( v133 == v131->Paths[0].Length && !memcmp(v132[1].Flink, v131->Paths[0].Buffer, v133) )
                    {
                      KeAcquireSpinLockAtDpcLevel(&v128->Lock);
                      v128->MiniportThread = KeGetCurrentThread();
                      if ( (v128->Flags & 0x80200020) == 0
                        && (v128->PnPFlags & 0x1084110) == 0
                        && v128->PnPDeviceState == NdisPnPDeviceStarted
                        && v128->CurrentDevicePowerState == PowerDeviceD0
                        && (unsigned __int8)ndisReferenceMiniport((char)v128) )
                      {
                        v130 = v1;
                        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v128->NsiRefCountTracker);
                        v161 = &v128->BindPaths->Number;
                        v1 = v128;
                        ++v128->NsiOpenReferences;
                        v129 = *v161;
                      }
                      v128->MiniportThread = 0LL;
                      KeReleaseSpinLockFromDpcLevel(&v128->Lock);
                      if ( v130 )
                      {
                        ndisDereferenceMiniportForNsi((char)v130);
                        v130 = 0LL;
                      }
                    }
                  }
                }
                v128 = v128->NextMiniport;
              }
              while ( v128 );
              *(_QWORD *)v232 = v130;
              v127 = v223;
              v225 = v129;
              v123 = v239;
            }
            KeReleaseSpinLock(&v123->SpinLock, v127);
            v134 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            v135 = v229->NextDriver;
            v122 = v134;
            v136 = KeAcquireSpinLockRaiseToDpc(&v123->SpinLock);
            v137 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)v123->RefCountTracker);
            v138 = (ULONG_PTR)v137;
            if ( v137 )
            {
              if ( v137->NumRefTags <= 8u )
                ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v137, 8uLL);
              Type = v137->Type;
              if ( v137->Type )
              {
                if ( Type == 1 )
                {
                  References = (struct _NDIS_REFCOUNT_WITH_STACK *)v137[7].RefWithStack[0].Block.References;
                  v168 = *(_DWORD *)&v137[8].Flags;
                  if ( v168 >> 17 < 0x3FFE && (unsigned __int16)v168 >> 1 == (v168 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain(&References->Block);
                    *((_DWORD *)References + 14) &= 0x10001u;
                  }
                  else
                  {
                    if ( (unsigned __int16)v168 >> 1 == 0 && (v168 & 1) == 0 )
LABEL_409:
                      ndisBugCheckEx(0x1EuLL, 0LL, v138, 8uLL);
                    ndisReferenceWithTagStackTrace(References, 0);
                  }
                }
              }
              else
              {
                Tags = v137->TaggedRefCounts.Tags;
                if ( Tags && (NumOverflowTaggedEntries = v137->NumOverflowTaggedEntries) != 0 )
                {
                  while ( 1 )
                  {
                    v142 = &Tags[(unsigned __int8)Type];
                    if ( v142->Tag == 8 )
                    {
                      RefCount = v142->RefCount;
                      if ( RefCount )
                        break;
                    }
                    LOBYTE(Type) = Type + 1;
                    if ( (unsigned __int8)Type >= NumOverflowTaggedEntries )
                      goto LABEL_205;
                  }
                  v142->RefCount = RefCount - 1;
                }
                else
                {
LABEL_205:
                  if ( !_bittestandreset((signed __int32 *)(v138 + 16), 8u) )
                    goto LABEL_409;
                }
              }
            }
            v63 = v123->ReferenceCount-- == 1;
            if ( v63 )
            {
              v143 = 1;
              if ( !v123->ZeroBased )
              {
                NdisFreeRefCount((ULONG_PTR)v123->RefCountTracker);
                v123->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
              }
            }
            else
            {
              v143 = 0;
            }
            KeReleaseSpinLock(&v123->SpinLock, v136);
            if ( v143 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v144) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v144,
                  20,
                  23,
                  (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                  (char)v229);
              }
              v169 = ndisMiniDriverList;
              v170 = &ndisMiniDriverList;
              if ( ndisMiniDriverList )
              {
                while ( v169 != v229 )
                {
                  v170 = &v169->NextDriver;
                  v169 = v169->NextDriver;
                  if ( !v169 )
                    goto LABEL_296;
                }
                *v170 = v229->NextDriver;
                ObfDereferenceObject(ndisDriverObject);
              }
LABEL_296:
              v171 = v229->ImageName.Buffer;
              if ( v171 )
              {
                ExFreePoolWithTag(v171, 0);
                v34 = 0LL;
                v229->ImageName.Buffer = 0LL;
              }
              else
              {
                v34 = 0LL;
              }
              v172 = v229->NdisDriverInfo;
              if ( v172 )
              {
                ExFreePoolWithTag(v172, 0);
                v229->NdisDriverInfo = 0LL;
              }
              if ( (v229->Flags & 1) != 0 )
              {
                v173 = v229->PendingDeviceList;
                if ( v173 )
                {
                  do
                  {
                    v174 = v173->Next;
                    ExFreePoolWithTag(v173, 0);
                    v173 = v174;
                  }
                  while ( v174 );
                }
              }
              KeSetEvent(&v229->MiniportsRemovedEvent, 0, 0);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v175) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v175,
                  20,
                  24,
                  (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                  (char)v229);
              }
              goto LABEL_210;
            }
          }
          v34 = 0LL;
LABEL_210:
          v229 = v135;
          v121 = v135;
          if ( !v135 )
          {
            v33 = v233;
            v226 = HIDWORD(v250);
            break;
          }
        }
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v122);
      if ( v1 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v1 + 12);
        v145 = *((_QWORD *)v1 + 256);
        *((_QWORD *)v1 + 65) = KeGetCurrentThread();
        if ( v145 )
        {
          while ( 1 )
          {
            v146 = 1;
            v147 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v145 + 312));
            if ( !*(_BYTE *)(v145 + 322) )
            {
              v148 = *(_WORD *)(v145 + 320);
              if ( v148 >= 0xFFEBu )
              {
                ndisRefCountReferenceCountOverflow = 1;
                v146 = 2;
              }
              else
              {
                *(_WORD *)(v145 + 320) = v148 + 1;
                NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v145 + 328));
                v146 = 0;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v145 + 312), v147);
            if ( !v146 )
              break;
            v145 = *(_QWORD *)(v145 + 112);
            if ( !v145 )
              goto LABEL_309;
          }
          v34 = *(_QWORD *)(v145 + 696);
        }
        else
        {
LABEL_309:
          v34 = *((_QWORD *)v1 + 505);
        }
        v149 = 0;
        *((_QWORD *)v1 + 65) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v1 + 12);
        v150 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1 + 12);
        v151 = *((_QWORD *)v1 + 612);
        *((_QWORD *)v1 + 65) = KeGetCurrentThread();
        NdisDereferenceWithTag(v151);
        v63 = (*((_DWORD *)v1 + 781))-- == 1;
        if ( v63 )
        {
          v152 = (struct _KEVENT *)*((_QWORD *)v1 + 392);
          if ( v152 )
            KeSetEvent(v152, 0, 0);
        }
        *((_QWORD *)v1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)v1 + 12, v150);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v153) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v153,
            20,
            25,
            (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
            (char)v1);
        }
        v154 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1 + 554);
        v156 = *((_QWORD *)v1 + 611);
        v157 = v154;
        if ( v156 )
          NdisDereferenceWithTag(v156);
        v63 = (*((_DWORD *)v1 + 1110))-- == 1;
        if ( v63 )
          v149 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v155) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v155,
            20,
            14,
            (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
            (char)v1,
            *((_DWORD *)v1 + 1110));
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v1 + 554, v157);
        if ( v149 )
        {
          v176 = (struct _KEVENT *)*((_QWORD *)v1 + 201);
          if ( v176 )
            KeSetEvent(v176, 0, 0);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v158) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v158,
            20,
            26,
            (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
            (char)v1);
        }
        v9 = HIDWORD(v250);
        v33 = v233;
        v226 = HIDWORD(v250);
      }
      else
      {
        v9 = v226;
      }
    }
    v159 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    NdisDereferenceWithTag((ULONG_PTR)v33[90].Flink);
    v63 = HIDWORD(v33[87].Flink)-- == 1;
    if ( v63 )
    {
      v177 = v33[88].Flink;
      if ( v177 )
      {
        v178 = (struct _KEVENT *)v177[253].Flink;
        if ( v178 )
          KeSetEvent(v178, 0, 0);
      }
    }
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v159);
    goto LABEL_113;
  }
LABEL_162:
  *(_DWORD *)(v22 + 88) = v31;
  if ( v31 > v5 )
    LODWORD(v1) = 261;
LABEL_25:
  KeReleaseSpinLock(&ndisIfListLock, v19);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v23,
      22,
      80,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v22,
      (char)v1);
  }
  return (unsigned int)v1;
}
