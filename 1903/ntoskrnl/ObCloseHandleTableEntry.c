/*
 * XREFs of ObCloseHandleTableEntry @ 0x1405F5640
 * Callers:
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     ObpCloseHandle @ 0x14060F2BC (ObpCloseHandle.c)
 *     ExSweepHandleTable @ 0x140692F10 (ExSweepHandleTable.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140003EC4 (ObpReleaseLookupContext.c)
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ObpLockDirectoryExclusive @ 0x14011F12C (ObpLockDirectoryExclusive.c)
 *     PsDereferenceSiloContext @ 0x14012DE80 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x1402A70B0 (KeRaiseUserException.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BF0C0 (ObpLookupDirectoryEntryEx.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406C7A88 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406C7D04 (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryEntry @ 0x1406CD93C (ObpDeleteDirectoryEntry.c)
 *     SeCloseObjectAuditAlarm @ 0x1408DEE20 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x1408F5754 (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x14090B6D8 (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14090B9AC (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        volatile signed __int64 *a2,
        _KPROCESS *a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  __int64 v6; // rsi
  char v8; // r12
  ULONG_PTR v9; // r13
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned __int8 (__fastcall *v14)(ULONG_PTR, unsigned __int64, ULONG_PTR, _QWORD); // r10
  int v15; // r12d
  ULONG_PTR v16; // rbx
  char v17; // r13
  unsigned int Number; // eax
  ULONG_PTR v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned int v23; // r15d
  __int64 v24; // r14
  void (__fastcall *v25)(ULONG_PTR, unsigned __int64, _QWORD, unsigned __int64); // r10
  char v26; // r12
  struct _LIST_ENTRY *v27; // r13
  char v28; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // rdx
  int v32; // eax
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  __int64 v34; // rax
  __int64 v35; // r15
  struct _KTHREAD *v36; // rax
  PVOID v37; // r13
  char v38; // al
  int v39; // ecx
  struct _KTHREAD *v40; // rax
  PVOID v41; // r10
  bool v43; // zf
  void *v44; // r15
  void *v45; // rdi
  _QWORD *HandleExtraInfo; // rax
  __int64 v47; // rax
  signed __int32 v48[8]; // [rsp+0h] [rbp-E9h] BYREF
  char v49; // [rsp+30h] [rbp-B9h]
  ULONG_PTR v50; // [rsp+38h] [rbp-B1h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-A9h]
  unsigned __int64 v52; // [rsp+48h] [rbp-A1h]
  struct _OBJECT_TYPE *v53; // [rsp+50h] [rbp-99h]
  __int64 v54; // [rsp+58h] [rbp-91h]
  __int64 v55[2]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v56; // [rsp+70h] [rbp-79h]
  int v57; // [rsp+78h] [rbp-71h]
  __int16 v58; // [rsp+7Ch] [rbp-6Dh]
  __int16 v59; // [rsp+7Eh] [rbp-6Bh]
  int v60; // [rsp+80h] [rbp-69h]
  int v61; // [rsp+84h] [rbp-65h]
  _QWORD v62[6]; // [rsp+88h] [rbp-61h] BYREF
  _QWORD v63[6]; // [rsp+B8h] [rbp-31h] BYREF

  v6 = *a2;
  memset(v62, 0, sizeof(v62));
  v8 = 0;
  v9 = a4;
  v11 = (v6 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v50 = a4;
  BugCheckParameter1 = (ULONG_PTR)a3;
  v12 = BYTE1(v11) ^ (unsigned __int64)*(unsigned __int8 *)(v11 + 24);
  v54 = BYTE1(v11);
  v49 = 0;
  v13 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v12];
  v14 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, unsigned __int64, ULONG_PTR, _QWORD))(v13 + 168);
  if ( v14 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KiStackAttachProcess(a3, 0, (__int64)v62);
      v14 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, unsigned __int64, ULONG_PTR, _QWORD))(v13 + 168);
      v8 = 1;
      v49 = 1;
    }
    if ( !v14(BugCheckParameter1, v11 + 48, v9, a5) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v48, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v8 )
        KiUnstackDetachProcess((struct _KTHREAD *)v62, 0);
      return 3221226037LL;
    }
  }
  v15 = ((__int64)*(unsigned int *)a2 >> 17) & 7 | 8;
  if ( (a2[1] & 0x2000000) == 0 )
    LOBYTE(v15) = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  if ( (v15 & 1) == 0 || a6 )
  {
    if ( (xmmword_140572410 & 0x40) != 0 )
    {
      if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
        v9 |= 0x80000000uLL;
      EtwpTraceHandle(4385LL, v9, v11 + 48, v13);
    }
    if ( a6 )
    {
      v19 = (unsigned __int64)*a2 >> 1;
      *a2 = 0LL;
      _InterlockedOr(v48, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    }
    else
    {
      v16 = v50;
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), v50, 2LL);
      v53 = (struct _OBJECT_TYPE *)((unsigned __int64)*a2 >> 1);
      *a2 = 0LL;
      _InterlockedOr(v48, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      v52 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(a1 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v52);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0LL;
      }
      *((_QWORD *)a2 + 1) = 0LL;
      v17 = *(_BYTE *)(a1 + 44) & 1;
      if ( v17 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v19 = a1 + ((Number + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v19, 0LL);
      if ( v17 )
      {
        v47 = *(_QWORD *)(v19 + 16);
        if ( v47 )
          *(_QWORD *)(v47 + 8) = a2;
        else
          *(_QWORD *)(v19 + 8) = a2;
        *(_QWORD *)(v19 + 16) = a2;
      }
      else
      {
        v20 = *(_QWORD *)(v19 + 8);
        *((_QWORD *)a2 + 1) = v20;
        if ( !v20 )
          *(_QWORD *)(v19 + 16) = a2;
        *(_QWORD *)(v19 + 8) = a2;
      }
      --*(_DWORD *)(v19 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v19);
      KeAbPostRelease(v19);
      LOWORD(v19) = (_WORD)v53;
    }
    KeLeaveCriticalRegion();
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v21) = 1;
      SeCloseObjectAuditAlarm(v11 + 48, v50 & 0xFFFFFFFFFFFFFFFCuLL, v21);
    }
    v22 = *(unsigned __int8 *)(v11 + 24);
    memset(v63, 0, sizeof(v63));
    v23 = 0;
    v24 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v54 ^ v22];
    if ( (*(_BYTE *)(v24 + 66) & 0x10) == 0 && (*(_BYTE *)(v11 + 27) & 8) == 0 )
    {
      v52 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      goto LABEL_26;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v11 + 16, 0LL);
    v52 = *(_QWORD *)(v11 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v11 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v11 - ObpInfoMaskToOffset[*(_BYTE *)(v11 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v24 + 66) & 0x10) == 0 )
    {
LABEL_49:
      ExReleasePushLockEx(v11 + 16, 0LL);
      KeLeaveCriticalRegion();
LABEL_26:
      v25 = *(void (__fastcall **)(ULONG_PTR, unsigned __int64, _QWORD, unsigned __int64))(v24 + 128);
      if ( v25 )
      {
        v26 = 0;
        v27 = 0LL;
        if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
        {
          v25(BugCheckParameter1, v11 + 48, v23, v52);
        }
        else
        {
          v26 = 1;
          ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(BugCheckParameter1);
          v27 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v63);
          (*(void (__fastcall **)(ULONG_PTR, unsigned __int64, _QWORD, unsigned __int64))(v24 + 128))(
            BugCheckParameter1,
            v11 + 48,
            v23,
            v52);
        }
        if ( v26 )
        {
          KiUnstackDetachProcess((struct _KTHREAD *)v63, 0);
          PsDetachSiloFromCurrentThread(v27);
        }
      }
      v28 = *(_BYTE *)(v11 + 26);
      v56 = 0LL;
      v57 = 0;
      v58 = 0;
      v61 = 0;
      if ( (v28 & 2) != 0 )
      {
        v34 = ObpInfoMaskToOffset[v28 & 3];
        v35 = v11 - v34;
        if ( v11 != v34 )
        {
          while ( 1 )
          {
            v36 = KeGetCurrentThread();
            --v36->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v11 + 16, 0LL);
            v37 = *(PVOID *)v35;
            if ( !*(_QWORD *)v35
              || ((*(_BYTE *)(v11 + 27) & 0x10) != 0 || *(_QWORD *)(v11 + 8) ? (v38 = 0) : (v38 = 1), !v38) )
            {
              ExReleasePushLockEx(v11 + 16, 0LL);
              KeLeaveCriticalRegion();
              goto LABEL_32;
            }
            ObfReferenceObject(*(PVOID *)v35);
            ExReleasePushLockEx(v11 + 16, 0LL);
            KeLeaveCriticalRegion();
            v59 = 0;
            v60 = -60876;
            *(_OWORD *)v55 = 0LL;
            ObpLockDirectoryExclusive((__int64)v55, v37);
            v40 = KeGetCurrentThread();
            --v40->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v11 + 16, 0LL);
            v41 = *(PVOID *)v35;
            if ( *(PVOID *)v35 == v37 && (*(_BYTE *)(v11 + 27) & 0x10) == 0 && !*(_QWORD *)(v11 + 8) )
              break;
            ObpReleaseLookupContext((__int64)v55);
            ExReleasePushLockEx(v11 + 16, 0LL);
            KeLeaveCriticalRegion();
            PsDereferenceSiloContext(v37);
          }
          v43 = *(_DWORD *)(v35 + 24) == 0;
          v50 = 0LL;
          if ( v43 )
          {
            v53 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v54 ^ (unsigned __int64)*(unsigned __int8 *)(v11 + 24)];
            if ( v53 == ObpSymbolicLinkObjectType )
            {
              ObpDeleteSymbolicLinkName(v11 + 48);
              v41 = *(PVOID *)v35;
            }
            v44 = (void *)ObpLookupDirectoryEntryEx(v41, 0, (__int64)v55);
            v50 = (ULONG_PTR)v44;
            if ( v53 == ObpDirectoryObjectType )
              ObfReferenceObject(v44);
            else
              v50 = 0LL;
            ObpDeleteDirectoryEntry(v55);
          }
          ObpReleaseLookupContext((__int64)v55);
          ExReleasePushLockEx(v11 + 16, 0LL);
          KeLeaveCriticalRegion();
          PsDereferenceSiloContext(v37);
          v45 = (void *)v50;
          if ( v50 )
          {
            ObpMarkDirectoryTreeTemporary(v50);
            PsDereferenceSiloContext(v45);
          }
        }
      }
LABEL_32:
      _InterlockedDecrement((volatile signed __int32 *)(v24 + 48));
      if ( v49 )
        KiUnstackDetachProcess((struct _KTHREAD *)v62, 0);
      if ( (_WORD)v19 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v11, -(unsigned __int16)v19);
      ObfDereferenceObjectWithTag((PVOID)(v11 + 48), 0x6E48624Fu);
      return 0LL;
    }
    if ( (*(_BYTE *)(v11 + 26) & 4) != 0 )
      v31 = v11 - ObpInfoMaskToOffset[*(_BYTE *)(v11 + 26) & 7];
    else
      v31 = 0LL;
    if ( (*(_BYTE *)(v11 + 27) & 0x40) != 0 )
    {
      v23 = *(_DWORD *)(v31 + 8) & 0xFFFFFF;
      v32 = *(_DWORD *)(v31 + 8) ^ (*(_DWORD *)(v31 + 8) ^ (*(_DWORD *)(v31 + 8) - 1)) & 0xFFFFFF;
    }
    else
    {
      v39 = **(_DWORD **)v31;
      v31 = *(_QWORD *)v31 + 8LL;
      if ( !v39 )
        goto LABEL_46;
      while ( (*(_DWORD *)(v31 + 8) & 0xFFFFFF) == 0 || *(_QWORD *)v31 != BugCheckParameter1 )
      {
        v31 += 16LL;
        if ( !--v39 )
          goto LABEL_46;
      }
      v23 = *(_DWORD *)(v31 + 8) & 0xFFFFFF;
      v32 = *(_DWORD *)(v31 + 8) ^ (*(_DWORD *)(v31 + 8) ^ (*(_DWORD *)(v31 + 8) - 1)) & 0xFFFFFF;
    }
    *(_DWORD *)(v31 + 8) = v32;
LABEL_46:
    if ( !*(_BYTE *)(v31 + 11) && (*(_DWORD *)(v31 + 8) & 0xFFFFFF) == 0 )
      *(_QWORD *)v31 = 0LL;
    goto LABEL_49;
  }
  if ( !a5 )
    KeBugCheckEx(0x93u, v9, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v48, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v49 )
    KiUnstackDetachProcess((struct _KTHREAD *)v62, 0);
  if ( KeGetCurrentThread()->ApcStateIndex == 1
    || (NtGlobalFlag & 0x400000) == 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5]
    && !*(_QWORD *)(a1 + 96) )
  {
    return 3221226037LL;
  }
  return KeRaiseUserException(0xC0000235);
}
