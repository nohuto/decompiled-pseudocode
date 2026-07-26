/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E670
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisIfFreeIfIndex @ 0x1C003EFBC (ndisIfFreeIfIndex.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0041344 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisIfDeleteStackEntries @ 0x1C0042508 (ndisIfDeleteStackEntries.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C006BFC0 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B68D0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B7E90 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v1; // eax
  int v2; // edi
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v3; // r12
  struct _KTHREAD *CurrentThread; // rsi
  int *ThreadProperty; // rax
  int *v6; // rcx
  int v7; // r14d
  unsigned int v8; // ebx
  PACCESS_TOKEN v9; // rax
  void *v10; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  KIRQL v13; // al
  _LIST_ENTRY *v14; // rcx
  KIRQL v15; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v17; // edx
  KIRQL v18; // al
  unsigned int v19; // r13d
  KIRQL v20; // si
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *Blink; // rdx
  __int64 v23; // rbx
  void *v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned int v28; // r8d
  unsigned int v29; // r10d
  unsigned int v30; // edx
  _LIST_ENTRY *v31; // rdi
  unsigned int v32; // r8d
  _LIST_ENTRY *v33; // rcx
  _LIST_ENTRY *v34; // r15
  __int64 v35; // r13
  KIRQL v36; // di
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rdi
  int v41; // esi
  KIRQL v42; // r14
  unsigned __int16 v43; // ax
  struct _NDIS_REFCOUNT_BLOCK *v44; // rcx
  KIRQL v45; // di
  ULONG_PTR v46; // r8
  int v47; // ecx
  __int64 v48; // r10
  unsigned __int8 v49; // r9
  _BYTE *v50; // rdx
  bool v51; // zf
  struct _KEVENT *v52; // rcx
  char v53; // si
  KIRQL v54; // al
  ULONG_PTR v55; // r8
  KIRQL v56; // r14
  int v57; // ecx
  __int64 v58; // r10
  unsigned __int8 v59; // r9
  _BYTE *v60; // rdx
  __int64 v61; // rbx
  char *v62; // rsi
  __int64 v63; // rbx
  __int64 v64; // rsi
  __int64 v65; // rbx
  KIRQL v66; // al
  ULONG_PTR v67; // r8
  KIRQL v68; // si
  int v69; // ecx
  __int64 v70; // r10
  unsigned __int8 v71; // r9
  _BYTE *v72; // rdx
  ULONG_PTR v73; // r8
  int v74; // ecx
  __int64 v75; // r10
  unsigned __int8 v76; // r9
  _BYTE *v77; // rdx
  ULONG_PTR v78; // r8
  __int64 v79; // r10
  unsigned __int8 v80; // r9
  unsigned __int8 v81; // al
  _BYTE *v82; // rdx
  char v83; // al
  char v84; // cl
  char v85; // al
  __int64 v86; // rbx
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 v90; // rdi
  int v91; // esi
  KIRQL v92; // r14
  unsigned __int16 v93; // ax
  struct _NDIS_REFCOUNT_BLOCK *v94; // rcx
  KIRQL v95; // di
  ULONG_PTR v96; // r8
  int v97; // ecx
  __int64 v98; // r10
  unsigned __int8 v99; // r9
  _BYTE *v100; // rdx
  struct _KEVENT *v101; // rcx
  char v102; // si
  KIRQL v103; // al
  ULONG_PTR v104; // r8
  KIRQL v105; // r14
  int v106; // ecx
  __int64 v107; // r10
  unsigned __int8 v108; // r9
  _BYTE *v109; // rdx
  KIRQL v110; // al
  KIRQL v111; // di
  ULONG_PTR v112; // r8
  int v113; // ecx
  __int64 v114; // rdx
  unsigned __int8 v115; // r10
  _BYTE *v116; // r9
  NTSTATUS v117; // ebx
  KIRQL v118; // r8
  unsigned __int64 v119; // r8
  unsigned __int64 v120; // rdx
  ULONG_PTR v121; // rbx
  unsigned int v122; // r9d
  char v123; // al
  ULONG_PTR v124; // rbx
  unsigned int v125; // r9d
  char v126; // al
  struct _KEVENT *v127; // rcx
  ULONG_PTR v128; // rbx
  unsigned int v129; // r9d
  char v130; // al
  _LIST_ENTRY *v131; // rax
  struct _KEVENT *v132; // rcx
  ULONG_PTR v133; // rbx
  unsigned int v134; // r9d
  char v135; // al
  ULONG_PTR v136; // rbx
  unsigned int v137; // r9d
  char v138; // al
  struct _KEVENT *v139; // rcx
  ULONG_PTR v140; // rdi
  unsigned int v141; // r9d
  ULONG_PTR v142; // rbx
  unsigned int v143; // r9d
  __int64 v144; // rdx
  _QWORD *v145; // rcx
  __int64 v146; // rdx
  _QWORD *v147; // rcx
  __int64 v148; // rdx
  _QWORD *v149; // rcx
  ULONG_PTR v150; // rcx
  void *v151; // rcx
  void *v152; // rcx
  struct _KEVENT *v153; // rcx
  ULONG_PTR v154; // rbx
  unsigned int v155; // r9d
  _LIST_ENTRY *v156; // rcx
  _LIST_ENTRY *v157; // rax
  _LIST_ENTRY *v158; // rdx
  _LIST_ENTRY *v159; // rcx
  _LIST_ENTRY *v160; // rdx
  _LIST_ENTRY *v161; // rcx
  ULONG_PTR v162; // rcx
  _LIST_ENTRY *v163; // rcx
  _LIST_ENTRY *v164; // rcx
  struct _KEVENT *v165; // rcx
  KIRQL v166; // [rsp+30h] [rbp-89h]
  BOOLEAN EffectiveOnly; // [rsp+31h] [rbp-88h] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+32h] [rbp-87h] BYREF
  unsigned int v169; // [rsp+34h] [rbp-85h]
  _LIST_ENTRY *v170; // [rsp+38h] [rbp-81h]
  int v171; // [rsp+40h] [rbp-79h]
  unsigned int Size; // [rsp+44h] [rbp-75h]
  unsigned int Size_4; // [rsp+48h] [rbp-71h]
  unsigned int v174; // [rsp+4Ch] [rbp-6Dh]
  _LIST_ENTRY *v175; // [rsp+50h] [rbp-69h]
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v176; // [rsp+58h] [rbp-61h]
  void *v177; // [rsp+60h] [rbp-59h]
  __int64 v178; // [rsp+68h] [rbp-51h]
  __int64 v179; // [rsp+70h] [rbp-49h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+78h] [rbp-41h] BYREF
  PVOID TokenInformation; // [rsp+80h] [rbp-39h] BYREF
  _LIST_ENTRY *v182; // [rsp+88h] [rbp-31h]
  _QWORD v183[8]; // [rsp+90h] [rbp-29h] BYREF
  __int64 v184; // [rsp+D0h] [rbp+17h]
  __int128 v185; // [rsp+D8h] [rbp+1Fh]

  v1 = *((_DWORD *)a1 + 22);
  v2 = 0;
  v176 = a1;
  v3 = a1;
  v169 = v1;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(78LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  v184 = 0LL;
  v185 = 0uLL;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v6 = ThreadProperty;
  if ( ThreadProperty )
  {
    v7 = *ThreadProperty;
    LODWORD(v184) = ThreadProperty[1];
    HIDWORD(v184) = v7;
    ObfDereferenceObject(ThreadProperty);
    v8 = v7;
  }
  else
  {
    v7 = 0;
    v184 = 0LL;
    v8 = 0;
  }
  if ( !v8 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    }
    else
    {
      v9 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v10 = v9;
      if ( v9 )
      {
        v117 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v10);
        if ( v117 >= 0 )
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
      v7 = 0;
      v118 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v7 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v118);
      if ( !v7 )
        v7 = 1;
    }
    else
    {
      v7 = 1;
    }
    HIDWORD(v184) = v7;
    v8 = v7;
  }
  v13 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v14 = 0LL;
  v15 = v13;
  Flink = ndisIfCompartmentList.Flink;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    while ( 1 )
    {
      v17 = (unsigned int)Flink[1].Flink;
      if ( v17 == v8 )
        break;
      if ( v17 <= v8 )
      {
        Flink = Flink->Flink;
        if ( Flink != &ndisIfCompartmentList )
          continue;
      }
      goto LABEL_18;
    }
    v14 = Flink;
  }
