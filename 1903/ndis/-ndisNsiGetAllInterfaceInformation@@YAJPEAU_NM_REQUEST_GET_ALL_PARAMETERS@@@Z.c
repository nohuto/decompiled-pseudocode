/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0
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
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA2A0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA7E0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FAFE0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1, __int16 a2)
{
  unsigned int v2; // edi
  _LIST_ENTRY *v3; // r13
  __int64 v4; // r14
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v5; // rsi
  _LIST_ENTRY **v6; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY *v8; // rbx
  _DWORD *ThreadProperty; // rax
  __int64 v10; // rcx
  int v11; // r15d
  int v12; // r12d
  PACCESS_TOKEN v13; // rax
  void *v14; // r15
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v16; // edi
  KIRQL v17; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v18; // rcx
  KIRQL v19; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // rax
  KIRQL v21; // al
  KIRQL v22; // di
  int v23; // ecx
  int v24; // ecx
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *v26; // rcx
  _LIST_ENTRY *v27; // rsi
  KIRQL v28; // bl
  struct _NDIS_REFCOUNT_BLOCK *v29; // rcx
  __int64 v30; // r13
  int v31; // edi
  unsigned int v32; // r15d
  KIRQL v33; // al
  struct _NDIS_M_DRIVER_BLOCK *v34; // r12
  KIRQL v35; // r14
  _REFERENCE_EX *p_Ref; // r13
  int v37; // ebx
  KIRQL v38; // di
  unsigned __int16 v39; // cx
  struct _NDIS_M_DRIVER_BLOCK *v40; // rdi
  KIRQL v41; // r12
  _NDIS_MINIPORT_BLOCK *v42; // rbx
  _NDIS_MINIPORT_BLOCK *v43; // r13
  KSPIN_LOCK *p_Type; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 v47; // ax
  KIRQL v48; // al
  struct _NDIS_M_DRIVER_BLOCK *v49; // rdi
  KIRQL v50; // al
  ULONG_PTR v51; // r8
  KIRQL v52; // si
  int v53; // ecx
  __int64 v54; // r10
  unsigned __int8 v55; // r9
  _BYTE *v56; // rdx
  bool v57; // zf
  char v58; // bl
  __int16 v59; // dx
  __int64 v60; // r14
  KIRQL v61; // si
  unsigned __int16 v62; // cx
  KIRQL v63; // di
  ULONG_PTR v64; // r8
  int v65; // ecx
  __int64 v66; // r10
  unsigned __int8 v67; // r9
  _BYTE *v68; // rdx
  struct _KEVENT *v69; // rcx
  __int16 v70; // dx
  char v71; // si
  KIRQL v72; // al
  _BYTE *v73; // rdx
  ULONG_PTR v74; // r8
  KIRQL v75; // r15
  int v76; // ecx
  __int64 v77; // r10
  unsigned __int8 v78; // r9
  __int16 v79; // dx
  KIRQL v80; // al
  KIRQL v81; // bl
  ULONG_PTR v82; // r8
  int v83; // ecx
  __int64 v84; // r10
  unsigned __int8 v85; // r9
  _BYTE *v86; // rdx
  int v87; // r12d
  __int64 v88; // rax
  KIRQL v89; // r15
  __int64 v90; // rbx
  KIRQL v91; // al
  ULONG_PTR v92; // r8
  KIRQL v93; // di
  int v94; // ecx
  __int64 v95; // r10
  unsigned __int8 v96; // r9
  _BYTE *v97; // rdx
  ULONG_PTR v98; // r8
  int v99; // ecx
  __int64 v100; // r10
  unsigned __int8 v101; // r9
  _BYTE *v102; // rdx
  ULONG_PTR v103; // r8
  int v104; // ecx
  __int64 v105; // rdx
  unsigned __int8 v106; // r9
  _BYTE *v107; // r10
  int v108; // edx
  char v110; // al
  char v111; // al
  char v112; // al
  char v113; // si
  int v114; // edx
  KIRQL v115; // r14
  struct _NDIS_REFCOUNT_BLOCK *v116; // rcx
  unsigned int v117; // ecx
  int *v118; // rax
  char v119; // al
  _LIST_ENTRY *v120; // rax
  int v121; // ebx
  __int64 v122; // r13
  unsigned int v123; // r12d
  KIRQL v124; // al
  struct _NDIS_M_DRIVER_BLOCK *v125; // r14
  KIRQL v126; // r15
  KSPIN_LOCK *p_SpinLock; // rsi
  KIRQL v128; // di
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v131; // r14
  __int64 MiniportQueue; // rbx
  _REFERENCE_EX *v133; // rsi
  __int64 v134; // r14
  __int64 v135; // rdx
  unsigned __int64 SpinLock; // rcx
  unsigned __int16 v137; // ax
  KIRQL v138; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rdi
  KIRQL v140; // r14
  struct _NDIS_REFCOUNT_BLOCK *v141; // rax
  ULONG_PTR v142; // r10
  int Type; // ecx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r9
  unsigned __int8 NumOverflowTaggedEntries; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v146; // rdx
  char v147; // bl
  __int16 v148; // dx
  unsigned __int8 RefCount; // al
  _LIST_ENTRY *v150; // rax
  _LIST_ENTRY *v151; // rcx
  unsigned int *v152; // rax
  __int64 v153; // r14
  int v154; // esi
  KIRQL v155; // r15
  unsigned __int16 v156; // cx
  KIRQL v157; // bl
  ULONG_PTR v158; // rcx
  struct _KEVENT *v159; // rcx
  __int16 v160; // dx
  char v161; // di
  KIRQL v162; // al
  int v163; // edx
  ULONG_PTR v164; // rcx
  KIRQL v165; // si
  __int16 v166; // dx
  NTSTATUS v167; // edi
  unsigned int ThreadSessionId; // eax
  KIRQL v169; // r8
  unsigned __int64 v170; // r8
  unsigned __int64 v171; // rdx
  ULONG_PTR v172; // rbx
  unsigned int v173; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v174; // rax
  struct _NDIS_M_DRIVER_BLOCK **v175; // rcx
  wchar_t *v176; // rcx
  _NDIS_WRAPPER_HANDLE *v177; // rcx
  _NDIS_PENDING_IM_INSTANCE *v178; // rcx
  _NDIS_PENDING_IM_INSTANCE *v179; // rbx
  __int16 v180; // dx
  ULONG_PTR v181; // rbx
  unsigned int v182; // edx
  int v183; // ecx
  char v184; // al
  ULONG_PTR v185; // rdi
  unsigned int v186; // edx
  int v187; // ecx
  char v188; // al
  struct _KEVENT *v189; // rcx
  ULONG_PTR v190; // rdi
  unsigned int v191; // edx
  int v192; // ecx
  char v193; // al
  _LIST_ENTRY *v194; // rax
  struct _KEVENT *v195; // rcx
  struct _NDIS_REFCOUNT_WITH_STACK *References; // rbx
  unsigned int v197; // r8d
  struct _NDIS_M_DRIVER_BLOCK *v198; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int16 v204; // dx
  struct _KEVENT *v205; // rcx
  ULONG_PTR v206; // rsi
  unsigned int v207; // edx
  int v208; // ecx
  ULONG_PTR v209; // rbx
  unsigned int v210; // edx
  int v211; // ecx
  __int64 v212; // rdx
  _QWORD *v213; // rcx
  __int64 v214; // rdx
  _QWORD *v215; // rcx
  __int64 v216; // rdx
  _QWORD *v217; // rcx
  ULONG_PTR v218; // rcx
  void *v219; // rcx
  void *v220; // rcx
  struct _KEVENT *v221; // rcx
  ULONG_PTR v222; // rbx
  unsigned int v223; // edx
  int v224; // ecx
  _LIST_ENTRY *v225; // rdx
  _LIST_ENTRY *v226; // rcx
  _LIST_ENTRY *v227; // rdx
  _LIST_ENTRY *v228; // rcx
  _LIST_ENTRY *v229; // rdx
  _LIST_ENTRY *v230; // rcx
  ULONG_PTR v231; // rcx
  _LIST_ENTRY *v232; // rcx
  _LIST_ENTRY *v233; // rcx
  struct _KEVENT *v234; // rcx
  KIRQL v235; // [rsp+40h] [rbp-89h]
  KIRQL v236; // [rsp+40h] [rbp-89h]
  KIRQL v237; // [rsp+41h] [rbp-88h]
  struct _NDIS_M_DRIVER_BLOCK *v238; // [rsp+48h] [rbp-81h]
  struct _NDIS_M_DRIVER_BLOCK *v239; // [rsp+48h] [rbp-81h]
  BOOLEAN EffectiveOnly; // [rsp+54h] [rbp-75h] BYREF
  BOOLEAN CopyOnOpen[3]; // [rsp+55h] [rbp-74h] BYREF
  int v242; // [rsp+58h] [rbp-71h]
  char v243[8]; // [rsp+60h] [rbp-69h]
  _LIST_ENTRY *v244; // [rsp+68h] [rbp-61h]
  _LIST_ENTRY *v245; // [rsp+70h] [rbp-59h]
  char v246[8]; // [rsp+78h] [rbp-51h]
  char v247[8]; // [rsp+80h] [rbp-49h]
  _REFERENCE_EX *v248; // [rsp+88h] [rbp-41h]
  _QWORD v249[8]; // [rsp+90h] [rbp-39h] BYREF
  PVOID TokenInformation; // [rsp+D0h] [rbp+7h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v252; // [rsp+E0h] [rbp+17h]
  _GUID NamespaceGuid; // [rsp+E8h] [rbp+1Fh]

  v2 = 0;
  *(_QWORD *)v247 = a1;
  v3 = 0LL;
  v4 = 0LL;
  v5 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      75,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  }
  memset(v249, 0, sizeof(v249));
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v5 + 6) != 8 )
  {
    v87 = -1073741808;
    goto LABEL_121;
  }
  v6 = (_LIST_ENTRY **)*((_QWORD *)v5 + 2);
  CurrentThread = KeGetCurrentThread();
  v8 = *v6;
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v12 = ThreadProperty[1];
    HIDWORD(v252) = *ThreadProperty;
    v11 = HIDWORD(v252);
    LODWORD(v252) = v12;
    ObfDereferenceObject(ThreadProperty);
    v2 = v11;
  }
  else
  {
    v11 = 0;
    v252 = 0LL;
    v12 = 0;
  }
  if ( v2 )
    goto LABEL_16;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
  }
  else
  {
    v13 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v14 = v13;
    if ( v13 )
    {
      v167 = SeQueryInformationToken(v13, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v14);
      if ( v167 >= 0 )
      {
        v16 = (unsigned int)TokenInformation;
        goto LABEL_11;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
  }
  v16 = CurrentProcessSessionId;
LABEL_11:
  if ( v16 == -1 )
  {
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    v12 = v252;
    v16 = ThreadSessionId;
  }
  if ( v16 < ndisCmSessionCount )
  {
    v11 = 0;
    v169 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( v16 < ndisCmSessionCount )
      v11 = *((_DWORD *)ndisCmSession + 6 * v16);
    KeReleaseSpinLock(&ndisCmSessionLock, v169);
    if ( !v11 )
      v11 = 1;
  }
  else
  {
    v11 = 1;
  }
  HIDWORD(v252) = v11;
  v2 = v11;
LABEL_16:
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v18 = 0LL;
  v19 = v17;
  Flink = ndisIfCompartmentList;
  if ( ndisIfCompartmentList != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
  {
    while ( Flink->CompartmentId != v2 )
    {
      if ( Flink->CompartmentId <= v2 )
      {
        Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
        if ( Flink != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
          continue;
      }
      goto LABEL_19;
    }
    v18 = Flink;
  }
LABEL_19:
  NamespaceGuid = v18->LoopbackInfo.NamespaceGuid;
  KeReleaseSpinLock(&ndisIfListLock, v19);
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v5 = *(struct _NM_REQUEST_GET_ALL_PARAMETERS **)v247;
  v22 = v21;
  v237 = v21;
  v23 = *(_DWORD *)(*(_QWORD *)v247 + 32LL);
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      if ( v24 != 1 )
      {
        v87 = -1073741811;
        goto LABEL_116;
      }
    }
    else
    {
      v8 = 0LL;
    }
    while ( 1 )
    {
      v25 = ndisIfList.Flink;
      v3 = 0LL;
      v245 = 0LL;
      if ( ndisIfList.Flink != &ndisIfList )
      {
        while ( v25[5].Flink <= v8 )
        {
          v25 = v25->Flink;
          if ( v25 == &ndisIfList )
            goto LABEL_27;
        }
        v3 = v25 - 77;
        v245 = v25 - 77;
      }
LABEL_27:
      if ( !v3 )
        goto LABEL_255;
      v26 = v3[86].Flink;
      v8 = v3[82].Flink;
      if ( v11 == LODWORD(v26[1].Flink) )
        goto LABEL_29;
      if ( v12 == -1 )
      {
        v170 = *(_QWORD *)&NamespaceGuid.Data1 - *(unsigned __int64 *)((char *)&v26[105].Flink + 4);
        if ( *(_LIST_ENTRY **)&NamespaceGuid.Data1 == *(_LIST_ENTRY **)((char *)&v26[105].Flink + 4) )
          v170 = *(_QWORD *)NamespaceGuid.Data4 - *(unsigned __int64 *)((char *)&v26[105].Blink + 4);
        if ( !v170 )
          goto LABEL_29;
      }
      if ( ((__int64)v26[105].Flink & 2) == 0 && v11 == 1 )
        goto LABEL_29;
    }
  }
  v150 = ndisIfList.Flink;
  v245 = 0LL;
  if ( ndisIfList.Flink != &ndisIfList )
  {
    while ( v150[5].Flink != v8 )
    {
      if ( v150[5].Flink <= v8 )
      {
        v150 = v150->Flink;
        if ( v150 != &ndisIfList )
          continue;
      }
      goto LABEL_220;
    }
    v3 = v150 - 77;
    v245 = v150 - 77;
  }
LABEL_220:
  if ( !v3 )
  {
LABEL_255:
    v87 = 0;
    goto LABEL_116;
  }
  v151 = v3[86].Flink;
  if ( v11 != LODWORD(v151[1].Flink) )
  {
    v171 = *(_QWORD *)&NamespaceGuid.Data1 - *(unsigned __int64 *)((char *)&v151[105].Flink + 4);
    if ( *(_LIST_ENTRY **)&NamespaceGuid.Data1 == *(_LIST_ENTRY **)((char *)&v151[105].Flink + 4) )
      v171 = *(_QWORD *)NamespaceGuid.Data4 - *(unsigned __int64 *)((char *)&v151[105].Blink + 4);
    if ( v171 && (((__int64)v151[105].Flink & 2) != 0 || v11 != 1) )
    {
      v3 = 0LL;
      v87 = 0;
      goto LABEL_116;
    }
  }
LABEL_29:
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v3[89].Blink);
  ++LODWORD(v3[81].Blink);
  if ( !BYTE1(v3[87].Flink) || *((_QWORD *)v5 + 1) >= 2uLL )
    goto LABEL_115;
  v27 = 0LL;
  v244 = 0LL;
  v28 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( BYTE3(v3[87].Flink) )
  {
    v27 = v3[88].Flink;
    v29 = (struct _NDIS_REFCOUNT_BLOCK *)v3[90].Flink;
    v244 = v27;
    NdisReferenceWithTag(v29);
    ++HIDWORD(v3[87].Flink);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v28);
  if ( !v27 )
  {
    if ( !BYTE2(v3[87].Flink) )
      goto LABEL_114;
    v120 = v3[88].Flink;
    v121 = 1;
    v122 = 0LL;
    v123 = 1;
    *(_QWORD *)v243 = 0LL;
    v248 = (_REFERENCE_EX *)v120[2].Flink;
    if ( v248[157].SpinLock )
    {
      v124 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v125 = ndisMiniDriverList;
      v126 = v124;
      v239 = ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          p_SpinLock = &v125->Ref.SpinLock;
          *(_QWORD *)v246 = &v125->Ref;
          v128 = KeAcquireSpinLockRaiseToDpc(&v125->Ref.SpinLock);
          if ( !v125->Ref.Closing )
          {
            ReferenceCount = v125->Ref.ReferenceCount;
            if ( ReferenceCount >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
              v121 = 2;
            }
            else
            {
              RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v125->Ref.RefCountTracker;
              v125->Ref.ReferenceCount = ReferenceCount + 1;
              NdisReferenceWithTag(RefCountTracker);
              v121 = 0;
            }
          }
          KeReleaseSpinLock(&v125->Ref.SpinLock, v128);
          if ( v121 )
          {
            NextDriver = v125->NextDriver;
          }
          else
          {
            KeReleaseSpinLock(&ndisMiniDriverListLock, v126);
            v131 = KeAcquireSpinLockRaiseToDpc(&v125->Ref.SpinLock);
            v236 = v131;
            MiniportQueue = (__int64)v239->MiniportQueue;
            if ( MiniportQueue )
            {
              v133 = v248;
              v134 = *(_QWORD *)v243;
              do
              {
                v135 = *(_QWORD *)(MiniportQueue + 3768);
                if ( v135 )
                {
                  if ( *(_DWORD *)v135 >= v123 )
                  {
                    SpinLock = v133[157].SpinLock;
                    v137 = *(_WORD *)(SpinLock + 8);
                    if ( v137 == *(_WORD *)(v135 + 8)
                      && !memcmp(*(const void **)(SpinLock + 16), *(const void **)(v135 + 16), v137) )
                    {
                      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(MiniportQueue + 96));
                      *(_QWORD *)(MiniportQueue + 520) = KeGetCurrentThread();
                      if ( (*(_DWORD *)(MiniportQueue + 120) & 0x80200020) == 0
                        && (*(_DWORD *)(MiniportQueue + 124) & 0x1084110) == 0
                        && *(_DWORD *)(MiniportQueue + 1520) == 1
                        && *(_DWORD *)(MiniportQueue + 3868) == 1
                        && (unsigned __int8)ndisReferenceMiniport(MiniportQueue) )
                      {
                        v134 = v122;
                        NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(MiniportQueue + 4896));
                        v152 = *(unsigned int **)(MiniportQueue + 3768);
                        v122 = MiniportQueue;
                        ++*(_DWORD *)(MiniportQueue + 3124);
                        v123 = *v152;
                      }
                      *(_QWORD *)(MiniportQueue + 520) = 0LL;
                      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(MiniportQueue + 96));
                      if ( v134 )
                      {
                        ndisDereferenceMiniportForNsi(v134);
                        v134 = 0LL;
                      }
                    }
                  }
                }
                MiniportQueue = *(_QWORD *)(MiniportQueue + 8);
              }
              while ( MiniportQueue );
              p_SpinLock = *(KSPIN_LOCK **)v246;
              *(_QWORD *)v243 = v134;
              v131 = v236;
            }
            KeReleaseSpinLock(p_SpinLock, v131);
            v138 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            NextDriver = v239->NextDriver;
            v126 = v138;
            v140 = KeAcquireSpinLockRaiseToDpc(p_SpinLock);
            v141 = ndisRefCountBlockFromRefCountHandle(p_SpinLock[2]);
            v142 = (ULONG_PTR)v141;
            if ( v141 )
            {
              if ( v141->NumRefTags <= 8u )
                ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v141, 8uLL);
              Type = v141->Type;
              if ( v141->Type )
              {
                if ( Type == 1 )
                {
                  References = (struct _NDIS_REFCOUNT_WITH_STACK *)v141[7].RefWithStack[0].Block.References;
                  v197 = *(_DWORD *)&v141[8].Flags;
                  if ( v197 >> 17 < 0x3FFE && (unsigned __int16)v197 >> 1 == (v197 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain(&References->Block);
                    *((_DWORD *)References + 14) &= 0x10001u;
                  }
                  else
                  {
                    if ( (unsigned __int16)v197 >> 1 == 0 && (v197 & 1) == 0 )
LABEL_387:
                      ndisBugCheckEx(0x1EuLL, 0LL, v142, 8uLL);
                    ndisReferenceWithTagStackTrace(References, 0);
                  }
                }
              }
              else
              {
                Tags = v141->TaggedRefCounts.Tags;
                if ( Tags && (NumOverflowTaggedEntries = v141->NumOverflowTaggedEntries) != 0 )
                {
                  while ( 1 )
                  {
                    v146 = &Tags[(unsigned __int8)Type];
                    if ( v146->Tag == 8 )
                    {
                      RefCount = v146->RefCount;
                      if ( RefCount )
                        break;
                    }
                    LOBYTE(Type) = Type + 1;
                    if ( (unsigned __int8)Type >= NumOverflowTaggedEntries )
                      goto LABEL_206;
                  }
                  v146->RefCount = RefCount - 1;
                }
                else
                {
LABEL_206:
                  if ( !_bittestandreset((signed __int32 *)(v142 + 16), 8u) )
                    goto LABEL_387;
                }
              }
            }
            v57 = (*((_WORD *)p_SpinLock + 4))-- == 1;
            if ( v57 )
            {
              v147 = 1;
              if ( !*((_BYTE *)p_SpinLock + 11) )
              {
                NdisFreeRefCount(p_SpinLock[2]);
                p_SpinLock[2] = 1LL;
              }
            }
            else
            {
              v147 = 0;
            }
            KeReleaseSpinLock(p_SpinLock, v140);
            if ( v147 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v148) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v148,
                  20,
                  23,
                  (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                  (char)v239);
              }
              v198 = ndisMiniDriverList;
              p_NextDriver = &ndisMiniDriverList;
              if ( ndisMiniDriverList )
              {
                while ( v198 != v239 )
                {
                  p_NextDriver = &v198->NextDriver;
                  v198 = v198->NextDriver;
                  if ( !v198 )
                    goto LABEL_377;
                }
                *p_NextDriver = v239->NextDriver;
                ObfDereferenceObject(ndisDriverObject);
              }
