/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByName @ 0x140582128 (CmObReferenceObjectByName.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140583A30 (SeCreateAccessStateFromSubjectContext.c)
 *     SeDeleteAccessState @ 0x1405BE870 (SeDeleteAccessState.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x140640500 (CmpIsKcbInsideVirtualizedHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpFreeExtraParameter @ 0x1407ED7DC (CmpFreeExtraParameter.c)
 *     CmVirtualKCBToRealPath @ 0x1407F33A0 (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x1407F48FC (CmpReparseToVirtualPath.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(__int64 *a1, char a2, ACCESS_MASK a3, PVOID *a4)
{
  __int64 v6; // rbx
  ULONG_PTR v7; // rdi
  char v8; // r12
  int v9; // edx
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *p_Lock; // r13
  void *v12; // rbx
  struct _KTHREAD *v13; // r15
  ULONG_PTR v14; // rbx
  struct _KTHREAD *v15; // r15
  signed __int64 *v16; // rsi
  int v17; // ecx
  bool v18; // cl
  int v19; // eax
  PACCESS_TOKEN v20; // r9
  char v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  ACCESS_MASK v29; // r13d
  PVOID *v30; // rdi
  int v31; // edx
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 *v36; // rcx
  wchar_t *Buffer; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  char v43; // [rsp+48h] [rbp-C0h]
  char v45; // [rsp+4Ah] [rbp-BEh]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-B0h] BYREF
  PACCESS_TOKEN Token; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-A0h]
  _QWORD *v50; // [rsp+70h] [rbp-98h]
  signed __int64 v51; // [rsp+78h] [rbp-90h]
  ACCESS_MASK v52; // [rsp+80h] [rbp-88h]
  __int64 v53; // [rsp+88h] [rbp-80h]
  PVOID *v54; // [rsp+90h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  int v56; // [rsp+A8h] [rbp-60h]
  __int64 *v57; // [rsp+B0h] [rbp-58h]
  __int64 v58; // [rsp+C0h] [rbp-48h]
  __int64 v59; // [rsp+C8h] [rbp-40h]
  __int64 v60; // [rsp+D0h] [rbp-38h]
  __int64 v61; // [rsp+D8h] [rbp-30h]
  int v62; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-20h]
  UNICODE_STRING *p_DestinationString; // [rsp+F0h] [rbp-18h]
  int v65; // [rsp+F8h] [rbp-10h]
  __int128 v66; // [rsp+100h] [rbp-8h]
  _QWORD v67[38]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v68[6]; // [rsp+248h] [rbp+140h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v69[5]; // [rsp+278h] [rbp+170h] BYREF
  __int64 v70[28]; // [rsp+318h] [rbp+210h] BYREF

  v57 = a1;
  v54 = a4;
  v52 = a3;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v6 = *a1;
  v53 = v6;
  memset(v68, 0, sizeof(v68));
  Object = 0LL;
  memset(v67, 0, 0x128uLL);
  v67[19] = &v67[18];
  v67[18] = &v67[18];
  memset(&v67[27], 0, 0x50uLL);
  *a4 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = 0;
  v43 = 0;
  Token = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v45 = 0;
  if ( *(_WORD *)(v7 + 58) || (*(_DWORD *)(v6 + 48) & 0x10) != 0 || !CmpVEEnabled )
    goto LABEL_84;
  v9 = *(_DWORD *)(v7 + 176);
  if ( (v9 & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v7) )
  {
    v8 = 1;
    goto LABEL_9;
  }
  if ( (v9 & 0x1000000) == 0 )
  {
LABEL_84:
    AccessStateFromSubjectContext = 0;
    goto LABEL_85;
  }
  v43 = 1;
LABEL_9:
  CurrentThread = KeGetCurrentThread();
  p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
  v51 = p_Lock[92];
  if ( CurrentThread )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v12 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v12);
        LODWORD(v49) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v12 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v13);
    }
    else
    {
      v12 = 0LL;
    }
    Token = v12;
  }
  else
  {
    Token = 0LL;
  }
  v14 = ObFastReferenceObject(p_Lock + 107);
  if ( !v14 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = p_Lock + 91;
    ExAcquirePushLockSharedEx((ULONG_PTR)(p_Lock + 91), 0LL);
    v14 = ObFastReferenceObjectLocked(p_Lock + 107);
    if ( _InterlockedCompareExchange64(p_Lock + 91, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v16);
    KeAbPostRelease((ULONG_PTR)v16);
    KeLeaveCriticalRegionThread((__int64)v15);
  }
  v50 = (_QWORD *)v14;
  if ( SeTokenLeakTracking )
  {
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 1144) + 284LL));
      if ( v14 == SepTokenLeakToken )
        __debugbreak();
    }
    if ( Token )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Token + 143) + 284LL));
      if ( Token == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_68;
  v17 = v67[2];
  if ( (v67[2] & 1) == 0 )
  {
    if ( a2 )
    {
      v19 = 0;
      v20 = v50;
      LODWORD(TokenInformation) = 0;
      if ( Token )
        v20 = Token;
      LOBYTE(v19) = Token != 0LL;
      v56 = v19 + 1;
      if ( !Token )
      {
        SeQueryInformationToken(v20, TokenVirtualizationEnabled, &TokenInformation);
        if ( (_DWORD)TokenInformation )
        {
          LODWORD(v67[2]) |= 5u;
          v18 = 0;
          goto LABEL_40;
        }
        v17 = v67[2];
      }
      LODWORD(v67[2]) = v17 | 3;
    }
LABEL_68:
    v21 = 0;
    AccessStateFromSubjectContext = 0;
    goto LABEL_69;
  }
  v18 = (v67[2] & 2) != 0;
LABEL_40:
  if ( v18 || v8 && (*(_DWORD *)(v7 + 176) & 0x800000) == 0 )
    goto LABEL_68;
  CmpAttachToRegistryProcess((__int64)v68);
  v21 = 1;
  CmpLockRegistry(v22);
  ExAcquirePushLockSharedEx(v7 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 48));
  if ( !v8 )
  {
    if ( (int)CmVirtualKCBToRealPath(v7, &DestinationString) >= 0 )
    {
      v23 = v53;
      goto LABEL_51;
    }
    AccessStateFromSubjectContext = 0;
LABEL_49:
    CmpUnlockKcb(v7);
    CmpUnlockRegistry(v27);
    goto LABEL_69;
  }
  v23 = v53;
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v53, 0LL);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_49;
  if ( !(unsigned __int8)CmpReparseToVirtualPath(v7, v24, &Token, &DestinationString) )
  {
    AccessStateFromSubjectContext = 0;
    CmpUnlockKcb(v7);
    CmpUnlockRegistry(v26);
    goto LABEL_69;
  }
