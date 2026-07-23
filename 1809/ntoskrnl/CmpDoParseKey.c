/*
 * XREFs of CmpDoParseKey @ 0x140642CC0
 * Callers:
 *     CmpParseKey @ 0x140642370 (CmpParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     CmpTransSilentIgnore @ 0x1400B9BC0 (CmpTransSilentIgnore.c)
 *     CmpGetCachedFullKCBName @ 0x14011AB38 (CmpGetCachedFullKCBName.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCheckExeOwnerForPca @ 0x14058193C (CmpCheckExeOwnerForPca.c)
 *     CmpCheckKeyOwnerForPca @ 0x140581A4C (CmpCheckKeyOwnerForPca.c)
 *     CmpIsKcbDiscarded @ 0x1405820B4 (CmpIsKcbDiscarded.c)
 *     CmRmIsKcbStackVisible @ 0x1405822B8 (CmRmIsKcbStackVisible.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140597B0C (CmpDoesProcessBelongToServiceSession.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1405A59A4 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1405A59D4 (HvLockHiveFlusherExclusive.c)
 *     HvResetDirtyData @ 0x1405A96E4 (HvResetDirtyData.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405AB470 (CmpUnlockHashEntryByKcb.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1405AD984 (CmpRebuildKcbCacheFromNode.c)
 *     HvUnlockHiveFlusherShared @ 0x1405B05D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1405B0600 (HvLockHiveFlusherShared.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405D0478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1405D268C (CmpLockHashEntrySharedByKcb.c)
 *     CmpUnlockHashEntry @ 0x1405D29F8 (CmpUnlockHashEntry.c)
 *     CmpDetachFromRegistryProcess @ 0x1405D2AE8 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructName @ 0x1405D9B94 (CmpConstructName.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpVEExecuteOpenLogic @ 0x14063D020 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x14063D100 (CmpDoWritethroughReparse.c)
 *     CmpRecordParseKcbCacheResult @ 0x140640A90 (CmpRecordParseKcbCacheResult.c)
 *     CmpCleanupPathInfo @ 0x140641F10 (CmpCleanupPathInfo.c)
 *     CmpVEExecuteParseLogic @ 0x140641F80 (CmpVEExecuteParseLogic.c)
 *     CmpOKToFollowLink @ 0x1406421F0 (CmpOKToFollowLink.c)
 *     CmpRecordParseCachedSymlinkKcb @ 0x1406428F0 (CmpRecordParseCachedSymlinkKcb.c)
 *     CmpComputeComponentHashes @ 0x140642910 (CmpComputeComponentHashes.c)
 *     CmpValidateComponents @ 0x140642C40 (CmpValidateComponents.c)
 *     CmpRecordParseStartingKcb @ 0x140642CA0 (CmpRecordParseStartingKcb.c)
 *     CmpCleanupKcbStack @ 0x140644FD0 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x140644FF0 (CmpStartKcbStack.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpPopulateKcbStack @ 0x1406450B0 (CmpPopulateKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockKcbShared @ 0x140645190 (CmpLockKcbShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKeyStackDeleted @ 0x140645670 (CmpIsKeyStackDeleted.c)
 *     CmpIsKeyStackSymlink @ 0x140645740 (CmpIsKeyStackSymlink.c)
 *     CmpGetComponentNameAtIndex @ 0x140645780 (CmpGetComponentNameAtIndex.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromHive @ 0x140694FBC (CmpTransSearchAddTransFromHive.c)
 *     CmpIsKeyDeleted @ 0x1406992E0 (CmpIsKeyDeleted.c)
 *     CmpRecordParseFailure @ 0x140699420 (CmpRecordParseFailure.c)
 *     CmpGetComponentHashAtIndex @ 0x14069AC80 (CmpGetComponentHashAtIndex.c)
 *     CmpRecordParseWalkResult @ 0x1406AAD04 (CmpRecordParseWalkResult.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B3054 (CmpVEExecuteCreateLogic.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406B6854 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406C485C (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406C5CEC (CmpTryToLockHashEntryExclusive.c)
 *     CmpWaitForHiveMount @ 0x140756794 (CmpWaitForHiveMount.c)
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
 *     CmpPublishEventForPcaResolver @ 0x1407ECFF0 (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTree @ 0x1407F24A0 (CmpSearchKeyControlBlockTree.c)
 *     CmpLogUnsupportedOperation @ 0x1407FB244 (CmpLogUnsupportedOperation.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1407FB53C (CmpReleaseKeyNodeForKcb.c)
 *     HvMarkCellDirty @ 0x1408021B4 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x1408067E0 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        unsigned __int8 a3,
        __int16 a4,
        PCUNICODE_STRING String2,
        __m128i *a6,
        __int64 a7,
        int a8,
        _QWORD *a9)
{
  bool v10; // si
  __m128i v11; // xmm0
  __int16 v12; // r13
  ULONG_PTR v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  char v17; // bl
  __int64 v18; // rcx
  __int64 v19; // rcx
  const UNICODE_STRING *CachedFullKCBName; // rax
  const UNICODE_STRING *v21; // r15
  wchar_t *Buffer; // r10
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // r9
  wchar_t *v25; // rdx
  __int16 v26; // cx
  __int16 v27; // ax
  int v28; // r14d
  __int64 v29; // rcx
  __int16 v30; // r8
  __int16 v31; // r9
  __int64 v32; // rax
  unsigned __int16 v33; // dx
  __int16 v34; // cx
  char v35; // r14
  char v36; // r12
  __m128i v37; // xmm0
  __int64 v38; // rcx
  ULONG_PTR v39; // r14
  __int16 v40; // dx
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // eax
  int v44; // r8d
  int v45; // eax
  __int64 ComponentNameAtIndex; // rax
  int *v47; // r14
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // r8d
  int *v51; // r12
  int *v52; // r15
  __m128i *v53; // r14
  int ComponentHashAtIndex; // ecx
  unsigned __int8 v55; // dl
  int v56; // eax
  ULONG_PTR v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  ULONG_PTR v60; // rcx
  int *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rbx
  __int64 v66; // rax
  bool v67; // zf
  bool v68; // r14
  int v69; // r8d
  __int16 v70; // r13
  unsigned int v71; // ebx
  unsigned __int16 *v72; // r13
  char v73; // bl
  int v74; // r8d
  __int64 v75; // rdx
  __int64 v76; // rcx
  ULONG_PTR v77; // rdx
  _DWORD *v78; // r12
  ULONG_PTR v79; // rcx
  ULONG_PTR v80; // rbx
  volatile signed __int32 *v81; // rcx
  unsigned __int8 v82; // dl
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 KeyNodeForKcb; // rax
  unsigned __int8 v86; // r13
  struct _ACCESS_STATE *v87; // r12
  unsigned __int16 *v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  const UNICODE_STRING *v91; // rax
  UNICODE_STRING *v92; // rsi
  unsigned __int16 *p_Length; // rbx
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v95; // r8
  int v96; // r8d
  ULONG_PTR v97; // r10
  struct _SECURITY_SUBJECT_CONTEXT *v98; // rsi
  int Logic; // eax
  _KPROCESS *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rbx
  int v105; // r8d
  PVOID v106; // rax
  ULONG_PTR v107; // rcx
  int v108; // eax
  void *v109; // rbx
  ULONG_PTR v111; // [rsp+38h] [rbp-C8h]
  __int64 v112; // [rsp+40h] [rbp-C0h]
  char v113; // [rsp+60h] [rbp-A0h]
  int started; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v115; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v117; // [rsp+78h] [rbp-88h]
  bool v118[3]; // [rsp+79h] [rbp-87h] BYREF
  __int16 v119[2]; // [rsp+7Ch] [rbp-84h] BYREF
  char v120; // [rsp+80h] [rbp-80h]
  char v121[7]; // [rsp+81h] [rbp-7Fh] BYREF
  __int64 v122; // [rsp+88h] [rbp-78h] BYREF
  bool v123; // [rsp+90h] [rbp-70h] BYREF
  __int16 v124; // [rsp+91h] [rbp-6Fh]
  char v125; // [rsp+93h] [rbp-6Dh]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-68h]
  _BYTE v127[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *v128; // [rsp+A8h] [rbp-58h]
  int *v129; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v130; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v131; // [rsp+C0h] [rbp-40h]
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v133; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v134; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR v135; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v136; // [rsp+F0h] [rbp-10h]
  __int64 v137; // [rsp+F8h] [rbp-8h]
  __int64 v138; // [rsp+100h] [rbp+0h] BYREF
  int *v139; // [rsp+108h] [rbp+8h]
  UNICODE_STRING DestinationString; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v141[4]; // [rsp+120h] [rbp+20h] BYREF
  int v142[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v143; // [rsp+148h] [rbp+48h]
  __int64 v144; // [rsp+150h] [rbp+50h]
  __int64 v145; // [rsp+158h] [rbp+58h]
  int v146[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v147; // [rsp+168h] [rbp+68h]
  __int64 v148; // [rsp+170h] [rbp+70h]
  __int64 v149; // [rsp+178h] [rbp+78h]
  _QWORD *v150; // [rsp+180h] [rbp+80h]
  _BYTE v151[176]; // [rsp+190h] [rbp+90h] BYREF

  v10 = 0;
  v150 = a9;
  v11 = *a6;
  v128 = a2;
  v117 = a3;
  v12 = 0;
  v131 = a1;
  v136 = (__int64)String2;
  v133 = v11;
  Object = 0LL;
  BugCheckParameter2 = 0LL;
  v135 = 0LL;
  v123 = 0;
  v139 = 0LL;
  v125 = 0;
  v118[0] = 0;
  v124 = 0;
  v120 = 0;
  v119[0] = 0;
  v130 = 0LL;
  v138 = 0xFFFFFFFFLL;
  LOWORD(v115) = 0;
  v121[0] = 0;
  v137 = 0LL;
  memset(v151, 0, 0xA8uLL);
  *(_QWORD *)(a7 + 160) = 0LL;
  *(_QWORD *)(a7 + 168) = 0LL;
  *(_QWORD *)(a7 + 176) = 0LL;
  *(_QWORD *)(a7 + 184) = 0LL;
  *(_QWORD *)(a7 + 192) = 0LL;
  *(_QWORD *)v142 = 4294901760LL;
  *(_QWORD *)v146 = 4294901760LL;
  v141[0] = 4294901760LL;
  *(_QWORD *)(a7 + 200) = 0LL;
  *(_QWORD *)(a7 + 208) = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  memset(&v141[1], 0, 24);
  memset((void *)(a7 + 216), 0, 0x50uLL);
  CmpRecordParseCachedSymlinkKcb(a7, *(_QWORD *)(a7 + 88));
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v13 = *(_QWORD *)(a7 + 88);
  v14 = *(_QWORD *)(a7 + 72);
  v15 = v131;
  BugCheckParameter4 = v13;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v14 )
  {
    v16 = *(_QWORD *)(v15 + 56);
    if ( v16 && v14 != v16 )
    {
      started = -1072103422;
      CmpRecordParseFailure(a7, 256LL);
      v17 = 0;
      goto LABEL_366;
    }
    v129 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(v15 + 56);
    v129 = *(int **)(v15 + 64);
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v15 + 50);
  v18 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( *(_QWORD *)(v15 + 8) != v18 && v13 )
  {
    CmpLockRegistry(v18);
    CmpDereferenceKeyControlBlock(v13);
    v13 = 0LL;
    BugCheckParameter4 = 0LL;
    CmpUnlockRegistry(v19);
  }
  v113 = 0;
  if ( !v13 )
    goto LABEL_45;
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v18);
  v113 = 1;
  CachedFullKCBName = (const UNICODE_STRING *)CmpGetCachedFullKCBName(v13, v127);
  v21 = CachedFullKCBName;
  if ( !CachedFullKCBName || v127[0] || !RtlPrefixUnicodeString(CachedFullKCBName, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    v13 = 0LL;
    BugCheckParameter4 = 0LL;
    CmpUnlockRegistry(v38);
    v113 = 0;
LABEL_45:
    v36 = 0;
    goto LABEL_46;
  }
  Buffer = String2->Buffer;
  Length = String2->Length;
  MaximumLength = String2->MaximumLength;
  v25 = &Buffer[(unsigned __int64)v21->Length >> 1];
  v133.m128i_i64[1] = (__int64)v25;
  v26 = Length - v21->Length;
  v133.m128i_i16[0] = v26;
  v27 = MaximumLength - v21->Length;
  for ( v133.m128i_i16[1] = v27; v26; v133.m128i_i16[1] = v27 )
  {
    if ( *v25 != 92 )
      break;
    ++v25;
    v26 -= 2;
    v27 -= 2;
    v133.m128i_i64[1] = (__int64)v25;
    v133.m128i_i16[0] = v26;
  }
  v28 = ((*(_DWORD *)(BugCheckParameter4 + 4) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) == 0 || v26 )
  {
    v13 = BugCheckParameter4;
  }
  else
  {
    v29 = (__int64)&Buffer[(unsigned __int64)v21->Length >> 1];
    v133.m128i_i64[1] = v29;
    v30 = Length - v21->Length;
    v133.m128i_i16[0] = v30;
    v31 = MaximumLength - v21->Length;
    v13 = BugCheckParameter4;
    v133.m128i_i16[1] = v31;
    v32 = *(_QWORD *)(BugCheckParameter4 + 72);
    v33 = *(_WORD *)(v32 + 24);
    if ( (*(_DWORD *)v32 & 1) != 0 )
    {
      v133.m128i_i64[1] = v29 - 2LL * v33;
      v133.m128i_i16[0] = v30 + 2 * *(_WORD *)(*(_QWORD *)(BugCheckParameter4 + 72) + 24LL);
      v34 = 2 * *(_WORD *)(*(_QWORD *)(BugCheckParameter4 + 72) + 24LL);
    }
    else
    {
      v133.m128i_i64[1] = v29 - 2 * ((unsigned __int64)v33 >> 1);
      v133.m128i_i16[0] = v30 + *(_WORD *)(*(_QWORD *)(BugCheckParameter4 + 72) + 24LL);
      v34 = *(_WORD *)(*(_QWORD *)(BugCheckParameter4 + 72) + 24LL);
    }
    v12 = 1;
    v133.m128i_i16[1] = v31 + v34;
    --v28;
  }
  started = CmpComputeComponentHashes(&v133, v119, (__int64)v151);
  if ( started < 0 )
  {
    CmpRecordParseFailure(a7, 512LL);
LABEL_365:
    v17 = v113;
    goto LABEL_366;
  }
  if ( (unsigned int)(v119[0] + v28) > 0x20 )
  {
    started = -1073741811;
    CmpRecordParseFailure(a7, 768LL);
    goto LABEL_365;
  }
  started = CmpValidateComponents(v119[0], (__int64)v151);
  if ( started < 0 )
  {
    CmpRecordParseFailure(a7, 1024LL);
    goto LABEL_365;
  }
  if ( v12 == v119[0] )
  {
    CmpLockHashEntrySharedByKcb(v13);
    v35 = 1;
    v120 = 1;
  }
  else
  {
    v35 = 0;
  }
  CmpLockKcbShared(v13);
  if ( (unsigned __int8)CmpIsKeyDeleted(v13, 0LL) || (*(_DWORD *)(v13 + 4) & 0x40000) != 0 )
  {
    CmpUnlockKcb(v13);
    if ( v35 )
      CmpUnlockHashEntryByKcb(v13);
    CmpDereferenceKeyControlBlock(v13);
    v37 = *a6;
    v13 = 0LL;
    BugCheckParameter4 = 0LL;
    v133 = v37;
    v12 = 0;
    CmpCleanupPathInfo((__int64)v151);
    memset(v151, 0, 0xA8uLL);
    v36 = 0;
    v120 = 0;
  }
  else
  {
    CmpUnlockKcb(v13);
    v36 = v120;
  }
LABEL_46:
  if ( v13 )
  {
    v39 = v13;
  }
  else
  {
    v39 = *(_QWORD *)(v131 + 8);
    started = CmpComputeComponentHashes(&v133, v119, (__int64)v151);
    if ( started < 0 )
    {
      CmpRecordParseFailure(a7, 1280LL);
      goto LABEL_365;
    }
    started = CmpValidateComponents(v119[0], (__int64)v151);
    if ( started < 0 )
    {
      CmpRecordParseFailure(a7, 1536LL);
      goto LABEL_365;
    }
  }
  CmpRecordParseStartingKcb(a7, v39);
  v40 = v119[0];
  v41 = v119[0] + ((*(_DWORD *)(v39 + 4) >> 21) & 0x3FF) - (unsigned int)(unsigned __int16)v12;
  if ( (unsigned int)v41 > 0x200 )
  {
    started = -1073741811;
    v42 = 1792LL;
LABEL_363:
    CmpRecordParseFailure(a7, v42);
LABEL_364:
    v13 = BugCheckParameter4;
    goto LABEL_365;
  }
  if ( !v113 )
  {
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v41);
    v40 = v119[0];
    v113 = 1;
  }
  v43 = *(_DWORD *)(v131 + 48);
  if ( (v43 & 9) != 0 )
  {
    v44 = -1073740763;
    v42 = 2048LL;
    if ( (v43 & 1) == 0 )
      v44 = -1073741444;
    started = v44;
    goto LABEL_363;
  }
  if ( v12 == v40 )
  {
    if ( !CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v39) )
    {
      started = -1073741670;
      v42 = 2304LL;
      goto LABEL_363;
    }
    v13 = BugCheckParameter4;
    BugCheckParameter2 = v39;
    if ( v39 == BugCheckParameter4 )
    {
      v120 = 0;
      LOBYTE(v115) = v36;
    }
    else
    {
      CmpLockHashEntrySharedByKcb(v39);
      LOBYTE(v115) = 1;
    }
  }
  else
  {
    v45 = CmpPerformCompleteKcbCacheLookup(
            (volatile signed __int32 *)v39,
            (unsigned __int16)v12,
            v40,
            (__int64)v151,
            (_DWORD *)a7,
            (volatile signed __int32 **)&BugCheckParameter2,
            (char *)&v115,
            &v134);
    started = v45;
    if ( v45 < 0 || v45 == 259 )
    {
      v42 = 2432LL;
      goto LABEL_363;
    }
    v12 += v134;
    CmpRecordParseKcbCacheResult(a7, BugCheckParameter2, v134);
    v13 = BugCheckParameter4;
  }
  if ( v12 == v119[0] && (*(_DWORD *)a7 & 1) == 0 )
  {
    CmpUnlockHashEntryByKcb(BugCheckParameter2);
    LOBYTE(v115) = 0;
  }
  CmpLockKcbShared(BugCheckParameter2);
  if ( v12 >= v119[0] )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  else
  {
    ComponentNameAtIndex = CmpGetComponentNameAtIndex(v151, (unsigned int)v12);
    DestinationString.Buffer = *(wchar_t **)(ComponentNameAtIndex + 8);
    DestinationString.Length = v133.m128i_i16[0]
                             - 2 * ((*(_QWORD *)(ComponentNameAtIndex + 8) - v133.m128i_i64[1]) >> 1);
    DestinationString.MaximumLength = DestinationString.Length;
  }
  started = CmpVEExecuteParseLogic(BugCheckParameter2, (__int64)&DestinationString, (_DWORD *)a7, v136, v117, v128 + 1);
  CmpUnlockKcb(BugCheckParameter2);
  if ( started != -1073741199 )
  {
    CmpRecordParseFailure(a7, 2496LL);
    goto LABEL_365;
  }
  if ( !CmpOKToFollowLink(*(_QWORD **)(a7 + 64), *(_QWORD *)(BugCheckParameter2 + 24)) )
  {
    started = -1073741790;
    CmpRecordParseFailure(a7, 2560LL);
    goto LABEL_365;
  }
  if ( v14 || v129 )
  {
    if ( *(PVOID *)(BugCheckParameter2 + 24) == CmpMasterHive )
    {
      LOBYTE(v124) = 1;
      v14 = 0LL;
      v47 = 0LL;
    }
    else if ( (v14 || v129) && *(_WORD *)(BugCheckParameter2 + 58) )
    {
      CmpLogUnsupportedOperation(8LL);
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        started = -1072103419;
        CmpRecordParseFailure(a7, 2816LL);
        goto LABEL_365;
      }
      v14 = 0LL;
      v47 = 0LL;
    }
    else
    {
      v47 = v129;
    }
  }
  else
  {
    v47 = 0LL;
  }
  if ( CmpTransSilentIgnore() || !v14 && !v47 )
  {
    CmpTransSilentIgnore();
    v122 = 0LL;
LABEL_104:
    started = CmpStartKcbStack(v142, *(unsigned __int16 *)(BugCheckParameter2 + 58));
    if ( started < 0 )
    {
      CmpRecordParseFailure(a7, 3328LL);
      goto LABEL_365;
    }
    started = CmpStartKcbStack(v146, *(unsigned __int16 *)(BugCheckParameter2 + 58));
    if ( started < 0 )
    {
      CmpRecordParseFailure(a7, 3584LL);
      goto LABEL_365;
    }
    v51 = v146;
    v129 = v146;
    v52 = v142;
    CmpPopulateKcbStack(v142, BugCheckParameter2);
    if ( v12 < v119[0] )
    {
      while ( 1 )
      {
        CmpLockKcbStackShared(v52);
        if ( CmpIsKcbDiscarded(BugCheckParameter2) )
        {
          started = -1073741772;
          CmpRecordParseFailure(a7, 3968LL);
          goto LABEL_355;
        }
        if ( (unsigned __int8)CmpIsKeyStackDeleted(v52, v122) )
        {
          if ( CmpLoadingSystemHivesActive
            && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
            && *(PVOID *)(BugCheckParameter2 + 24) == CmpMasterHive
            && (*(_DWORD *)(BugCheckParameter2 + 4) & 0x7FE00000) == 0x600000
            && v12 > 0
            && (v63 = CmpGetComponentNameAtIndex(v151, (unsigned int)(v12 - 1)),
                (unsigned __int8)CmpWaitForHiveMount(v63, 2LL, 0LL, a7 + 136)) )
          {
            *(_DWORD *)a7 |= 0x100u;
            started = 259;
            CmpRecordParseFailure(a7, 3840LL);
          }
          else
          {
            started = -1073741772;
            CmpRecordParseFailure(a7, 4096LL);
          }
          goto LABEL_355;
        }
        if ( (unsigned __int8)CmpIsKeyStackSymlink(v52) )
          break;
        CmpUnlockKcbStack(v52);
        v53 = (__m128i *)CmpGetComponentNameAtIndex(v151, (unsigned int)v12);
        ComponentHashAtIndex = CmpGetComponentHashAtIndex(v151, (unsigned int)v12);
        v55 = (*(_DWORD *)a7 & 1) != 0 && v12 == v119[0] - 1;
        LODWORD(v111) = ComponentHashAtIndex + 37 * *(_DWORD *)(BugCheckParameter2 + 8);
        v56 = CmpWalkOneLevel(
                BugCheckParameter2,
                (__int64)v52,
                &v135,
                (__int64)v51,
                &v123,
                v53,
                ComponentHashAtIndex,
                v111,
                v122,
                v55,
                a7);
        started = v56;
        if ( v56 == -1073741772 )
        {
          if ( !CmpLoadingSystemHivesActive
            || (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread()
            || (v57 = BugCheckParameter2, *(PVOID *)(BugCheckParameter2 + 24) != CmpMasterHive) )
          {
LABEL_132:
            v42 = 5504LL;
            goto LABEL_363;
          }
          if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x7FE00000) == 0x600000 && v12 > 0 )
          {
            v58 = CmpGetComponentNameAtIndex(v151, (unsigned int)(v12 - 1));
            if ( (unsigned __int8)CmpWaitForHiveMount(v58, 2LL, 0LL, a7 + 136) )
            {
              *(_DWORD *)a7 |= 0x100u;
              v42 = 5120LL;
              started = 259;
              goto LABEL_363;
            }
            v57 = BugCheckParameter2;
          }
          if ( (*(_DWORD *)(v57 + 4) & 0x7FE00000) == 0x400000 )
          {
            v59 = CmpGetComponentNameAtIndex(v151, (unsigned int)v12);
            if ( (unsigned __int8)CmpWaitForHiveMount(v59, 2LL, 0LL, a7 + 136) )
            {
              *(_DWORD *)a7 |= 0x100u;
              v42 = 5376LL;
              started = 259;
              goto LABEL_363;
            }
          }
          v56 = started;
        }
        if ( v56 < 0 )
          goto LABEL_132;
        CmpRecordParseWalkResult(a7, v135);
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
        v60 = v135;
        ++v12;
        LOBYTE(v115) = v123;
        v61 = v52;
        v52 = v51;
        v51 = v61;
        v129 = v61;
        BugCheckParameter2 = v135;
        v135 = 0LL;
        v123 = 0;
        if ( v12 >= v119[0] )
          goto LABEL_149;
      }
      started = CmpGetSymbolicLinkTarget(
                  (__int64)v52,
                  (__int64)v151,
                  v12,
                  v119[0],
                  v122,
                  a7,
                  v136,
                  (ULONG_PTR *)(a7 + 88));
      if ( started >= 0 )
      {
        *(_DWORD *)a7 &= ~8u;
        if ( !*(_QWORD *)(a7 + 64) )
        {
          v62 = *(_QWORD *)(BugCheckParameter2 + 24);
          if ( (*(_DWORD *)(v62 + 4152) & 1) != 0 )
            *(_QWORD *)(a7 + 64) = v62;
        }
        started = 260;
        v42 = 4864LL;
      }
      else
      {
        v42 = 4608LL;
      }
      goto LABEL_363;
    }
    v60 = BugCheckParameter2;
LABEL_149:
    v64 = *(_QWORD *)(v60 + 64);
    v139 = v51;
    if ( v64 )
    {
      CmpPopulateKcbStack(v129, v64);
      v60 = BugCheckParameter2;
    }
    else
    {
      v51 = 0LL;
      v139 = 0LL;
    }
    v65 = v131;
    v66 = *(_QWORD *)(v131 + 8);
    if ( *(_QWORD *)(v60 + 64) != v66 && v60 != v66 )
    {
      CmpLockKcbShared(*(_QWORD *)(v131 + 8));
      BYTE1(v115) = 1;
    }
    v67 = v51 == 0LL;
    if ( v51 )
    {
      CmpLockKcbStackShared(v51);
      v67 = v51 == 0LL;
    }
    v68 = !v67;
    v10 = !v67;
    CmpLockKcbStackShared(v52);
    if ( CmpIsKeyDeletedForKeyBody(v65, 0LL) )
    {
      v69 = -1073740763;
      if ( (*(_BYTE *)(v65 + 48) & 1) == 0 )
        v69 = -1073741444;
      started = v69;
      CmpRecordParseFailure(a7, 5888LL);
      goto LABEL_355;
    }
    if ( CmpIsKcbDiscarded(BugCheckParameter2) )
    {
      started = -1073741772;
      CmpRecordParseFailure(a7, 6016LL);
      v10 = v68;
      goto LABEL_355;
    }
    v70 = v12 - 1;
    if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 0x20000) != 0 )
    {
      started = -1073741772;
      CmpRecordParseFailure(a7, 6144LL);
      v10 = v68;
      goto LABEL_355;
    }
    if ( !CmRmIsKcbStackVisible((__int64)v52) )
    {
      started = -1073741772;
      CmpRecordParseFailure(a7, 6400LL);
      v10 = v68;
      goto LABEL_355;
    }
    if ( (*(_DWORD *)a7 & 2) != 0 )
    {
      CmpUnlockKcbStack(v52);
      CmpUnlockKcbStack(v51);
      if ( BYTE1(v115) )
        CmpUnlockKcb(*(_QWORD *)(v65 + 8));
      HIBYTE(v124) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
      if ( BYTE1(v115) )
        CmpLockKcbShared(*(_QWORD *)(v65 + 8));
      CmpLockKcbStackTopExclusiveRestShared((__int64)v51);
      CmpLockKcbStackTopExclusiveRestShared((__int64)v52);
      v71 = v70;
      v72 = (unsigned __int16 *)CmpGetComponentNameAtIndex(v151, (unsigned int)v70);
      v73 = CmpGetComponentHashAtIndex(v151, v71);
      if ( CmpIsKeyDeletedForKeyBody(v131, 0LL) )
      {
        v74 = -1073740763;
        if ( (*(_BYTE *)(v131 + 48) & 1) == 0 )
          v74 = -1073741444;
        started = v74;
        CmpRecordParseFailure(a7, 6656LL);
        v10 = v68;
        goto LABEL_355;
      }
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v51, v122) )
      {
        started = -1073741772;
        CmpRecordParseFailure(a7, 6912LL);
        v10 = v68;
        goto LABEL_355;
      }
      if ( !(unsigned __int8)CmpIsKeyStackDeleted(v52, v122) )
      {
        v75 = 7168LL;
LABEL_180:
        started = -1073741790;
        CmpRecordParseFailure(a7, v75);
        v10 = v68;
        goto LABEL_355;
      }
      v76 = *(_QWORD *)(BugCheckParameter2 + 64);
      if ( *(PVOID *)(v76 + 24) != CmpMasterHive )
      {
        v75 = 7424LL;
        goto LABEL_180;
      }
      if ( (*(_DWORD *)(v76 + 176) & 0x20000) != 0 )
      {
        started = -1073741772;
        CmpRecordParseFailure(a7, 7680LL);
        v10 = v68;
        goto LABEL_355;
      }
      if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
      {
        CmpAttachToRegistryProcess(a7 + 168);
        *(_DWORD *)(a7 + 160) |= 1u;
      }
      v77 = *(unsigned int *)(a7 + 40);
      v78 = (_DWORD *)(a7 + 40);
      v79 = *(_QWORD *)(a7 + 48);
      if ( (_DWORD)v77 == -1 )
      {
        started = CmpCreateHiveRootCell(v79, a7 + 40);
        if ( started < 0 )
        {
          CmpRecordParseFailure(a7, 7808LL);
          v10 = v68;
          goto LABEL_355;
        }
      }
      else
      {
        started = CmpUpdateHiveRootCellFlags(v79, v77);
        if ( started < 0 )
        {
          CmpRecordParseFailure(a7, 7936LL);
          v10 = v68;
          goto LABEL_355;
        }
      }
      *(_WORD *)(BugCheckParameter2 + 178) |= 2u;
      started = CmpCreateKeyControlBlock(
                  *(_QWORD *)(a7 + 48),
                  -1,
                  BugCheckParameter2,
                  *(_QWORD *)(a7 + 80),
                  1,
                  v72,
                  v73,
                  0,
                  &v130);
      *(_WORD *)(BugCheckParameter2 + 178) &= ~2u;
      if ( started < 0 )
      {
        CmpRecordParseFailure(a7, 0x2000LL);
        v10 = v68;
        goto LABEL_355;
      }
      v80 = BugCheckParameter2;
      v81 = (volatile signed __int32 *)BugCheckParameter2;
      BugCheckParameter2 = v130;
      CmpDereferenceKeyControlBlockUnsafe(v81);
      CmpUnlockHashEntryByKcb(v80);
      LOBYTE(v115) = 0;
      started = CmpStartKcbStackForTopLayerKcb((__int64)v141, v130);
      if ( started < 0 )
      {
        CmpRecordParseFailure(a7, 8448LL);
        v10 = v68;
        goto LABEL_355;
      }
      *(_WORD *)(v80 + 178) |= 2u;
      CmpLockKcbStackTopExclusiveRestShared((__int64)v141);
      v82 = v117;
      *(_WORD *)(v80 + 178) &= ~2u;
      v125 = 1;
      started = CmpCreateKeyBody(
                  (signed __int32 *)BugCheckParameter2,
                  v82,
                  a7,
                  v122,
                  1,
                  (__int64)v141,
                  (__int64 **)&Object,
                  v118);
      if ( started < 0 )
      {
        CmpRecordParseFailure(a7, 8576LL);
        v10 = v68;
        goto LABEL_354;
      }
      HvLockHiveFlusherShared(*(_QWORD *)(v80 + 24));
      HvLockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter2 + 24));
      v83 = (unsigned int)*v78;
      v84 = *(_QWORD *)(v130 + 24);
      LODWORD(v129) = *(_DWORD *)(v84 + 104);
      if ( !(unsigned __int8)HvMarkCellDirty(v84, v83, 0LL) )
      {
        started = -1073741443;
        CmpRecordParseFailure(a7, 8704LL);
LABEL_200:
        HvUnlockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter2 + 24));
        HvUnlockHiveFlusherShared(*(_QWORD *)(v80 + 24));
        goto LABEL_354;
      }
      started = CmpCreateChild((__int64)v139, (__int64)v52, (__int64)v128, v72, a7, 10, 0, 1, v122);
      if ( started < 0 )
        goto LABEL_200;
      *(_DWORD *)(v130 + 32) = *v78;
      KeyNodeForKcb = CmpGetKeyNodeForKcb(v130, (__int64)&v138, 1);
      *(_DWORD *)(KeyNodeForKcb + 16) = *(_DWORD *)(v80 + 32);
      ++*(_QWORD *)(v130 + 296);
      CmpRebuildKcbCacheFromNode(v130, KeyNodeForKcb);
      CmpReleaseKeyNodeForKcb(v130, &v138);
      if ( !(_DWORD)v129 )
        HvResetDirtyData(*(_QWORD *)(v130 + 24));
      HvUnlockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter2 + 24));
      HvUnlockHiveFlusherShared(*(_QWORD *)(v80 + 24));
      *(_WORD *)(v80 + 4) |= 8u;
      CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
      *(_QWORD *)(v80 + 96) = BugCheckParameter2;
      CmpUnlockHashEntry(*(_QWORD **)(a7 + 48), 0);
      v86 = v117;
      v10 = v68;
      v87 = (struct _ACCESS_STATE *)v128;
      *(_DWORD *)(a7 + 32) = 1;
LABEL_217:
      if ( *(_DWORD *)(a7 + 32) == 1 )
      {
        *((_WORD *)Object + 2) = *(_WORD *)(*((_QWORD *)Object + 1) + 58LL);
      }
      else if ( !(unsigned __int8)CmpCheckOpenAccessOnKeyBody(
                                    Object,
                                    (__int64)v52,
                                    a7,
                                    v87,
                                    v86,
                                    (*(_DWORD *)(a7 + 24) & 4) != 0,
                                    v122,
                                    v121,
                                    &started) )
      {
        if ( v121[0] )
        {
          if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess(a7 + 168);
            *(_DWORD *)(a7 + 160) |= 1u;
          }
          v137 = CmpConstructName(BugCheckParameter2);
        }
        CmpRecordParseFailure(a7, 15584LL);
        goto LABEL_353;
      }
      v106 = Object;
      Object = 0LL;
      *v150 = v106;
      if ( !*(_DWORD *)(a7 + 32) )
        *(_DWORD *)(a7 + 32) = 2;
      started = v118[0] ? 0x40000016 : 0;
LABEL_353:
      HIBYTE(v124) = 0;
      if ( !v125 )
        goto LABEL_355;
LABEL_354:
      CmpUnlockKcbStack(v141);
      goto LABEL_355;
    }
    if ( (*(_DWORD *)a7 & 0x20) != 0 )
    {
      CmpUnlockKcbStack(v52);
      CmpUnlockKcbStack(v51);
      CmpLockKcbStackTopExclusiveRestShared((__int64)v51);
      CmpLockKcbStackTopExclusiveRestShared((__int64)v52);
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v51, v122) )
      {
        started = -1073741772;
        CmpRecordParseFailure(a7, 8960LL);
        v10 = v68;
        goto LABEL_355;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 176LL) & 0x20000) != 0 )
      {
        started = -1073741772;
        CmpRecordParseFailure(a7, 9216LL);
        v10 = v68;
        goto LABEL_355;
      }
      v88 = (unsigned __int16 *)CmpGetComponentNameAtIndex(v151, (unsigned int)v70);
      v86 = v117;
      if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                               (_DWORD)v88,
                               (_DWORD)v51,
                               (_DWORD)v128,
                               v117,
                               16 * (*(_DWORD *)(a7 + 24) & 2u),
                               (*(_DWORD *)(a7 + 24) & 4) != 0,
                               v122,
                               (__int64)&started) )
      {
        CmpRecordParseFailure(a7, 9472LL);
        v10 = v68;
        goto LABEL_355;
      }
      CmpCleanUpKcbValueCache(BugCheckParameter2);
      *(_WORD *)(BugCheckParameter2 + 178) |= 0x40u;
      *(_DWORD *)(BugCheckParameter2 + 88) = *(_DWORD *)(a7 + 56);
      started = CmpCreateKeyBody(
                  (signed __int32 *)BugCheckParameter2,
                  v86,
                  a7,
                  v122,
                  1,
                  (__int64)v52,
                  (__int64 **)&Object,
                  v118);
      v10 = v68;
      if ( started < 0 )
        goto LABEL_355;
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v52, v122) )
      {
        started = CmpCreateChild((__int64)v51, (__int64)v52, (__int64)v128, v88, a7, 64, 0, 0, v122);
        if ( started < 0 )
          goto LABEL_355;
        *(_DWORD *)(a7 + 32) = 1;
      }
      v87 = (struct _ACCESS_STATE *)v128;
      v10 = v68;
      goto LABEL_217;
    }
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(v52, v122) )
    {
      if ( (unsigned __int8)CmpIsKeyStackSymlink(v52) && (*(_DWORD *)a7 & 0x200) == 0 )
      {
        if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
        {
          if ( v51 )
            CmpUnlockKcbStack(v51);
          v10 = 0;
          if ( !v51 )
            v10 = v68;
          if ( BYTE1(v115) )
          {
            CmpUnlockKcb(*(_QWORD *)(v65 + 8));
            BYTE1(v115) = 0;
          }
          if ( (_BYTE)v115 )
          {
            CmpUnlockHashEntryByKcb(BugCheckParameter2);
            LOBYTE(v115) = 0;
          }
          started = CmpGetSymbolicLinkTarget((__int64)v52, (__int64)v151, 0, 0, v122, a7, v136, (ULONG_PTR *)(a7 + 88));
          if ( started >= 0 )
          {
            *(_DWORD *)a7 &= ~8u;
            if ( !*(_QWORD *)(a7 + 64) )
            {
              v103 = *(_QWORD *)(BugCheckParameter2 + 24);
              if ( (*(_DWORD *)(v103 + 4152) & 1) != 0 )
                *(_QWORD *)(a7 + 64) = v103;
            }
            started = 260;
            CmpRecordParseFailure(a7, 14592LL);
          }
          else
          {
            CmpRecordParseFailure(a7, 14336LL);
          }
          goto LABEL_356;
        }
        started = -1073741771;
        CmpRecordParseFailure(a7, 14080LL);
        v10 = v68;
LABEL_355:
        CmpUnlockKcbStack(v52);
        v51 = v139;
LABEL_356:
        if ( v10 )
          CmpUnlockKcbStack(v51);
        goto LABEL_358;
      }
      if ( (_BYTE)v124 )
      {
        started = -1073741811;
        CmpRecordParseFailure(a7, 14848LL);
        v10 = v68;
        goto LABEL_355;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 0x20000) != 0 )
      {
        started = -1073741772;
        CmpRecordParseFailure(a7, 15104LL);
        v10 = v68;
        goto LABEL_355;
      }
      if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
      {
        started = -1073741771;
        CmpRecordParseFailure(a7, 15360LL);
        v10 = v68;
        goto LABEL_355;
      }
      v104 = v136;
      started = CmpDoWritethroughReparse(
                  BugCheckParameter2,
                  (__int64)v52,
                  (__int64)v51,
                  0,
                  0LL,
                  a7,
                  (UNICODE_STRING *)v136);
      if ( started != -1073741199 )
      {
        CmpRecordParseFailure(a7, 15424LL);
        v10 = v68;
        goto LABEL_355;
      }
      v87 = (struct _ACCESS_STATE *)v128;
      v86 = v117;
      started = CmpVEExecuteOpenLogic(BugCheckParameter2, (_DWORD *)a7, 0, v104, v117, (__int64)&v128[1]);
      if ( started != -1073741199 )
      {
        CmpRecordParseFailure(a7, 15488LL);
        v10 = v68;
        goto LABEL_355;
      }
      started = CmpCreateKeyBody(
                  (signed __int32 *)BugCheckParameter2,
                  v86,
                  a7,
                  v122,
                  0,
                  (__int64)v52,
                  (__int64 **)&Object,
                  v118);
      v105 = started;
      v10 = v68;
      if ( started < 0 )
      {
        if ( started == -1073741444 )
          v105 = -1073741772;
        started = v105;
        CmpRecordParseFailure(a7, 15552LL);
        goto LABEL_355;
      }
      goto LABEL_217;
    }
    if ( (_BYTE)v124 )
    {
      started = -1073741811;
      CmpRecordParseFailure(a7, 9728LL);
      v10 = v68;
      goto LABEL_355;
    }
    if ( (unsigned __int8)CmpIsKeyStackDeleted(v51, v122) || !CmRmIsKcbStackVisible((__int64)v51) )
    {
      started = -1073741772;
      CmpRecordParseFailure(a7, 9984LL);
      v10 = v68;
      goto LABEL_355;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 176LL) & 0x20000) != 0 )
    {
      started = -1073741772;
      CmpRecordParseFailure(a7, 10240LL);
      v10 = v68;
      goto LABEL_355;
    }
    if ( (*(_DWORD *)a7 & 1) == 0 )
    {
      if ( CmpLoadingSystemHivesActive
        && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
        && *(PVOID *)(BugCheckParameter2 + 24) == CmpMasterHive
        && (*(_DWORD *)(BugCheckParameter2 + 4) & 0x7FE00000) == 0x600000
        && (v89 = CmpGetComponentNameAtIndex(v151, (unsigned int)v70),
            (unsigned __int8)CmpWaitForHiveMount(v89, 2LL, 0LL, a7 + 136)) )
      {
        *(_DWORD *)a7 |= 0x100u;
        started = 259;
        CmpRecordParseFailure(a7, 10496LL);
        v10 = v68;
      }
      else
      {
        started = -1073741772;
        CmpRecordParseFailure(a7, 10752LL);
        v10 = v68;
      }
      goto LABEL_355;
    }
    if ( *(PVOID *)(BugCheckParameter2 + 24) == CmpMasterHive
      && CmpNoMasterCreates
      && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
    {
      if ( CmpLoadingSystemHivesActive
        && (*(_DWORD *)(BugCheckParameter2 + 4) & 0x7FE00000) == 0x600000
        && (v90 = CmpGetComponentNameAtIndex(v151, (unsigned int)v70),
            (unsigned __int8)CmpWaitForHiveMount(v90, 2LL, 0LL, a7 + 136)) )
      {
        *(_DWORD *)a7 |= 0x100u;
        started = 259;
        CmpRecordParseFailure(a7, 11008LL);
        v10 = v68;
      }
      else
      {
        started = -1073741811;
        CmpRecordParseFailure(a7, 11264LL);
        v10 = v68;
      }
      goto LABEL_355;
    }
    v91 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v151, (unsigned int)v70);
    v92 = (UNICODE_STRING *)v136;
    p_Length = &v91->Length;
    started = CmpDoWritethroughReparse(
                BugCheckParameter2,
                (__int64)v52,
                (__int64)v51,
                1,
                v91,
                a7,
                (UNICODE_STRING *)v136);
    if ( started != -1073741199 )
    {
      CmpRecordParseFailure(a7, 11392LL);
      v10 = v68;
      goto LABEL_355;
    }
    if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess(a7 + 168);
      *(_DWORD *)(a7 + 160) |= 1u;
    }
    if ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 32LL) == -1 )
    {
      v86 = v117;
      if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                               (_DWORD)p_Length,
                               (_DWORD)v51,
                               (_DWORD)v128,
                               v117,
                               16 * (*(_DWORD *)(a7 + 24) & 2u),
                               (*(_DWORD *)(a7 + 24) & 4) != 0,
                               v122,
                               (__int64)&started) )
      {
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          if ( !CmpDoesProcessBelongToServiceSession((__int64)CurrentThreadProcess) )
          {
            if ( CmpCheckKeyOwnerForPca((__int64)v51, v122) )
            {
              v121[0] = 1;
              v137 = CmpConstructName(*(_QWORD *)(BugCheckParameter2 + 64));
            }
          }
        }
        CmpRecordParseFailure(a7, 11520LL);
        v10 = v68;
        goto LABEL_355;
      }
      CmpUnlockKcbStack(v52);
      CmpUnlockKcbStack(v51);
      if ( BYTE1(v115) )
      {
        CmpUnlockKcb(*(_QWORD *)(v131 + 8));
        BYTE1(v115) = 0;
      }
      LOBYTE(v95) = 1;
      started = CmpPromoteKey(v51, 0LL, v95);
      v96 = started;
      if ( started < 0 )
      {
        if ( started == -1073741444 )
          v96 = -1073741772;
        started = v96;
        CmpRecordParseFailure(a7, 11776LL);
        goto LABEL_358;
      }
    }
    else
    {
      CmpUnlockKcbStack(v52);
      CmpUnlockKcbStack(v51);
      CmpLockKcbStackTopExclusiveRestShared((__int64)v51);
      v86 = v117;
    }
    CmpLockKcbStackTopExclusiveRestShared((__int64)v52);
    if ( !CmRmIsKcbStackVisible((__int64)v52) )
    {
      started = -1073741772;
      CmpRecordParseFailure(a7, 12032LL);
      v10 = 1;
      goto LABEL_355;
    }
    if ( CmpIsKcbDiscarded(BugCheckParameter2) )
    {
      started = -1073741772;
      CmpRecordParseFailure(a7, 12160LL);
      v10 = 1;
      goto LABEL_355;
    }
    if ( (unsigned __int8)CmpIsKeyStackDeleted(v52, v122) )
    {
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v51, v122) || !CmRmIsKcbStackVisible((__int64)v51) )
      {
        started = -1073741772;
        CmpRecordParseFailure(a7, 12288LL);
        v10 = 1;
        goto LABEL_355;
      }
      v97 = *(_QWORD *)(BugCheckParameter2 + 64);
      if ( (*(_DWORD *)(v97 + 176) & 0x20000) != 0 )
      {
        started = -1073741772;
        CmpRecordParseFailure(a7, 12544LL);
        v10 = 1;
        goto LABEL_355;
      }
      v112 = (__int64)v92;
      v98 = v128;
      Logic = CmpVEExecuteCreateLogic(v97, BugCheckParameter2, v86, 16 * (*(_DWORD *)(a7 + 24) & 2u), v122, a7, v112);
      started = Logic;
      if ( Logic == -1073741739 )
      {
        *(_DWORD *)a7 |= 0x400u;
        started = -1073741267;
        CmpRecordParseFailure(a7, 12672LL);
        v10 = 1;
        goto LABEL_355;
      }
      if ( Logic != -1073741199 )
      {
        CmpRecordParseFailure(a7, 12736LL);
        v10 = 1;
        goto LABEL_355;
      }
      if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                               (_DWORD)p_Length,
                               (_DWORD)v51,
                               (_DWORD)v98,
                               v86,
                               16 * (*(_DWORD *)(a7 + 24) & 2u),
                               (*(_DWORD *)(a7 + 24) & 4) != 0,
                               v122,
                               (__int64)&started) )
      {
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          v100 = PsGetCurrentThreadProcess();
          if ( !CmpDoesProcessBelongToServiceSession((__int64)v100) )
          {
            if ( CmpCheckKeyOwnerForPca((__int64)v51, v122) )
            {
              v121[0] = 1;
              v137 = CmpConstructName(*(_QWORD *)(BugCheckParameter2 + 64));
            }
          }
        }
        CmpRecordParseFailure(a7, 12800LL);
        v10 = 1;
        goto LABEL_355;
      }
      started = CmpCreateKeyBody(
                  (signed __int32 *)BugCheckParameter2,
                  v86,
                  a7,
                  v122,
                  1,
                  (__int64)v52,
                  (__int64 **)&Object,
                  v118);
      if ( started < 0 )
      {
        CmpRecordParseFailure(a7, 12928LL);
        v10 = 1;
        goto LABEL_355;
      }
      started = CmpCreateChild(
                  (__int64)v51,
                  (__int64)v52,
                  (__int64)v98,
                  p_Length,
                  a7,
                  8 * (*(_WORD *)(a7 + 24) & 2u),
                  0,
                  0,
                  v122);
      if ( started < 0 )
      {
        CmpRecordParseFailure(a7, 12992LL);
        v10 = 1;
        goto LABEL_355;
      }
      *(_DWORD *)(a7 + 32) = 1;
      goto LABEL_289;
    }
    if ( !(unsigned __int8)CmpIsKeyStackSymlink(v52) || (*(_DWORD *)a7 & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 0x20000) != 0 )
      {
        started = -1073741772;
        CmpRecordParseFailure(a7, 13568LL);
        v10 = 1;
        goto LABEL_355;
      }
      if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
      {
        started = CmpDoWritethroughReparse(BugCheckParameter2, (__int64)v52, (__int64)v51, 0, 0LL, a7, v92);
        if ( started != -1073741199 )
        {
          CmpRecordParseFailure(a7, 13888LL);
          v10 = 1;
          goto LABEL_355;
        }
        started = CmpVEExecuteOpenLogic(BugCheckParameter2, (_DWORD *)a7, 1, (__int64)v92, v86, (__int64)&v128[1]);
        if ( started != -1073741199 )
        {
          CmpRecordParseFailure(a7, 13952LL);
          v10 = 1;
          goto LABEL_355;
        }
        started = CmpCreateKeyBody(
                    (signed __int32 *)BugCheckParameter2,
                    v86,
                    a7,
                    v122,
                    1,
                    (__int64)v52,
                    (__int64 **)&Object,
                    v118);
        if ( started < 0 )
        {
          CmpRecordParseFailure(a7, 14016LL);
          v10 = 1;
          goto LABEL_355;
        }
LABEL_289:
        v87 = (struct _ACCESS_STATE *)v128;
        v10 = 1;
        goto LABEL_217;
      }
      v101 = 13824LL;
    }
    else
    {
      if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
      {
        CmpUnlockKcbStack(v51);
        if ( BYTE1(v115) )
        {
          CmpUnlockKcb(*(_QWORD *)(v131 + 8));
          BYTE1(v115) = 0;
        }
        if ( (_BYTE)v115 )
        {
          CmpUnlockHashEntryByKcb(BugCheckParameter2);
          LOBYTE(v115) = 0;
        }
        started = CmpGetSymbolicLinkTarget(
                    (__int64)v52,
                    (__int64)v151,
                    0,
                    0,
                    v122,
                    a7,
                    (__int64)v92,
                    (ULONG_PTR *)(a7 + 88));
        if ( started >= 0 )
        {
          *(_DWORD *)a7 &= ~8u;
          if ( !*(_QWORD *)(a7 + 64) )
          {
            v102 = *(_QWORD *)(BugCheckParameter2 + 24);
            if ( (*(_DWORD *)(v102 + 4152) & 1) != 0 )
              *(_QWORD *)(a7 + 64) = v102;
          }
          started = 260;
          CmpRecordParseFailure(a7, 13440LL);
        }
        else
        {
          CmpRecordParseFailure(a7, 13312LL);
        }
LABEL_358:
        if ( BYTE1(v115) )
          CmpUnlockKcb(*(_QWORD *)(v131 + 8));
        if ( HIBYTE(v124) )
        {
          CmpUnlockHashEntry(*(_QWORD **)(a7 + 48), 0);
          v13 = BugCheckParameter4;
          v17 = v113;
          goto LABEL_366;
        }
        goto LABEL_364;
      }
      v101 = 13056LL;
    }
    started = -1073741771;
    CmpRecordParseFailure(a7, v101);
    v10 = 1;
    goto LABEL_355;
  }
  started = CmpTransSearchAddTransFromHive(*(_QWORD *)(BugCheckParameter2 + 24), v14, (_DWORD)v47, 0, (__int64)&v122);
  if ( started >= 0 )
    goto LABEL_104;
  if ( (_BYTE)v115 )
  {
    CmpUnlockHashEntryByKcb(BugCheckParameter2);
    LOBYTE(v115) = 0;
  }
  CmpUnlockRegistry(v48);
  started = CmpTransSearchAddTransFromHive(*(_QWORD *)(BugCheckParameter2 + 24), v14, (_DWORD)v47, 1, (__int64)&v122);
  CmpLockRegistry(v49);
  v50 = started;
  v17 = 1;
  if ( started >= 0 )
    v50 = -1073741267;
  started = v50;
  CmpRecordParseFailure(a7, 3072LL);
LABEL_366:
  if ( (_BYTE)v115 )
    CmpUnlockHashEntryByKcb(BugCheckParameter2);
  if ( v120 )
    CmpUnlockHashEntryByKcb(v13);
  CmpCleanupKcbStack(v142);
  CmpCleanupKcbStack(v146);
  CmpCleanupKcbStack(v141);
  if ( v135 )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
    BugCheckParameter2 = 0LL;
    CmpDereferenceKeyControlBlock(v135);
  }
  v107 = BugCheckParameter2;
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  if ( v13 )
    CmpDereferenceKeyControlBlock(v13);
  v108 = *(_DWORD *)(a7 + 96);
  if ( v108 && (v108 & 2) != 0 )
  {
    CmpSearchKeyControlBlockTree(CmpSyncKcbCacheForHive, *(_QWORD *)(a7 + 112), 0LL);
    *(_DWORD *)(a7 + 96) &= ~2u;
  }
  if ( v17 )
    CmpUnlockRegistry(v107);
  v109 = (void *)v137;
  if ( v121[0] )
  {
    if ( !v137 )
      goto LABEL_387;
    if ( CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(a7, v109);
  }
  if ( v109 )
    CmpFreeTransientPoolWithTag(v109, 0x624E4D43u);
LABEL_387:
  if ( (*(_DWORD *)(a7 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(a7 + 168);
  if ( Object )
    ObfDereferenceObject(Object);
  CmpCleanupPathInfo((__int64)v151);
  return (unsigned int)started;
}
