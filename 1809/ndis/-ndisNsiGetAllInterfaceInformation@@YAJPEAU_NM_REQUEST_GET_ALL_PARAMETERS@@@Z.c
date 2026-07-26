/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
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
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B6E90 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B7170 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B7570 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B7E90 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  _LIST_ENTRY *v1; // r13
  __int64 v2; // r12
  _LIST_ENTRY **v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY *v6; // rbx
  _DWORD *ThreadProperty; // rax
  __int64 v8; // rcx
  int v9; // r14d
  int v10; // r15d
  unsigned int v11; // edi
  PACCESS_TOKEN v12; // rax
  void *v13; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v15; // edi
  KIRQL v16; // al
  _LIST_ENTRY *v17; // rcx
  KIRQL v18; // r8
  _LIST_ENTRY *Flink; // rax
  unsigned int v20; // edx
  KIRQL v21; // al
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v22; // rsi
  KIRQL v23; // di
  int v24; // ecx
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v27; // rbx
  KIRQL v28; // di
  int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rsi
  KIRQL v33; // r12
  int v34; // r14d
  unsigned __int16 v35; // ax
  struct _NDIS_REFCOUNT_BLOCK *v36; // rcx
  KIRQL v37; // si
  ULONG_PTR v38; // r8
  int v39; // ecx
  __int64 v40; // r9
  unsigned __int8 v41; // dl
  _BYTE *v42; // r10
  bool v43; // zf
  struct _KEVENT *v44; // rcx
  char v45; // r14
  KIRQL v46; // al
  ULONG_PTR v47; // r8
  KIRQL v48; // r15
  int v49; // ecx
  __int64 v50; // r10
  unsigned __int8 v51; // r9
  _BYTE *v52; // rdx
  unsigned int v53; // edi
  __int64 v54; // rax
  KIRQL v55; // r14
  __int64 v56; // rbx
  KIRQL v57; // al
  ULONG_PTR v58; // r8
  KIRQL v59; // si
  int v60; // ecx
  __int64 v61; // r10
  unsigned __int8 v62; // r9
  _BYTE *v63; // rdx
  ULONG_PTR v64; // r8
  int v65; // ecx
  __int64 v66; // r10
  unsigned __int8 v67; // r9
  _BYTE *v68; // rdx
  ULONG_PTR v69; // r8
  int v70; // ecx
  __int64 v71; // r10
  unsigned __int8 v72; // r9
  _BYTE *v73; // rdx
  char v75; // al
  char v76; // al
  char v77; // al
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rsi
  KIRQL v81; // r12
  int v82; // r14d
  unsigned __int16 v83; // ax
  struct _NDIS_REFCOUNT_BLOCK *v84; // rcx
  KIRQL v85; // si
  ULONG_PTR v86; // r8
  int v87; // ecx
  __int64 v88; // r9
  unsigned __int8 v89; // dl
  _BYTE *v90; // r10
  struct _KEVENT *v91; // rcx
  char v92; // r14
  KIRQL v93; // al
  ULONG_PTR v94; // r8
  KIRQL v95; // r15
  int v96; // ecx
  __int64 v97; // r10
  unsigned __int8 v98; // r9
  _BYTE *v99; // rdx
  KIRQL v100; // al
  ULONG_PTR v101; // r8
  KIRQL v102; // bl
  int v103; // ecx
  __int64 v104; // rdx
  unsigned __int8 v105; // r10
  _BYTE *v106; // r9
  _LIST_ENTRY *v107; // rax
  _LIST_ENTRY *v108; // rcx
  _LIST_ENTRY *v109; // rcx
  NTSTATUS v110; // edi
  unsigned int ThreadSessionId; // eax
  KIRQL v112; // dl
  unsigned __int64 v113; // rdx
  unsigned __int64 v114; // r8
  ULONG_PTR v115; // rdi
  unsigned int v116; // edx
  int v117; // ecx
  char v118; // al
  ULONG_PTR v119; // rsi
  unsigned int v120; // edx
  int v121; // ecx
  char v122; // al
  struct _KEVENT *v123; // rcx
  ULONG_PTR v124; // rdi
  unsigned int v125; // edx
  int v126; // ecx
  char v127; // al
  _LIST_ENTRY *v128; // rax
  struct _KEVENT *v129; // rcx
  ULONG_PTR v130; // rdi
  unsigned int v131; // edx
  int v132; // ecx
  char v133; // al
  ULONG_PTR v134; // rsi
  unsigned int v135; // edx
  int v136; // ecx
  char v137; // al
  struct _KEVENT *v138; // rcx
  ULONG_PTR v139; // rdi
  unsigned int v140; // edx
  int v141; // ecx
  ULONG_PTR v142; // rbx
  unsigned int v143; // edx
  int v144; // ecx
  __int64 v145; // rdx
  _QWORD *v146; // rcx
  __int64 v147; // rdx
  _QWORD *v148; // rcx
  __int64 v149; // rdx
  _QWORD *v150; // rcx
  ULONG_PTR v151; // rcx
  void *v152; // rcx
  void *v153; // rcx
  struct _KEVENT *v154; // rcx
  ULONG_PTR v155; // rbx
  unsigned int v156; // edx
  int v157; // ecx
  _LIST_ENTRY *v158; // rdx
  _LIST_ENTRY *v159; // rcx
  _LIST_ENTRY *v160; // rdx
  _LIST_ENTRY *v161; // rcx
  _LIST_ENTRY *v162; // rdx
  _LIST_ENTRY *v163; // rcx
  ULONG_PTR v164; // rcx
  _LIST_ENTRY *v165; // rcx
  _LIST_ENTRY *v166; // rcx
  struct _KEVENT *v167; // rcx
  int v168; // [rsp+30h] [rbp-59h]
  KIRQL v169; // [rsp+34h] [rbp-55h]
  BOOLEAN EffectiveOnly; // [rsp+35h] [rbp-54h] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+36h] [rbp-53h] BYREF
  _LIST_ENTRY *v172; // [rsp+38h] [rbp-51h]
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v173; // [rsp+40h] [rbp-49h]
  _QWORD v174[8]; // [rsp+50h] [rbp-39h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+90h] [rbp+7h] BYREF
  PVOID TokenInformation; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v177; // [rsp+A0h] [rbp+17h]
  __int128 v178; // [rsp+A8h] [rbp+1Fh]

  v1 = 0LL;
  v173 = a1;
  v2 = 0LL;
  v168 = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(74LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  memset(v174, 0, sizeof(v174));
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 8 )
  {
    v53 = -1073741808;
    v168 = -1073741808;
    goto LABEL_81;
  }
  v4 = (_LIST_ENTRY **)*((_QWORD *)a1 + 2);
  CurrentThread = KeGetCurrentThread();
  v177 = 0LL;
  v178 = 0uLL;
  v6 = *v4;
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v10 = ThreadProperty[1];
    HIDWORD(v177) = *ThreadProperty;
    v9 = HIDWORD(v177);
    LODWORD(v177) = v10;
    ObfDereferenceObject(ThreadProperty);
    v11 = v9;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v177 = 0LL;
    v11 = 0;
  }
  if ( !v11 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    }
    else
    {
      v12 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v13 = v12;
      if ( v12 )
      {
        v110 = SeQueryInformationToken(v12, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v13);
        if ( v110 >= 0 )
        {
          v15 = (unsigned int)TokenInformation;
          goto LABEL_11;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v15 = CurrentProcessSessionId;
LABEL_11:
    if ( v15 == -1 )
    {
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
      v10 = v177;
      v15 = ThreadSessionId;
    }
    if ( v15 < ndisCmSessionCount )
    {
      v9 = 0;
      v112 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( v15 < ndisCmSessionCount )
        v9 = *((_DWORD *)ndisCmSession + 6 * v15);
      KeReleaseSpinLock(&ndisCmSessionLock, v112);
      if ( !v9 )
        v9 = 1;
    }
    else
    {
      v9 = 1;
    }
    HIDWORD(v177) = v9;
    v11 = v9;
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
      goto LABEL_19;
    }
    v17 = Flink;
  }
LABEL_19:
  v178 = *(__int128 *)((char *)&v17[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v18);
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v22 = v173;
  v23 = v21;
  v169 = v21;
  v24 = *((_DWORD *)v173 + 8);
  if ( v24 == 2 )
    goto LABEL_20;
  if ( v24 )
  {
    if ( v24 == 1 )
    {
      v6 = 0LL;
      while ( 1 )
      {
LABEL_20:
        v25 = ndisIfList.Flink;
        v1 = 0LL;
        v172 = 0LL;
        if ( ndisIfList.Flink != &ndisIfList )
        {
          while ( v25[5].Flink <= v6 )
          {
            v25 = v25->Flink;
            if ( v25 == &ndisIfList )
              goto LABEL_25;
          }
          v1 = v25 - 77;
          v172 = v25 - 77;
        }
LABEL_25:
        if ( !v1 )
          break;
        Blink = v1[86].Blink;
        v6 = v1[82].Flink;
        if ( v9 == LODWORD(Blink[1].Flink) )
          goto LABEL_27;
        if ( v10 == -1 )
        {
          v114 = v178 - *(unsigned __int64 *)((char *)&Blink[105].Flink + 4);
          if ( (_LIST_ENTRY *)v178 == *(_LIST_ENTRY **)((char *)&Blink[105].Flink + 4) )
            v114 = *((_QWORD *)&v178 + 1) - *(unsigned __int64 *)((char *)&Blink[105].Blink + 4);
          if ( !v114 )
            goto LABEL_27;
        }
        if ( ((__int64)Blink[105].Flink & 2) == 0 && v9 == 1 )
          goto LABEL_27;
      }
    }
    else
    {
      v168 = -1073741811;
    }
  }
  else
  {
    v107 = ndisIfList.Flink;
    v172 = 0LL;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( 1 )
      {
        v108 = v107[5].Flink;
        if ( v108 == v6 )
          break;
        if ( v108 <= v6 )
        {
          v107 = v107->Flink;
          if ( v107 != &ndisIfList )
            continue;
        }
        goto LABEL_183;
      }
      v1 = v107 - 77;
      v172 = v107 - 77;
    }
LABEL_183:
    if ( v1 )
    {
      v109 = v1[86].Blink;
      if ( v9 != LODWORD(v109[1].Flink) )
      {
        v113 = v178 - *(unsigned __int64 *)((char *)&v109[105].Flink + 4);
        if ( (_LIST_ENTRY *)v178 == *(_LIST_ENTRY **)((char *)&v109[105].Flink + 4) )
          v113 = *((_QWORD *)&v178 + 1) - *(unsigned __int64 *)((char *)&v109[105].Blink + 4);
        if ( v113 && (((__int64)v109[105].Flink & 2) != 0 || v9 != 1) )
        {
          v1 = 0LL;
          goto LABEL_77;
        }
      }
LABEL_27:
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1[90].Flink);
      ++LODWORD(v1[81].Blink);
      if ( !BYTE1(v1[87].Blink) || *((_QWORD *)v22 + 1) >= 2uLL )
      {
LABEL_76:
        **((_QWORD **)v22 + 2) = v1[82].Flink;
        goto LABEL_77;
      }
      v27 = 0LL;
      v28 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
      if ( BYTE3(v1[87].Blink) )
      {
        v27 = v1[88].Blink;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v1[90].Blink);
        ++HIDWORD(v1[87].Blink);
      }
      KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v28);
      if ( !v27 )
      {
        if ( !BYTE2(v1[87].Blink)
          || (v30 = ndisReferenceTopMiniportByNameForNsi(v1[88].Blink[2].Flink, 0, v29, 0, 2, 60), (v31 = v30) == 0) )
        {
LABEL_75:
          v23 = v169;
          goto LABEL_76;
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v30 + 96));
        v32 = *(_QWORD *)(v31 + 2064);
        *(_QWORD *)(v31 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v31 + 1864) = 2234941;
        if ( v32 )
        {
          while ( 1 )
          {
            v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v32 + 320));
            v34 = 1;
            if ( !*(_BYTE *)(v32 + 330) )
            {
              v35 = *(_WORD *)(v32 + 328);
              if ( v35 >= 0xFFEBu )
              {
                ndisRefCountReferenceCountOverflow = 1;
                v34 = 2;
              }
              else
              {
                v36 = *(struct _NDIS_REFCOUNT_BLOCK **)(v32 + 336);
                *(_WORD *)(v32 + 328) = v35 + 1;
                NdisReferenceWithTag(v36);
                v34 = 0;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v32 + 320), v33);
            if ( !v34 )
              break;
            v32 = *(_QWORD *)(v32 + 112);
            if ( !v32 )
              goto LABEL_261;
          }
          v2 = *(_QWORD *)(v32 + 704);
        }
        else
        {
LABEL_261:
          v2 = *(_QWORD *)(v31 + 4072);
        }
        *(_QWORD *)(v31 + 520) = 0LL;
        *(_DWORD *)(v31 + 1864) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v31 + 96));
        v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v31 + 96));
        v38 = *(_QWORD *)(v31 + 4936);
        *(_QWORD *)(v31 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v31 + 1864) = 71257;
        if ( v38 - 2 > 1 )
        {
          if ( v38 <= 1 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v38, 0LL);
          if ( *(_BYTE *)(v38 + 2) <= 2u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v38, 2uLL);
          v39 = *(unsigned __int8 *)(v38 + 1);
          if ( *(_BYTE *)(v38 + 1) )
          {
            if ( v39 != 1 )
              goto LABEL_49;
            v130 = v38 + 136;
            v131 = *(_DWORD *)(v38 + 192);
            v132 = (unsigned __int16)v131 >> 1;
            if ( v131 >> 17 < 0x3FFE && v132 == (v131 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v38 + 136));
              *(_DWORD *)(v130 + 56) &= 0x10001u;
              goto LABEL_49;
            }
            if ( v132 != 0 || (v131 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v38 + 136), 0);
              goto LABEL_49;
            }
          }
          else
          {
            v40 = *(_QWORD *)(v38 + 8);
            if ( v40 )
            {
              v41 = *(_BYTE *)(v38 + 3);
              if ( v41 )
              {
                while ( 1 )
                {
                  v42 = (_BYTE *)(v40 + 2LL * (unsigned __int8)v39);
                  if ( *v42 == 2 )
                  {
                    v133 = v42[1];
                    if ( v133 )
                      break;
                  }
                  LOBYTE(v39) = v39 + 1;
                  if ( (unsigned __int8)v39 >= v41 )
                    goto LABEL_48;
                }
                v42[1] = v133 - 1;
                goto LABEL_49;
              }
            }
LABEL_48:
            if ( _bittestandreset((signed __int32 *)(v38 + 16), 2u) )
              goto LABEL_49;
          }
          ndisBugCheckEx(0x1EuLL, 0LL, v38, 2uLL);
        }
