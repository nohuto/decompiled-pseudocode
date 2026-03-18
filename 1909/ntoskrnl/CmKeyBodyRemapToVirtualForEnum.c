/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0
 * Callers:
 *     NtQueryValueKey @ 0x1405FEFD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1406010E0 (NtQueryKey.c)
 *     NtQueryMultipleValueKey @ 0x14063E0F0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x140660AE0 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140662B00 (NtEnumerateKey.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x1405B21D0 (SeCreateAccessStateFromSubjectContext.c)
 *     ObReferenceObjectByName @ 0x1405C6D50 (ObReferenceObjectByName.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x140600290 (CmpIsKcbInsideVirtualizedHive.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     SeDeleteAccessState @ 0x14061B630 (SeDeleteAccessState.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpFreeExtraParameter @ 0x1408267E8 (CmpFreeExtraParameter.c)
 *     CmVirtualKCBToRealPath @ 0x14082B9DC (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x14082C71C (CmpReparseToVirtualPath.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(_QWORD *a1, char a2, int a3, _QWORD *a4)
{
  __int64 v6; // rbx
  ULONG_PTR v7; // rsi
  char v8; // r12
  int v9; // edx
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *p_Lock; // r13
  _QWORD *v12; // rbx
  struct _KTHREAD *v13; // r15
  ULONG_PTR v14; // rdi
  struct _KTHREAD *v15; // r14
  signed __int64 *v16; // rbx
  int v17; // ecx
  bool v18; // cl
  void *v19; // r9
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rdx
  int AccessStateFromSubjectContext; // edi
  unsigned int v24; // esi
  _QWORD *v25; // r14
  int v26; // edx
  int v27; // edx
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  char TokenInformation; // [rsp+48h] [rbp-C0h]
  char TokenInformation_1; // [rsp+49h] [rbp-BFh]
  int TokenInformation_4; // [rsp+4Ch] [rbp-BCh] BYREF
  PACCESS_TOKEN Token; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h]
  _QWORD *v38; // [rsp+60h] [rbp-A8h]
  signed __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h] BYREF
  __int64 v41; // [rsp+78h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43; // [rsp+90h] [rbp-78h]
  _QWORD *v44; // [rsp+98h] [rbp-70h]
  int v45; // [rsp+A0h] [rbp-68h]
  _QWORD *v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  __int64 v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h]
  _QWORD v51[38]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v52[6]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v53[20]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v54[28]; // [rsp+2D8h] [rbp+1D0h] BYREF

  LODWORD(v41) = a3;
  TokenInformation = a2;
  v46 = a1;
  v44 = a4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v51, 0, 0x128uLL);
  memset(v53, 0, sizeof(v53));
  memset(v54, 0, sizeof(v54));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v6 = *a1;
  v43 = v6;
  memset(v52, 0, sizeof(v52));
  v40 = 0LL;
  memset(v51, 0, 0x90uLL);
  memset(&v51[20], 0, 0x88uLL);
  v51[19] = &v51[18];
  v51[18] = &v51[18];
  memset(&v51[27], 0, 0x50uLL);
  *a4 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = 0;
  TokenInformation_1 = 0;
  Token = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( *(_WORD *)(v7 + 66) || (*(_DWORD *)(v6 + 48) & 0x10) != 0 || !CmpVEEnabled )
    goto LABEL_79;
  v9 = *(_DWORD *)(v7 + 184);
  if ( (v9 & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v7) )
  {
    v8 = 1;
    goto LABEL_9;
  }
  if ( (v9 & 0x1000000) == 0 )
  {
LABEL_79:
    AccessStateFromSubjectContext = 0;
    goto LABEL_80;
  }
  TokenInformation_1 = 1;
LABEL_9:
  CurrentThread = KeGetCurrentThread();
  p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
  v39 = p_Lock[93];
  if ( CurrentThread )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v12 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v12);
        LODWORD(v37) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
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
  }
  else
  {
    v12 = 0LL;
  }
  Token = v12;
  v14 = ObFastReferenceObject(p_Lock + 108);
  if ( !v14 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = p_Lock + 92;
    ExAcquirePushLockSharedEx((ULONG_PTR)(p_Lock + 92), 0LL);
    v14 = ObFastReferenceObjectLocked(p_Lock + 108);
    if ( _InterlockedCompareExchange64(p_Lock + 92, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v16);
    KeAbPostRelease((ULONG_PTR)v16);
    KeLeaveCriticalRegionThread((__int64)v15);
    v12 = Token;
  }
  v38 = (_QWORD *)v14;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 1144) + 284LL));
      if ( v14 == SepTokenLeakToken )
        __debugbreak();
      v12 = Token;
    }
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12[143] + 284LL));
      v12 = Token;
      if ( Token == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_68;
  v17 = v51[2];
  if ( (v51[2] & 1) == 0 )
  {
    if ( TokenInformation )
    {
      v19 = v38;
      v20 = 0;
      TokenInformation_4 = 0;
      if ( v12 )
        v19 = v12;
      LOBYTE(v20) = v12 != 0LL;
      v45 = v20 + 1;
      if ( !v12 )
      {
        SeQueryInformationToken(v19, TokenVirtualizationEnabled, (PVOID *)&TokenInformation_4);
        if ( TokenInformation_4 )
        {
          LODWORD(v51[2]) |= 5u;
          v18 = 0;
          goto LABEL_40;
        }
        v17 = v51[2];
      }
      LODWORD(v51[2]) = v17 | 3;
    }
LABEL_68:
    AccessStateFromSubjectContext = 0;
    goto LABEL_69;
  }
  v18 = (v51[2] & 2) != 0;
LABEL_40:
  if ( v18 || v8 && (*(_DWORD *)(v7 + 184) & 0x800000) == 0 )
    goto LABEL_68;
  CmpAttachToRegistryProcess((__int64)v52);
  CmpLockRegistry();
  ExAcquirePushLockSharedEx(v7 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 56));
  if ( !v8 )
  {
    if ( (int)CmVirtualKCBToRealPath(v7, &DestinationString) < 0 )
    {
LABEL_48:
      AccessStateFromSubjectContext = 0;
      goto LABEL_49;
    }
    v21 = v43;
LABEL_51:
    CmpUnlockKcb(v7);
    CmpUnlockRegistry();
    v24 = v41;
    v25 = v46;
    v26 = 8;
    LODWORD(v51[0]) = 8;
    if ( !(_DWORD)v41 )
      v26 = 4104;
    v51[9] = *(_QWORD *)(*v46 + 56LL);
    LODWORD(v51[0]) = v26;
    AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                      (__int64)&Token,
                                      v53,
                                      v54,
                                      v41,
                                      (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_65;
    v27 = 1600;
    if ( TokenInformation != 1 )
      v27 = 576;
    AccessStateFromSubjectContext = ObReferenceObjectByName(
                                      (__int64)&DestinationString,
                                      v27,
                                      v53,
                                      v24,
                                      (__int64)CmKeyObjectType,
                                      0,
                                      (__int64)v51,
                                      &v40);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      v28 = v44;
      if ( v8 )
      {
        *v44 = v40;
      }
      else
      {
        *v25 = v40;
        *v28 = v21;
      }
      v40 = 0LL;
    }
    else if ( !TokenInformation_1 )
    {
LABEL_64:
      SeDeleteAccessState(v53);
LABEL_65:
      KiUnstackDetachProcess((struct _KTHREAD *)v52, 0);
      v12 = Token;
      goto LABEL_69;
    }
    AccessStateFromSubjectContext = 0;
    goto LABEL_64;
  }
  v21 = v43;
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v43, 0LL);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    if ( !(unsigned __int8)CmpReparseToVirtualPath(v7, v22, &Token, &DestinationString) )
      goto LABEL_48;
    goto LABEL_51;
  }