LABEL_18:
  v185 = *(__int128 *)((char *)&v14[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v15);
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v19 = v169;
  v20 = v18;
  v166 = v18;
  if ( !v169 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      Blink = i[9].Blink;
      if ( v7 == LODWORD(Blink[1].Flink) )
        goto LABEL_21;
      if ( (_DWORD)v184 == -1 )
      {
        v119 = v185 - *(unsigned __int64 *)((char *)&Blink[105].Flink + 4);
        if ( (_LIST_ENTRY *)v185 == *(_LIST_ENTRY **)((char *)&Blink[105].Flink + 4) )
          v119 = *((_QWORD *)&v185 + 1) - *(unsigned __int64 *)((char *)&Blink[105].Blink + 4);
        if ( !v119 )
          goto LABEL_21;
      }
      if ( ((__int64)Blink[105].Flink & 2) == 0 && v7 == 1 )
LABEL_21:
        ++v2;
    }
    *((_DWORD *)v3 + 22) = v2;
    if ( v2 )
      goto LABEL_24;
    LODWORD(v23) = 0;
    goto LABEL_25;
  }
  v25 = (void *)*((_QWORD *)v3 + 2);
  v26 = *((_QWORD *)v3 + 7);
  v27 = *((_QWORD *)v3 + 9);
  v28 = *((_DWORD *)v3 + 6);
  v29 = *((_DWORD *)v3 + 16);
  v30 = *((_DWORD *)v3 + 20);
  Size = v28;
  Size_4 = v29;
  v174 = v30;
  v177 = v25;
  v178 = v26;
  v179 = v27;
  if ( v25 && v28 != 8 || *((_QWORD *)v3 + 5) || *((_DWORD *)v3 + 12) || v26 && v29 < 0x28C || v27 && v30 < 0x238 )
  {
    LODWORD(v23) = -1073741306;
    goto LABEL_25;
  }
  memset(v183, 0, sizeof(v183));
  v31 = ndisIfList.Flink;
  v23 = 0LL;
  v170 = ndisIfList.Flink;
  HIDWORD(v183[6]) = 0;
  v32 = 0;
  if ( ndisIfList.Flink != &ndisIfList )
  {
    while ( 1 )
    {
      v33 = v31[9].Blink;
      v34 = v31 - 77;
      v182 = v31;
      v175 = v31 - 77;
      if ( v7 != LODWORD(v33[1].Flink) )
      {
        if ( (_DWORD)v184 != -1 )
          goto LABEL_218;
        v120 = v185 - *(unsigned __int64 *)((char *)&v33[105].Flink + 4);
        if ( (_LIST_ENTRY *)v185 == *(_LIST_ENTRY **)((char *)&v33[105].Flink + 4) )
          v120 = *((_QWORD *)&v185 + 1) - *(unsigned __int64 *)((char *)&v33[105].Blink + 4);
        if ( v120 )
        {
LABEL_218:
          if ( ((__int64)v33[105].Flink & 2) != 0 || v7 != 1 )
          {
            v31 = v31->Flink;
            v170 = v31;
            goto LABEL_130;
          }
        }
      }
      v171 = ++v32;
      if ( v32 > v19 )
      {
        v31 = v31->Flink;
        v170 = v31;
        goto LABEL_130;
      }
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v34[90].Flink, 6u);
      ++LODWORD(v34[81].Blink);
      v35 = 0LL;
      if ( BYTE1(v34[87].Blink) )
      {
        if ( *((_QWORD *)v3 + 1) < 2uLL )
          break;
      }
LABEL_87:
      KeReleaseSpinLock(&ndisIfListLock, v20);
      if ( *((_QWORD *)v3 + 2) )
      {
        v61 = Size;
        v62 = (char *)v177;
        memmove(v177, &v34[82], Size);
        v177 = &v62[v61];
      }
      if ( *((_QWORD *)v3 + 7) )
      {
        v86 = v178;
        v87 = Size_4;
        v183[5] = v178;
        LODWORD(v183[6]) = Size_4;
        LODWORD(v183[4]) = 1;
        ndisNsiGetInterfaceRodEnumObject(
          (struct _NDIS_IF_BLOCK *)v34,
          (struct _NDIS_IF_BLOCK *)v35,
          (struct _NM_REQUEST_GET_PARAMETER *)v183);
        v178 = v87 + v86;
      }
      if ( *((_QWORD *)v3 + 9) )
      {
        v63 = v179;
        v64 = v174;
        v183[5] = v179;
        LODWORD(v183[6]) = v174;
        LODWORD(v183[4]) = 2;
        ndisNsiGetInterfaceRosEnumObject(
          (struct _NDIS_IF_BLOCK *)v34,
          (struct _NDIS_IF_BLOCK *)v35,
          (struct _NM_REQUEST_GET_PARAMETER *)v183);
        v179 = v64 + v63;
      }
      v166 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      v20 = v166;
      if ( !v35 )
        goto LABEL_118;
      if ( *(_BYTE *)(v35 + 1402) )
      {
        v65 = *(_QWORD *)(v35 + 1416) + 320LL;
        v66 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v65);
        v67 = *(_QWORD *)(v65 + 16);
        v68 = v66;
        if ( v67 - 2 > 1 )
        {
          if ( v67 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v67, 0LL);
          if ( *(_BYTE *)(v67 + 2) <= 0xBu )
            ndisBugCheckEx(0x1EuLL, 2uLL, v67, 0xBuLL);
          v69 = *(unsigned __int8 *)(v67 + 1);
          if ( *(_BYTE *)(v67 + 1) )
          {
            if ( v69 == 1 )
            {
              v140 = v67 + 712;
              v141 = *(_DWORD *)(v67 + 768);
              if ( v141 >> 17 < 0x3FFE && (unsigned __int16)v141 >> 1 == (v141 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v67 + 712));
                *(_DWORD *)(v140 + 56) &= 0x10001u;
                v31 = v170;
              }
              else
              {
                if ( (unsigned __int16)v141 >> 1 == 0 && (v141 & 1) == 0 )
LABEL_333:
                  ndisBugCheckEx(0x1EuLL, 0LL, v67, 0xBuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v67 + 712), 0);
                v31 = v170;
              }
            }
          }
          else
          {
            v70 = *(_QWORD *)(v67 + 8);
            if ( v70 && (v71 = *(_BYTE *)(v67 + 3)) != 0 )
            {
              while ( 1 )
              {
                v72 = (_BYTE *)(v70 + 2LL * (unsigned __int8)v69);
                if ( *v72 == 11 )
                {
                  v83 = v72[1];
                  if ( v83 )
                    break;
                }
                LOBYTE(v69) = v69 + 1;
                if ( (unsigned __int8)v69 >= v71 )
                  goto LABEL_103;
              }
              v72[1] = v83 - 1;
            }
            else
            {
LABEL_103:
              if ( !_bittestandreset((signed __int32 *)(v67 + 16), 0xBu) )
                goto LABEL_333;
            }
          }
        }
        v51 = (*(_WORD *)(v65 + 8))-- == 1;
        if ( v51 && !*(_BYTE *)(v65 + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(v65 + 16));
          *(_QWORD *)(v65 + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v65, v68);
        v20 = v166;
      }
      v73 = *(_QWORD *)(v35 + 1440);
      if ( v73 - 2 > 1 )
      {
        if ( v73 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v73, 0LL);
        if ( *(_BYTE *)(v73 + 2) <= 7u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v73, 7uLL);
        v74 = *(unsigned __int8 *)(v73 + 1);
        if ( *(_BYTE *)(v73 + 1) )
        {
          if ( v74 == 1 )
          {
            v142 = v73 + 456;
            v143 = *(_DWORD *)(v73 + 512);
            if ( v143 >> 17 < 0x3FFE && (unsigned __int16)v143 >> 1 == (v143 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v73 + 456));
              *(_DWORD *)(v142 + 56) &= 0x10001u;
            }
            else
            {
              if ( (unsigned __int16)v143 >> 1 == 0 && (v143 & 1) == 0 )
LABEL_336:
                ndisBugCheckEx(0x1EuLL, 0LL, v73, 7uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v73 + 456), 0);
            }
          }
        }
        else
        {
          v75 = *(_QWORD *)(v73 + 8);
          if ( v75 && (v76 = *(_BYTE *)(v73 + 3)) != 0 )
          {
            while ( 1 )
            {
              v77 = (_BYTE *)(v75 + 2LL * (unsigned __int8)v74);
              if ( *v77 == 7 )
              {
                v85 = v77[1];
                if ( v85 )
                  break;
              }
              LOBYTE(v74) = v74 + 1;
              if ( (unsigned __int8)v74 >= v76 )
                goto LABEL_116;
            }
            v77[1] = v85 - 1;
          }
          else
          {
LABEL_116:
            if ( !_bittestandreset((signed __int32 *)(v73 + 16), 7u) )
              goto LABEL_336;
          }
        }
      }
      v51 = (*(_DWORD *)(v35 + 1304))-- == 1;
      if ( v51 )
      {
        KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
        ndisIfDeleteStackEntries(v35);
        v23 = 0LL;
        *(_QWORD *)(v35 + 1296) = 0LL;
        KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
        v144 = *(_QWORD *)(v35 + 1232);
        if ( *(_QWORD *)(v144 + 8) != v35 + 1232 )
          goto LABEL_342;
        v145 = *(_QWORD **)(v35 + 1240);
        if ( *v145 != v35 + 1232 )
          goto LABEL_342;
        *v145 = v144;
        *(_QWORD *)(v144 + 8) = v145;
        v146 = *(_QWORD *)(v35 + 1248);
        if ( *(_QWORD *)(v146 + 8) != v35 + 1248
          || (v147 = *(_QWORD **)(v35 + 1256), *v147 != v35 + 1248)
          || (*v147 = v146,
              *(_QWORD *)(v146 + 8) = v147,
              v148 = *(_QWORD *)(v35 + 1264),
              *(_QWORD *)(v148 + 8) != v35 + 1264)
          || (v149 = *(_QWORD **)(v35 + 1272), *v149 != v35 + 1264) )
        {
LABEL_342:
          __fastfail(3u);
        }
        *v149 = v148;
        *(_QWORD *)(v148 + 8) = v149;
        NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v35 + 1376));
        ndisIfFreeIfIndex(*(unsigned int *)(v35 + 4));
        v150 = *(_QWORD *)(v35 + 1440);
        --ndisInterfaceCount;
        NdisFreeRefCount(v150);
        v151 = *(void **)(v35 + 1432);
        *(_QWORD *)(v35 + 1440) = 0LL;
        if ( v151 )
        {
          ExFreePoolWithTag(v151, 0);
          *(_QWORD *)(v35 + 1432) = 0LL;
        }
        v152 = *(void **)(v35 + 1280);
        if ( v152 )
        {
          ExFreePoolWithTag(v152, 0);
          *(_QWORD *)(v35 + 1280) = 0LL;
          *(_QWORD *)(v35 + 1288) = 0LL;
        }
        v153 = *(struct _KEVENT **)(v35 + 1392);
        if ( v153 )
          KeSetEvent(v153, 0, 0);
        ExFreePoolWithTag((PVOID)v35, 0);
      }
      else
      {
LABEL_118:
        v23 = 0LL;
      }
      v78 = (ULONG_PTR)v34[90].Flink;
      v31 = v31->Flink;
      v170 = v31;
      if ( v78 - 2 > 1 )
      {
        if ( v78 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v78, 0LL);
        if ( *(_BYTE *)(v78 + 2) <= 6u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v78, 6uLL);
        if ( *(_BYTE *)(v78 + 1) )
        {
          if ( *(_BYTE *)(v78 + 1) == 1 )
          {
            v154 = v78 + 392;
            v155 = *(_DWORD *)(v78 + 448);
            if ( v155 >> 17 < 0x3FFE && (unsigned __int16)v155 >> 1 == (v155 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v78 + 392));
              *(_DWORD *)(v154 + 56) &= 0x10001u;
              v23 = 0LL;
            }
            else
            {
              if ( (unsigned __int16)v155 >> 1 == 0 && (v155 & 1) == 0 )
LABEL_339:
                ndisBugCheckEx(0x1EuLL, 0LL, v78, 6uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v78 + 392), 0);
              v23 = 0LL;
            }
          }
        }
        else
        {
          v79 = *(_QWORD *)(v78 + 8);
          if ( v79 && (v80 = *(_BYTE *)(v78 + 3), v81 = 0, v80) )
          {
            while ( 1 )
            {
              v82 = (_BYTE *)(v79 + 2LL * v81);
              if ( *v82 == 6 )
              {
                v84 = v82[1];
                if ( v84 )
                  break;
              }
              if ( ++v81 >= v80 )
                goto LABEL_127;
            }
            v82[1] = v84 - 1;
          }
          else
          {
LABEL_127:
            if ( !_bittestandreset((signed __int32 *)(v78 + 16), 6u) )
              goto LABEL_339;
          }
        }
      }
      v51 = LODWORD(v34[81].Blink)-- == 1;
      if ( v51 )
      {
        KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
        ndisIfDeleteStackEntries(v34);
        v34[81].Flink = 0LL;
        KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
        v156 = v182->Flink;
        if ( v182->Flink->Blink != v182 )
          goto LABEL_342;
        v157 = v182->Blink;
        if ( v157->Flink != v182 )
          goto LABEL_342;
        v157->Flink = v156;
        v156->Blink = v157;
        v158 = v34[78].Flink;
        if ( v158->Blink != &v34[78] )
          goto LABEL_342;
        v159 = v34[78].Blink;
        if ( v159->Flink != &v34[78] )
          goto LABEL_342;
        v159->Flink = v158;
        v158->Blink = v159;
        v160 = v34[79].Flink;
        if ( v160->Blink != &v34[79] )
          goto LABEL_342;
        v161 = v34[79].Blink;
        if ( v161->Flink != &v34[79] )
          goto LABEL_342;
        v161->Flink = v160;
        v160->Blink = v161;
        NETWORKBLOCK_DECREMENT_REF(v34[86].Flink);
        ndisIfFreeIfIndex(HIDWORD(v34->Flink));
        v162 = (ULONG_PTR)v34[90].Flink;
        --ndisInterfaceCount;
        NdisFreeRefCount(v162);
        v163 = v34[89].Blink;
        v34[90].Flink = 0LL;
        if ( v163 )
        {
          ExFreePoolWithTag(v163, 0);
          v34[89].Blink = 0LL;
        }
        v164 = v34[80].Flink;
        if ( v164 )
        {
          ExFreePoolWithTag(v164, 0);
          v34[80].Flink = 0LL;
          v34[80].Blink = 0LL;
        }
        v165 = (struct _KEVENT *)v34[87].Flink;
        if ( v165 )
          KeSetEvent(v165, 0, 0);
        ExFreePoolWithTag(v34, 0);
      }
      v19 = v169;
      v32 = v171;
