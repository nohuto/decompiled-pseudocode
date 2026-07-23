/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x1405D8CC0
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCopy @ 0x140017780 (RtlUnicodeStringCopy.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x14012B59C (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405AB470 (CmpUnlockHashEntryByKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405D0478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x1405D1670 (CmpFindNameInListWithStatus.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpComputeComponentHashes @ 0x140642910 (CmpComputeComponentHashes.c)
 *     CmpValidateComponents @ 0x140642C40 (CmpValidateComponents.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKeyStackDeleted @ 0x140645670 (CmpIsKeyStackDeleted.c)
 *     CmpGetComponentNameAtIndex @ 0x140645780 (CmpGetComponentNameAtIndex.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpCompareUnicodeString @ 0x1406B7838 (CmpCompareUnicodeString.c)
 *     CmpConstructAndCacheName @ 0x1406C9D48 (CmpConstructAndCacheName.c)
 */

__int64 __fastcall CmpGetSymbolicLinkTarget(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8)
{
  __int64 v8; // rdi
  __int16 v11; // ax
  bool v12; // dl
  __int64 v13; // r13
  unsigned __int64 v14; // rsi
  char v15; // al
  ULONG_PTR v16; // r14
  int NameInListWithStatus; // ebx
  __int64 v18; // rsi
  __int16 i; // bx
  ULONG_PTR v20; // rax
  ULONG_PTR v21; // r13
  unsigned int v22; // ebx
  unsigned int v23; // edi
  __int64 v24; // r12
  unsigned int v25; // ecx
  unsigned __int16 *v26; // rax
  wchar_t *v27; // r14
  unsigned __int16 v28; // si
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int16 v32; // r9
  unsigned __int64 v33; // r11
  unsigned __int16 v34; // ax
  _WORD *v35; // rdx
  __int16 v36; // cx
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r8
  char *v39; // rbx
  UNICODE_STRING *v40; // rbx
  void *v41; // rcx
  ULONG_PTR v42; // rsi
  int v43; // ebx
  ULONG_PTR v44; // rdi
  __int16 v45; // si
  __int64 KcbAtLayerHeight; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // r14d
  unsigned int v51; // r12d
  unsigned int v52; // r8d
  unsigned int v53; // ebx
  __int64 v54; // r14
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v56; // r8d
  wchar_t *Buffer; // rdi
  void (__fastcall *v58)(__int64, _QWORD *); // rax
  ULONG_PTR v59; // rsi
  wchar_t *v60; // r15
  unsigned __int16 Length; // di
  UNICODE_STRING v62; // xmm6
  __int16 v63; // r8
  wchar_t *v64; // rcx
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 v66; // ax
  __int16 v67; // bx
  int v68; // ebx
  __int64 v69; // rax
  int v70; // ebx
  unsigned int v71; // ebx
  __int64 v72; // rax
  char v73; // al
  __int64 v74; // rcx
  __int64 v75; // rsi
  const UNICODE_STRING *v76; // rax
  UNICODE_STRING *v77; // rbx
  void *v78; // rcx
  _SLIST_ENTRY *v79; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *L; // rcx
  int v83; // [rsp+48h] [rbp-C0h] BYREF
  bool v84; // [rsp+4Ch] [rbp-BCh]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v86; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+78h] [rbp-90h]
  unsigned int v89; // [rsp+80h] [rbp-88h] BYREF
  __int16 v90; // [rsp+84h] [rbp-84h] BYREF
  __int64 v91; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-78h] BYREF
  __int64 v93; // [rsp+98h] [rbp-70h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v95[2]; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v96; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v97; // [rsp+C8h] [rbp-40h]
  __int64 v98; // [rsp+D0h] [rbp-38h]
  __int64 v99; // [rsp+D8h] [rbp-30h]
  ULONG_PTR v100; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING SourceString; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v102; // [rsp+F8h] [rbp-10h]
  ULONG_PTR *v103; // [rsp+100h] [rbp-8h]
  _WORD v104[4]; // [rsp+108h] [rbp+0h] BYREF
  wchar_t *v105; // [rsp+110h] [rbp+8h]
  _QWORD v106[3]; // [rsp+118h] [rbp+10h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+130h] [rbp+28h]
  ULONG_PTR v108; // [rsp+138h] [rbp+30h]
  unsigned __int64 v109; // [rsp+140h] [rbp+38h]
  PSLIST_ENTRY v110[22]; // [rsp+148h] [rbp+40h] BYREF

  v8 = a1;
  v102 = a7;
  v98 = a2;
  v97 = a1;
  v103 = a8;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  v83 = 1;
  v93 = 0xFFFFFFFFLL;
  v95[0] = 0xFFFFFFFFLL;
  v94 = 0xFFFFFFFFLL;
  BugCheckParameter2 = 0LL;
  v99 = 0LL;
  v86 = -1;
  v88 = 0LL;
  P = 0LL;
  v89 = 0;
  memset(v110, 0, 0xA8uLL);
  v106[0] = 4294901760LL;
  v106[1] = 0LL;
  v106[2] = 0LL;
  Privileges = 0LL;
  v11 = *(_WORD *)(v8 + 2);
  v12 = !a5 && !v11;
  v84 = v12;
  _mm_lfence();
  if ( v11 < 2 )
    v13 = *(_QWORD *)(v8 + 8LL * v11 + 8);
  else
    v13 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL * v11 - 16);
  if ( !v12 || (*(_DWORD *)(v13 + 4) & 8) == 0 )
    goto LABEL_61;
  BugCheckParameter2 = *(_QWORD *)(v13 + 96);
  v14 = *(_QWORD *)(BugCheckParameter2 + 288);
  v15 = v14 & 1;
  if ( (v14 & 1) != 0 )
    v14 &= ~1uLL;
  if ( !v14 || v15 )
  {
LABEL_61:
    if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess(a6 + 168);
      *(_DWORD *)(a6 + 160) |= 1u;
    }
    v45 = *(_WORD *)(v8 + 2);
    if ( v45 < 0 )
      goto LABEL_145;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v8);
      v47 = KcbAtLayerHeight;
      if ( *(_WORD *)(KcbAtLayerHeight + 58) && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
        goto LABEL_145;
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      {
        if ( CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 280), a5) )
        {
          if ( !*(_DWORD *)(v47 + 272) )
          {
            v86 = -1;
            goto LABEL_74;
          }
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v47 + 24),
                                   (unsigned int *)(v47 + 272),
                                   (__int64)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&v86);
        }
        else
        {
          v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v47 + 24) + 8LL))(
                  *(_QWORD *)(v47 + 24),
                  *(unsigned int *)(v47 + 32),
                  &v93);
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v47 + 24),
                                   (unsigned int *)(v48 + 36),
                                   (__int64)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&v86);
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v47 + 24) + 16LL))(*(_QWORD *)(v47 + 24), &v93);
        }
        if ( NameInListWithStatus >= 0 )
        {
          v18 = *(_QWORD *)(v47 + 24);
          v88 = v18;
          goto LABEL_78;
        }
        if ( NameInListWithStatus != -1073741772 )
          goto LABEL_146;
      }
