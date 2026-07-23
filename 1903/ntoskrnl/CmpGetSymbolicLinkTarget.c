/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x140655BB0
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCopy @ 0x140092AB0 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x14012B888 (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpLockKcbStackShared @ 0x1405F8390 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F83F0 (CmpUnlockKcbStack.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x1405FEA00 (CmpFindNameInListWithStatus.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14062DB24 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpUnlockHashEntryByKcb @ 0x140631900 (CmpUnlockHashEntryByKcb.c)
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmpIsKeyStackDeleted @ 0x1406334C0 (CmpIsKeyStackDeleted.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063A3C0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetValueData @ 0x14064E540 (CmpGetValueData.c)
 *     CmpComputeComponentHashes @ 0x1406539E0 (CmpComputeComponentHashes.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140656728 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpFreeKeyControlBlock @ 0x14069B720 (CmpFreeKeyControlBlock.c)
 *     CmpValidateComponents @ 0x1406B0800 (CmpValidateComponents.c)
 *     CmpGetComponentNameAtIndex @ 0x1406BCB50 (CmpGetComponentNameAtIndex.c)
 *     CmpCompareUnicodeString @ 0x1406CE020 (CmpCompareUnicodeString.c)
 *     CmpConstructAndCacheName @ 0x1406E8018 (CmpConstructAndCacheName.c)
 */

__int64 __fastcall CmpGetSymbolicLinkTarget(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        ULONG_PTR a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  __int64 v9; // rdi
  unsigned int v12; // r13d
  char v13; // r15
  __int64 v14; // r8
  __int16 v15; // ax
  bool v16; // r14
  __int64 v17; // rsi
  char v18; // cl
  unsigned __int64 v19; // rdi
  ULONG_PTR v20; // rsi
  __int64 v21; // r14
  __int16 i; // bx
  ULONG_PTR v23; // rax
  unsigned int v24; // ebx
  unsigned int v25; // esi
  unsigned int v26; // r14d
  unsigned int v27; // ecx
  unsigned __int16 *v28; // rax
  unsigned __int16 v29; // bx
  wchar_t *v30; // rdi
  char v31; // r13
  unsigned __int16 v32; // r9
  __int64 v33; // r12
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int16 v36; // r10
  unsigned __int64 v37; // r11
  unsigned __int16 v38; // dx
  _WORD *v39; // rax
  __int16 v40; // r9
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r8
  char *v43; // r10
  UNICODE_STRING *v44; // rbx
  void *v45; // rcx
  ULONG_PTR v46; // rsi
  int v47; // ebx
  ULONG_PTR v48; // rdi
  int NameInListWithStatus; // edi
  __int64 v50; // r9
  wchar_t *Buffer; // rbx
  _SLIST_ENTRY *v52; // rdx
  __int64 v54; // rcx
  __int16 v55; // ax
  __int64 KcbAtLayerHeight; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // edi
  __int64 v61; // r12
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v63; // r8d
  unsigned int v64; // r9d
  __int64 v65; // rbx
  void (__fastcall *v66)(__int64, __int64 *); // rax
  ULONG_PTR v67; // rdi
  unsigned __int16 Length; // r12
  UNICODE_STRING v69; // xmm6
  __int16 v70; // r8
  wchar_t *v71; // rcx
  __int16 MaximumLength; // dx
  __int16 v73; // ax
  unsigned int v74; // ebx
  __int64 v75; // r8
  struct _LOOKASIDE_LIST_EX *v76; // r9
  int v77; // ebx
  __int64 v78; // r14
  __int64 v79; // rax
  int v80; // ebx
  unsigned int v81; // ebx
  __int64 v82; // rax
  unsigned int v83; // ebx
  __int64 v84; // r15
  const UNICODE_STRING *v85; // rax
  UNICODE_STRING *v86; // rbx
  void *v87; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  __int16 v90; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v91[6]; // [rsp+4Ah] [rbp-BEh] BYREF
  __int64 v92; // [rsp+50h] [rbp-B8h]
  unsigned int v93; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v96; // [rsp+80h] [rbp-88h] BYREF
  ULONG_PTR v97; // [rsp+88h] [rbp-80h]
  __int64 v98; // [rsp+90h] [rbp-78h]
  __int16 v99[2]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v100[3]; // [rsp+9Ch] [rbp-6Ch] BYREF
  ULONG_PTR v101; // [rsp+A8h] [rbp-60h]
  __int64 v102; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v104; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING v105; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-30h]
  __int64 v107; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING SourceString; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v109; // [rsp+F8h] [rbp-10h] BYREF
  wchar_t *v110; // [rsp+100h] [rbp-8h]
  __int64 v111; // [rsp+108h] [rbp+0h]
  ULONG_PTR *v112; // [rsp+110h] [rbp+8h]
  __int64 v113; // [rsp+118h] [rbp+10h]
  PPRIVILEGE_SET v114[5]; // [rsp+120h] [rbp+18h] BYREF
  PSLIST_ENTRY v115[22]; // [rsp+148h] [rbp+40h] BYREF

  v9 = a5;
  v113 = a7;
  LOWORD(v12) = a3;
  v111 = a8;
  v112 = a9;
  v106 = a2;
  v98 = a1;
  *(_QWORD *)&DestinationString_8.Length = 0LL;
  DestinationString_8.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  v97 = a5;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  v90 = 1;
  BugCheckParameter2 = 0LL;
  v13 = 0;
  v107 = 0LL;
  v92 = 0LL;
  *(_QWORD *)&v100[1] = 0LL;
  v96 = 0;
  v102 = 0xFFFFFFFFLL;
  v93 = -1;
  v104 = 0xFFFFFFFFLL;
  v91[0] = 0;
  v103 = 0xFFFFFFFFLL;
  memset(v115, 0, 0xA8uLL);
  memset(v114, 0, 0x20uLL);
  WORD1(v114[0]) = -1;
  v15 = *(_WORD *)(a1 + 2);
  v16 = !a5 && !v15;
  _mm_lfence();
  if ( v15 >= 2 )
    v17 = *(_QWORD *)(*(_QWORD *)(v98 + 24) + 8LL * v15 - 16);
  else
    v17 = *(_QWORD *)(v98 + 8LL * v15 + 8);
  if ( !v16 || (*(_DWORD *)(v17 + 8) & 8) == 0 )
  {
LABEL_63:
    if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess(a6 + 168);
      *(_DWORD *)(a6 + 160) |= 1u;
    }
    v54 = v98;
    v55 = *(_WORD *)(v98 + 2);
    LOWORD(v101) = v55;
    if ( v55 < 0 )
      goto LABEL_144;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v54, v55);
      v57 = KcbAtLayerHeight;
      if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
        goto LABEL_144;
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      {
        if ( CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 288), v9) )
        {
          if ( !*(_DWORD *)(v57 + 280) )
          {
            v93 = -1;
            goto LABEL_151;
          }
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v57 + 32),
                                   (unsigned int *)(v57 + 280),
                                   &CmSymbolicLinkValueName.Length,
                                   0,
                                   0LL,
                                   &v93);
        }
        else
        {
          v58 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v57 + 32) + 8LL))(
                  *(_QWORD *)(v57 + 32),
                  *(unsigned int *)(v57 + 40),
                  &v102);
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v57 + 32),
                                   (unsigned int *)(v58 + 36),
                                   &CmSymbolicLinkValueName.Length,
                                   0,
                                   0LL,
                                   &v93);
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v57 + 32) + 16LL))(*(_QWORD *)(v57 + 32), &v102);
        }
        if ( NameInListWithStatus >= 0 )
        {
          v50 = *(_QWORD *)(v57 + 32);
          v92 = v50;
          goto LABEL_72;
        }
        if ( NameInListWithStatus != -1073741772 )
          goto LABEL_47;
        v9 = v97;
      }