LABEL_130:
      if ( v31 == &ndisIfList )
        goto LABEL_131;
    }
    v36 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    if ( BYTE3(v34[87].Blink) )
    {
      v23 = (__int64)v34[88].Blink;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v34[90].Blink, 3u);
      ++HIDWORD(v34[87].Blink);
    }
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v36);
    if ( !v23 )
    {
      if ( BYTE2(v34[87].Blink) )
      {
        v38 = ndisReferenceTopMiniportByNameForNsi((__int64)v34[88].Blink[2].Flink, 0, v37, 0, 2u, 0x3Cu);
        v39 = v38;
        if ( v38 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v38 + 96));
          v40 = *(_QWORD *)(v39 + 2064);
          *(_QWORD *)(v39 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v39 + 1864) = 2234941;
          if ( v40 )
          {
            while ( 1 )
            {
              v41 = 1;
              v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 320));
              if ( !*(_BYTE *)(v40 + 330) )
              {
                v43 = *(_WORD *)(v40 + 328);
                if ( v43 >= 0xFFEBu )
                {
                  ndisRefCountReferenceCountOverflow = 1;
                  v41 = 2;
                }
                else
                {
                  v44 = *(struct _NDIS_REFCOUNT_BLOCK **)(v40 + 336);
                  *(_WORD *)(v40 + 328) = v43 + 1;
                  NdisReferenceWithTag(v44, 0xBu);
                  v41 = 0;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v40 + 320), v42);
              if ( !v41 )
                break;
              v40 = *(_QWORD *)(v40 + 112);
              if ( !v40 )
                goto LABEL_256;
            }
            v35 = *(_QWORD *)(v40 + 704);
          }
          else
          {
LABEL_256:
            v35 = *(_QWORD *)(v39 + 4072);
          }
          *(_QWORD *)(v39 + 520) = 0LL;
          *(_DWORD *)(v39 + 1864) = 0;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v39 + 96));
          v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v39 + 96));
          v46 = *(_QWORD *)(v39 + 4936);
          *(_QWORD *)(v39 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v39 + 1864) = 71257;
          if ( v46 - 2 > 1 )
          {
            if ( v46 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v46, 0LL);
            if ( *(_BYTE *)(v46 + 2) <= 2u )
              ndisBugCheckEx(0x1EuLL, 2uLL, v46, 2uLL);
            v47 = *(unsigned __int8 *)(v46 + 1);
            if ( *(_BYTE *)(v46 + 1) )
            {
              if ( v47 == 1 )
              {
                v133 = v46 + 136;
                v134 = *(_DWORD *)(v46 + 192);
                if ( v134 >> 17 < 0x3FFE && (unsigned __int16)v134 >> 1 == (v134 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v46 + 136));
                  *(_DWORD *)(v133 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (unsigned __int16)v134 >> 1 == 0 && (v134 & 1) == 0 )
LABEL_327:
                    ndisBugCheckEx(0x1EuLL, 0LL, v46, 2uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v46 + 136), 0);
                }
              }
            }
            else
            {
              v48 = *(_QWORD *)(v46 + 8);
              if ( v48 && (v49 = *(_BYTE *)(v46 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v50 = (_BYTE *)(v48 + 2LL * (unsigned __int8)v47);
                  if ( *v50 == 2 )
                  {
                    v135 = v50[1];
                    if ( v135 )
                      break;
                  }
                  LOBYTE(v47) = v47 + 1;
                  if ( (unsigned __int8)v47 >= v49 )
                    goto LABEL_59;
                }
                v50[1] = v135 - 1;
              }
              else
              {
LABEL_59:
                if ( !_bittestandreset((signed __int32 *)(v46 + 16), 2u) )
                  goto LABEL_327;
              }
            }
          }
          v51 = (*(_DWORD *)(v39 + 3140))-- == 1;
          if ( v51 )
          {
            v52 = *(struct _KEVENT **)(v39 + 3152);
            if ( v52 )
              KeSetEvent(v52, 0, 0);
          }
          *(_QWORD *)(v39 + 520) = 0LL;
          *(_DWORD *)(v39 + 1864) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 96), v45);
          if ( (unsigned __int8)byte_1C00A0263 >= 4u )
            WPP_SF_q(25LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v39);
          v53 = 0;
          v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v39 + 4472));
          v55 = *(_QWORD *)(v39 + 4928);
          v56 = v54;
          if ( v55 && v55 - 2 > 1 )
          {
            if ( v55 == 1 )
              goto LABEL_332;
            if ( *(_BYTE *)(v55 + 2) <= 0x3Cu )
              ndisBugCheckEx(0x1EuLL, 2uLL, v55, 0x3CuLL);
            v57 = *(unsigned __int8 *)(v55 + 1);
            if ( *(_BYTE *)(v55 + 1) )
            {
              if ( v57 == 1 )
              {
                v136 = v55 + 3848;
                v137 = *(_DWORD *)(v55 + 3904);
                if ( v137 >> 17 < 0x3FFE && (unsigned __int16)v137 >> 1 == (v137 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v55 + 3848));
                  *(_DWORD *)(v136 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (unsigned __int16)v137 >> 1 == 0 && (v137 & 1) == 0 )
LABEL_330:
                    ndisBugCheckEx(0x1EuLL, 0LL, v55, 0x3CuLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v55 + 3848), 0);
                }
              }
            }
            else
            {
              v58 = *(_QWORD *)(v55 + 8);
              if ( v58 && (v59 = *(_BYTE *)(v55 + 3)) != 0 )
              {
                while ( 1 )
                {
                  v60 = (_BYTE *)(v58 + 2LL * (unsigned __int8)v57);
                  if ( *v60 == 60 )
                  {
                    v138 = v60[1];
                    if ( v138 )
                      break;
                  }
                  LOBYTE(v57) = v57 + 1;
                  if ( (unsigned __int8)v57 >= v59 )
                    goto LABEL_74;
                }
                v60[1] = v138 - 1;
              }
              else
              {
LABEL_74:
                if ( !_bittestandreset((signed __int32 *)(v55 + 20), 0x1Cu) )
                  goto LABEL_330;
              }
            }
          }
          v51 = (*(_DWORD *)(v39 + 4480))-- == 1;
          if ( v51 )
            v53 = 1;
          if ( (unsigned __int8)byte_1C00A0263 >= 4u )
            WPP_SF_qD(14LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v39, *(unsigned int *)(v39 + 4480));
          KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 4472), v56);
          if ( v53 )
          {
            v139 = *(struct _KEVENT **)(v39 + 1608);
            if ( v139 )
              KeSetEvent(v139, 0, 0);
          }
          if ( (unsigned __int8)byte_1C00A0263 >= 4u )
            WPP_SF_q(26LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v39);
          v7 = HIDWORD(v184);
          v34 = v175;