LABEL_74:
      if ( --v45 < 0 )
      {
        v18 = v88;
LABEL_78:
        if ( v86 == -1 )
          goto LABEL_145;
        v49 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(v18 + 8))(v18, v86, v95);
        v99 = v49;
        if ( (*(_BYTE *)(v49 + 16) & 2) != 0 )
        {
          NameInListWithStatus = -1073741772;
          goto LABEL_147;
        }
        if ( *(_DWORD *)(v49 + 12) != 6 )
        {
          NameInListWithStatus = -1073741772;
          goto LABEL_147;
        }
        if ( !CmpGetValueData(v18, v86, v49, &v89, (__int64)&P, (__int64)&v83 + 2, (__int64)&v94) )
        {
          NameInListWithStatus = -1073741670;
          goto LABEL_147;
        }
        if ( v89 > 0xFFFF )
        {
          NameInListWithStatus = -1073741772;
          goto LABEL_147;
        }
        if ( (v89 & 1) != 0 )
        {
          NameInListWithStatus = -1073741772;
          goto LABEL_147;
        }
        v50 = a3;
        v51 = a4;
        v52 = v50;
        SourceString.Buffer = (wchar_t *)P;
        SourceString.Length = v89;
        SourceString.MaximumLength = v89;
        v53 = (unsigned __int16)v89;
        LODWORD(v100) = v50;
        if ( v50 < a4 )
        {
          v54 = v98;
          do
          {
            ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v54, v52);
            v52 = v56 + 1;
            v53 += *ComponentNameAtIndex + 2;
          }
          while ( v52 < a4 );
          v50 = v100;
        }
        if ( v53 > 0xFFFF )
        {
          NameInListWithStatus = -1073741772;
          goto LABEL_147;
        }
        DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v53, 0x36364D43u);
        Buffer = DestinationString_8.Buffer;
        if ( !DestinationString_8.Buffer )
        {
          NameInListWithStatus = -1073741670;
          goto LABEL_149;
        }
        DestinationString_8.Length = 0;
        DestinationString_8.MaximumLength = v53;
        RtlUnicodeStringCopy(&DestinationString_8, &SourceString);
        if ( BYTE2(v83) )
          ExFreePoolWithTag(P, 0);
        else
          (*(void (__fastcall **)(__int64, __int64 *))(v18 + 16))(v18, &v94);
        v58 = *(void (__fastcall **)(__int64, _QWORD *))(v18 + 16);
        P = 0LL;
        v58(v18, v95);
        v59 = 0LL;
        v99 = 0LL;
        CmpUnlockKcbStack(v97);
        v60 = DestinationString_8.Buffer;
        Length = DestinationString_8.Length;
        v62 = DestinationString_8;
        LOBYTE(v83) = 0;
        if ( !v84 )
          goto LABEL_133;
        v96 = DestinationString_8;
        v63 = 0;
        v105 = DestinationString_8.Buffer;
        v104[0] = 0;
        v104[1] = DestinationString_8.MaximumLength;
        if ( DestinationString_8.Length )
        {
          v64 = v96.Buffer;
          MaximumLength = v96.MaximumLength;
          v66 = v96.Length;
          while ( *v64 == 92 )
          {
            ++v64;
            v66 -= 2;
            MaximumLength -= 2;
            v96.Buffer = v64;
            v63 += 2;
            v96.Length = v66;
            v96.MaximumLength = MaximumLength;
            v104[0] = v63;
            if ( !v66 )
              goto LABEL_113;
          }
          if ( v66 )
          {
            while ( *v64 != 92 )
            {
              ++v64;
              v66 -= 2;
              MaximumLength -= 2;
              v96.Buffer = v64;
              v63 += 2;
              v96.Length = v66;
              v96.MaximumLength = MaximumLength;
              v104[0] = v63;
              if ( !v66 )
                goto LABEL_113;
            }
            do
            {
              if ( *v64 != 92 )
                break;
              ++v64;
              MaximumLength -= 2;
              v66 -= 2;
            }
            while ( v66 );
            v96.Length = v66;
            v96.Buffer = v64;
            v96.MaximumLength = MaximumLength;
          }
        }
