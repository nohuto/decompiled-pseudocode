/*
 * XREFs of ObpIncrementHandleCountEx @ 0x1405E45F0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405C95A8 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x140613FA0 (ObCompleteObjectDuplication.c)
 *     ObInheritObjectHandle @ 0x140697B64 (ObInheritObjectHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406A6BC8 (ObCaptureObjectStateForDuplication.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     PspChargeQuota @ 0x14004D3A0 (PspChargeQuota.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     PspReturnQuota @ 0x1400BE910 (PspReturnQuota.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x14013A8E0 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ObpDeleteNameCheck @ 0x1405AA740 (ObpDeleteNameCheck.c)
 *     SeComputeQuotaInformationSize @ 0x1405CABB0 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x1405CBCA8 (PsReturnSharedPoolQuota.c)
 *     ObpLockHandleDataBaseEntry @ 0x140698E30 (ObpLockHandleDataBaseEntry.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x140862B0C (ObpUnlockHandleDatabaseEntry.c)
 */

__int64 __fastcall ObpIncrementHandleCountEx(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int8 a5,
        __int16 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int8 v9; // r12
  unsigned __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdi
  char v13; // cl
  _DWORD *v14; // r15
  char v15; // al
  char v16; // r13
  __int64 v17; // r14
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  __int64 v20; // rbp
  unsigned __int64 v21; // rcx
  __int64 v22; // rbp
  int v23; // ebp
  char v24; // r8
  ULONG_PTR v25; // r8
  bool v26; // zf
  unsigned int v27; // r12d
  unsigned __int32 v28; // esi
  __int64 v30; // rdx
  _KPROCESS *v31; // r13
  struct _KTHREAD *v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rbp
  int v35; // eax
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  __int64 v37; // rax
  int *v38; // rax
  _DWORD *v39; // rdx
  int v40; // ecx
  _DWORD *i; // rax
  _QWORD *v42; // rax
  __int64 *v43; // rbx
  char *v44; // rcx
  struct _KTHREAD *v45; // rax
  __int64 **v46; // rax
  char v47; // [rsp+40h] [rbp-C8h]
  unsigned int v48; // [rsp+44h] [rbp-C4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-C0h]
  unsigned int v50; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v51; // [rsp+58h] [rbp-B0h]
  unsigned int v52; // [rsp+60h] [rbp-A8h]
  int v53; // [rsp+64h] [rbp-A4h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-A0h]
  __int64 v55; // [rsp+70h] [rbp-98h]
  __int64 v56; // [rsp+78h] [rbp-90h]
  _BYTE v57[48]; // [rsp+80h] [rbp-88h] BYREF

  v7 = a7;
  v8 = a4 - 48;
  v55 = a2;
  v56 = a4;
  v9 = 1;
  v51 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  BugCheckParameter1 = a3;
  v10 = *(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)ObHeaderCookie ^ v51;
  v52 = a1;
  if ( (a6 & 0x400) == 0 )
    v9 = a5;
  CurrentThread = KeGetCurrentThread();
  v12 = ObTypeIndexTable[v10];
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  v13 = *(_BYTE *)(v8 + 27);
  v14 = 0LL;
  v15 = *(_BYTE *)(v8 + 26);
  v16 = v13 & 1;
  v48 = 0;
  if ( (v15 & 8) != 0 )
    v17 = v8 - ObpInfoMaskToOffset[v15 & 0xF];
  else
    v17 = 0LL;
  if ( v16 )
  {
    *(_BYTE *)(v8 + 27) = v13 & 0xFE;
    if ( v17 )
    {
      v18 = *(_DWORD *)v17;
      v19 = *(_DWORD *)(v17 + 4);
      v50 = *(_DWORD *)v17;
      LODWORD(v51) = v19;
      if ( a7 || (v20 = *(_QWORD *)(v8 + 40)) != 0 && (v7 = v20 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v23 = SeComputeQuotaInformationSize(v7, &v48);
        if ( v23 < 0 )
          goto LABEL_97;
        v33 = v48;
        if ( v48 )
        {
          if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
          {
            v34 = 1LL;
          }
          else
          {
            v34 = *(_QWORD *)(BugCheckParameter1 + 1040);
            v35 = PspChargeQuota(v34, 0LL, 1, v48);
            v18 = v50;
            v19 = v51;
            if ( v35 < 0 )
              v34 = 0LL;
            else
              _InterlockedIncrement((volatile signed __int32 *)(v34 + 512));
            v33 = v48;
          }
          *(_QWORD *)(v17 + 16) = v34;
          if ( !v34 )
            goto LABEL_91;
        }
        *(_DWORD *)(v17 + 8) = v33;
      }
    }
    else
    {
      v48 = 0;
      v37 = ObTypeIndexTable[*(unsigned __int8 *)(v8 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v51];
      v18 = *(_DWORD *)(v37 + 104);
      v19 = *(_DWORD *)(v37 + 108);
      v50 = v18;
    }
    v21 = v19;
    v51 = v19;
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    {
      v22 = 1LL;
    }
    else
    {
      v22 = *(_QWORD *)(BugCheckParameter1 + 1040);
      if ( !v18 )
      {
LABEL_13:
        if ( v21 && (int)PspChargeQuota(v22, 0LL, 0, v21) < 0 )
        {
          if ( v50 )
            PspReturnQuota((char *)v22, 0LL, 1u, v50);
          v22 = 0LL;
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v22 + 512));
        }
        goto LABEL_16;
      }
      if ( (int)PspChargeQuota(v22, 0LL, 1, v18) >= 0 )
      {
        v21 = v51;
        goto LABEL_13;
      }
      v22 = 0LL;
    }
LABEL_16:
    *(_QWORD *)(v8 + 32) = v22;
    if ( v22 )
      goto LABEL_17;
    if ( v17 )
    {
      v44 = *(char **)(v17 + 16);
      if ( v44 )
        PsReturnSharedPoolQuota(v44, v48, 0LL);
    }
LABEL_91:
    v23 = -1073741756;
    goto LABEL_97;
  }
LABEL_17:
  v23 = 0;
  v24 = *(_BYTE *)(v8 + 27) & 8;
  if ( (a6 & 0x20) != 0 )
  {
    if ( v24 == 0 || (a6 & 2) != 0 )
    {
      v23 = -1073741811;
      goto LABEL_97;
    }
    if ( (!v24 || !*(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8)) && *(_QWORD *)(v8 + 8) )
      goto LABEL_79;
    if ( v24 )
    {
      v42 = (_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8);
      v25 = BugCheckParameter1;
      if ( *v42 && *v42 != BugCheckParameter1 )
        goto LABEL_79;
    }
    else
    {
      v25 = BugCheckParameter1;
    }
    *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = v25;
  }
  else
  {
    if ( v24 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8) )
      goto LABEL_79;
    v25 = BugCheckParameter1;
  }
  if ( v9 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
  {
LABEL_79:
    v23 = -1073741790;
    goto LABEL_97;
  }
  if ( !*(_QWORD *)(v8 + 8)
    && !v16
    && (*(_BYTE *)(v12 + 66) & 0x10) != 0
    && !*(_QWORD *)(v12 + 120)
    && *(_QWORD *)(v12 + 128) )
  {
    v23 = -1073741823;
    goto LABEL_97;
  }
  v26 = (*(_BYTE *)(v12 + 66) & 0x10) == 0;
  v53 = 0;
  if ( !v26 )
  {
    v23 = ObpLockHandleDataBaseEntry(v8, BugCheckParameter1, &v53);
    if ( v23 >= 0 )
    {
      v25 = BugCheckParameter1;
      goto LABEL_25;
    }
LABEL_97:
    ExReleasePushLockEx(BugCheckParameter2, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v23;
  }
LABEL_25:
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
  if ( !*(_QWORD *)(v12 + 120) )
  {
    v27 = v52;
LABEL_27:
    if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    {
      v30 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
      if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v30 + 11);
        *(_DWORD *)(v30 + 8) ^= (*(_DWORD *)(v30 + 8) ^ (*(_DWORD *)(v30 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v38 = *(int **)v30;
        v39 = 0LL;
        v40 = *v38;
        for ( i = v38 + 2; v40; --v40 )
        {
          if ( *(_QWORD *)i == v25 )
          {
            if ( !v39 )
              v39 = i;
            v14 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v39[2] ^= (v39[2] ^ (v39[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v14 + 11);
      }
    }
    ExReleasePushLockEx(v8 + 16, 0LL);
    KeLeaveCriticalRegion();
    if ( !v27 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v43 = (__int64 *)(v8 - 32);
      if ( v43 )
      {
        v45 = KeGetCurrentThread();
        --v45->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v12 + 184, 0LL);
        v46 = *(__int64 ***)(v12 + 8);
        if ( *v46 != (__int64 *)v12 )
          __fastfail(3u);
        *v43 = v12;
        v43[1] = (__int64)v46;
        *v46 = v43;
        *(_QWORD *)(v12 + 8) = v43;
        ExReleasePushLockEx(v12 + 184, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    v28 = _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
    if ( v28 > *(_DWORD *)(v12 + 56) )
      *(_DWORD *)(v12 + 56) = v28;
    return (unsigned int)v23;
  }
  ExReleasePushLockEx(v8 + 16, 0LL);
  KeLeaveCriticalRegion();
  v31 = (_KPROCESS *)BugCheckParameter1;
  v27 = v52;
  v47 = 0;
  v51 = 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process && v52 != 3 )
  {
    v47 = 1;
    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(BugCheckParameter1);
    v51 = (unsigned __int64)PsAttachSiloToCurrentThread(ProcessServerSilo);
    KiStackAttachProcess(v31, 0LL, (__int64)v57);
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _KPROCESS *, __int64, __int64, int))(v12 + 120))(
          v27,
          a5,
          v31,
          v56,
          v55,
          v53);
  if ( v47 )
  {
    KiUnstackDetachProcess((__int64)v57, 0LL);
    PsDetachSiloFromCurrentThread((struct _LIST_ENTRY *)v51);
  }
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  if ( v23 >= 0 )
  {
    v25 = (ULONG_PTR)v31;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    ObpUnlockHandleDatabaseEntry(v8, v31);
  _InterlockedDecrement64((volatile signed __int64 *)(v8 + 8));
  ExReleasePushLockEx(v8 + 16, 0LL);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v8);
  return (unsigned int)v23;
}