LABEL_49:
        v43 = (*(_DWORD *)(v31 + 3140))-- == 1;
        if ( v43 )
        {
          v44 = *(struct _KEVENT **)(v31 + 3152);
          if ( v44 )
            KeSetEvent(v44, 0, 0);
        }
        *(_QWORD *)(v31 + 520) = 0LL;
        *(_DWORD *)(v31 + 1864) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v31 + 96), v37);
        if ( (unsigned __int8)byte_1C00A0263 >= 4u )
          WPP_SF_q(25LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v31);
        v45 = 0;
        v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v31 + 4472));
        v47 = *(_QWORD *)(v31 + 4928);
        v48 = v46;
        if ( !v47 || v47 - 2 <= 1 )
          goto LABEL_64;
        if ( v47 != 1 )
        {
          if ( *(_BYTE *)(v47 + 2) <= 0x3Cu )
            ndisBugCheckEx(0x1EuLL, 2uLL, v47, 0x3CuLL);
          v49 = *(unsigned __int8 *)(v47 + 1);
          if ( *(_BYTE *)(v47 + 1) )
          {
            if ( v49 != 1 )
              goto LABEL_64;
            v134 = v47 + 3848;
            v135 = *(_DWORD *)(v47 + 3904);
            v136 = (unsigned __int16)v135 >> 1;
            if ( v135 >> 17 < 0x3FFE && v136 == (v135 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v47 + 3848));
              *(_DWORD *)(v134 + 56) &= 0x10001u;
              goto LABEL_64;
            }
            if ( v136 != 0 || (v135 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v47 + 3848), 0);
              goto LABEL_64;
            }
          }
          else
          {
            v50 = *(_QWORD *)(v47 + 8);
            if ( v50 )
            {
              v51 = *(_BYTE *)(v47 + 3);
              if ( v51 )
              {
                while ( 1 )
                {
                  v52 = (_BYTE *)(v50 + 2LL * (unsigned __int8)v49);
                  if ( *v52 == 60 )
                  {
                    v137 = v52[1];
                    if ( v137 )
                      break;
                  }
                  LOBYTE(v49) = v49 + 1;
                  if ( (unsigned __int8)v49 >= v51 )
                    goto LABEL_63;
                }
                v52[1] = v137 - 1;
                goto LABEL_64;
              }
            }
LABEL_63:
            if ( _bittestandreset((signed __int32 *)(v47 + 20), 0x1Cu) )
            {
LABEL_64:
              v43 = (*(_DWORD *)(v31 + 4480))-- == 1;
              if ( v43 )
                v45 = 1;
              if ( (unsigned __int8)byte_1C00A0263 >= 4u )
                WPP_SF_qD(14LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v31, *(unsigned int *)(v31 + 4480));
              KeReleaseSpinLock((PKSPIN_LOCK)(v31 + 4472), v48);
              if ( v45 )
              {
                v138 = *(struct _KEVENT **)(v31 + 1608);
                if ( v138 )
                  KeSetEvent(v138, 0, 0);
              }
              if ( (unsigned __int8)byte_1C00A0263 >= 4u )
                WPP_SF_q(26LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v31);
              v1 = v172;
LABEL_72:
              if ( v2 )
              {
                NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v2 + 1440));
                ++*(_DWORD *)(v2 + 1304);
              }
              v22 = v173;
              goto LABEL_75;
            }
          }
          ndisBugCheckEx(0x1EuLL, 0LL, v47, 0x3CuLL);
        }