LABEL_377:
              Buffer = v239->ImageName.Buffer;
              if ( Buffer )
              {
                ExFreePoolWithTag(Buffer, 0);
                v239->ImageName.Buffer = 0LL;
              }
              NdisDriverInfo = v239->NdisDriverInfo;
              if ( NdisDriverInfo )
              {
                ExFreePoolWithTag(NdisDriverInfo, 0);
                v239->NdisDriverInfo = 0LL;
              }
              if ( (v239->Flags & 1) != 0 )
              {
                PendingDeviceList = v239->PendingDeviceList;
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
              KeSetEvent(&v239->MiniportsRemovedEvent, 0, 0);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v204) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v204,
                  20,
                  24,
                  (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                  (char)v239);
              }
            }
          }
          v239 = NextDriver;
          v125 = NextDriver;
          if ( !NextDriver )
            break;
          v121 = 1;
        }
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v126);
      if ( v122 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v122 + 96));
        v153 = *(_QWORD *)(v122 + 2048);
        *(_QWORD *)(v122 + 520) = KeGetCurrentThread();
        if ( v153 )
        {
          while ( 1 )
          {
            v154 = 1;
            v155 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v153 + 312));
            if ( !*(_BYTE *)(v153 + 322) )
            {
              v156 = *(_WORD *)(v153 + 320);
              if ( v156 >= 0xFFEBu )
              {
                ndisRefCountReferenceCountOverflow = 1;
                v154 = 2;
              }
              else
              {
                *(_WORD *)(v153 + 320) = v156 + 1;
                NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v153 + 328));
                v154 = 0;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v153 + 312), v155);
            if ( !v154 )
              break;
            v153 = *(_QWORD *)(v153 + 112);
            if ( !v153 )
              goto LABEL_391;
          }
          v4 = *(_QWORD *)(v153 + 696);
        }
        else
        {
LABEL_391:
          v4 = *(_QWORD *)(v122 + 4040);
        }
        *(_QWORD *)(v122 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v122 + 96));
        v157 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v122 + 96));
        v158 = *(_QWORD *)(v122 + 4896);
        *(_QWORD *)(v122 + 520) = KeGetCurrentThread();
        NdisDereferenceWithTag(v158, 2u);
        v57 = (*(_DWORD *)(v122 + 3124))-- == 1;
        if ( v57 )
        {
          v159 = *(struct _KEVENT **)(v122 + 3136);
          if ( v159 )
            KeSetEvent(v159, 0, 0);
        }
        *(_QWORD *)(v122 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v122 + 96), v157);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v160) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v160,
            20,
            25,
            (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
            v122);
        }
        v161 = 0;
        v162 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v122 + 4432));
        v164 = *(_QWORD *)(v122 + 4888);
        v165 = v162;
        if ( v164 )
          NdisDereferenceWithTag(v164, 0x3Cu);
        v57 = (*(_DWORD *)(v122 + 4440))-- == 1;
        if ( v57 )
          v161 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v163) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v163,
            20,
            14,
            (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
            v122,
            *(_DWORD *)(v122 + 4440));
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v122 + 4432), v165);
        if ( v161 )
        {
          v205 = *(struct _KEVENT **)(v122 + 1608);
          if ( v205 )
            KeSetEvent(v205, 0, 0);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v166) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v166,
            20,
            26,
            (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
            v122);
        }
        v3 = v245;
        goto LABEL_112;
      }
    }
    v3 = v245;
    v4 = 0LL;
    goto LABEL_114;
  }
  v30 = 0LL;
  v31 = 1;
  v32 = 1;
  *(_QWORD *)v243 = 0LL;
  *(_QWORD *)v246 = 0LL;
  v242 = 1;
  if ( !v27[235].Blink )
  {
LABEL_262:
    v4 = 0LL;
    goto LABEL_101;
  }
  v33 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v34 = ndisMiniDriverList;
  v35 = v33;
  v238 = ndisMiniDriverList;
  if ( !ndisMiniDriverList )
    goto LABEL_63;
  do
  {
    p_Ref = &v34->Ref;
    v248 = &v34->Ref;
    v37 = 1;
    v38 = KeAcquireSpinLockRaiseToDpc(&v34->Ref.SpinLock);
    if ( !v34->Ref.Closing )
    {
      v39 = v34->Ref.ReferenceCount;
      if ( v39 >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v37 = 2;
      }
      else
      {
        v34->Ref.ReferenceCount = v39 + 1;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v34->Ref.RefCountTracker);
        v37 = 0;
      }
    }
    KeReleaseSpinLock(&v34->Ref.SpinLock, v38);
    if ( v37 )
    {
      v49 = v34->NextDriver;
      goto LABEL_61;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v35);
    v40 = v238;
    v41 = KeAcquireSpinLockRaiseToDpc(&v34->Ref.SpinLock);
    v235 = v41;
    v42 = v238->MiniportQueue;
    if ( !v42 )
      goto LABEL_48;
    v43 = *(_NDIS_MINIPORT_BLOCK **)v243;
    p_Type = *(KSPIN_LOCK **)v246;
    do
    {
      BindPaths = v42->BindPaths;
      if ( !BindPaths )
        goto LABEL_46;
      if ( BindPaths->Number < v32 )
        goto LABEL_46;
      Blink = v27[235].Blink;
      v47 = (unsigned __int16)Blink->Blink;
      if ( v47 != BindPaths->Paths[0].Length || memcmp(Blink[1].Flink, BindPaths->Paths[0].Buffer, v47) )
        goto LABEL_46;
      KeAcquireSpinLockAtDpcLevel(&v42->Lock);
      v42->MiniportThread = KeGetCurrentThread();
      if ( (v42->Flags & 0x80200020) == 0
        && (v42->PnPFlags & 0x1084110) == 0
        && v42->PnPDeviceState == NdisPnPDeviceStarted
        && v42->CurrentDevicePowerState == PowerDeviceD0 )
      {
        v113 = 1;
        v115 = KeAcquireSpinLockRaiseToDpc(&v42->Ref.SpinLock);
        if ( !v42->Ref.Closing )
        {
          v116 = (struct _NDIS_REFCOUNT_BLOCK *)v42->RefCountTracker;
          if ( v116 )
            NdisReferenceWithTag(v116);
          v117 = v42->Ref.ReferenceCount;
          v42->Ref.ReferenceCount = v117 + 1;
          if ( v117 != -1 )
            goto LABEL_174;
          v42->Ref.ReferenceCount = -1;
        }
        v113 = 0;
LABEL_174:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v114) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v114,
            20,
            12,
            (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
            (char)v42,
            v42->Ref.ReferenceCount);
        }
        KeReleaseSpinLock(&v42->Ref.SpinLock, v115);
        if ( v113 )
        {
          p_Type = (KSPIN_LOCK *)&v43->Header.Type;
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v42->NsiRefCountTracker);
          v118 = (int *)v42->BindPaths;
          v43 = v42;
          ++v42->NsiOpenReferences;
          v242 = *v118;
        }
        v27 = v244;
      }
      v42->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v42->Lock);
      if ( p_Type )
      {
        ndisDereferenceMiniportForNsi((char)p_Type);
        p_Type = 0LL;
      }
      v32 = v242;