LABEL_49:
  CmpUnlockKcb(v7);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((struct _KTHREAD *)v52, 0);
  v12 = Token;
LABEL_69:
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    if ( v38 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v38[143] + 284LL));
      if ( v38 == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
      v12 = Token;
    }
    if ( v12 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v12[143] + 284LL));
      if ( Token == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)v38);
  if ( Token )
    ObfDereferenceObject(Token);
LABEL_80:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v51[11] )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v51[11]);
    CmpUnlockRegistry();
  }
  v29 = (_QWORD *)v51[18];
  v30 = *(_QWORD *)v51[18];
  if ( *(_QWORD **)(v51[18] + 8LL) != &v51[18] || *(_QWORD *)(v30 + 8) != v51[18] )
    goto LABEL_91;
  v51[18] = *(_QWORD *)v51[18];
  *(_QWORD *)(v30 + 8) = &v51[18];
  if ( v29 != &v51[18] )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(v29);
      v29 = (_QWORD *)v51[18];
      v31 = *(_QWORD *)v51[18];
      if ( *(_QWORD **)(v51[18] + 8LL) != &v51[18] || *(_QWORD *)(v31 + 8) != v51[18] )
        break;
      v51[18] = *(_QWORD *)v51[18];
      *(_QWORD *)(v31 + 8) = &v51[18];
      if ( v29 == &v51[18] )
        return (unsigned int)AccessStateFromSubjectContext;
    }
LABEL_91:
    __fastfail(3u);
  }
  return (unsigned int)AccessStateFromSubjectContext;
}