LABEL_273:
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      }
      v78 = ndisReferenceTopMiniportByNameForNsi((_DWORD)v27, 0, v29, 0, 2, 60);
      v79 = v78;
      if ( !v78 )
      {
LABEL_165:
        v100 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
        v101 = (ULONG_PTR)v1[90].Blink;
        v102 = v100;
        if ( v101 - 2 <= 1 )
          goto LABEL_174;
        if ( v101 <= 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v101, 0LL);
        if ( *(_BYTE *)(v101 + 2) <= 3u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v101, 3uLL);
        v103 = *(unsigned __int8 *)(v101 + 1);
        if ( *(_BYTE *)(v101 + 1) )
        {
          if ( v103 != 1 )
            goto LABEL_174;
          v124 = v101 + 200;
          v125 = *(_DWORD *)(v101 + 256);
          v126 = (unsigned __int16)v125 >> 1;
          if ( v125 >> 17 < 0x3FFE && v126 == (v125 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v101 + 200));
            *(_DWORD *)(v124 + 56) &= 0x10001u;
            goto LABEL_174;
          }
          if ( v126 != 0 || (v125 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v101 + 200), 0);
            goto LABEL_174;
          }
        }
        else
        {
          v104 = *(_QWORD *)(v101 + 8);
          if ( v104 )
          {
            v105 = *(_BYTE *)(v101 + 3);
            if ( v105 )
            {
              while ( 1 )
              {
                v106 = (_BYTE *)(v104 + 2LL * (unsigned __int8)v103);
                if ( *v106 == 3 )
                {
                  v127 = v106[1];
                  if ( v127 )
                    break;
                }
                LOBYTE(v103) = v103 + 1;
                if ( (unsigned __int8)v103 >= v105 )
                  goto LABEL_173;
              }
              v106[1] = v127 - 1;
              goto LABEL_174;
            }
          }
LABEL_173:
          if ( _bittestandreset((signed __int32 *)(v101 + 16), 3u) )
          {
LABEL_174:
            v43 = HIDWORD(v1[87].Blink)-- == 1;
            if ( v43 )
            {
              v128 = v1[88].Blink;
              if ( v128 )
              {
                v129 = (struct _KEVENT *)v128[255].Flink;
                if ( v129 )
                  KeSetEvent(v129, 0, 0);
              }
            }
            KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v102);
            goto LABEL_72;
          }
        }
        ndisBugCheckEx(0x1EuLL, 0LL, v101, 3uLL);
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v78 + 96));
      v80 = *(_QWORD *)(v79 + 2064);
      *(_QWORD *)(v79 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v79 + 1864) = 2234941;
      if ( v80 )
      {
        while ( 1 )
        {
          v81 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v80 + 320));
          v82 = 1;
          if ( !*(_BYTE *)(v80 + 330) )
          {
            v83 = *(_WORD *)(v80 + 328);
            if ( v83 >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
              v82 = 2;
            }
            else
            {
              v84 = *(struct _NDIS_REFCOUNT_BLOCK **)(v80 + 336);
              *(_WORD *)(v80 + 328) = v83 + 1;
              NdisReferenceWithTag(v84);
              v82 = 0;
            }
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v80 + 320), v81);
          if ( !v82 )
            break;
          v80 = *(_QWORD *)(v80 + 112);
          if ( !v80 )
            goto LABEL_221;
        }
        v2 = *(_QWORD *)(v80 + 704);
      }
      else
      {
LABEL_221:
        v2 = *(_QWORD *)(v79 + 4072);
      }
      *(_QWORD *)(v79 + 520) = 0LL;
      *(_DWORD *)(v79 + 1864) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v79 + 96));
      v85 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v79 + 96));
      v86 = *(_QWORD *)(v79 + 4936);
      *(_QWORD *)(v79 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v79 + 1864) = 71257;
      if ( v86 - 2 > 1 )
      {
        if ( v86 <= 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v86, 0LL);
        if ( *(_BYTE *)(v86 + 2) <= 2u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v86, 2uLL);
        v87 = *(unsigned __int8 *)(v86 + 1);
        if ( *(_BYTE *)(v86 + 1) )
        {
          if ( v87 != 1 )
            goto LABEL_142;
          v115 = v86 + 136;
          v116 = *(_DWORD *)(v86 + 192);
          v117 = (unsigned __int16)v116 >> 1;
          if ( v116 >> 17 < 0x3FFE && v117 == (v116 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v86 + 136));
            *(_DWORD *)(v115 + 56) &= 0x10001u;
            goto LABEL_142;
          }
          if ( v117 != 0 || (v116 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v86 + 136), 0);
            goto LABEL_142;
          }
        }
        else
        {
          v88 = *(_QWORD *)(v86 + 8);
          if ( v88 )
          {
            v89 = *(_BYTE *)(v86 + 3);
            if ( v89 )
            {
              while ( 1 )
              {
                v90 = (_BYTE *)(v88 + 2LL * (unsigned __int8)v87);
                if ( *v90 == 2 )
                {
                  v118 = v90[1];
                  if ( v118 )
                    break;
                }
                LOBYTE(v87) = v87 + 1;
                if ( (unsigned __int8)v87 >= v89 )
                  goto LABEL_141;
              }
              v90[1] = v118 - 1;
              goto LABEL_142;
            }
          }
LABEL_141:
          if ( _bittestandreset((signed __int32 *)(v86 + 16), 2u) )
            goto LABEL_142;
        }
        ndisBugCheckEx(0x1EuLL, 0LL, v86, 2uLL);
      }