LABEL_46:
      v42 = v42->NextMiniport;
    }
    while ( v42 );
    v40 = v238;
    *(_QWORD *)v246 = p_Type;
    v41 = v235;
    *(_QWORD *)v243 = v43;
    p_Ref = v248;
LABEL_48:
    KeReleaseSpinLock(&p_Ref->SpinLock, v41);
    v48 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v49 = v40->NextDriver;
    v35 = v48;
    v50 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
    v51 = (ULONG_PTR)p_Ref->RefCountTracker;
    v52 = v50;
    if ( v51 - 2 > 1 )
    {
      if ( v51 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v51, 0LL);
      if ( *(_BYTE *)(v51 + 2) <= 8u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v51, 8uLL);
      v53 = *(unsigned __int8 *)(v51 + 1);
      if ( *(_BYTE *)(v51 + 1) )
      {
        if ( v53 != 1 )
          goto LABEL_57;
        v172 = v51 + 520;
        v173 = *(_DWORD *)(v51 + 576);
        if ( v173 >> 17 < 0x3FFE && (unsigned __int16)v173 >> 1 == (v173 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v51 + 520));
          *(_DWORD *)(v172 + 56) &= 0x10001u;
          goto LABEL_57;
        }
        if ( (unsigned __int16)v173 >> 1 != 0 || (v173 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v51 + 520), 0);
          goto LABEL_57;
        }
      }
      else
      {
        v54 = *(_QWORD *)(v51 + 8);
        if ( v54 )
        {
          v55 = *(_BYTE *)(v51 + 3);
          if ( v55 )
          {
            while ( 1 )
            {
              v56 = (_BYTE *)(v54 + 2LL * (unsigned __int8)v53);
              if ( *v56 == 8 )
              {
                v110 = v56[1];
                if ( v110 )
                  break;
              }
              LOBYTE(v53) = v53 + 1;
              if ( (unsigned __int8)v53 >= v55 )
                goto LABEL_56;
            }
            v56[1] = v110 - 1;
            goto LABEL_57;
          }
        }
LABEL_56:
        if ( _bittestandreset((signed __int32 *)(v51 + 16), 8u) )
          goto LABEL_57;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v51, 8uLL);
    }