LABEL_151:
      v55 = v101 - 1;
      LOWORD(v101) = v101 - 1;
      if ( (v101 & 0x8000u) != 0LL )
      {
        v50 = v92;
LABEL_72:
        if ( v93 == -1 )
          goto LABEL_145;
        v59 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v50 + 8))(v50, v93, &v104);
        v107 = v59;
        if ( (*(_BYTE *)(v59 + 16) & 2) == 0 && *(_DWORD *)(v59 + 12) == 6 )
        {
          if ( !CmpGetValueData(v92, v93, v59, &v96, (__int64)&v100[1], (__int64)v91, (__int64)&v103) )
          {
            v50 = v92;
            NameInListWithStatus = -1073741670;
            goto LABEL_48;
          }
          if ( v96 <= 0xFFFF && (v96 & 1) == 0 )
          {
            v12 = (__int16)v12;
            v14 = (unsigned int)(__int16)v12;
            SourceString.Buffer = *(wchar_t **)&v100[1];
            SourceString.Length = v96;
            SourceString.MaximumLength = v96;
            v60 = (unsigned __int16)v96;
            LODWORD(v101) = a4;
            if ( (__int16)v12 < (unsigned int)a4 )
            {
              v61 = v106;
              do
              {
                ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v61, (unsigned int)v14);
                v14 = (unsigned int)(v63 + 1);
                v60 += *ComponentNameAtIndex + 2;
              }
              while ( (unsigned int)v14 < v64 );
            }
            if ( v60 <= 0xFFFF )
            {
              DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v60, 0x36364D43u);
              Buffer = DestinationString_8.Buffer;
              if ( !DestinationString_8.Buffer )
              {
                NameInListWithStatus = -1073741670;
                goto LABEL_160;
              }
              DestinationString_8.Length = 0;
              DestinationString_8.MaximumLength = v60;
              RtlUnicodeStringCopy(&DestinationString_8, &SourceString);
              if ( v91[0] )
              {
                ExFreePoolWithTag(*(PVOID *)&v100[1], 0);
                v65 = v92;
              }
              else
              {
                v65 = v92;
                (*(void (__fastcall **)(__int64, __int64 *))(v92 + 16))(v92, &v103);
              }
              v66 = *(void (__fastcall **)(__int64, __int64 *))(v65 + 16);
              v67 = 0LL;
              *(_QWORD *)&v100[1] = 0LL;
              v66(v65, &v104);
              v107 = 0LL;
              CmpUnlockKcbStack(v98);
              Length = DestinationString_8.Length;
              v69 = DestinationString_8;
              LOBYTE(v90) = 0;
              if ( !v16 )
                goto LABEL_157;
              v70 = 0;
              v110 = DestinationString_8.Buffer;
              v105 = DestinationString_8;
              LOWORD(v109) = 0;
              WORD1(v109) = DestinationString_8.MaximumLength;
              if ( DestinationString_8.Length )
              {
                v71 = v105.Buffer;
                MaximumLength = v105.MaximumLength;
                v73 = v105.Length;
                while ( *v71 == 92 )
                {
                  ++v71;
                  v73 -= 2;
                  MaximumLength -= 2;
                  v105.Buffer = v71;
                  v70 += 2;
                  v105.Length = v73;
                  v105.MaximumLength = MaximumLength;
                  LOWORD(v109) = v70;
                  if ( !v73 )
                    goto LABEL_95;
                }
                if ( v73 )
                {
                  while ( *v71 != 92 )
                  {
                    ++v71;
                    v73 -= 2;
                    MaximumLength -= 2;
                    v105.Buffer = v71;
                    v70 += 2;
                    v105.Length = v73;
                    v105.MaximumLength = MaximumLength;
                    LOWORD(v109) = v70;
                    if ( !v73 )
                      goto LABEL_95;
                  }
                  do
                  {
                    if ( *v71 != 92 )
                      break;
                    ++v71;
                    MaximumLength -= 2;
                    v73 -= 2;
                  }
                  while ( v73 );
                  v105.Length = v73;
                  v105.Buffer = v71;
                  v105.MaximumLength = MaximumLength;
                }
              }
LABEL_95:
              if ( (unsigned int)CmpCompareUnicodeString(&v109, &CmRegistryRootName, 2LL)
                || (int)CmpComputeComponentHashes((__m128i *)&v105, v99, (__int64)v115) < 0
                || (v74 = v99[0], (int)CmpValidateComponents((unsigned int)v99[0], v115) < 0)
                || (int)CmpPerformCompleteKcbCacheLookup(
                          *((volatile signed __int64 **)CmpRegistryRootObject + 1),
                          0,
                          v74,
                          (__int64)v115,
                          0LL,
                          &BugCheckParameter2,
                          (char *)&v90 + 1,
                          v100) < 0 )
              {
LABEL_157:
                v67 = BugCheckParameter2;
              }
              else
              {
                if ( LOWORD(v100[0]) == (_WORD)v74 )
                {
                  v67 = BugCheckParameter2;
                  v97 = BugCheckParameter2;
                  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v114, BugCheckParameter2, v75, v76) >= 0 )
                  {
                    CmpLockKcbStackShared((__int64)v114);
                    v77 = CmpConstructAndCacheName(v67, 0LL);
                    CmpUnlockKcbStack((__int64)v114);
                    if ( v77 >= 0 )
                    {
                      if ( HIBYTE(v90) )
                      {
                        CmpUnlockHashEntryByKcb(v67);
                        HIBYTE(v90) = 0;
                      }
                      v78 = v98;
                      CmpLockKcbStackTopExclusiveRestShared(v98);
                      LOBYTE(v90) = 1;
                      if ( !CmpIsKeyStackDeleted(v78, 0LL) )
                      {
                        v79 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v17 + 32) + 8LL))(
                                *(_QWORD *)(v17 + 32),
                                *(unsigned int *)(v17 + 40),
                                &v102);
                        v80 = CmpFindNameInListWithStatus(
                                *(_QWORD *)(v17 + 32),
                                (unsigned int *)(v79 + 36),
                                &CmSymbolicLinkValueName.Length,
                                0,
                                0LL,
                                &v93);
                        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v17 + 32) + 16LL))(
                          *(_QWORD *)(v17 + 32),
                          &v102);
                        if ( v80 >= 0 )
                        {
                          v81 = v93;
                          v92 = *(_QWORD *)(v17 + 32);
                          v82 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v92 + 8))(v92, v93, &v104);
                          v107 = v82;
                          if ( *(_DWORD *)(v82 + 12) == 6
                            && CmpGetValueData(v92, v81, v82, &v96, (__int64)&v100[1], (__int64)v91, (__int64)&v103)
                            && v96 <= 0xFFFF
                            && (v96 & 1) == 0 )
                          {
                            SourceString.Length = v96;
                            SourceString.MaximumLength = v96;
                            SourceString.Buffer = *(wchar_t **)&v100[1];
                            if ( !(unsigned int)CmpCompareUnicodeString(&DestinationString_8, &SourceString, 0LL) )
                            {
                              CmpCleanUpKcbCachedSymlink(v17);
                              *(_QWORD *)(v17 + 104) = v67;
                              CmpReferenceKeyControlBlockUnsafe(v67);
                              *(_WORD *)(v17 + 8) |= 8u;
                              CmpUnlockKcbStack(v78);
                              LOBYTE(v90) = 0;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_112;
                }
                CmpDereferenceKeyControlBlock(BugCheckParameter2);
              }
              v97 = v67;