LABEL_142:
      v43 = (*(_DWORD *)(v79 + 3140))-- == 1;
      if ( v43 )
      {
        v91 = *(struct _KEVENT **)(v79 + 3152);
        if ( v91 )
          KeSetEvent(v91, 0, 0);
      }
      *(_QWORD *)(v79 + 520) = 0LL;
      *(_DWORD *)(v79 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v79 + 96), v85);
      if ( (unsigned __int8)byte_1C00A0263 >= 4u )
        WPP_SF_q(25LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v79);
      v92 = 0;
      v93 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v79 + 4472));
      v94 = *(_QWORD *)(v79 + 4928);
      v95 = v93;
      if ( !v94 || v94 - 2 <= 1 )
        goto LABEL_157;
      if ( v94 == 1 )
        goto LABEL_273;
      if ( *(_BYTE *)(v94 + 2) <= 0x3Cu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v94, 0x3CuLL);
      v96 = *(unsigned __int8 *)(v94 + 1);
      if ( *(_BYTE *)(v94 + 1) )
      {
        if ( v96 != 1 )
          goto LABEL_157;
        v119 = v94 + 3848;
        v120 = *(_DWORD *)(v94 + 3904);
        v121 = (unsigned __int16)v120 >> 1;
        if ( v120 >> 17 < 0x3FFE && v121 == (v120 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v94 + 3848));
          *(_DWORD *)(v119 + 56) &= 0x10001u;
          goto LABEL_157;
        }
        if ( v121 != 0 || (v120 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v94 + 3848), 0);
          goto LABEL_157;
        }
      }
      else
      {
        v97 = *(_QWORD *)(v94 + 8);
        if ( v97 )
        {
          v98 = *(_BYTE *)(v94 + 3);
          if ( v98 )
          {
            while ( 1 )
            {
              v99 = (_BYTE *)(v97 + 2LL * (unsigned __int8)v96);
              if ( *v99 == 60 )
              {
                v122 = v99[1];
                if ( v122 )
                  break;
              }
              LOBYTE(v96) = v96 + 1;
              if ( (unsigned __int8)v96 >= v98 )
                goto LABEL_156;
            }
            v99[1] = v122 - 1;
            goto LABEL_157;
          }
        }
LABEL_156:
        if ( _bittestandreset((signed __int32 *)(v94 + 20), 0x1Cu) )
        {
LABEL_157:
          v43 = (*(_DWORD *)(v79 + 4480))-- == 1;
          if ( v43 )
            v92 = 1;
          if ( (unsigned __int8)byte_1C00A0263 >= 4u )
            WPP_SF_qD(14LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v79, *(unsigned int *)(v79 + 4480));
          KeReleaseSpinLock((PKSPIN_LOCK)(v79 + 4472), v95);
          if ( v92 )
          {
            v123 = *(struct _KEVENT **)(v79 + 1608);
            if ( v123 )
              KeSetEvent(v123, 0, 0);
          }
          if ( (unsigned __int8)byte_1C00A0263 >= 4u )
            WPP_SF_q(26LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v79);
          v1 = v172;
          goto LABEL_165;
        }
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v94, 0x3CuLL);
    }
  }