LABEL_83:
          if ( v35 )
          {
            NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v35 + 1440), 7u);
            ++*(_DWORD *)(v35 + 1304);
          }
          v20 = v166;
          v3 = v176;
          goto LABEL_86;
        }
        v34 = v175;
        v35 = 0LL;
      }
LABEL_86:
      v31 = v170;
      goto LABEL_87;
    }
    v88 = ndisReferenceTopMiniportByNameForNsi(v23, 0, v37, 0, 2u, 0x3Cu);
    v89 = v88;
    if ( v88 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v88 + 96));
      v90 = *(_QWORD *)(v89 + 2064);
      *(_QWORD *)(v89 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v89 + 1864) = 2234941;
      if ( v90 )
      {
        while ( 1 )
        {
          v91 = 1;
          v92 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v90 + 320));
          if ( !*(_BYTE *)(v90 + 330) )
          {
            v93 = *(_WORD *)(v90 + 328);
            if ( v93 >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
              v91 = 2;
            }
            else
            {
              v94 = *(struct _NDIS_REFCOUNT_BLOCK **)(v90 + 336);
              *(_WORD *)(v90 + 328) = v93 + 1;
              NdisReferenceWithTag(v94, 0xBu);
              v91 = 0;
            }
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v90 + 320), v92);
          if ( !v91 )
            break;
          v90 = *(_QWORD *)(v90 + 112);
          if ( !v90 )
            goto LABEL_224;
        }
        v35 = *(_QWORD *)(v90 + 704);
      }
      else
      {
LABEL_224:
        v35 = *(_QWORD *)(v89 + 4072);
      }
      *(_QWORD *)(v89 + 520) = 0LL;
      *(_DWORD *)(v89 + 1864) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v89 + 96));
      v95 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v89 + 96));
      v96 = *(_QWORD *)(v89 + 4936);
      *(_QWORD *)(v89 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v89 + 1864) = 71257;
      if ( v96 - 2 > 1 )
      {
        if ( v96 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v96, 0LL);
        if ( *(_BYTE *)(v96 + 2) <= 2u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v96, 2uLL);
        v97 = *(unsigned __int8 *)(v96 + 1);
        if ( *(_BYTE *)(v96 + 1) )
        {
          if ( v97 == 1 )
          {
            v121 = v96 + 136;
            v122 = *(_DWORD *)(v96 + 192);
            if ( v122 >> 17 < 0x3FFE && (unsigned __int16)v122 >> 1 == (v122 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v96 + 136));
              *(_DWORD *)(v121 + 56) &= 0x10001u;
            }
            else
            {
              if ( (unsigned __int16)v122 >> 1 == 0 && (v122 & 1) == 0 )
LABEL_319:
                ndisBugCheckEx(0x1EuLL, 0LL, v96, 2uLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v96 + 136), 0);
            }
          }
        }
        else
        {
          v98 = *(_QWORD *)(v96 + 8);
          if ( v98 && (v99 = *(_BYTE *)(v96 + 3)) != 0 )
          {
            while ( 1 )
            {
              v100 = (_BYTE *)(v98 + 2LL * (unsigned __int8)v97);
              if ( *v100 == 2 )
              {
                v123 = v100[1];
                if ( v123 )
                  break;
              }
              LOBYTE(v97) = v97 + 1;
              if ( (unsigned __int8)v97 >= v99 )
                goto LABEL_154;
            }
            v100[1] = v123 - 1;
          }
          else
          {
LABEL_154:
            if ( !_bittestandreset((signed __int32 *)(v96 + 16), 2u) )
              goto LABEL_319;
          }
        }
      }
      v51 = (*(_DWORD *)(v89 + 3140))-- == 1;
      if ( v51 )
      {
        v101 = *(struct _KEVENT **)(v89 + 3152);
        if ( v101 )
          KeSetEvent(v101, 0, 0);
      }
      *(_QWORD *)(v89 + 520) = 0LL;
      *(_DWORD *)(v89 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v89 + 96), v95);
      if ( (unsigned __int8)byte_1C00A0263 >= 4u )
        WPP_SF_q(25LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v89);
      v102 = 0;
      v103 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v89 + 4472));
      v104 = *(_QWORD *)(v89 + 4928);
      v105 = v103;
      if ( v104 && v104 - 2 > 1 )
      {
        if ( v104 == 1 )
LABEL_332:
          ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
        if ( *(_BYTE *)(v104 + 2) <= 0x3Cu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v104, 0x3CuLL);
        v106 = *(unsigned __int8 *)(v104 + 1);
        if ( *(_BYTE *)(v104 + 1) )
        {
          if ( v106 == 1 )
          {
            v124 = v104 + 3848;
            v125 = *(_DWORD *)(v104 + 3904);
            if ( v125 >> 17 < 0x3FFE && (unsigned __int16)v125 >> 1 == (v125 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v104 + 3848));
              *(_DWORD *)(v124 + 56) &= 0x10001u;
            }
            else
            {
              if ( (unsigned __int16)v125 >> 1 == 0 && (v125 & 1) == 0 )
LABEL_322:
                ndisBugCheckEx(0x1EuLL, 0LL, v104, 0x3CuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v104 + 3848), 0);
            }
          }
        }
        else
        {
          v107 = *(_QWORD *)(v104 + 8);
          if ( v107 && (v108 = *(_BYTE *)(v104 + 3)) != 0 )
          {
            while ( 1 )
            {
              v109 = (_BYTE *)(v107 + 2LL * (unsigned __int8)v106);
              if ( *v109 == 60 )
              {
                v126 = v109[1];
                if ( v126 )
                  break;
              }
              LOBYTE(v106) = v106 + 1;
              if ( (unsigned __int8)v106 >= v108 )
                goto LABEL_169;
            }
            v109[1] = v126 - 1;
          }
          else
          {
LABEL_169:
            if ( !_bittestandreset((signed __int32 *)(v104 + 20), 0x1Cu) )
              goto LABEL_322;
          }
        }
      }
      v51 = (*(_DWORD *)(v89 + 4480))-- == 1;
      if ( v51 )
        v102 = 1;
      if ( (unsigned __int8)byte_1C00A0263 >= 4u )
        WPP_SF_qD(14LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v89, *(unsigned int *)(v89 + 4480));
      KeReleaseSpinLock((PKSPIN_LOCK)(v89 + 4472), v105);
      if ( v102 )
      {
        v127 = *(struct _KEVENT **)(v89 + 1608);
        if ( v127 )
          KeSetEvent(v127, 0, 0);
      }
      if ( (unsigned __int8)byte_1C00A0263 >= 4u )
        WPP_SF_q(26LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v89);
      v7 = HIDWORD(v184);
    }
    else
    {
      v35 = 0LL;
    }
    v110 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    v34 = v175;
    v111 = v110;
    v112 = (ULONG_PTR)v175[90].Blink;
    if ( v112 - 2 > 1 )
    {
      if ( v112 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v112, 0LL);
      if ( *(_BYTE *)(v112 + 2) <= 3u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v112, 3uLL);
      v113 = *(unsigned __int8 *)(v112 + 1);
      if ( *(_BYTE *)(v112 + 1) )
      {
        if ( v113 == 1 )
        {
          v128 = v112 + 200;
          v129 = *(_DWORD *)(v112 + 256);
          if ( v129 >> 17 < 0x3FFE && (unsigned __int16)v129 >> 1 == (v129 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v112 + 200));
            *(_DWORD *)(v128 + 56) &= 0x10001u;
          }
          else
          {
            if ( (unsigned __int16)v129 >> 1 == 0 && (v129 & 1) == 0 )
LABEL_324:
              ndisBugCheckEx(0x1EuLL, 0LL, v112, 3uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v112 + 200), 0);
          }
        }
      }
      else
      {
        v114 = *(_QWORD *)(v112 + 8);
        if ( v114 && (v115 = *(_BYTE *)(v112 + 3)) != 0 )
        {
          while ( 1 )
          {
            v116 = (_BYTE *)(v114 + 2LL * (unsigned __int8)v113);
            if ( *v116 == 3 )
            {
              v130 = v116[1];
              if ( v130 )
                break;
            }
            LOBYTE(v113) = v113 + 1;
            if ( (unsigned __int8)v113 >= v115 )
              goto LABEL_186;
          }
          v116[1] = v130 - 1;
        }
        else
        {
LABEL_186:
          if ( !_bittestandreset((signed __int32 *)(v112 + 16), 3u) )
            goto LABEL_324;
        }
      }
    }
    v51 = HIDWORD(v34[87].Blink)-- == 1;
    if ( v51 )
    {
      v131 = v34[88].Blink;
      if ( v131 )
      {
        v132 = (struct _KEVENT *)v131[255].Flink;
        if ( v132 )
          KeSetEvent(v132, 0, 0);
      }
    }
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v111);
    goto LABEL_83;
  }
LABEL_131:
  *((_DWORD *)v3 + 22) = v32;
  if ( v32 > v19 )
LABEL_24:
    LODWORD(v23) = 261;
LABEL_25:
  KeReleaseSpinLock(&ndisIfListLock, v20);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qD(79LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v3, (unsigned int)v23);
  return (unsigned int)v23;
}
