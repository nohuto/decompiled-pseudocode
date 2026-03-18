/*
 * XREFs of CmpDoParseKey @ 0x1405FBD70
 * Callers:
 *     CmpParseKey @ 0x1405F9560 (CmpParseKey.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     CmpTransSilentIgnore @ 0x14003FAF0 (CmpTransSilentIgnore.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     CmpGetCachedFullKCBName @ 0x14011CC10 (CmpGetCachedFullKCBName.c)
 *     PsGetCurrentThreadProcess @ 0x14012B4B0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpCheckExeOwnerForPca @ 0x1405B0554 (CmpCheckExeOwnerForPca.c)
 *     CmpCheckKeyOwnerForPca @ 0x1405B0664 (CmpCheckKeyOwnerForPca.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1405BC110 (CmpDoesProcessBelongToServiceSession.c)
 *     CmpOKToFollowLink @ 0x1405BDD90 (CmpOKToFollowLink.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpLockKcbStackShared @ 0x1405F93E0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x1405FBB40 (CmpLockKcbShared.c)
 *     CmpCleanupKcbStack @ 0x1405FDFE0 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x1405FE000 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1405FE060 (CmpPopulateKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpDoWritethroughReparse @ 0x140603B90 (CmpDoWritethroughReparse.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKeyStackSymlink @ 0x140631100 (CmpIsKeyStackSymlink.c)
 *     HvUnlockHiveFlusherShared @ 0x1406312D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140631304 (HvLockHiveFlusherShared.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x140631974 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140634DF8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpUnlockHashEntryByKcb @ 0x140635780 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140635944 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpIsKeyDeleted @ 0x140636A00 (CmpIsKeyDeleted.c)
 *     CmpIsKeyStackDeleted @ 0x140636AB0 (CmpIsKeyStackDeleted.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063D450 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     HvResetDirtyData @ 0x140641CB4 (HvResetDirtyData.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpUnlockHashEntry @ 0x140661CE4 (CmpUnlockHashEntry.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 *     CmpComputeComponentHashes @ 0x140666AE0 (CmpComputeComponentHashes.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmpConstructName @ 0x140668820 (CmpConstructName.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140669828 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpGetKeyNodeForKcb @ 0x140669AE0 (CmpGetKeyNodeForKcb.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14068FF8C (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14068FFC4 (HvLockHiveFlusherExclusive.c)
 *     CmpVEExecuteParseLogic @ 0x1406A3F90 (CmpVEExecuteParseLogic.c)
 *     CmpVEExecuteCreateLogic @ 0x1406A41B0 (CmpVEExecuteCreateLogic.c)
 *     CmpValidateComponents @ 0x1406B2880 (CmpValidateComponents.c)
 *     CmpVEExecuteOpenLogic @ 0x1406B5BF0 (CmpVEExecuteOpenLogic.c)
 *     CmpGetComponentNameAtIndex @ 0x1406B8370 (CmpGetComponentNameAtIndex.c)
 *     CmpRecordParseKcbCacheResult @ 0x1406B8480 (CmpRecordParseKcbCacheResult.c)
 *     CmpTransSearchAddTransFromHive @ 0x1406BC860 (CmpTransSearchAddTransFromHive.c)
 *     CmpRecordParseStartingKcb @ 0x1406BC930 (CmpRecordParseStartingKcb.c)
 *     CmpRecordParseFailure @ 0x1406BD080 (CmpRecordParseFailure.c)
 *     CmpCleanupPathInfo @ 0x1406BD180 (CmpCleanupPathInfo.c)
 *     CmpRecordParseCachedSymlinkKcb @ 0x1406BD840 (CmpRecordParseCachedSymlinkKcb.c)
 *     CmRmIsKCBVisible @ 0x1406BE060 (CmRmIsKCBVisible.c)
 *     CmpGetComponentHashAtIndex @ 0x1406BE6F0 (CmpGetComponentHashAtIndex.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1406C9F78 (CmpLockHashEntrySharedByKcb.c)
 *     CmpRecordParseWalkResult @ 0x1406CA2F8 (CmpRecordParseWalkResult.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406D49B0 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406E48D8 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E6E08 (CmpTryToLockHashEntryExclusive.c)
 *     CmpWaitForHiveMount @ 0x14077E0E8 (CmpWaitForHiveMount.c)
 *     CmpCreateHiveRootCell @ 0x1407882E0 (CmpCreateHiveRootCell.c)
 *     CmpPublishEventForPcaResolver @ 0x140826068 (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTree @ 0x14082ACA0 (CmpSearchKeyControlBlockTree.c)
 *     CmpLogUnsupportedOperation @ 0x1408329E4 (CmpLogUnsupportedOperation.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140832D1C (CmpReleaseKeyNodeForKcb.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x14083E42C (CmpPromoteKey.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int16 a4,
        PCUNICODE_STRING String2,
        __int128 *a6,
        __int64 a7,
        int a8,
        _QWORD *a9)
{
  __int128 v10; // xmm0
  bool v11; // si
  __int16 v12; // r12
  __int64 *v13; // rdx
  ULONG_PTR v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rax
  char v18; // bl
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
  unsigned __int64 v29; // rax
  __int16 v30; // r8
  __int16 v31; // r9
  wchar_t *v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int16 v35; // cx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  char v39; // r14
  char v40; // r15
  __int128 v41; // xmm0
  ULONG_PTR v42; // r14
  int started; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // eax
  __int64 ComponentNameAtIndex; // rax
  __int64 *v51; // r14
  __int64 v52; // r8
  __int64 *v53; // r13
  int *v54; // r15
  __int64 v55; // r14
  int ComponentHashAtIndex; // ecx
  char v57; // dl
  ULONG_PTR v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  ULONG_PTR v61; // rcx
  __int64 *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rbx
  __int64 v67; // rax
  bool v68; // zf
  bool v69; // r14
  __int64 v70; // r8
  __int16 v71; // r12
  __int64 v72; // r13
  int v73; // eax
  __int64 v74; // r12
  int v75; // ebx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rcx
  ULONG_PTR v79; // rdx
  _DWORD *v80; // r12
  ULONG_PTR v81; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  ULONG_PTR v84; // rbx
  ULONG_PTR v85; // rcx
  int v86; // eax
  unsigned __int8 v87; // dl
  int KeyBody; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // r9d
  __int64 v92; // r13
  __int64 v93; // r8
  unsigned __int8 v94; // r12
  int v95; // ebx
  __int64 v96; // rax
  __int64 v97; // rax
  const UNICODE_STRING *v98; // rax
  __int64 v99; // rsi
  int v100; // r9d
  int v101; // ebx
  unsigned int v102; // eax
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v104; // r8
  __int64 v105; // r8
  __int64 v106; // r10
  __int64 v107; // rsi
  unsigned int Logic; // eax
  _KPROCESS *v109; // rax
  int v110; // eax
  int v111; // eax
  __int64 v112; // rdx
  int v113; // eax
  __int64 v114; // rcx
  unsigned int v115; // eax
  int v116; // r8d
  unsigned int v117; // eax
  int v118; // eax
  bool v119; // cl
  int SymbolicLinkTarget; // eax
  __int64 v121; // rcx
  int v122; // ebx
  unsigned int v123; // eax
  unsigned int v124; // eax
  __int64 v125; // r8
  PVOID v126; // rax
  int v127; // eax
  void *v128; // rbx
  int SourceString; // [rsp+20h] [rbp-E0h]
  int v131; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v132; // [rsp+38h] [rbp-C8h]
  __int64 v133; // [rsp+40h] [rbp-C0h]
  char v134; // [rsp+60h] [rbp-A0h]
  int Child; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v136; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v138; // [rsp+78h] [rbp-88h]
  bool v139[3]; // [rsp+79h] [rbp-87h] BYREF
  _WORD v140[2]; // [rsp+7Ch] [rbp-84h] BYREF
  char v141; // [rsp+80h] [rbp-80h]
  char v142[7]; // [rsp+81h] [rbp-7Fh] BYREF
  __int64 v143; // [rsp+88h] [rbp-78h] BYREF
  char v144; // [rsp+90h] [rbp-70h] BYREF
  __int16 v145; // [rsp+91h] [rbp-6Fh]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-68h]
  char v147; // [rsp+A0h] [rbp-60h]
  _BYTE v148[7]; // [rsp+A1h] [rbp-5Fh] BYREF
  __int64 *v149; // [rsp+A8h] [rbp-58h]
  __int64 v150; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v151; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v152; // [rsp+C0h] [rbp-40h]
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v154; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v155; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR v156; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v157; // [rsp+F0h] [rbp-10h]
  __int64 *v158; // [rsp+F8h] [rbp-8h]
  __int64 v159; // [rsp+100h] [rbp+0h]
  __int64 v160; // [rsp+108h] [rbp+8h] BYREF
  _QWORD *v161[2]; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  __int64 v163[4]; // [rsp+130h] [rbp+30h] BYREF
  int v164[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v165; // [rsp+158h] [rbp+58h]
  __int64 v166; // [rsp+160h] [rbp+60h]
  __int64 v167; // [rsp+168h] [rbp+68h]
  __int64 v168[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD *v169; // [rsp+190h] [rbp+90h]
  _BYTE v170[176]; // [rsp+1A0h] [rbp+A0h] BYREF

  v138 = a3;
  v150 = a2;
  v152 = a1;
  v157 = (__int64)String2;
  v169 = a9;
  memset(v170, 0, 0xA8uLL);
  v10 = *a6;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v11 = 0;
  v154 = v10;
  DestinationString.Buffer = 0LL;
  v12 = 0;
  v161[0] = 0LL;
  v161[1] = 0LL;
  Object = 0LL;
  BugCheckParameter2 = 0LL;
  v156 = 0LL;
  v144 = 0;
  v158 = 0LL;
  v147 = 0;
  v139[0] = 0;
  v145 = 0;
  v141 = 0;
  v140[0] = 0;
  v151 = 0LL;
  v160 = 0xFFFFFFFFLL;
  LOWORD(v136) = 0;
  CmpInitializeDelayDerefContext(v161);
  v142[0] = 0;
  v159 = 0LL;
  memset(v170, 0, 0xA8uLL);
  *(_QWORD *)(a7 + 160) = 0LL;
  *(_QWORD *)(a7 + 168) = 0LL;
  *(_QWORD *)(a7 + 176) = 0LL;
  *(_QWORD *)(a7 + 184) = 0LL;
  *(_QWORD *)(a7 + 192) = 0LL;
  *(_QWORD *)v164 = 4294901760LL;
  v168[0] = 4294901760LL;
  v163[0] = 4294901760LL;
  *(_QWORD *)(a7 + 200) = 0LL;
  *(_QWORD *)(a7 + 208) = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  v167 = 0LL;
  memset(&v168[1], 0, 24);
  memset(&v163[1], 0, 24);
  memset((void *)(a7 + 216), 0, 0x50uLL);
  CmpRecordParseCachedSymlinkKcb(a7, *(_QWORD *)(a7 + 88));
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v14 = *(_QWORD *)(a7 + 88);
  v15 = *(_QWORD *)(a7 + 72);
  v16 = v152;
  BugCheckParameter4 = v14;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v15 )
  {
    v17 = *(_QWORD *)(v16 + 56);
    if ( v17 && v15 != v17 )
    {
      Child = -1072103422;
      CmpRecordParseFailure(a7, 256LL, 3222863874LL);
      v18 = 0;
      goto LABEL_359;
    }
    v149 = 0LL;
  }
  else
  {
    v13 = *(__int64 **)(v16 + 64);
    v15 = *(_QWORD *)(v16 + 56);
    v149 = v13;
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v16 + 50);
  v19 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( *(_QWORD *)(v16 + 8) != v19 && v14 )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v14);
    v14 = 0LL;
    BugCheckParameter4 = 0LL;
    CmpUnlockRegistry();
  }
  v134 = 0;
  if ( !v14 )
    goto LABEL_45;
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive(v19, v13, v16);
  else
    CmpLockRegistry();
  v134 = 1;
  CachedFullKCBName = (const UNICODE_STRING *)CmpGetCachedFullKCBName(v14, v148);
  v21 = CachedFullKCBName;
  if ( !CachedFullKCBName || v148[0] || !RtlPrefixUnicodeString(CachedFullKCBName, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    BugCheckParameter4 = 0LL;
    CmpUnlockRegistry();
    v134 = 0;
LABEL_45:
    v40 = 0;
    goto LABEL_46;
  }
  Buffer = String2->Buffer;
  Length = String2->Length;
  MaximumLength = String2->MaximumLength;
  v25 = &Buffer[(unsigned __int64)v21->Length >> 1];
  *((_QWORD *)&v154 + 1) = v25;
  v26 = Length - v21->Length;
  LOWORD(v154) = v26;
  v27 = MaximumLength - v21->Length;
  for ( WORD1(v154) = v27; v26; WORD1(v154) = v27 )
  {
    if ( *v25 != 92 )
      break;
    ++v25;
    v26 -= 2;
    v27 -= 2;
    *((_QWORD *)&v154 + 1) = v25;
    LOWORD(v154) = v26;
  }
  v28 = ((*(_DWORD *)(BugCheckParameter4 + 8) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) == 0 || v26 )
  {
    v14 = BugCheckParameter4;
  }
  else
  {
    v29 = v21->Length;
    v30 = Length - v21->Length;
    v31 = MaximumLength - v21->Length;
    v14 = BugCheckParameter4;
    v32 = &Buffer[v29 >> 1];
    v33 = *(_QWORD *)(BugCheckParameter4 + 80);
    v34 = *(unsigned __int16 *)(v33 + 24);
    if ( (*(_DWORD *)v33 & 1) != 0 )
    {
      *((_QWORD *)&v154 + 1) = &v32[-v34];
      LOWORD(v154) = v30 + 2 * *(_WORD *)(*(_QWORD *)(BugCheckParameter4 + 80) + 24LL);
      v35 = 2 * *(_WORD *)(*(_QWORD *)(BugCheckParameter4 + 80) + 24LL);
    }
    else
    {
      *((_QWORD *)&v154 + 1) = &v32[-(v34 >> 1)];
      LOWORD(v154) = v30 + *(_WORD *)(*(_QWORD *)(BugCheckParameter4 + 80) + 24LL);
      v35 = *(_WORD *)(*(_QWORD *)(BugCheckParameter4 + 80) + 24LL);
    }
    v12 = 1;
    WORD1(v154) = v31 + v35;
    --v28;
  }
  v36 = CmpComputeComponentHashes(&v154, v140, v170);
  Child = v36;
  if ( v36 < 0 )
  {
    CmpRecordParseFailure(a7, 512LL, (unsigned int)v36);
LABEL_358:
    v18 = v134;
    goto LABEL_359;
  }
  v37 = v140[0];
  if ( (unsigned int)(v37 + v28) > 0x20 )
  {
    Child = -1073741811;
    CmpRecordParseFailure(a7, 768LL, 3221225485LL);
    goto LABEL_358;
  }
  v38 = CmpValidateComponents(v37, v170);
  Child = v38;
  if ( v38 < 0 )
  {
    CmpRecordParseFailure(a7, 1024LL, (unsigned int)v38);
    goto LABEL_358;
  }
  if ( v12 == v140[0] )
  {
    CmpLockHashEntrySharedByKcb(v14);
    v39 = 1;
    v141 = 1;
  }
  else
  {
    v39 = 0;
  }
  CmpLockKcbShared(v14);
  if ( (unsigned __int8)CmpIsKeyDeleted(v14, 0LL) || (*(_DWORD *)(v14 + 8) & 0x40000) != 0 )
  {
    CmpUnlockKcb(v14);
    if ( v39 )
      CmpUnlockHashEntryByKcb(v14);
    CmpDereferenceKeyControlBlock(v14);
    v41 = *a6;
    BugCheckParameter4 = 0LL;
    v12 = 0;
    v154 = v41;
    CmpCleanupPathInfo(v170);
    memset(v170, 0, 0xA8uLL);
    v40 = 0;
    v141 = 0;
  }
  else
  {
    CmpUnlockKcb(v14);
    v40 = v141;
  }
LABEL_46:
  if ( BugCheckParameter4 )
  {
    v42 = BugCheckParameter4;
  }
  else
  {
    v42 = *(_QWORD *)(v152 + 8);
    started = CmpComputeComponentHashes(&v154, v140, v170);
    Child = started;
    if ( started < 0 )
    {
      v44 = 1280LL;
LABEL_355:
      v48 = (unsigned int)started;
      goto LABEL_356;
    }
    started = CmpValidateComponents(v140[0], v170);
    Child = started;
    if ( started < 0 )
    {
      v44 = 1536LL;
      goto LABEL_355;
    }
  }
  CmpRecordParseStartingKcb(a7, v42);
  v46 = v140[0];
  v47 = (unsigned int)v46 + ((*(_DWORD *)(v42 + 8) >> 21) & 0x3FF) - (unsigned __int16)v12;
  if ( (unsigned int)v47 > 0x200 )
  {
    Child = -1073741811;
    v44 = 1792LL;
    v48 = 3221225485LL;
LABEL_356:
    CmpRecordParseFailure(a7, v44, v48);
LABEL_357:
    v14 = BugCheckParameter4;
    goto LABEL_358;
  }
  if ( !v134 )
  {
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
      CmpLockRegistryExclusive(v47, v46, v45);
    else
      CmpLockRegistry();
    LOWORD(v46) = v140[0];
    v134 = 1;
  }
  v49 = *(_DWORD *)(v152 + 48);
  if ( (v49 & 9) != 0 )
  {
    v48 = 3221226533LL;
    v44 = 2048LL;
    if ( (v49 & 1) == 0 )
      v48 = 3221225852LL;
    Child = v48;
    goto LABEL_356;
  }
  if ( v12 == (_WORD)v46 )
  {
    CmpReferenceKeyControlBlockUnsafe(v42);
    BugCheckParameter2 = v42;
    if ( v42 == BugCheckParameter4 )
    {
      v141 = 0;
      LOBYTE(v136) = v40;
    }
    else
    {
      CmpLockHashEntrySharedByKcb(v42);
      LOBYTE(v136) = 1;
    }
  }
  else
  {
    started = CmpPerformCompleteKcbCacheLookup(
                (volatile signed __int64 *)v42,
                (unsigned __int16)v12,
                (__int16)v46,
                (__int64)v170,
                (_DWORD *)a7,
                &BugCheckParameter2,
                (char *)&v136,
                &v155);
    Child = started;
    if ( started < 0 || started == 259 )
    {
      v44 = 2432LL;
      goto LABEL_355;
    }
    v12 += v155;
    CmpRecordParseKcbCacheResult(a7, BugCheckParameter2, (unsigned int)(__int16)v155);
  }
  if ( v12 == v140[0] && (*(_DWORD *)a7 & 1) == 0 )
  {
    CmpUnlockHashEntryByKcb(BugCheckParameter2);
    LOBYTE(v136) = 0;
  }
  CmpLockKcbShared(BugCheckParameter2);
  if ( v12 >= v140[0] )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  else
  {
    ComponentNameAtIndex = CmpGetComponentNameAtIndex(v170, (unsigned int)v12);
    DestinationString.Buffer = *(wchar_t **)(ComponentNameAtIndex + 8);
    DestinationString.Length = v154
                             - 2 * ((__int64)(*(_QWORD *)(ComponentNameAtIndex + 8) - *((_QWORD *)&v154 + 1)) >> 1);
    DestinationString.MaximumLength = DestinationString.Length;
  }
  Child = CmpVEExecuteParseLogic(BugCheckParameter2, (unsigned int)&DestinationString, a7, v157, v138, v150 + 32);
  CmpUnlockKcb(BugCheckParameter2);
  v48 = (unsigned int)Child;
  if ( Child != -1073741199 )
  {
    v44 = 2496LL;
    goto LABEL_356;
  }
  if ( !CmpOKToFollowLink(*(_QWORD **)(a7 + 64), *(_QWORD *)(BugCheckParameter2 + 32)) )
  {
    Child = -1073741790;
    v44 = 2560LL;
    v48 = 3221225506LL;
    goto LABEL_356;
  }
  if ( v15 || v149 )
  {
    if ( *(PVOID *)(BugCheckParameter2 + 32) == CmpMasterHive )
    {
      LOBYTE(v145) = 1;
      v15 = 0LL;
      v51 = 0LL;
    }
    else if ( (v15 || v149) && *(_WORD *)(BugCheckParameter2 + 66) )
    {
      CmpLogUnsupportedOperation(8LL, v149);
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        Child = -1072103419;
        v44 = 2816LL;
        v48 = 3222863877LL;
        goto LABEL_356;
      }
      v15 = 0LL;
      v51 = 0LL;
    }
    else
    {
      v51 = v149;
    }
  }
  else
  {
    v51 = 0LL;
  }
  if ( CmpTransSilentIgnore() || !v15 && !v51 )
  {
    CmpTransSilentIgnore();
    v143 = 0LL;
LABEL_102:
    started = CmpStartKcbStack(v164, *(unsigned __int16 *)(BugCheckParameter2 + 66));
    Child = started;
    if ( started < 0 )
    {
      v44 = 3328LL;
      goto LABEL_355;
    }
    started = CmpStartKcbStack(v168, *(unsigned __int16 *)(BugCheckParameter2 + 66));
    Child = started;
    if ( started < 0 )
    {
      v44 = 3584LL;
      goto LABEL_355;
    }
    v53 = v168;
    v149 = v168;
    v54 = v164;
    CmpPopulateKcbStack(v164, BugCheckParameter2);
    if ( v12 < v140[0] )
    {
      while ( 1 )
      {
        CmpLockKcbStackShared((__int64)v54);
        if ( (unsigned __int8)CmpIsKeyStackDeleted(v54, v143) )
        {
          if ( CmpLoadingSystemHivesActive
            && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
            && *(PVOID *)(BugCheckParameter2 + 32) == CmpMasterHive
            && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x7FE00000) == 0x600000
            && v12 > 0
            && (v64 = CmpGetComponentNameAtIndex(v170, (unsigned int)(v12 - 1)),
                (unsigned __int8)CmpWaitForHiveMount(v64, 2LL, 0LL, a7 + 136)) )
          {
            *(_DWORD *)a7 |= 0x100u;
            Child = 259;
            CmpRecordParseFailure(a7, 3840LL, 259LL);
          }
          else
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 4096LL, 3221225524LL);
          }
          goto LABEL_347;
        }
        if ( (unsigned __int8)CmpIsKeyStackSymlink(v54) )
          break;
        CmpUnlockKcbStack((__int64)v54);
        v55 = CmpGetComponentNameAtIndex(v170, (unsigned int)v12);
        ComponentHashAtIndex = CmpGetComponentHashAtIndex(v170, (unsigned int)v12);
        v57 = (*(_DWORD *)a7 & 1) != 0 && v12 == v140[0] - 1;
        LODWORD(v132) = ComponentHashAtIndex + 37 * *(_DWORD *)(BugCheckParameter2 + 16);
        started = CmpWalkOneLevel(
                    BugCheckParameter2,
                    (int)v54,
                    (int)&v156,
                    (int)v53,
                    (__int64)&v144,
                    v55,
                    ComponentHashAtIndex,
                    v132,
                    v143,
                    v57,
                    a7);
        Child = started;
        if ( started == -1073741772 )
        {
          if ( !CmpLoadingSystemHivesActive )
            goto LABEL_130;
          if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread()
            || (v58 = BugCheckParameter2, *(PVOID *)(BugCheckParameter2 + 32) != CmpMasterHive) )
          {
            started = Child;
LABEL_130:
            v44 = 5504LL;
            goto LABEL_355;
          }
          if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x7FE00000) == 0x600000 && v12 > 0 )
          {
            v59 = CmpGetComponentNameAtIndex(v170, (unsigned int)(v12 - 1));
            if ( (unsigned __int8)CmpWaitForHiveMount(v59, 2LL, 0LL, a7 + 136) )
            {
              *(_DWORD *)a7 |= 0x100u;
              v44 = 5120LL;
              Child = 259;
              v48 = 259LL;
              goto LABEL_356;
            }
            v58 = BugCheckParameter2;
          }
          if ( (*(_DWORD *)(v58 + 8) & 0x7FE00000) == 0x400000 )
          {
            v60 = CmpGetComponentNameAtIndex(v170, (unsigned int)v12);
            if ( (unsigned __int8)CmpWaitForHiveMount(v60, 2LL, 0LL, a7 + 136) )
            {
              *(_DWORD *)a7 |= 0x100u;
              v44 = 5376LL;
              Child = 259;
              v48 = 259LL;
              goto LABEL_356;
            }
          }
          started = Child;
        }
        if ( started < 0 )
          goto LABEL_130;
        CmpRecordParseWalkResult(a7, v156);
        CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter2);
        v61 = v156;
        ++v12;
        LOBYTE(v136) = v144;
        v62 = (__int64 *)v54;
        v54 = (int *)v53;
        v53 = v62;
        v149 = v62;
        BugCheckParameter2 = v156;
        v156 = 0LL;
        v144 = 0;
        if ( v12 >= v140[0] )
          goto LABEL_146;
      }
      started = CmpGetSymbolicLinkTarget(
                  (_DWORD)v54,
                  (unsigned int)v170,
                  (unsigned __int16)v12,
                  v140[0],
                  v143,
                  a7,
                  (__int64)v161,
                  v157,
                  a7 + 88);
      Child = started;
      if ( started < 0 )
      {
        v44 = 4608LL;
        goto LABEL_355;
      }
      *(_DWORD *)a7 &= ~8u;
      if ( !*(_QWORD *)(a7 + 64) )
      {
        v63 = *(_QWORD *)(BugCheckParameter2 + 32);
        if ( (*(_DWORD *)(v63 + 4152) & 1) != 0 )
          *(_QWORD *)(a7 + 64) = v63;
      }
      Child = 260;
      v44 = 4864LL;
      v48 = 260LL;
      goto LABEL_356;
    }
    v61 = BugCheckParameter2;
LABEL_146:
    v65 = *(_QWORD *)(v61 + 72);
    v158 = v53;
    if ( v65 )
    {
      CmpPopulateKcbStack(v149, v65);
      v61 = BugCheckParameter2;
    }
    else
    {
      v53 = 0LL;
      v158 = 0LL;
    }
    v66 = v152;
    v67 = *(_QWORD *)(v152 + 8);
    if ( *(_QWORD *)(v61 + 72) != v67 && v61 != v67 )
    {
      CmpLockKcbShared(*(_QWORD *)(v152 + 8));
      BYTE1(v136) = 1;
    }
    v68 = v53 == 0LL;
    if ( v53 )
    {
      CmpLockKcbStackShared((__int64)v53);
      v68 = v53 == 0LL;
    }
    v69 = !v68;
    v11 = !v68;
    CmpLockKcbStackShared((__int64)v54);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v66, 0LL) )
    {
      v70 = 3221226533LL;
      if ( (*(_BYTE *)(v66 + 48) & 1) == 0 )
        v70 = 3221225852LL;
      Child = v70;
      CmpRecordParseFailure(a7, 5888LL, v70);
      goto LABEL_347;
    }
    v71 = v12 - 1;
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x20000) != 0 )
    {
      Child = -1073741772;
      CmpRecordParseFailure(a7, 6144LL, 3221225524LL);
      v11 = v69;
LABEL_347:
      CmpUnlockKcbStack((__int64)v54);
      v53 = v158;
LABEL_348:
      if ( v11 )
        CmpUnlockKcbStack((__int64)v53);
      goto LABEL_350;
    }
    if ( !(unsigned __int8)CmRmIsKCBVisible(BugCheckParameter2, v143) )
    {
      Child = -1073741772;
      CmpRecordParseFailure(a7, 6400LL, 3221225524LL);
      v11 = v69;
      goto LABEL_347;
    }
    if ( (*(_DWORD *)a7 & 2) != 0 )
    {
      CmpUnlockKcbStack((__int64)v54);
      CmpUnlockKcbStack((__int64)v53);
      if ( BYTE1(v136) )
        CmpUnlockKcb(*(_QWORD *)(v66 + 8));
      HIBYTE(v145) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
      if ( BYTE1(v136) )
        CmpLockKcbShared(*(_QWORD *)(v66 + 8));
      CmpLockKcbStackTopExclusiveRestShared(v53);
      CmpLockKcbStackTopExclusiveRestShared(v54);
      v72 = CmpGetComponentNameAtIndex(v170, (unsigned int)v71);
      v73 = CmpGetComponentHashAtIndex(v170, (unsigned int)v71);
      v74 = v152;
      v75 = v73;
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v152, 0LL) )
      {
        v76 = 3221226533LL;
        if ( (*(_BYTE *)(v74 + 48) & 1) == 0 )
          v76 = 3221225852LL;
        Child = v76;
        CmpRecordParseFailure(a7, 6656LL, v76);
        v11 = v69;
        goto LABEL_347;
      }
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v158, v143) )
      {
        Child = -1073741772;
        CmpRecordParseFailure(a7, 6912LL, 3221225524LL);
        v11 = v69;
        goto LABEL_347;
      }
      if ( !(unsigned __int8)CmpIsKeyStackDeleted(v54, v143) )
      {
        v77 = 7168LL;
LABEL_175:
        Child = -1073741790;
        CmpRecordParseFailure(a7, v77, 3221225506LL);
        v11 = v69;
        goto LABEL_347;
      }
      v78 = *(_QWORD *)(BugCheckParameter2 + 72);
      if ( *(PVOID *)(v78 + 32) != CmpMasterHive )
      {
        v77 = 7424LL;
        goto LABEL_175;
      }
      if ( (*(_DWORD *)(v78 + 184) & 0x20000) != 0 )
      {
        Child = -1073741772;
        CmpRecordParseFailure(a7, 7680LL, 3221225524LL);
        v11 = v69;
        goto LABEL_347;
      }
      if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
      {
        CmpAttachToRegistryProcess(a7 + 168);
        *(_DWORD *)(a7 + 160) |= 1u;
      }
      v79 = *(unsigned int *)(a7 + 40);
      v80 = (_DWORD *)(a7 + 40);
      v81 = *(_QWORD *)(a7 + 48);
      if ( (_DWORD)v79 == -1 )
      {
        HiveRootCell = CmpCreateHiveRootCell(v81, a7 + 40);
        Child = HiveRootCell;
        if ( HiveRootCell < 0 )
        {
          CmpRecordParseFailure(a7, 7808LL, (unsigned int)HiveRootCell);
          v11 = v69;
          goto LABEL_347;
        }
      }
      else
      {
        updated = CmpUpdateHiveRootCellFlags(v81, v79);
        Child = updated;
        if ( updated < 0 )
        {
          CmpRecordParseFailure(a7, 7936LL, (unsigned int)updated);
          v11 = v69;
          goto LABEL_347;
        }
      }
      *(_WORD *)(BugCheckParameter2 + 186) |= 2u;
      Child = CmpCreateKeyControlBlock(
                *(_QWORD *)(a7 + 48),
                0xFFFFFFFFLL,
                BugCheckParameter2,
                *(_QWORD *)(a7 + 80),
                1,
                v72,
                v75,
                0,
                &v151);
      *(_WORD *)(BugCheckParameter2 + 186) &= ~2u;
      if ( Child < 0 )
      {
        CmpRecordParseFailure(a7, 0x2000LL, (unsigned int)Child);
        v11 = v69;
        goto LABEL_347;
      }
      v84 = BugCheckParameter2;
      v85 = BugCheckParameter2;
      BugCheckParameter2 = v151;
      CmpDereferenceKeyControlBlockUnsafe(v85);
      CmpUnlockHashEntryByKcb(v84);
      LOBYTE(v136) = 0;
      v86 = CmpStartKcbStackForTopLayerKcb(v163, v151);
      Child = v86;
      if ( v86 < 0 )
      {
        CmpRecordParseFailure(a7, 8448LL, (unsigned int)v86);
        v11 = v69;
        goto LABEL_347;
      }
      *(_WORD *)(v84 + 186) |= 2u;
      CmpLockKcbStackTopExclusiveRestShared(v163);
      v87 = v138;
      *(_WORD *)(v84 + 186) &= ~2u;
      v147 = 1;
      KeyBody = CmpCreateKeyBody(BugCheckParameter2, v87, a7, v143, 1, (__int64)v163, (ULONG_PTR **)&Object, v139);
      Child = KeyBody;
      if ( KeyBody < 0 )
      {
        CmpRecordParseFailure(a7, 8576LL, (unsigned int)KeyBody);
        v11 = v69;
LABEL_346:
        CmpUnlockKcbStack((__int64)v163);
        goto LABEL_347;
      }
      HvLockHiveFlusherShared(*(_QWORD *)(v84 + 32));
      HvLockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter2 + 32));
      v89 = (unsigned int)*v80;
      v90 = *(_QWORD *)(v151 + 32);
      LODWORD(v149) = *(_DWORD *)(v90 + 104);
      if ( !(unsigned __int8)HvMarkCellDirty(v90, v89, 0LL) )
      {
        Child = -1073741443;
        CmpRecordParseFailure(a7, 8704LL, 3221225853LL);
LABEL_195:
        HvUnlockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter2 + 32));
        HvUnlockHiveFlusherShared(*(_QWORD *)(v84 + 32));
        goto LABEL_346;
      }
      v91 = v72;
      v92 = v150;
      Child = CmpCreateChild((_DWORD)v158, (_DWORD)v54, v150, v91, a7, 10, 1, v143);
      if ( Child < 0 )
        goto LABEL_195;
      LOBYTE(v93) = 1;
      *(_DWORD *)(v151 + 40) = *v80;
      *(_DWORD *)(CmpGetKeyNodeForKcb(v151, &v160, v93) + 16) = *(_DWORD *)(v84 + 40);
      ++*(_QWORD *)(v151 + 304);
      CmpRebuildKcbCacheFromNode(v151);
      CmpReleaseKeyNodeForKcb(v151, &v160);
      if ( !(_DWORD)v149 )
        HvResetDirtyData(*(_QWORD *)(v151 + 32));
      HvUnlockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter2 + 32));
      HvUnlockHiveFlusherShared(*(_QWORD *)(v84 + 32));
      *(_WORD *)(v84 + 8) |= 8u;
      CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2);
      *(_QWORD *)(v84 + 104) = BugCheckParameter2;
      CmpUnlockHashEntry(*(PVOID *)(a7 + 48));
      v94 = v138;
      v11 = v69;
      *(_DWORD *)(a7 + 32) = 1;
LABEL_212:
      if ( *(_DWORD *)(a7 + 32) == 1
        || (LOBYTE(v131) = (*(_DWORD *)(a7 + 24) & 4) != 0,
            LOBYTE(SourceString) = v94,
            (unsigned __int8)CmpCheckOpenAccessOnKeyBody(Object, v54, a7, v92, SourceString, v131, v143, v142, &Child)) )
      {
        v126 = Object;
        Object = 0LL;
        *v169 = v126;
        if ( !*(_DWORD *)(a7 + 32) )
          *(_DWORD *)(a7 + 32) = 2;
        Child = v139[0] ? 0x40000016 : 0;
      }
      else
      {
        if ( v142[0] )
        {
          if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess(a7 + 168);
            *(_DWORD *)(a7 + 160) |= 1u;
          }
          v159 = CmpConstructName(BugCheckParameter2);
        }
        CmpRecordParseFailure(a7, 15584LL, (unsigned int)Child);
      }
      HIBYTE(v145) = 0;
      if ( !v147 )
        goto LABEL_347;
      goto LABEL_346;
    }
    if ( (*(_DWORD *)a7 & 0x20) != 0 )
    {
      CmpUnlockKcbStack((__int64)v54);
      CmpUnlockKcbStack((__int64)v53);
      CmpLockKcbStackTopExclusiveRestShared(v53);
      CmpLockKcbStackTopExclusiveRestShared(v54);
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v53, v143) )
      {
        Child = -1073741772;
        CmpRecordParseFailure(a7, 8960LL, 3221225524LL);
        v11 = v69;
        goto LABEL_347;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 72) + 184LL) & 0x20000) != 0 )
      {
        Child = -1073741772;
        CmpRecordParseFailure(a7, 9216LL, 3221225524LL);
        v11 = v69;
        goto LABEL_347;
      }
      v95 = CmpGetComponentNameAtIndex(v170, (unsigned int)v71);
      v94 = v138;
      if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                               v95,
                               (_DWORD)v53,
                               v150,
                               v138,
                               16 * (*(_DWORD *)(a7 + 24) & 2u),
                               (*(_DWORD *)(a7 + 24) & 4) != 0,
                               v143,
                               (__int64)&Child) )
      {
        CmpRecordParseFailure(a7, 9472LL, (unsigned int)Child);
        v11 = v69;
        goto LABEL_347;
      }
      CmpCleanUpKcbCachedSymlink(BugCheckParameter2, v161);
      *(_WORD *)(BugCheckParameter2 + 186) |= 0x40u;
      *(_DWORD *)(BugCheckParameter2 + 100) = -1;
      *(_DWORD *)(BugCheckParameter2 + 96) = *(_DWORD *)(a7 + 56);
      Child = CmpCreateKeyBody(BugCheckParameter2, v94, a7, v143, 1, (__int64)v54, (ULONG_PTR **)&Object, v139);
      v11 = v69;
      if ( Child < 0 )
        goto LABEL_347;
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v54, v143) )
      {
        Child = CmpCreateChild((_DWORD)v53, (_DWORD)v54, v150, v95, a7, 64, 0, v143);
        if ( Child < 0 )
          goto LABEL_347;
        *(_DWORD *)(a7 + 32) = 1;
      }
      v92 = v150;
      v11 = v69;
      goto LABEL_212;
    }
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(v54, v143) )
    {
      if ( (unsigned __int8)CmpIsKeyStackSymlink(v54) && (*(_DWORD *)a7 & 0x200) == 0 )
      {
        if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
        {
          if ( v53 )
            CmpUnlockKcbStack((__int64)v53);
          v119 = 0;
          if ( !v53 )
            v119 = v11;
          v11 = v119;
          if ( BYTE1(v136) )
          {
            CmpUnlockKcb(*(_QWORD *)(v66 + 8));
            BYTE1(v136) = 0;
          }
          if ( (_BYTE)v136 )
          {
            CmpUnlockHashEntryByKcb(BugCheckParameter2);
            LOBYTE(v136) = 0;
          }
          SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                 (_DWORD)v54,
                                 (unsigned int)v170,
                                 0,
                                 0,
                                 v143,
                                 a7,
                                 (__int64)v161,
                                 v157,
                                 a7 + 88);
          Child = SymbolicLinkTarget;
          if ( SymbolicLinkTarget >= 0 )
          {
            *(_DWORD *)a7 &= ~8u;
            if ( !*(_QWORD *)(a7 + 64) )
            {
              v121 = *(_QWORD *)(BugCheckParameter2 + 32);
              if ( (*(_DWORD *)(v121 + 4152) & 1) != 0 )
                *(_QWORD *)(a7 + 64) = v121;
            }
            Child = 260;
            CmpRecordParseFailure(a7, 14592LL, 260LL);
          }
          else
          {
            CmpRecordParseFailure(a7, 14336LL, (unsigned int)SymbolicLinkTarget);
          }
          goto LABEL_348;
        }
        Child = -1073741771;
        CmpRecordParseFailure(a7, 14080LL, 3221225525LL);
        v11 = v69;
        goto LABEL_347;
      }
      if ( (_BYTE)v145 )
      {
        Child = -1073741811;
        CmpRecordParseFailure(a7, 14848LL, 3221225485LL);
        v11 = v69;
        goto LABEL_347;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x20000) != 0 )
      {
        Child = -1073741772;
        CmpRecordParseFailure(a7, 15104LL, 3221225524LL);
        v11 = v69;
        goto LABEL_347;
      }
      if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
      {
        Child = -1073741771;
        CmpRecordParseFailure(a7, 15360LL, 3221225525LL);
        v11 = v69;
        goto LABEL_347;
      }
      v122 = v157;
      v123 = CmpDoWritethroughReparse(BugCheckParameter2, (int)v54, (int)v53, 0, 0LL, a7, v157);
      Child = v123;
      if ( v123 != -1073741199 )
      {
        CmpRecordParseFailure(a7, 15424LL, v123);
        v11 = v69;
        goto LABEL_347;
      }
      v92 = v150;
      v94 = v138;
      v124 = CmpVEExecuteOpenLogic(BugCheckParameter2, a7, 0, v122, v138, v150 + 32);
      Child = v124;
      if ( v124 != -1073741199 )
      {
        CmpRecordParseFailure(a7, 15488LL, v124);
        v11 = v69;
        goto LABEL_347;
      }
      Child = CmpCreateKeyBody(BugCheckParameter2, v94, a7, v143, 0, (__int64)v54, (ULONG_PTR **)&Object, v139);
      v125 = (unsigned int)Child;
      v11 = v69;
      if ( Child < 0 )
      {
        if ( Child == -1073741444 )
          v125 = 3221225524LL;
        Child = v125;
        CmpRecordParseFailure(a7, 15552LL, v125);
        goto LABEL_347;
      }
      goto LABEL_212;
    }
    if ( (_BYTE)v145 )
    {
      Child = -1073741811;
      CmpRecordParseFailure(a7, 9728LL, 3221225485LL);
      v11 = v69;
      goto LABEL_347;
    }
    if ( (unsigned __int8)CmpIsKeyStackDeleted(v53, v143)
      || !(unsigned __int8)CmRmIsKCBVisible(*(_QWORD *)(BugCheckParameter2 + 72), v143) )
    {
      Child = -1073741772;
      CmpRecordParseFailure(a7, 9984LL, 3221225524LL);
      v11 = v69;
      goto LABEL_347;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 72) + 184LL) & 0x20000) != 0 )
    {
      Child = -1073741772;
      CmpRecordParseFailure(a7, 10240LL, 3221225524LL);
      v11 = v69;
      goto LABEL_347;
    }
    if ( (*(_DWORD *)a7 & 1) == 0 )
    {
      if ( CmpLoadingSystemHivesActive
        && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
        && *(PVOID *)(BugCheckParameter2 + 32) == CmpMasterHive
        && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x7FE00000) == 0x600000
        && (v96 = CmpGetComponentNameAtIndex(v170, (unsigned int)v71),
            (unsigned __int8)CmpWaitForHiveMount(v96, 2LL, 0LL, a7 + 136)) )
      {
        *(_DWORD *)a7 |= 0x100u;
        Child = 259;
        CmpRecordParseFailure(a7, 10496LL, 259LL);
        v11 = v69;
      }
      else
      {
        Child = -1073741772;
        CmpRecordParseFailure(a7, 10752LL, 3221225524LL);
        v11 = v69;
      }
      goto LABEL_347;
    }
    if ( *(PVOID *)(BugCheckParameter2 + 32) == CmpMasterHive
      && CmpNoMasterCreates
      && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
    {
      if ( CmpLoadingSystemHivesActive
        && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x7FE00000) == 0x600000
        && (v97 = CmpGetComponentNameAtIndex(v170, (unsigned int)v71),
            (unsigned __int8)CmpWaitForHiveMount(v97, 2LL, 0LL, a7 + 136)) )
      {
        *(_DWORD *)a7 |= 0x100u;
        Child = 259;
        CmpRecordParseFailure(a7, 11008LL, 259LL);
        v11 = v69;
      }
      else
      {
        Child = -1073741811;
        CmpRecordParseFailure(a7, 11264LL, 3221225485LL);
        v11 = v69;
      }
      goto LABEL_347;
    }
    v98 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v170, (unsigned int)v71);
    v99 = v157;
    LOBYTE(v100) = 1;
    v101 = (int)v98;
    v102 = CmpDoWritethroughReparse(BugCheckParameter2, (int)v54, (int)v53, v100, v98, a7, v157);
    Child = v102;
    if ( v102 != -1073741199 )
    {
      CmpRecordParseFailure(a7, 11392LL, v102);
      v11 = v69;
      goto LABEL_347;
    }
    if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess(a7 + 168);
      *(_DWORD *)(a7 + 160) |= 1u;
    }
    if ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 72) + 40LL) == -1 )
    {
      v94 = v138;
      if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                               v101,
                               (_DWORD)v53,
                               v150,
                               v138,
                               16 * (*(_DWORD *)(a7 + 24) & 2u),
                               (*(_DWORD *)(a7 + 24) & 4) != 0,
                               v143,
                               (__int64)&Child) )
      {
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          if ( !CmpDoesProcessBelongToServiceSession((__int64)CurrentThreadProcess) )
          {
            if ( CmpCheckKeyOwnerForPca((__int64)v53) )
            {
              v142[0] = 1;
              v159 = CmpConstructName(*(_QWORD *)(BugCheckParameter2 + 72));
            }
          }
        }
        CmpRecordParseFailure(a7, 11520LL, (unsigned int)Child);
        v11 = v69;
        goto LABEL_347;
      }
      CmpUnlockKcbStack((__int64)v54);
      CmpUnlockKcbStack((__int64)v53);
      if ( BYTE1(v136) )
      {
        CmpUnlockKcb(*(_QWORD *)(v152 + 8));
        BYTE1(v136) = 0;
      }
      LOBYTE(v104) = 1;
      Child = CmpPromoteKey(v53, 0LL, v104);
      v105 = (unsigned int)Child;
      if ( Child < 0 )
      {
        if ( Child == -1073741444 )
          v105 = 3221225524LL;
        Child = v105;
        CmpRecordParseFailure(a7, 11776LL, v105);
        v11 = v69;
        goto LABEL_348;
      }
    }
    else
    {
      CmpUnlockKcbStack((__int64)v54);
      CmpUnlockKcbStack((__int64)v53);
      CmpLockKcbStackTopExclusiveRestShared(v53);
      v94 = v138;
    }
    CmpLockKcbStackTopExclusiveRestShared(v54);
    if ( !(unsigned __int8)CmRmIsKCBVisible(BugCheckParameter2, v143) )
    {
      Child = -1073741772;
      CmpRecordParseFailure(a7, 12032LL, 3221225524LL);
      v11 = 1;
      goto LABEL_347;
    }
    if ( (unsigned __int8)CmpIsKeyStackDeleted(v54, v143) )
    {
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v53, v143)
        || !(unsigned __int8)CmRmIsKCBVisible(*(_QWORD *)(BugCheckParameter2 + 72), v143) )
      {
        Child = -1073741772;
        CmpRecordParseFailure(a7, 12288LL, 3221225524LL);
        v11 = 1;
        goto LABEL_347;
      }
      v106 = *(_QWORD *)(BugCheckParameter2 + 72);
      if ( (*(_DWORD *)(v106 + 184) & 0x20000) != 0 )
      {
        Child = -1073741772;
        CmpRecordParseFailure(a7, 12544LL, 3221225524LL);
        v11 = 1;
        goto LABEL_347;
      }
      v133 = v99;
      v107 = v150;
      Logic = CmpVEExecuteCreateLogic(
                v106,
                BugCheckParameter2,
                v101,
                v150,
                v94,
                16 * (*(_DWORD *)(a7 + 24) & 2u),
                v143,
                a7,
                v133);
      Child = Logic;
      if ( Logic == -1073741739 )
      {
        *(_DWORD *)a7 |= 0x400u;
        Child = -1073741267;
        CmpRecordParseFailure(a7, 12672LL, 3221226029LL);
        v11 = 1;
        goto LABEL_347;
      }
      if ( Logic != -1073741199 )
      {
        CmpRecordParseFailure(a7, 12736LL, Logic);
        v11 = 1;
        goto LABEL_347;
      }
      if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                               v101,
                               (_DWORD)v53,
                               v107,
                               v94,
                               16 * (*(_DWORD *)(a7 + 24) & 2u),
                               (*(_DWORD *)(a7 + 24) & 4) != 0,
                               v143,
                               (__int64)&Child) )
      {
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          v109 = PsGetCurrentThreadProcess();
          if ( !CmpDoesProcessBelongToServiceSession((__int64)v109) )
          {
            if ( CmpCheckKeyOwnerForPca((__int64)v53) )
            {
              v142[0] = 1;
              v159 = CmpConstructName(*(_QWORD *)(BugCheckParameter2 + 72));
            }
          }
        }
        CmpRecordParseFailure(a7, 12800LL, (unsigned int)Child);
        v11 = 1;
        goto LABEL_347;
      }
      v110 = CmpCreateKeyBody(BugCheckParameter2, v94, a7, v143, 1, (__int64)v54, (ULONG_PTR **)&Object, v139);
      Child = v110;
      if ( v110 < 0 )
      {
        CmpRecordParseFailure(a7, 12928LL, (unsigned int)v110);
        v11 = 1;
        goto LABEL_347;
      }
      v111 = CmpCreateChild((_DWORD)v53, (_DWORD)v54, v107, v101, a7, 8 * (*(_WORD *)(a7 + 24) & 2u), 0, v143);
      Child = v111;
      if ( v111 < 0 )
      {
        CmpRecordParseFailure(a7, 12992LL, (unsigned int)v111);
        v11 = 1;
        goto LABEL_347;
      }
      *(_DWORD *)(a7 + 32) = 1;
      v92 = v107;
      goto LABEL_282;
    }
    if ( !(unsigned __int8)CmpIsKeyStackSymlink(v54) || (*(_DWORD *)a7 & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x20000) != 0 )
      {
        Child = -1073741772;
        CmpRecordParseFailure(a7, 13568LL, 3221225524LL);
        v11 = 1;
        goto LABEL_347;
      }
      if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
      {
        v115 = CmpDoWritethroughReparse(BugCheckParameter2, (int)v54, (int)v53, 0, 0LL, a7, v99);
        Child = v115;
        if ( v115 != -1073741199 )
        {
          CmpRecordParseFailure(a7, 13888LL, v115);
          v11 = 1;
          goto LABEL_347;
        }
        v92 = v150;
        LOBYTE(v116) = 1;
        v117 = CmpVEExecuteOpenLogic(BugCheckParameter2, a7, v116, v99, v94, v150 + 32);
        Child = v117;
        if ( v117 != -1073741199 )
        {
          CmpRecordParseFailure(a7, 13952LL, v117);
          v11 = 1;
          goto LABEL_347;
        }
        v118 = CmpCreateKeyBody(BugCheckParameter2, v94, a7, v143, 1, (__int64)v54, (ULONG_PTR **)&Object, v139);
        Child = v118;
        if ( v118 < 0 )
        {
          CmpRecordParseFailure(a7, 14016LL, (unsigned int)v118);
          v11 = 1;
          goto LABEL_347;
        }
LABEL_282:
        v11 = 1;
        goto LABEL_212;
      }
      v112 = 13824LL;
    }
    else
    {
      if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
      {
        CmpUnlockKcbStack((__int64)v53);
        if ( BYTE1(v136) )
        {
          CmpUnlockKcb(*(_QWORD *)(v152 + 8));
          BYTE1(v136) = 0;
        }
        if ( (_BYTE)v136 )
        {
          CmpUnlockHashEntryByKcb(BugCheckParameter2);
          LOBYTE(v136) = 0;
        }
        v113 = CmpGetSymbolicLinkTarget((_DWORD)v54, (unsigned int)v170, 0, 0, v143, a7, (__int64)v161, v99, a7 + 88);
        Child = v113;
        if ( v113 >= 0 )
        {
          *(_DWORD *)a7 &= ~8u;
          if ( !*(_QWORD *)(a7 + 64) )
          {
            v114 = *(_QWORD *)(BugCheckParameter2 + 32);
            if ( (*(_DWORD *)(v114 + 4152) & 1) != 0 )
              *(_QWORD *)(a7 + 64) = v114;
          }
          Child = 260;
          CmpRecordParseFailure(a7, 13440LL, 260LL);
        }
        else
        {
          CmpRecordParseFailure(a7, 13312LL, (unsigned int)v113);
        }
LABEL_350:
        if ( BYTE1(v136) )
          CmpUnlockKcb(*(_QWORD *)(v152 + 8));
        if ( HIBYTE(v145) )
        {
          CmpUnlockHashEntry(*(PVOID *)(a7 + 48));
          v14 = BugCheckParameter4;
          v18 = v134;
          goto LABEL_359;
        }
        goto LABEL_357;
      }
      v112 = 13056LL;
    }
    Child = -1073741771;
    CmpRecordParseFailure(a7, v112, 3221225525LL);
    v11 = 1;
    goto LABEL_347;
  }
  Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(BugCheckParameter2 + 32), v15, (_DWORD)v51, 0, (__int64)&v143);
  if ( Child >= 0 )
    goto LABEL_102;
  if ( (_BYTE)v136 )
  {
    CmpUnlockHashEntryByKcb(BugCheckParameter2);
    LOBYTE(v136) = 0;
  }
  CmpUnlockRegistry();
  Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(BugCheckParameter2 + 32), v15, (_DWORD)v51, 1, (__int64)&v143);
  CmpLockRegistry();
  v52 = (unsigned int)Child;
  v18 = 1;
  if ( Child >= 0 )
    v52 = 3221226029LL;
  Child = v52;
  CmpRecordParseFailure(a7, 3072LL, v52);
  v14 = BugCheckParameter4;
LABEL_359:
  if ( (_BYTE)v136 )
    CmpUnlockHashEntryByKcb(BugCheckParameter2);
  if ( v141 )
    CmpUnlockHashEntryByKcb(v14);
  CmpCleanupKcbStack(v164);
  CmpCleanupKcbStack(v168);
  CmpCleanupKcbStack(v163);
  if ( v156 )
  {
    CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter2);
    BugCheckParameter2 = 0LL;
    CmpDereferenceKeyControlBlock(v156);
  }
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  if ( v14 )
    CmpDereferenceKeyControlBlock(v14);
  v127 = *(_DWORD *)(a7 + 96);
  if ( v127 && (v127 & 2) != 0 )
  {
    CmpSearchKeyControlBlockTree(CmpSyncKcbCacheForHive, *(_QWORD *)(a7 + 112), v161, 0LL);
    *(_DWORD *)(a7 + 96) &= ~2u;
  }
  CmpDrainDelayDerefContext(v161);
  if ( v18 )
    CmpUnlockRegistry();
  v128 = (void *)v159;
  if ( v142[0] )
  {
    if ( !v159 )
      goto LABEL_380;
    if ( CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(a7, v128);
  }
  if ( v128 )
    CmpFreeTransientPoolWithTag(v128, 0x624E4D43u);
LABEL_380:
  if ( (*(_DWORD *)(a7 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(a7 + 168);
  if ( Object )
    ObfDereferenceObject(Object);
  CmpCleanupPathInfo(v170);
  return (unsigned int)Child;
}