LABEL_77:
  KeReleaseSpinLock(&ndisIfListLock, v23);
  v53 = v168;
  if ( v168 >= 0 )
  {
    if ( v1 )
    {
      v54 = *((_QWORD *)v22 + 1);
      HIDWORD(v174[6]) = 0;
      switch ( v54 )
      {
        case 0LL:
LABEL_80:
          v174[5] = *((_QWORD *)v22 + 5);
          LODWORD(v174[6]) = *((_DWORD *)v22 + 12);
          LODWORD(v174[4]) = 0;
          ndisNsiGetInterfaceRwInformation(
            (struct _NDIS_IF_BLOCK *)v1,
            (struct _NDIS_IF_BLOCK *)v2,
            (struct _NM_REQUEST_GET_PARAMETER *)v174);
          *((_DWORD *)v22 + 12) = v174[6];
          v174[5] = *((_QWORD *)v22 + 7);
          LODWORD(v174[6]) = *((_DWORD *)v22 + 16);
          LODWORD(v174[4]) = 1;
          ndisNsiGetInterfaceRodInformation(
            (struct _NDIS_IF_BLOCK *)v1,
            (struct _NDIS_IF_BLOCK *)v2,
            (struct _NM_REQUEST_GET_PARAMETER *)v174);
          *((_DWORD *)v22 + 16) = v174[6];
          v174[5] = *((_QWORD *)v22 + 9);
          LODWORD(v174[6]) = *((_DWORD *)v22 + 20);
          LODWORD(v174[4]) = 2;
          ndisNsiGetInterfaceRosInformation(
            (struct _NDIS_IF_BLOCK *)v1,
            (struct _NDIS_IF_BLOCK *)v2,
            (struct _NM_REQUEST_GET_PARAMETER *)v174);
          *((_DWORD *)v22 + 20) = v174[6];
          break;
        case 1LL:
          goto LABEL_187;
        case 12LL:
          goto LABEL_80;
        case 13LL:
LABEL_187:
          v174[5] = *((_QWORD *)v22 + 7);
          LODWORD(v174[6]) = *((_DWORD *)v22 + 16);
          LODWORD(v174[4]) = 1;
          ndisNsiGetInterfaceRodEnumObject(
            (struct _NDIS_IF_BLOCK *)v1,
            (struct _NDIS_IF_BLOCK *)v2,
            (struct _NM_REQUEST_GET_PARAMETER *)v174);
          *((_DWORD *)v22 + 16) = v174[6];
          v174[5] = *((_QWORD *)v22 + 9);
          LODWORD(v174[6]) = *((_DWORD *)v22 + 20);
          LODWORD(v174[4]) = 2;
          ndisNsiGetInterfaceRosEnumObject(
            (struct _NDIS_IF_BLOCK *)v1,
            (struct _NDIS_IF_BLOCK *)v2,
            (struct _NM_REQUEST_GET_PARAMETER *)v174);
          *((_DWORD *)v22 + 20) = v174[6];
          break;
        default:
          v53 = -1073741811;
          v168 = -1073741811;
          break;
      }
    }
    else if ( *((_DWORD *)v22 + 8) )
    {
      v53 = -2147483622;
      v168 = -2147483622;
    }
    else
    {
      v53 = -1073741772;
      v168 = -1073741772;
    }
  }