LABEL_57:
    v57 = p_Ref->ReferenceCount-- == 1;
    if ( v57 )
    {
      v58 = 1;
      if ( !p_Ref->ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
        p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
    }
    else
    {
      v58 = 0;
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v52);
    if ( v58 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v59) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v59,
          20,
          23,
          (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
          (char)v238);
      }
      v174 = ndisMiniDriverList;
      v175 = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( v174 != v238 )
        {
          v175 = &v174->NextDriver;
          v174 = v174->NextDriver;
          if ( !v174 )
            goto LABEL_306;
        }
        *v175 = v238->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_306:
      v176 = v238->ImageName.Buffer;
      if ( v176 )
      {
        ExFreePoolWithTag(v176, 0);
        v238->ImageName.Buffer = 0LL;
      }
      v177 = v238->NdisDriverInfo;
      if ( v177 )
      {
        ExFreePoolWithTag(v177, 0);
        v238->NdisDriverInfo = 0LL;
      }
      if ( (v238->Flags & 1) != 0 )
      {
        v178 = v238->PendingDeviceList;
        if ( v178 )
        {
          do
          {
            v179 = v178->Next;
            ExFreePoolWithTag(v178, 0);
            v178 = v179;
          }
          while ( v179 );
        }
      }
      KeSetEvent(&v238->MiniportsRemovedEvent, 0, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v180) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v180,
          20,
          24,
          (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
          (char)v238);
      }
    }
    v27 = v244;
