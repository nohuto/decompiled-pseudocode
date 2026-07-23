/*
 * XREFs of CmQueryKey @ 0x1405D7900
 * Callers:
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpRecordRegistryLockAcquire @ 0x1401B3134 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockRelease @ 0x1401B3164 (CmpRecordRegistryLockRelease.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     KCBNeedsVirtualImage_0 @ 0x14026C5AC (KCBNeedsVirtualImage_0.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpQueryKeyData @ 0x1405D88B8 (CmpQueryKeyData.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x1406BD8D8 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406BD924 (CmpLockTwoKcbsShared.c)
 *     CmGetKeyFlags @ 0x140765030 (CmGetKeyFlags.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1407F2744 (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x1407F33A0 (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1407F40CC (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, __int64 a6)
{
  __int64 v10; // r12
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rbx
  __int64 v13; // rcx
  unsigned int LayeredKey; // ebx
  __int64 v16; // rcx
  int v17; // r12d
  ULONG_PTR v18; // rax
  UNICODE_STRING *p_UnicodeString; // rax
  unsigned int v20; // edx
  unsigned int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  struct _KTHREAD *v25; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v27; // ebx
  ULONG_PTR v28; // r12
  bool v29; // al
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  int v32; // edx
  unsigned int v33; // edx
  int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  __int64 v37; // rcx
  int v38; // r8d
  __int64 v39; // rcx
  ULONG_PTR v40; // rdi
  int v41; // ebx
  __int64 v42; // rdx
  int v43; // [rsp+50h] [rbp-188h]
  _DWORD v44[3]; // [rsp+54h] [rbp-184h] BYREF
  __int64 v45; // [rsp+60h] [rbp-178h]
  __int64 v46; // [rsp+68h] [rbp-170h] BYREF
  const void **v47; // [rsp+70h] [rbp-168h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-160h]
  unsigned int v49; // [rsp+80h] [rbp-158h] BYREF
  __int64 v50; // [rsp+88h] [rbp-150h]
  unsigned int v51; // [rsp+90h] [rbp-148h]
  unsigned int *v52; // [rsp+98h] [rbp-140h]
  ULONG_PTR v53; // [rsp+A0h] [rbp-138h]
  UNICODE_STRING UnicodeString; // [rsp+A8h] [rbp-130h] BYREF
  UNICODE_STRING *v55; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-118h]
  unsigned int v57; // [rsp+C8h] [rbp-110h]
  _BYTE v58[4]; // [rsp+DCh] [rbp-FCh] BYREF
  _BYTE v59[4]; // [rsp+ECh] [rbp-ECh] BYREF
  struct _KTHREAD *v60; // [rsp+F8h] [rbp-E0h]
  _BYTE v61[8]; // [rsp+100h] [rbp-D8h] BYREF
  _BYTE v62[8]; // [rsp+108h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+110h] [rbp-C8h] BYREF
  char v64; // [rsp+130h] [rbp-A8h] BYREF
  unsigned int v65; // [rsp+140h] [rbp-98h]
  unsigned int v66; // [rsp+148h] [rbp-90h]
  unsigned int v67; // [rsp+14Ch] [rbp-8Ch]
  unsigned int v68; // [rsp+154h] [rbp-84h]
  unsigned int v69; // [rsp+158h] [rbp-80h]
  _BYTE v70[48]; // [rsp+160h] [rbp-78h] BYREF

  v50 = a1;
  v56 = a1;
  v45 = a2;
  v52 = a4;
  *(_QWORD *)&v44[1] = a6;
  v47 = 0LL;
  v10 = 0LL;
  v46 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( qword_140438CE8 )
  {
    KiStackAttachProcess((_KPROCESS *)qword_140438CE8, 0LL, (__int64)v70);
  }
  else
  {
    KiStackAttachProcess(KeGetCurrentThread()->ApcState.Process, 0LL, (__int64)v70);
    v10 = v46;
  }
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpRecordRegistryLockAcquire();
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v10 = v46;
  }
  v12 = *(_QWORD *)(a1 + 8);
  BugCheckParameter2 = v12;
  if ( *(_WORD *)(v12 + 58) )
  {
    LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, *(unsigned int **)&v44[1]);
LABEL_8:
    CmpUnlockRegistry(v13);
    KiUnstackDetachProcess((__int64)v70, 0LL);
    return LayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    ExAcquirePushLockSharedEx(v12 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      LayeredKey = -1073740763;
      if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        LayeredKey = -1073741444;
      CmpUnlockKcb(BugCheckParameter2);
      goto LABEL_8;
    }
    v12 = BugCheckParameter2;
    CmpUnlockKcb(BugCheckParameter2);
    v17 = CmpTransSearchAddTransFromKeyBody(a1, &v46);
    if ( v17 < 0 )
    {
      CmpUnlockRegistry(v16);
      KiUnstackDetachProcess((__int64)v70, 0LL);
      return (unsigned int)v17;
    }
    v10 = v46;
  }
  if ( a2 )
  {
    v12 = *(_QWORD *)(a2 + 8);
    BugCheckParameter2 = v12;
  }
  v18 = *(_QWORD *)(a1 + 8);
  v53 = v18;
  if ( a2 )
  {
    CmpLockTwoKcbsShared(*(_QWORD *)(a2 + 8), v18);
  }
  else
  {
    ExAcquirePushLockSharedEx(v18 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v53 + 48));
    v10 = v46;
    v12 = BugCheckParameter2;
  }
  if ( a3 == 3 )
  {
    v53 = *(_QWORD *)(a1 + 8);
    BugCheckParameter2 = v53;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
    {
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      {
        LayeredKey = -1073740763;
LABEL_119:
        v43 = LayeredKey;
        goto LABEL_120;
      }
      LayeredKey = -1073741444;
    }
    else
    {
      LayeredKey = 0;
    }
    if ( !*(_QWORD *)(v53 + 72) )
    {
LABEL_38:
      LayeredKey = -1073741670;
      goto LABEL_119;
    }
    if ( CmpVEEnabled && (*(_DWORD *)(v53 + 176) & 0x1000000) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v53, &UnicodeString) < 0 )
      {
LABEL_37:
        if ( !v47 )
          goto LABEL_38;
        v20 = *(unsigned __int16 *)v47;
        v51 = v20 + 4;
        **(_DWORD **)&v44[1] = v20 + 4;
        if ( a5 >= 4 )
        {
          *a4 = v20;
          v21 = a5 - 4;
          v57 = a5 - 4;
          v51 = v20;
          if ( a5 - 4 < v20 )
            LayeredKey = -2147483643;
          v43 = LayeredKey;
          if ( v21 >= v20 )
            v21 = v20;
          memmove(a4 + 1, v47[1], v21);
        }
        else
        {
          LayeredKey = -1073741789;
          v43 = -1073741789;
        }
        goto LABEL_80;
      }
      p_UnicodeString = &UnicodeString;
    }
    else
    {
      v55 = 0LL;
      CmpConstructNameWithStatus(v53, &v55);
      p_UnicodeString = v55;
    }
    v47 = (const void **)p_UnicodeString;
    goto LABEL_37;
  }
  if ( (!a2 || !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v10))
    && !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
  {
    switch ( a3 )
    {
      case 5:
        **(_DWORD **)&v44[1] = 12;
        if ( a5 >= 0xC )
        {
          *a4 = CmGetKeyFlags(v12, v10);
          a4[1] = 0;
          v23 = 0;
          if ( *(int *)(v12 + 32) < 0 )
          {
            v23 = 1;
            a4[1] = 1;
          }
          v24 = *(_DWORD *)(v12 + 176);
          if ( (v24 & 0x100000) != 0 )
          {
            a4[1] = v23 | 2;
            v24 = *(_DWORD *)(v12 + 176);
          }
          a4[2] = (unsigned __int8)v24 >> 4;
          LayeredKey = 0;
        }
        else
        {
          LayeredKey = -1073741789;
        }
        v43 = LayeredKey;
        break;
      case 6:
        v25 = KeGetCurrentThread();
        v60 = v25;
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        SeCaptureSubjectContextEx(v25, CurrentThreadProcess, &SubjectContext);
        v27 = 4;
        **(_DWORD **)&v44[1] = 4;
        if ( a5 >= 4 )
        {
          v28 = BugCheckParameter2;
          v29 = KCBNeedsVirtualImage_0(BugCheckParameter2);
          v30 = v29 | *a4 & 0xFFFFFFFE;
          *a4 = v30;
          v31 = v30 & 0xFFFFFFFD;
          *a4 = v31;
          v32 = v31;
          if ( v29 && (*(_DWORD *)(v28 + 176) & 0x20) == 0 )
          {
            v32 = v31 | 2;
            *a4 = v31 | 2;
          }
          if ( !CmpVEEnabled || (*(_DWORD *)(v28 + 176) & 0x1000000) == 0 )
            v27 = 0;
          v33 = v27 | v32 & 0xFFFFFFFB;
          *a4 = v33;
          v34 = v33 ^ ((unsigned __int8)v33 ^ (unsigned __int8)(*(_DWORD *)(v28 + 176) >> 22)) & 8;
          *a4 = v34;
          *a4 = v34 ^ ((unsigned __int8)v34 ^ (unsigned __int8)(*(_DWORD *)(v28 + 176) >> 19)) & 0x10;
          LayeredKey = 0;
        }
        else
        {
          LayeredKey = -1073741789;
        }
        v43 = LayeredKey;
        SeReleaseSubjectContext(&SubjectContext);
        v10 = v46;
        break;
      case 8:
        **(_DWORD **)&v44[1] = 4;
        if ( a5 < 4 )
        {
          LayeredKey = -1073741789;
          goto LABEL_119;
        }
        v35 = *a4;
        if ( (*(_DWORD *)(*(_QWORD *)(v12 + 24) + 4152LL) & 1) != 0 )
          v36 = v35 & 0xFFFFFFFE;
        else
          v36 = v35 | 1;
        *a4 = v36;
        LayeredKey = 0;
        v43 = 0;
        goto LABEL_81;
      default:
        LayeredKey = CmpQueryKeyData(v12, a3, (_DWORD)a4, a5, *(__int64 *)&v44[1], v10);
        v43 = LayeredKey;
        break;
    }
LABEL_80:
    if ( (LayeredKey & 0x80000000) != 0 )
      goto LABEL_120;
LABEL_81:
    if ( a2 )
    {
      if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
      {
        v37 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 160LL);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) < v37 )
          *(_QWORD *)a4 = v37;
      }
      if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
      {
        if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                             *(_QWORD *)(a2 + 8),
                             *(_QWORD *)(a1 + 8),
                             -1,
                             v10,
                             (__int64)v61,
                             (__int64)v58,
                             0LL,
                             (__int64)v44) == -2147483622 )
        {
          if ( a3 == 2 )
            a4[5] = v44[0];
          else
            a4[3] = v44[0];
        }
        LOBYTE(v38) = 1;
        if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v38, -1, 0, 0LL, 0, 0LL, (__int64)v44) == -2147483622 )
        {
          if ( a3 == 2 )
            a4[8] = v44[0];
          else
            a4[5] = v44[0];
        }
        LayeredKey = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (unsigned int)&v64, 48, *(__int64 *)&v44[1], v10);
        v43 = LayeredKey;
        if ( (int)(LayeredKey + 0x80000000) < 0 || LayeredKey == -2147483643 )
        {
          if ( a3 == 2 )
          {
            if ( v66 > a4[6] )
              a4[6] = v66;
            if ( v68 > a4[9] )
              a4[9] = v68;
            if ( v69 > a4[10] )
              a4[10] = v69;
          }
          else
          {
            if ( v65 > a4[4] )
              a4[4] = v65;
            if ( v66 > a4[6] )
              a4[6] = v66;
            if ( v67 > a4[7] )
              a4[7] = v67;
          }
        }
      }
    }
    else if ( CmpVEEnabled )
    {
      v39 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v39 + 176) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
      {
        LayeredKey = CmpFindSubKeyByNumberFromMergedView(
                       v39,
                       0,
                       -1,
                       v10,
                       (__int64)v62,
                       (__int64)v59,
                       0LL,
                       (__int64)&v49);
        v43 = LayeredKey;
        if ( LayeredKey == -2147483622 )
        {
          if ( a3 == 2 )
            a4[5] = v49;
          else
            a4[3] = v49;
          LayeredKey = 0;
          v43 = 0;
        }
      }
    }
    goto LABEL_120;
  }
  v22 = -1073741444;
  if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
    v22 = -1073740763;
  LayeredKey = v22;
  v43 = v22;
LABEL_120:
  v40 = *(_QWORD *)(v56 + 8);
  if ( a2 )
  {
    CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(v56 + 8));
  }
  else
  {
    v41 = *(_DWORD *)(v40 + 4) & 0x80000;
    if ( *(_QWORD *)(v40 + 48) == (_QWORD)KeGetCurrentThread() )
      *(_QWORD *)(v40 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v40 + 48));
    ExReleasePushLockEx(v40 + 40, 0LL);
    if ( v41 && (*(_DWORD *)(v40 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(v40);
    LayeredKey = v43;
  }
  if ( !CmpPuntBoot )
  {
    CmpRecordRegistryLockRelease();
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v42) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v42);
    LayeredKey = v43;
  }
  KiUnstackDetachProcess((__int64)v70, 0LL);
  if ( UnicodeString.Buffer )
  {
    RtlFreeAnsiString(&UnicodeString);
    return LayeredKey;
  }
  else
  {
    if ( !v47 )
      return LayeredKey;
    CmpFreeTransientPoolWithTag(v47, 0x624E4D43u);
    return LayeredKey;
  }
}