LABEL_81:
  v55 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !v2 )
    goto LABEL_106;
  if ( *(_BYTE *)(v2 + 1402) )
  {
    v56 = *(_QWORD *)(v2 + 1416) + 320LL;
    v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v56);
    v58 = *(_QWORD *)(v56 + 16);
    v59 = v57;
    if ( v58 - 2 <= 1 )
      goto LABEL_92;
    if ( v58 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v58, 0LL);
    if ( *(_BYTE *)(v58 + 2) <= 0xBu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v58, 0xBuLL);
    v60 = *(unsigned __int8 *)(v58 + 1);
    if ( !*(_BYTE *)(v58 + 1) )
    {
      v61 = *(_QWORD *)(v58 + 8);
      if ( v61 )
      {
        v62 = *(_BYTE *)(v58 + 3);
        if ( v62 )
        {
          while ( 1 )
          {
            v63 = (_BYTE *)(v61 + 2LL * (unsigned __int8)v60);
            if ( *v63 == 11 )
            {
              v75 = v63[1];
              if ( v75 )
                break;
            }
            LOBYTE(v60) = v60 + 1;
            if ( (unsigned __int8)v60 >= v62 )
              goto LABEL_91;
          }
          v63[1] = v75 - 1;
          goto LABEL_92;
        }
      }
LABEL_91:
      if ( _bittestandreset((signed __int32 *)(v58 + 16), 0xBu) )
      {
LABEL_92:
        v43 = (*(_WORD *)(v56 + 8))-- == 1;
        if ( v43 && !*(_BYTE *)(v56 + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(v56 + 16));
          *(_QWORD *)(v56 + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v56, v59);
        goto LABEL_96;
      }
LABEL_300:
      ndisBugCheckEx(0x1EuLL, 0LL, v58, 0xBuLL);
    }
    if ( v60 != 1 )
      goto LABEL_92;
    v139 = v58 + 712;
    v140 = *(_DWORD *)(v58 + 768);
    v141 = (unsigned __int16)v140 >> 1;
    if ( v140 >> 17 < 0x3FFE && v141 == (v140 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v58 + 712));
      *(_DWORD *)(v139 + 56) &= 0x10001u;
    }
    else
    {
      if ( v141 == 0 && (v140 & 1) == 0 )
        goto LABEL_300;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v58 + 712), 0);
    }
    v53 = v168;
    goto LABEL_92;
  }