LABEL_61:
    v238 = v49;
    v34 = v49;
  }
  while ( v49 );
  v30 = *(_QWORD *)v243;
  v31 = 1;
LABEL_63:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v35);
  if ( !v30 )
    goto LABEL_262;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v30 + 96));
  v60 = *(_QWORD *)(v30 + 2048);
  *(_QWORD *)(v30 + 520) = KeGetCurrentThread();
  if ( v60 )
  {
    while ( 1 )
    {
      v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v60 + 312));
      if ( !*(_BYTE *)(v60 + 322) )
      {
        v62 = *(_WORD *)(v60 + 320);
        if ( v62 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v31 = 2;
        }
        else
        {
          *(_WORD *)(v60 + 320) = v62 + 1;
          NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v60 + 328));
          v31 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v60 + 312), v61);
      if ( !v31 )
        break;
      v60 = *(_QWORD *)(v60 + 112);
      if ( !v60 )
        goto LABEL_322;
      v31 = 1;
    }
    v4 = *(_QWORD *)(v60 + 696);
  }
  else
  {
LABEL_322:
    v4 = *(_QWORD *)(v30 + 4040);
  }
  *(_QWORD *)(v30 + 520) = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v30 + 96));
  v63 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 96));
  v64 = *(_QWORD *)(v30 + 4896);
  *(_QWORD *)(v30 + 520) = KeGetCurrentThread();
  if ( v64 - 2 > 1 )
  {
    if ( v64 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v64, 0LL);
    if ( *(_BYTE *)(v64 + 2) <= 2u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v64, 2uLL);
    v65 = *(unsigned __int8 *)(v64 + 1);
    if ( *(_BYTE *)(v64 + 1) )
    {
      if ( v65 != 1 )
        goto LABEL_79;
      v181 = v64 + 136;
      v182 = *(_DWORD *)(v64 + 192);
      v183 = (unsigned __int16)v182 >> 1;
      if ( v182 >> 17 < 0x3FFE && v183 == (v182 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v64 + 136));
        *(_DWORD *)(v181 + 56) &= 0x10001u;
        goto LABEL_79;
      }
      if ( v183 != 0 || (v182 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v64 + 136), 0);
        goto LABEL_79;
      }
    }
    else
    {
      v66 = *(_QWORD *)(v64 + 8);
      if ( v66 )
      {
        v67 = *(_BYTE *)(v64 + 3);
        if ( v67 )
        {
          while ( 1 )
          {
            v68 = (_BYTE *)(v66 + 2LL * (unsigned __int8)v65);
            if ( *v68 == 2 )
            {
              v184 = v68[1];
              if ( v184 )
                break;
            }
            LOBYTE(v65) = v65 + 1;
            if ( (unsigned __int8)v65 >= v67 )
              goto LABEL_78;
          }
          v68[1] = v184 - 1;
          goto LABEL_79;
        }
      }
LABEL_78:
      if ( _bittestandreset((signed __int32 *)(v64 + 16), 2u) )
        goto LABEL_79;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v64, 2uLL);
  }