LABEL_112:
              v83 = v101;
              if ( (__int16)v12 < (unsigned int)v101 )
              {
                v84 = v106;
                while ( 1 )
                {
                  v85 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v84, v12);
                  DestinationString_8.Length = Length + 2;
                  DestinationString_8.Buffer[(unsigned __int64)Length >> 1] = 92;
                  RtlUnicodeStringCat(&DestinationString_8, v85);
                  if ( ++v12 >= v83 )
                    break;
                  Length = DestinationString_8.Length;
                }
                v69 = DestinationString_8;
                v13 = 0;
                v67 = v97;
              }
              v86 = (UNICODE_STRING *)v111;
              v87 = *(void **)(v111 + 8);
              if ( v87 )
              {
                ExFreePoolWithTag(v87, 0);
                v86->Buffer = 0LL;
              }
              if ( HIBYTE(v90) )
                CmpUnlockHashEntryByKcb(v67);
              BugCheckParameter2 = 0LL;
              *v112 = v67;
              *v86 = v69;
              RtlInitUnicodeString(&DestinationString_8, 0LL);
              v50 = v92;
              NameInListWithStatus = 0;
              goto LABEL_48;
            }
          }
        }
LABEL_144:
        v50 = v92;
LABEL_145:
        NameInListWithStatus = -1073741772;