LABEL_96:
  v64 = *(_QWORD *)(v2 + 1440);
  if ( v64 - 2 <= 1 )
    goto LABEL_105;
  if ( v64 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v64, 0LL);
  if ( *(_BYTE *)(v64 + 2) <= 4u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v64, 4uLL);
  v65 = *(unsigned __int8 *)(v64 + 1);
  if ( *(_BYTE *)(v64 + 1) )
  {
    if ( v65 != 1 )
      goto LABEL_105;
    v142 = v64 + 264;
    v143 = *(_DWORD *)(v64 + 320);
    v144 = (unsigned __int16)v143 >> 1;
    if ( v143 >> 17 < 0x3FFE && v144 == (v143 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v64 + 264));
      *(_DWORD *)(v142 + 56) &= 0x10001u;
      goto LABEL_105;
    }
    if ( v144 != 0 || (v143 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v64 + 264), 0);
      goto LABEL_105;
    }
LABEL_309:
    ndisBugCheckEx(0x1EuLL, 0LL, v64, 4uLL);
  }
  v66 = *(_QWORD *)(v64 + 8);
  if ( !v66 || (v67 = *(_BYTE *)(v64 + 3)) == 0 )
  {
LABEL_104:
    if ( _bittestandreset((signed __int32 *)(v64 + 16), 4u) )
      goto LABEL_105;
    goto LABEL_309;
  }
  while ( 1 )
  {
    v68 = (_BYTE *)(v66 + 2LL * (unsigned __int8)v65);
    if ( *v68 == 4 )
    {
      v76 = v68[1];
      if ( v76 )
        break;
    }
    LOBYTE(v65) = v65 + 1;
    if ( (unsigned __int8)v65 >= v67 )
      goto LABEL_104;
  }
  v68[1] = v76 - 1;