LABEL_79:
  v57 = (*(_DWORD *)(v30 + 3124))-- == 1;
  if ( v57 )
  {
    v69 = *(struct _KEVENT **)(v30 + 3136);
    if ( v69 )
      KeSetEvent(v69, 0, 0);
  }
  *(_QWORD *)(v30 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v30 + 96), v63);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v70) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v70,
      20,
      25,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      v30);
  }
  v71 = 0;
  v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 4432));
  v74 = *(_QWORD *)(v30 + 4888);
  v75 = v72;
  if ( v74 && v74 - 2 > 1 )
  {
    if ( v74 == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(v74 + 2) <= 0x3Cu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v74, 0x3CuLL);
    v76 = *(unsigned __int8 *)(v74 + 1);
    if ( *(_BYTE *)(v74 + 1) )
    {
      if ( v76 != 1 )
        goto LABEL_94;
      v185 = v74 + 3848;
      v186 = *(_DWORD *)(v74 + 3904);
      v187 = (unsigned __int16)v186 >> 1;
      if ( v186 >> 17 < 0x3FFE && v187 == (v186 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v74 + 3848));
        *(_DWORD *)(v185 + 56) &= 0x10001u;
        goto LABEL_94;
      }
      if ( v187 != 0 || (v186 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v74 + 3848), 0);
        goto LABEL_94;
      }
    }
    else
    {
      v77 = *(_QWORD *)(v74 + 8);
      if ( v77 )
      {
        v78 = *(_BYTE *)(v74 + 3);
        if ( v78 )
        {
          while ( 1 )
          {
            v73 = (_BYTE *)(v77 + 2LL * (unsigned __int8)v76);
            if ( *v73 == 60 )
            {
              v188 = v73[1];
              if ( v188 )
                break;
            }
            LOBYTE(v76) = v76 + 1;
            if ( (unsigned __int8)v76 >= v78 )
              goto LABEL_93;
          }
          v73[1] = v188 - 1;
          goto LABEL_94;
        }
      }
LABEL_93:
      if ( _bittestandreset((signed __int32 *)(v74 + 20), 0x1Cu) )
        goto LABEL_94;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v74, 0x3CuLL);
  }
LABEL_94:
  v57 = (*(_DWORD *)(v30 + 4440))-- == 1;
  if ( v57 )
    v71 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v73) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v73,
      20,
      14,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      v30,
      *(_DWORD *)(v30 + 4440));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v30 + 4432), v75);
  if ( v71 )
  {
    v189 = *(struct _KEVENT **)(v30 + 1608);
    if ( v189 )
      KeSetEvent(v189, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v79) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v79,
      20,
      26,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      v30);
  }
LABEL_101:
  v80 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  v3 = v245;
  v81 = v80;
  v82 = (ULONG_PTR)v245[90].Flink;
  if ( v82 - 2 > 1 )
  {
    if ( v82 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v82, 0LL);
    if ( *(_BYTE *)(v82 + 2) <= 3u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v82, 3uLL);
    v83 = *(unsigned __int8 *)(v82 + 1);
    if ( *(_BYTE *)(v82 + 1) )
    {
      if ( v83 != 1 )
        goto LABEL_110;
      v190 = v82 + 200;
      v191 = *(_DWORD *)(v82 + 256);
      v192 = (unsigned __int16)v191 >> 1;
      if ( v191 >> 17 < 0x3FFE && v192 == (v191 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v82 + 200));
        *(_DWORD *)(v190 + 56) &= 0x10001u;
        goto LABEL_110;
      }
      if ( v192 != 0 || (v191 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v82 + 200), 0);
        goto LABEL_110;
      }
    }
    else
    {
      v84 = *(_QWORD *)(v82 + 8);
      if ( v84 )
      {
        v85 = *(_BYTE *)(v82 + 3);
        if ( v85 )
        {
          while ( 1 )
          {
            v86 = (_BYTE *)(v84 + 2LL * (unsigned __int8)v83);
            if ( *v86 == 3 )
            {
              v193 = v86[1];
              if ( v193 )
                break;
            }
            LOBYTE(v83) = v83 + 1;
            if ( (unsigned __int8)v83 >= v85 )
              goto LABEL_109;
          }
          v86[1] = v193 - 1;
          goto LABEL_110;
        }
      }
LABEL_109:
      if ( _bittestandreset((signed __int32 *)(v82 + 16), 3u) )
        goto LABEL_110;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v82, 3uLL);
  }
LABEL_110:
  v57 = HIDWORD(v3[87].Flink)-- == 1;
  if ( v57 )
  {
    v194 = v3[88].Flink;
    if ( v194 )
    {
      v195 = (struct _KEVENT *)v194[253].Flink;
      if ( v195 )
        KeSetEvent(v195, 0, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v81);
LABEL_112:
  if ( v4 )
  {
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v4 + 1432));
    ++*(_DWORD *)(v4 + 1304);
  }
LABEL_114:
  v5 = *(struct _NM_REQUEST_GET_ALL_PARAMETERS **)v247;
  v22 = v237;
LABEL_115:
  v87 = 0;
  **((_QWORD **)v5 + 2) = v3[82].Flink;