LABEL_113:
        if ( (unsigned int)CmpCompareUnicodeString(v104, &CmRegistryRootName, 2LL)
          || (int)CmpComputeComponentHashes(&v96, &v90, v110) < 0
          || (v67 = v90, (int)CmpValidateComponents((unsigned int)v90, v110) < 0)
          || (int)CmpPerformCompleteKcbCacheLookup(
                    *((_QWORD *)CmpRegistryRootObject + 1),
                    0LL,
                    (__int64)&BugCheckParameter2,
                    (__int64)&v83 + 1,
                    (__int64)&v91) < 0 )
        {
LABEL_133:
          v59 = BugCheckParameter2;
LABEL_134:
          BugCheckParameter2 = v59;
        }
        else
        {
          if ( (_WORD)v91 != v67 )
          {
            CmpDereferenceKeyControlBlock(BugCheckParameter2);
            goto LABEL_134;
          }
          v59 = BugCheckParameter2;
          if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v106, BugCheckParameter2) >= 0 )
          {
            CmpLockKcbStackShared(v106);
            v68 = CmpConstructAndCacheName(v59, 0LL);
            CmpUnlockKcbStack(v106);
            if ( v68 >= 0 )
            {
              if ( BYTE1(v83) )
              {
                CmpUnlockHashEntryByKcb(v59);
                BYTE1(v83) = 0;
              }
              CmpLockKcbStackTopExclusiveRestShared(v97);
              LOBYTE(v83) = 1;
              if ( !(unsigned __int8)CmpIsKeyStackDeleted(v97, 0LL) )
              {
                v69 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v13 + 24) + 8LL))(
                        *(_QWORD *)(v13 + 24),
                        *(unsigned int *)(v13 + 32),
                        &v93);
                v70 = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v13 + 24),
                        (unsigned int *)(v69 + 36),
                        (__int64)&CmSymbolicLinkValueName,
                        0,
                        0LL,
                        (__int64)&v86);
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v13 + 24) + 16LL))(*(_QWORD *)(v13 + 24), &v93);
                if ( v70 >= 0 )
                {
                  v71 = v86;
                  v88 = *(_QWORD *)(v13 + 24);
                  v72 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(v88 + 8))(v88, v86, v95);
                  v99 = v72;
                  if ( *(_DWORD *)(v72 + 12) == 6
                    && CmpGetValueData(v88, v71, v72, &v89, (__int64)&P, (__int64)&v83 + 2, (__int64)&v94)
                    && v89 <= 0xFFFF
                    && (v89 & 1) == 0 )
                  {
                    SourceString.Length = v89;
                    SourceString.MaximumLength = v89;
                    SourceString.Buffer = (wchar_t *)P;
                    if ( !(unsigned int)CmpCompareUnicodeString(&DestinationString_8, &SourceString, 0LL) )
                    {
                      CmpCleanUpKcbValueCache(v13);
                      *(_QWORD *)(v13 + 96) = v59;
                      v73 = CmpReferenceKeyControlBlockUnsafe(v59);
                      v74 = v97;
                      if ( !v73 )
                        v59 = 0LL;
                      *(_WORD *)(v13 + 4) |= 8u;
                      BugCheckParameter2 = v59;
                      CmpUnlockKcbStack(v74);
                      LOBYTE(v83) = 0;
                    }
                  }
                }
              }
            }
          }
        }
        if ( v50 < v51 )
        {
          v75 = v98;
          while ( 1 )
          {
            v76 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v75, v50);
            DestinationString_8.Length = Length + 2;
            v60[(unsigned __int64)Length >> 1] = 92;
            RtlUnicodeStringCat(&DestinationString_8, v76);
            if ( ++v50 >= v51 )
              break;
            v60 = DestinationString_8.Buffer;
            Length = DestinationString_8.Length;
          }
          v62 = DestinationString_8;
          v59 = BugCheckParameter2;
        }
        v77 = (UNICODE_STRING *)v102;
        v78 = *(void **)(v102 + 8);
        if ( v78 )
        {
          ExFreePoolWithTag(v78, 0);
          v77->Buffer = 0LL;
        }
        if ( BYTE1(v83) )
          CmpUnlockHashEntryByKcb(v59);
        BugCheckParameter2 = 0LL;
        *v103 = v59;
        *v77 = v62;
        RtlInitUnicodeString(&DestinationString_8, 0LL);
        NameInListWithStatus = 0;
        goto LABEL_146;
      }
      v8 = v97;
    }
  }
  v16 = BugCheckParameter2;
  v100 = BugCheckParameter2;
  if ( (unsigned __int8)CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2) )
  {
    for ( i = 0; i <= *(__int16 *)(v8 + 2); ++i )
    {
      v20 = CmpGetKcbAtLayerHeight(v8);
      CmpUnlockKcb(v20);
    }
    v21 = BugCheckParameter2 + 40;
    LOBYTE(v83) = 0;
    v108 = BugCheckParameter2 + 40;
    ExAcquirePushLockSharedEx(BugCheckParameter2 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 48));
    v22 = *(unsigned __int16 *)v14;
    v23 = a3;
    v24 = v98;
    v25 = v23;
    for ( HIBYTE(v83) = 1; v25 < a4; ++v25 )
    {
      if ( v25 >= 8 )
        v26 = (unsigned __int16 *)(*(_QWORD *)(v98 + 160) + 16 * (v25 - 8 + 6LL));
      else
        v26 = (unsigned __int16 *)(v98 + 16 * (v25 + 2LL));
      v22 += *v26 + 2;
    }
    if ( v22 <= 0xFFFF )
    {
      DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x36364D43u);
      if ( !DestinationString_8.Buffer )
      {
        NameInListWithStatus = -1073741670;
        goto LABEL_159;
      }
      DestinationString_8.MaximumLength = v22;
      DestinationString_8.Length = 0;
      RtlUnicodeStringCopy(&DestinationString_8, (PCUNICODE_STRING)v14);
      if ( v23 < a4 )
      {
        v27 = DestinationString_8.Buffer;
        v28 = DestinationString_8.MaximumLength;
        v29 = DestinationString_8.Length;
        do
        {
          if ( v23 >= 8 )
            v30 = *(_QWORD *)(v24 + 160) + 16 * (v23 - 8 + 6LL);
          else
            v30 = v24 + 16 * (v23 + 2LL);
          v31 = v29;
          v29 += 2;
          DestinationString_8.Length = v29;
          v27[v31 >> 1] = 92;
          if ( (v29 & 1) == 0
            && (DestinationString_8.MaximumLength & 1) == 0
            && v29 <= v28
            && v28 != 0xFFFF
            && (v27 || !v29 && !v28) )
          {
            v32 = *(_WORD *)v30;
            v33 = (unsigned __int64)v29 >> 1;
            v109 = v33;
            if ( (v32 & 1) == 0 )
            {
              v34 = *(_WORD *)(v30 + 2);
              if ( (v34 & 1) == 0 && v32 <= v34 && v34 != 0xFFFF )
              {
                v35 = *(_WORD **)(v30 + 8);
                if ( v35 || !v32 && !v34 )
                {
                  v36 = 0;
                  v37 = (unsigned __int64)v32 >> 1;
                  v38 = ((unsigned __int64)v28 >> 1) - v33;
                  if ( v38 )
                  {
                    v39 = (char *)v27 + 2 * v33 - (_QWORD)v35;
                    do
                    {
                      if ( !v37 )
                        break;
                      --v37;
                      *(_WORD *)((char *)v35 + (_QWORD)v39) = *v35;
                      ++v36;
                      ++v35;
                      --v38;
                    }
                    while ( v38 );
                  }
                  v29 = 2 * (v33 + v36);
                  DestinationString_8.Length = v29;
                }
              }
            }
          }
          ++v23;
        }
        while ( v23 < a4 );
        v16 = v100;
        v21 = v108;
      }
      v40 = (UNICODE_STRING *)v102;
      v41 = *(void **)(v102 + 8);
      if ( v41 )
      {
        ExFreePoolWithTag(v41, 0);
        v40->Buffer = 0LL;
      }
      *v40 = DestinationString_8;
      RtlInitUnicodeString(&DestinationString_8, 0LL);
      v42 = BugCheckParameter2;
      v43 = *(_DWORD *)(BugCheckParameter2 + 4) & 0x80000;
      if ( *(struct _KTHREAD **)(v16 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v16 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v16 + 48));
      ExReleasePushLockEx(v21, 0LL);
      v44 = BugCheckParameter2;
      if ( v43 && (*(_DWORD *)(v42 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(BugCheckParameter2);
      NameInListWithStatus = 0;
      HIBYTE(v83) = 0;
      BugCheckParameter2 = 0LL;
      *v103 = v44;
      goto LABEL_146;
    }
LABEL_145:
    NameInListWithStatus = -1073741772;
LABEL_146:
    v18 = v88;
    goto LABEL_147;
  }
  NameInListWithStatus = -1073741670;
  BugCheckParameter2 = 0LL;
  v18 = 0LL;
LABEL_147:
  Buffer = DestinationString_8.Buffer;
  if ( DestinationString_8.Buffer )
    ExFreePoolWithTag(DestinationString_8.Buffer, 0);
LABEL_149:
  if ( P )
  {
    if ( BYTE2(v83) )
      ExFreePoolWithTag(P, 0);
    else
      (*(void (__fastcall **)(__int64, __int64 *))(v18 + 16))(v18, &v94);
  }
  if ( v99 )
    (*(void (__fastcall **)(__int64, _QWORD *))(v18 + 16))(v18, v95);
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  if ( (_BYTE)v83 )
    CmpUnlockKcbStack(v97);
LABEL_159:
  if ( BugCheckParameter2 )
  {
    if ( HIBYTE(v83) )
      CmpUnlockKcb(BugCheckParameter2);
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  v79 = v110[20];
  if ( v110[20] )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[8].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) < L->Depth
      || (++L->FreeMisses,
          L = CurrentPrcb->PPLookasideList[8].L,
          ++L->TotalFrees,
          LOWORD(L->ListHead.Alignment) < L->Depth) )
    {
      RtlpInterlockedPushEntrySList(&L->ListHead, v79);
    }
    else
    {
      ++L->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))L->FreeEx)(v79);
    }
  }
  return (unsigned int)NameInListWithStatus;
}