LABEL_105:
  v43 = (*(_DWORD *)(v2 + 1304))-- == 1;
  if ( v43 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
    ndisIfDeleteStackEntries(v2);
    *(_QWORD *)(v2 + 1296) = 0LL;
    KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
    v145 = *(_QWORD *)(v2 + 1232);
    if ( *(_QWORD *)(v145 + 8) != v2 + 1232 )
      goto LABEL_345;
    v146 = *(_QWORD **)(v2 + 1240);
    if ( *v146 != v2 + 1232 )
      goto LABEL_345;
    *v146 = v145;
    *(_QWORD *)(v145 + 8) = v146;
    v147 = *(_QWORD *)(v2 + 1248);
    if ( *(_QWORD *)(v147 + 8) != v2 + 1248 )
      goto LABEL_345;
    v148 = *(_QWORD **)(v2 + 1256);
    if ( *v148 != v2 + 1248 )
      goto LABEL_345;
    *v148 = v147;
    *(_QWORD *)(v147 + 8) = v148;
    v149 = *(_QWORD *)(v2 + 1264);
    if ( *(_QWORD *)(v149 + 8) != v2 + 1264 )
      goto LABEL_345;
    v150 = *(_QWORD **)(v2 + 1272);
    if ( *v150 != v2 + 1264 )
      goto LABEL_345;
    *v150 = v149;
    *(_QWORD *)(v149 + 8) = v150;
    NETWORKBLOCK_DECREMENT_REF(*(_QWORD *)(v2 + 1376));
    ndisIfFreeIfIndex(*(unsigned int *)(v2 + 4));
    v151 = *(_QWORD *)(v2 + 1440);
    --ndisInterfaceCount;
    NdisFreeRefCount(v151);
    v152 = *(void **)(v2 + 1432);
    *(_QWORD *)(v2 + 1440) = 0LL;
    if ( v152 )
    {
      ExFreePoolWithTag(v152, 0);
      *(_QWORD *)(v2 + 1432) = 0LL;
    }
    v153 = *(void **)(v2 + 1280);
    if ( v153 )
    {
      ExFreePoolWithTag(v153, 0);
      *(_QWORD *)(v2 + 1280) = 0LL;
      *(_QWORD *)(v2 + 1288) = 0LL;
    }
    v154 = *(struct _KEVENT **)(v2 + 1392);
    if ( v154 )
      KeSetEvent(v154, 0, 0);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
LABEL_106:
  if ( !v1 )
    goto LABEL_117;
  v69 = (ULONG_PTR)v1[90].Flink;
  if ( v69 - 2 > 1 )
  {
    if ( v69 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v69, 0LL);
    if ( *(_BYTE *)(v69 + 2) <= 3u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v69, 3uLL);
    v70 = *(unsigned __int8 *)(v69 + 1);
    if ( *(_BYTE *)(v69 + 1) )
    {
      if ( v70 != 1 )
        goto LABEL_116;
      v155 = v69 + 200;
      v156 = *(_DWORD *)(v69 + 256);
      v157 = (unsigned __int16)v156 >> 1;
      if ( v156 >> 17 < 0x3FFE && v157 == (v156 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v69 + 200));
        *(_DWORD *)(v155 + 56) &= 0x10001u;
        goto LABEL_116;
      }
      if ( v157 != 0 || (v156 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v69 + 200), 0);
        goto LABEL_116;
      }
    }
    else
    {
      v71 = *(_QWORD *)(v69 + 8);
      if ( v71 )
      {
        v72 = *(_BYTE *)(v69 + 3);
        if ( v72 )
        {
          while ( 1 )
          {
            v73 = (_BYTE *)(v71 + 2LL * (unsigned __int8)v70);
            if ( *v73 == 3 )
            {
              v77 = v73[1];
              if ( v77 )
                break;
            }
            LOBYTE(v70) = v70 + 1;
            if ( (unsigned __int8)v70 >= v72 )
              goto LABEL_115;
          }
          v73[1] = v77 - 1;
          goto LABEL_116;
        }
      }
LABEL_115:
      if ( _bittestandreset((signed __int32 *)(v69 + 16), 3u) )
        goto LABEL_116;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v69, 3uLL);
  }
LABEL_116:
  v43 = LODWORD(v1[81].Blink)-- == 1;
  if ( !v43 )
    goto LABEL_117;
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  ndisIfDeleteStackEntries(v1);
  v1[81].Flink = 0LL;
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  v158 = v1[77].Flink;
  if ( v158->Blink != &v1[77] )
    goto LABEL_345;
  v159 = v1[77].Blink;
  if ( v159->Flink != &v1[77] )
    goto LABEL_345;
  v159->Flink = v158;
  v158->Blink = v159;
  v160 = v1[78].Flink;
  if ( v160->Blink != &v1[78]
    || (v161 = v1[78].Blink, v161->Flink != &v1[78])
    || (v161->Flink = v160, v160->Blink = v161, v162 = v1[79].Flink, v162->Blink != &v1[79])
    || (v163 = v1[79].Blink, v163->Flink != &v1[79]) )
  {
LABEL_345:
    __fastfail(3u);
  }
  v163->Flink = v162;
  v162->Blink = v163;
  NETWORKBLOCK_DECREMENT_REF(v1[86].Flink);
  ndisIfFreeIfIndex(HIDWORD(v1->Flink));
  v164 = (ULONG_PTR)v1[90].Flink;
  --ndisInterfaceCount;
  NdisFreeRefCount(v164);
  v165 = v1[89].Blink;
  v1[90].Flink = 0LL;
  if ( v165 )
  {
    ExFreePoolWithTag(v165, 0);
    v1[89].Blink = 0LL;
  }
  v166 = v1[80].Flink;
  if ( v166 )
  {
    ExFreePoolWithTag(v166, 0);
    v1[80].Flink = 0LL;
    v1[80].Blink = 0LL;
  }
  v167 = (struct _KEVENT *)v1[87].Flink;
  if ( v167 )
    KeSetEvent(v167, 0, 0);
  ExFreePoolWithTag(v1, 0);
LABEL_117:
  KeReleaseSpinLock(&ndisIfListLock, v55);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qD(75LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v173, v53);
  return v53;
}