LABEL_116:
  KeReleaseSpinLock(&ndisIfListLock, v22);
  if ( v87 >= 0 )
  {
    if ( v3 )
    {
      v88 = *((_QWORD *)v5 + 1);
      HIDWORD(v249[6]) = 0;
      switch ( v88 )
      {
        case 0LL:
          goto LABEL_119;
        case 1LL:
LABEL_259:
          LODWORD(v249[4]) = 1;
          v249[5] = *((_QWORD *)v5 + 7);
          LODWORD(v249[6]) = *((_DWORD *)v5 + 16);
          ndisNsiGetInterfaceRodEnumObject(
            (struct _NDIS_IF_BLOCK *)v3,
            (struct _NDIS_IF_BLOCK *)v4,
            (struct _NM_REQUEST_GET_PARAMETER *)v249);
          *((_DWORD *)v5 + 16) = v249[6];
          v249[5] = *((_QWORD *)v5 + 9);
          LODWORD(v249[6]) = *((_DWORD *)v5 + 20);
          LODWORD(v249[4]) = 2;
          ndisNsiGetInterfaceRosEnumObject(
            (struct _NDIS_IF_BLOCK *)v3,
            (struct _NDIS_IF_BLOCK *)v4,
            (struct _NM_REQUEST_GET_PARAMETER *)v249);
LABEL_120:
          *((_DWORD *)v5 + 20) = v249[6];
          break;
        case 12LL:
LABEL_119:
          v249[5] = *((_QWORD *)v5 + 5);
          LODWORD(v249[6]) = *((_DWORD *)v5 + 12);
          LODWORD(v249[4]) = 0;
          ndisNsiGetInterfaceRwInformation(
            (struct _NDIS_IF_BLOCK *)v3,
            (struct _NDIS_IF_BLOCK *)v4,
            (struct _NM_REQUEST_GET_PARAMETER *)v249);
          *((_DWORD *)v5 + 12) = v249[6];
          LODWORD(v249[4]) = 1;
          v249[5] = *((_QWORD *)v5 + 7);
          LODWORD(v249[6]) = *((_DWORD *)v5 + 16);
          ndisNsiGetInterfaceRodInformation(
            (struct _NDIS_IF_BLOCK *)v3,
            (struct _NDIS_IF_BLOCK *)v4,
            (struct _NM_REQUEST_GET_PARAMETER *)v249);
          *((_DWORD *)v5 + 16) = v249[6];
          v249[5] = *((_QWORD *)v5 + 9);
          LODWORD(v249[6]) = *((_DWORD *)v5 + 20);
          LODWORD(v249[4]) = 2;
          ndisNsiGetInterfaceRosInformation(
            (struct _NDIS_IF_BLOCK *)v3,
            (struct _NDIS_IF_BLOCK *)v4,
            (struct _NM_REQUEST_GET_PARAMETER *)v249);
          goto LABEL_120;
        case 13LL:
          goto LABEL_259;
        default:
          v87 = -1073741811;
          break;
      }
    }
    else if ( *((_DWORD *)v5 + 8) )
    {
      v87 = -2147483622;
    }
    else
    {
      v87 = -1073741772;
    }
  }
LABEL_121:
  v89 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !v4 )
    goto LABEL_146;
  if ( !*(_BYTE *)(v4 + 1394) )
    goto LABEL_136;
  v90 = *(_QWORD *)(v4 + 1408) + 312LL;
  v91 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v90);
  v92 = *(_QWORD *)(v90 + 16);
  v93 = v91;
  if ( v92 - 2 <= 1 )
    goto LABEL_132;
  if ( v92 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v92, 0LL);
  if ( *(_BYTE *)(v92 + 2) <= 0xBu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v92, 0xBuLL);
  v94 = *(unsigned __int8 *)(v92 + 1);
  if ( *(_BYTE *)(v92 + 1) )
  {
    if ( v94 != 1 )
      goto LABEL_132;
    v206 = v92 + 712;
    v207 = *(_DWORD *)(v92 + 768);
    v208 = (unsigned __int16)v207 >> 1;
    if ( v207 >> 17 < 0x3FFE && v208 == (v207 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v92 + 712));
      *(_DWORD *)(v206 + 56) &= 0x10001u;
    }
    else
    {
      if ( v208 == 0 && (v207 & 1) == 0 )
        goto LABEL_407;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v92 + 712), 0);
    }
    LOBYTE(v5) = v247[0];
    goto LABEL_132;
  }
  v95 = *(_QWORD *)(v92 + 8);
  if ( !v95 || (v96 = *(_BYTE *)(v92 + 3)) == 0 )
  {
LABEL_131:
    if ( _bittestandreset((signed __int32 *)(v92 + 16), 0xBu) )
      goto LABEL_132;
LABEL_407:
    ndisBugCheckEx(0x1EuLL, 0LL, v92, 0xBuLL);
  }
  while ( 1 )
  {
    v97 = (_BYTE *)(v95 + 2LL * (unsigned __int8)v94);
    if ( *v97 == 11 )
    {
      v111 = v97[1];
      if ( v111 )
        break;
    }
    LOBYTE(v94) = v94 + 1;
    if ( (unsigned __int8)v94 >= v96 )
      goto LABEL_131;
  }
  v97[1] = v111 - 1;
LABEL_132:
  v57 = (*(_WORD *)(v90 + 8))-- == 1;
  if ( v57 && !*(_BYTE *)(v90 + 11) )
  {
    NdisFreeRefCount(*(_QWORD *)(v90 + 16));
    *(_QWORD *)(v90 + 16) = 1LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v90, v93);
LABEL_136:
  v98 = *(_QWORD *)(v4 + 1432);
  if ( v98 - 2 > 1 )
  {
    if ( v98 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v98, 0LL);
    if ( *(_BYTE *)(v98 + 2) <= 4u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v98, 4uLL);
    v99 = *(unsigned __int8 *)(v98 + 1);
    if ( *(_BYTE *)(v98 + 1) )
    {
      if ( v99 != 1 )
        goto LABEL_145;
      v209 = v98 + 264;
      v210 = *(_DWORD *)(v98 + 320);
      v211 = (unsigned __int16)v210 >> 1;
      if ( v210 >> 17 < 0x3FFE && v211 == (v210 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v98 + 264));
        *(_DWORD *)(v209 + 56) &= 0x10001u;
        goto LABEL_145;
      }
      if ( v211 != 0 || (v210 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v98 + 264), 0);
        goto LABEL_145;
      }
    }
    else
    {
      v100 = *(_QWORD *)(v98 + 8);
      if ( v100 )
      {
        v101 = *(_BYTE *)(v98 + 3);
        if ( v101 )
        {
          while ( 1 )
          {
            v102 = (_BYTE *)(v100 + 2LL * (unsigned __int8)v99);
            if ( *v102 == 4 )
            {
              v112 = v102[1];
              if ( v112 )
                break;
            }
            LOBYTE(v99) = v99 + 1;
            if ( (unsigned __int8)v99 >= v101 )
              goto LABEL_144;
          }
          v102[1] = v112 - 1;
          goto LABEL_145;
        }
      }
LABEL_144:
      if ( _bittestandreset((signed __int32 *)(v98 + 16), 4u) )
        goto LABEL_145;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v98, 4uLL);
  }