LABEL_51:
  CmpUnlockKcb(v7);
  CmpUnlockRegistry(v28);
  v29 = v52;
  v30 = (PVOID *)v57;
  v31 = 8;
  LODWORD(v67[0]) = 8;
  if ( !v52 )
    v31 = 4104;
  v67[9] = *(_QWORD *)(*v57 + 56);
  LODWORD(v67[0]) = v31;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    (__int64)&Token,
                                    v69,
                                    v70,
                                    v52,
                                    (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
  if ( AccessStateFromSubjectContext < 0 )
  {
LABEL_69:
    if ( Object )
      ObfDereferenceObject(Object);
    if ( !v45 )
      goto LABEL_73;
    goto LABEL_72;
  }
  v45 = 1;
  v63 = 0LL;
  v62 = 48;
  v33 = 1600;
  v66 = 0LL;
  if ( a2 != 1 )
    v33 = 576;
  v65 = v33;
  p_DestinationString = &DestinationString;
  AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                    (__int64)&v62,
                                    (__int64)v69,
                                    v29,
                                    v32,
                                    0,
                                    (__int64)v67,
                                    &Object);
  if ( AccessStateFromSubjectContext < 0 )
  {
    if ( v43 )
      AccessStateFromSubjectContext = 0;
    goto LABEL_69;
  }
  CmpLockRegistry(v34);
  v35 = *((_QWORD *)Object + 1);
  if ( *(_WORD *)(v35 + 58) )
  {
    if ( v43 )
      AccessStateFromSubjectContext = 0;
    CmpUnlockRegistry(v35);
    goto LABEL_69;
  }
  CmpUnlockRegistry(v35);
  v36 = (__int64 *)v54;
  if ( v8 )
  {
    *v54 = Object;
    Object = 0LL;
    AccessStateFromSubjectContext = 0;
  }
  else
  {
    *v30 = Object;
    Object = 0LL;
    AccessStateFromSubjectContext = 0;
    *v36 = v23;
  }
LABEL_72:
  SeDeleteAccessState(v69);
LABEL_73:
  if ( v21 )
    KiUnstackDetachProcess((__int64)v68, 0LL);
  if ( SeTokenLeakTracking )
  {
    if ( v50 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v50[143] + 284LL));
      if ( v50 == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
    }
    if ( Token )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Token + 143) + 284LL));
      if ( Token == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)v50);
  if ( Token )
    ObfDereferenceObject(Token);
LABEL_85:
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v67[11] )
  {
    CmpLockRegistry(Buffer);
    CmpDereferenceKeyControlBlock(v67[11]);
    CmpUnlockRegistry(v38);
  }
  v39 = (_QWORD *)v67[18];
  v40 = *(_QWORD *)v67[18];
  if ( *(_QWORD **)(v67[18] + 8LL) != &v67[18] || *(_QWORD *)(v40 + 8) != v67[18] )
    goto LABEL_96;
  v67[18] = *(_QWORD *)v67[18];
  *(_QWORD *)(v40 + 8) = &v67[18];
  if ( v39 != &v67[18] )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(v39);
      v39 = (_QWORD *)v67[18];
      v41 = *(_QWORD *)v67[18];
      if ( *(_QWORD **)(v67[18] + 8LL) != &v67[18] || *(_QWORD *)(v41 + 8) != v67[18] )
        break;
      v67[18] = *(_QWORD *)v67[18];
      *(_QWORD *)(v41 + 8) = &v67[18];
      if ( v39 == &v67[18] )
        return (unsigned int)AccessStateFromSubjectContext;
    }
LABEL_96:
    __fastfail(3u);
  }
  return (unsigned int)AccessStateFromSubjectContext;
}