LABEL_48:
        Buffer = DestinationString_8.Buffer;
        if ( DestinationString_8.Buffer )
        {
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
LABEL_160:
          v50 = v92;
        }
        if ( *(_QWORD *)&v100[1] )
        {
          if ( v91[0] )
            ExFreePoolWithTag(*(PVOID *)&v100[1], 0);
          else
            (*(void (__fastcall **)(__int64, __int64 *))(v50 + 16))(v50, &v103);
        }
        if ( v107 )
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v92 + 16))(v92, &v104, v14, v50);
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        if ( (_BYTE)v90 )
          CmpUnlockKcbStack(v98);
        goto LABEL_56;
      }
      v54 = v98;
    }
  }
  v18 = 0;
  BugCheckParameter2 = *(_QWORD *)(v17 + 104);
  v19 = *(_QWORD *)(BugCheckParameter2 + 296);
  if ( (v19 & 1) != 0 )
  {
    v18 = 1;
    v19 &= ~1uLL;
  }
  if ( !v19 || v18 )
  {
    v9 = v97;
    goto LABEL_63;
  }
  v20 = BugCheckParameter2;
  v97 = BugCheckParameter2;
  CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2);
  v21 = v98;
  for ( i = 0; i <= *(__int16 *)(v21 + 2); ++i )
  {
    v23 = CmpGetKcbAtLayerHeight(v21, i);
    CmpUnlockKcb(v23);
  }
  LOBYTE(v90) = 0;
  v101 = v20 + 48;
  ExAcquirePushLockSharedEx(v20 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v20 + 56));
  v24 = *(unsigned __int16 *)v19;
  v13 = 1;
  v25 = (__int16)v12;
  v26 = a4;
  v27 = (__int16)v12;
  if ( (__int16)v12 < (unsigned int)a4 )
  {
    do
    {
      if ( v27 >= 8 )
        v28 = (unsigned __int16 *)(*(_QWORD *)(v106 + 160) + 16 * (v27 - 8 + 6LL));
      else
        v28 = (unsigned __int16 *)(v106 + 16 * (v27 + 2LL));
      v24 += *v28 + 2;
      ++v27;
    }
    while ( v27 < a4 );
    v25 = (__int16)v12;
  }
  if ( v24 > 0xFFFF )
    goto LABEL_144;
  DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v24, 0x36364D43u);
  if ( DestinationString_8.Buffer )
  {
    DestinationString_8.MaximumLength = v24;
    DestinationString_8.Length = 0;
    RtlUnicodeStringCopy(&DestinationString_8, (PCUNICODE_STRING)v19);
    if ( v25 < a4 )
    {
      v29 = DestinationString_8.MaximumLength;
      v30 = DestinationString_8.Buffer;
      v31 = DestinationString_8.MaximumLength;
      v32 = DestinationString_8.Length;
      v33 = v106;
      do
      {
        if ( v25 >= 8 )
          v34 = *(_QWORD *)(v33 + 160) + 16 * (v25 - 8 + 6LL);
        else
          v34 = v33 + 16 * (v25 + 2LL);
        v35 = v32;
        v32 += 2;
        DestinationString_8.Length = v32;
        v30[v35 >> 1] = 92;
        if ( (v32 & 1) == 0 && (v31 & 1) == 0 && v32 <= v29 && v29 != 0xFFFF && (v30 || !v32 && !v29) )
        {
          v36 = *(_WORD *)v34;
          v37 = (unsigned __int64)v32 >> 1;
          v114[4] = (PPRIVILEGE_SET)v37;
          if ( (v36 & 1) == 0 )
          {
            v38 = *(_WORD *)(v34 + 2);
            if ( (v38 & 1) == 0 && v36 <= v38 && v38 != 0xFFFF )
            {
              v39 = *(_WORD **)(v34 + 8);
              if ( v39 || !v36 && !v38 )
              {
                v40 = 0;
                v41 = (unsigned __int64)v36 >> 1;
                v42 = ((unsigned __int64)v29 >> 1) - v37;
                if ( v42 )
                {
                  v43 = (char *)v30 + 2 * v37 - (_QWORD)v39;
                  do
                  {
                    if ( !v41 )
                      break;
                    --v41;
                    *(_WORD *)((char *)v39 + (_QWORD)v43) = *v39;
                    ++v40;
                    ++v39;
                    --v42;
                  }
                  while ( v42 );
                }
                v32 = 2 * (v37 + v40);
                DestinationString_8.Length = v32;
              }
            }
          }
        }
        ++v25;
      }
      while ( v25 < v26 );
    }
    v44 = (UNICODE_STRING *)v111;
    v45 = *(void **)(v111 + 8);
    if ( v45 )
      ExFreePoolWithTag(v45, 0);
    *v44 = DestinationString_8;
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    v46 = BugCheckParameter2;
    v47 = *(_DWORD *)(BugCheckParameter2 + 8) & 0x80000;
    if ( *(struct _KTHREAD **)(v97 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v97 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v97 + 56));
    ExReleasePushLockEx(v101, 0LL);
    v48 = BugCheckParameter2;
    if ( v47 && (*(_DWORD *)(v46 + 8) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(BugCheckParameter2);
    v13 = 0;
    BugCheckParameter2 = 0LL;
    *v112 = v48;
    NameInListWithStatus = 0;
LABEL_47:
    v50 = v92;
    goto LABEL_48;
  }
  NameInListWithStatus = -1073741670;
LABEL_56:
  if ( BugCheckParameter2 )
  {
    if ( v13 )
      CmpUnlockKcb(BugCheckParameter2);
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  }
  if ( v114[3] )
    CmSiFreeMemory(v114[3]);
  v52 = v115[20];
  if ( v115[20] )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[8].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v52);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v52);
    }
  }
  return (unsigned int)NameInListWithStatus;
}