LABEL_145:
  v57 = (*(_DWORD *)(v4 + 1304))-- == 1;
  if ( v57 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
    ndisIfDeleteStackEntries(v4);
    *(_QWORD *)(v4 + 1296) = 0LL;
    KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
    v212 = *(_QWORD *)(v4 + 1232);
    if ( *(_QWORD *)(v212 + 8) == v4 + 1232 )
    {
      v213 = *(_QWORD **)(v4 + 1240);
      if ( *v213 == v4 + 1232 )
      {
        *v213 = v212;
        *(_QWORD *)(v212 + 8) = v213;
        v214 = *(_QWORD *)(v4 + 1248);
        if ( *(_QWORD *)(v214 + 8) == v4 + 1248 )
        {
          v215 = *(_QWORD **)(v4 + 1256);
          if ( *v215 == v4 + 1248 )
          {
            *v215 = v214;
            *(_QWORD *)(v214 + 8) = v215;
            v216 = *(_QWORD *)(v4 + 1264);
            if ( *(_QWORD *)(v216 + 8) == v4 + 1264 )
            {
              v217 = *(_QWORD **)(v4 + 1272);
              if ( *v217 == v4 + 1264 )
              {
                *v217 = v216;
                *(_QWORD *)(v216 + 8) = v217;
                NETWORKBLOCK_DECREMENT_REF(*(struct _NDIS_IF_NETWORK_BLOCK **)(v4 + 1368));
                ndisIfFreeIfIndex(*(unsigned int *)(v4 + 4));
                v218 = *(_QWORD *)(v4 + 1432);
                --ndisInterfaceCount;
                NdisFreeRefCount(v218);
                v219 = *(void **)(v4 + 1424);
                *(_QWORD *)(v4 + 1432) = 0LL;
                if ( v219 )
                {
                  ExFreePoolWithTag(v219, 0);
                  *(_QWORD *)(v4 + 1424) = 0LL;
                }
                v220 = *(void **)(v4 + 1280);
                if ( v220 )
                {
                  ExFreePoolWithTag(v220, 0);
                  *(_QWORD *)(v4 + 1280) = 0LL;
                  *(_QWORD *)(v4 + 1288) = 0LL;
                }
                v221 = *(struct _KEVENT **)(v4 + 1384);
                if ( v221 )
                  KeSetEvent(v221, 0, 0);
                ExFreePoolWithTag((PVOID)v4, 0);
                goto LABEL_146;
              }
            }
          }
        }
      }
    }
    goto LABEL_452;
  }
LABEL_146:
  if ( !v3 )
    goto LABEL_157;
  v103 = (ULONG_PTR)v3[89].Blink;
  if ( v103 - 2 <= 1 )
    goto LABEL_156;
  if ( v103 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v103, 0LL);
  if ( *(_BYTE *)(v103 + 2) <= 3u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v103, 3uLL);
  v104 = *(unsigned __int8 *)(v103 + 1);
  if ( *(_BYTE *)(v103 + 1) )
  {
    if ( v104 != 1 )
      goto LABEL_156;
    v222 = v103 + 200;
    v223 = *(_DWORD *)(v103 + 256);
    v224 = (unsigned __int16)v223 >> 1;
    if ( v223 >> 17 < 0x3FFE && v224 == (v223 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v103 + 200));
      *(_DWORD *)(v222 + 56) &= 0x10001u;
      goto LABEL_156;
    }
    if ( v224 != 0 || (v223 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v103 + 200), 0);
      goto LABEL_156;
    }
LABEL_438:
    ndisBugCheckEx(0x1EuLL, 0LL, v103, 3uLL);
  }
  v105 = *(_QWORD *)(v103 + 8);
  if ( !v105 || (v106 = *(_BYTE *)(v103 + 3)) == 0 )
  {
LABEL_155:
    if ( _bittestandreset((signed __int32 *)(v103 + 16), 3u) )
      goto LABEL_156;
    goto LABEL_438;
  }
  while ( 1 )
  {
    v107 = (_BYTE *)(v105 + 2LL * (unsigned __int8)v104);
    if ( *v107 == 3 )
    {
      v119 = v107[1];
      if ( v119 )
        break;
    }
    LOBYTE(v104) = v104 + 1;
    if ( (unsigned __int8)v104 >= v106 )
      goto LABEL_155;
  }
  v107[1] = v119 - 1;
LABEL_156:
  v57 = LODWORD(v3[81].Blink)-- == 1;
  if ( v57 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
    ndisIfDeleteStackEntries(v3);
    v3[81].Flink = 0LL;
    KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
    v225 = v3[77].Flink;
    if ( v225->Blink == &v3[77] )
    {
      v226 = v3[77].Blink;
      if ( v226->Flink == &v3[77] )
      {
        v226->Flink = v225;
        v225->Blink = v226;
        v227 = v3[78].Flink;
        if ( v227->Blink == &v3[78] )
        {
          v228 = v3[78].Blink;
          if ( v228->Flink == &v3[78] )
          {
            v228->Flink = v227;
            v227->Blink = v228;
            v229 = v3[79].Flink;
            if ( v229->Blink == &v3[79] )
            {
              v230 = v3[79].Blink;
              if ( v230->Flink == &v3[79] )
              {
                v230->Flink = v229;
                v229->Blink = v230;
                NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v3[85].Blink);
                ndisIfFreeIfIndex(HIDWORD(v3->Flink));
                v231 = (ULONG_PTR)v3[89].Blink;
                --ndisInterfaceCount;
                NdisFreeRefCount(v231);
                v232 = v3[89].Flink;
                v3[89].Blink = 0LL;
                if ( v232 )
                {
                  ExFreePoolWithTag(v232, 0);
                  v3[89].Flink = 0LL;
                }
                v233 = v3[80].Flink;
                if ( v233 )
                {
                  ExFreePoolWithTag(v233, 0);
                  v3[80].Flink = 0LL;
                  v3[80].Blink = 0LL;
                }
                v234 = (struct _KEVENT *)v3[86].Blink;
                if ( v234 )
                  KeSetEvent(v234, 0, 0);
                ExFreePoolWithTag(v3, 0);
                goto LABEL_157;
              }
            }
          }
        }
      }
    }
LABEL_452:
    __fastfail(3u);
  }
LABEL_157:
  KeReleaseSpinLock(&ndisIfListLock, v89);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v108) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v108,
      22,
      76,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)v5,
      v87);
  }
  return (unsigned int)v87;
}
