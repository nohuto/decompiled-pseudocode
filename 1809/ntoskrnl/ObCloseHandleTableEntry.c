/*
 * XREFs of ObCloseHandleTableEntry @ 0x1405E7360
 * Callers:
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     ObpCloseHandle @ 0x1405F673C (ObpCloseHandle.c)
 *     ExSweepHandleTable @ 0x140698C50 (ExSweepHandleTable.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     ObpReleaseLookupContext @ 0x140016078 (ObpReleaseLookupContext.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ObpLockDirectoryExclusive @ 0x14010A050 (ObpLockDirectoryExclusive.c)
 *     PsDereferenceSiloContext @ 0x14012C170 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x140290890 (KeRaiseUserException.c)
 *     ObpLookupDirectoryEntryEx @ 0x140625DE0 (ObpLookupDirectoryEntryEx.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14068EC20 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x14068F354 (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryEntry @ 0x1406A7F3C (ObpDeleteDirectoryEntry.c)
 *     SeCloseObjectAuditAlarm @ 0x1408A17D0 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x1408B9ED0 (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x1408CF3D0 (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1408CF6A8 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        volatile signed __int64 *a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  char v7; // r12
  _KPROCESS *v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v12; // r8
  __int64 v13; // r13
  unsigned __int8 (__fastcall *v14)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD); // r10
  int v16; // edx
  __int64 v17; // rdx
  unsigned __int64 v18; // r12
  _QWORD *HandleExtraInfo; // rax
  unsigned int Number; // eax
  ULONG_PTR v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v25; // r15d
  __int64 v26; // rbp
  signed __int64 v27; // r12
  struct _KTHREAD *v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  int v31; // ecx
  void (__fastcall *v32)(_KPROCESS *, unsigned __int64, _QWORD, signed __int64); // r10
  char v33; // bp
  struct _LIST_ENTRY *v34; // rsi
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  __int64 v36; // rax
  __int64 v37; // r14
  struct _KTHREAD *CurrentThread; // rax
  void *i; // rdi
  struct _KTHREAD *v41; // rax
  void *v42; // r10
  struct _KTHREAD *v44; // rax
  void *v45; // rsi
  struct _OBJECT_TYPE *v46; // r15
  void *v47; // rax
  signed __int32 v48[8]; // [rsp+0h] [rbp-138h] BYREF
  char v49; // [rsp+30h] [rbp-108h]
  char v50; // [rsp+31h] [rbp-107h]
  __int64 v51; // [rsp+38h] [rbp-100h]
  unsigned __int64 v52; // [rsp+40h] [rbp-F8h]
  __int64 v53; // [rsp+48h] [rbp-F0h]
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-E8h]
  __int128 v55; // [rsp+58h] [rbp-E0h] BYREF
  __int16 v56; // [rsp+76h] [rbp-C2h]
  int v57; // [rsp+78h] [rbp-C0h]
  _BYTE v58[48]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v59[48]; // [rsp+B0h] [rbp-88h] BYREF

  v7 = 0;
  v8 = (_KPROCESS *)a3;
  v9 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  BugCheckParameter1 = a3;
  v49 = 0;
  v53 = BYTE1(v9);
  v12 = v9 + 48;
  v13 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v9 + 24) ^ (unsigned __int64)BYTE1(v9)];
  v14 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v13 + 168);
  if ( v14 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != v8 )
    {
      KiStackAttachProcess(v8, 0LL, (__int64)v58);
      v14 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v13 + 168);
      v7 = 1;
      v49 = 1;
    }
    if ( !v14(v8, v9 + 48, a4, a5) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v48, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v7 )
        KiUnstackDetachProcess((__int64)v58, 0LL);
      return 3221226037LL;
    }
    v12 = v9 + 48;
  }
  v16 = ((__int64)*(unsigned int *)a2 >> 17) & 7 | 8;
  if ( (a2[1] & 0x2000000) == 0 )
    v16 = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  LODWORD(v51) = v16;
  if ( (v16 & 1) == 0 || a6 )
  {
    if ( (xmmword_140542350 & 0x40) != 0 )
    {
      v17 = a4;
      if ( v8 == PsInitialSystemProcess )
        v17 = a4 | 0x80000000;
      EtwpTraceHandle(4385LL, v17, v12, v13);
    }
    if ( a6 )
    {
      v18 = (unsigned __int64)*a2 >> 1;
      *a2 = 0LL;
      _InterlockedOr(v48, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a4, 2LL);
      v18 = (unsigned __int64)*a2 >> 1;
      *a2 = 0LL;
      _InterlockedOr(v48, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      v52 = a4 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(a1 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v52);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0LL;
      }
      *((_QWORD *)a2 + 1) = 0LL;
      v50 = *(_BYTE *)(a1 + 44) & 1;
      if ( v50 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v21 = a1 + ((Number + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v21, 0LL);
      if ( v50 )
      {
        v22 = *(_QWORD *)(v21 + 16);
        if ( v22 )
          *(_QWORD *)(v22 + 8) = a2;
        else
          *(_QWORD *)(v21 + 8) = a2;
        *(_QWORD *)(v21 + 16) = a2;
      }
      else
      {
        v23 = *(_QWORD *)(v21 + 8);
        *((_QWORD *)a2 + 1) = v23;
        if ( !v23 )
          *(_QWORD *)(v21 + 16) = a2;
        *(_QWORD *)(v21 + 8) = a2;
      }
      --*(_DWORD *)(v21 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v21);
      KeAbPostRelease(v21);
      v8 = (_KPROCESS *)BugCheckParameter1;
    }
    LODWORD(v52) = (unsigned __int16)v18;
    KeLeaveCriticalRegion();
    if ( (v51 & 4) != 0 )
    {
      LOBYTE(v24) = 1;
      SeCloseObjectAuditAlarm(v9 + 48, a4 & 0xFFFFFFFFFFFFFFFCuLL, v24);
    }
    v25 = 0;
    v26 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v9 + 24) ^ (unsigned __int64)(unsigned __int8)v53];
    v51 = v26;
    if ( (*(_BYTE *)(v26 + 66) & 0x10) == 0 && (*(_BYTE *)(v9 + 27) & 8) == 0 )
    {
      v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_78:
      v32 = *(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, signed __int64))(v26 + 128);
      if ( v32 )
      {
        v33 = 0;
        v34 = 0LL;
        if ( KeGetCurrentThread()->ApcState.Process != v8 )
        {
          v33 = 1;
          ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)v8);
          v34 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KiStackAttachProcess(v8, 0LL, (__int64)v59);
          v32 = *(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, signed __int64))(v51 + 128);
        }
        v32(v8, v9 + 48, v25, v27);
        if ( v33 )
        {
          KiUnstackDetachProcess((__int64)v59, 0LL);
          PsDetachSiloFromCurrentThread(v34);
        }
      }
      if ( v27 == 1 && (*(_BYTE *)(v9 + 26) & 2) != 0 )
      {
        v36 = ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 3];
        v37 = v9 - v36;
        if ( v9 != v36 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
          for ( i = *(void **)v37; *(_QWORD *)v37; i = *(void **)v37 )
          {
            if ( (*(_BYTE *)(v9 + 27) & 0x10) != 0 || *(_QWORD *)(v9 + 8) )
              break;
            ObfReferenceObject(i);
            ExReleasePushLockEx(v9 + 16, 0LL);
            KeLeaveCriticalRegion();
            v56 = 0;
            v57 = -60876;
            v55 = 0LL;
            ObpLockDirectoryExclusive((__int64)&v55, i);
            v41 = KeGetCurrentThread();
            --v41->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
            v42 = *(void **)v37;
            if ( *(void **)v37 == i && (*(_BYTE *)(v9 + 27) & 0x10) == 0 && !*(_QWORD *)(v9 + 8) )
            {
              v45 = 0LL;
              if ( !*(_DWORD *)(v37 + 24) )
              {
                v46 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v9 + 24) ^ (unsigned __int64)(unsigned __int8)v53];
                if ( v46 == ObpSymbolicLinkObjectType )
                {
                  ObpDeleteSymbolicLinkName(v9 + 48);
                  v42 = *(void **)v37;
                }
                v47 = (void *)ObpLookupDirectoryEntryEx((_DWORD)v42, (int)v37 + 8, 0, 0, 0, (__int64)&v55);
                v45 = v47;
                if ( v46 == ObpDirectoryObjectType )
                  ObfReferenceObject(v47);
                else
                  v45 = 0LL;
                ObpDeleteDirectoryEntry(&v55);
              }
              ObpReleaseLookupContext((__int64)&v55);
              ExReleasePushLockEx(v9 + 16, 0LL);
              KeLeaveCriticalRegion();
              PsDereferenceSiloContext(i);
              if ( v45 )
              {
                ObpMarkDirectoryTreeTemporary(v45);
                PsDereferenceSiloContext(v45);
              }
              goto LABEL_100;
            }
            ObpReleaseLookupContext((__int64)&v55);
            ExReleasePushLockEx(v9 + 16, 0LL);
            KeLeaveCriticalRegion();
            PsDereferenceSiloContext(i);
            v44 = KeGetCurrentThread();
            --v44->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
          }
          ExReleasePushLockEx(v9 + 16, 0LL);
          KeLeaveCriticalRegion();
        }
      }
LABEL_100:
      _InterlockedDecrement((volatile signed __int32 *)(v51 + 48));
      if ( v49 )
        KiUnstackDetachProcess((__int64)v58, 0LL);
      if ( (_DWORD)v52 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v9, -(int)v52);
      ObfDereferenceObjectWithTag((PVOID)(v9 + 48), 0x6E48624Fu);
      return 0LL;
    }
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
    v27 = *(_QWORD *)(v9 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v9 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v9 - ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v26 + 66) & 0x10) == 0 )
    {
LABEL_77:
      ExReleasePushLockEx(v9 + 16, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_78;
    }
    if ( (*(_BYTE *)(v9 + 26) & 4) != 0 )
      v29 = v9 - ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 7];
    else
      v29 = 0LL;
    if ( (*(_BYTE *)(v9 + 27) & 0x40) != 0 )
    {
      v25 = *(_DWORD *)(v29 + 8) & 0xFFFFFF;
      v30 = *(_DWORD *)(v29 + 8) ^ (*(_DWORD *)(v29 + 8) ^ (*(_DWORD *)(v29 + 8) - 1)) & 0xFFFFFF;
    }
    else
    {
      v31 = **(_DWORD **)v29;
      v29 = *(_QWORD *)v29 + 8LL;
      if ( !v31 )
      {
LABEL_74:
        if ( !*(_BYTE *)(v29 + 11) && (*(_DWORD *)(v29 + 8) & 0xFFFFFF) == 0 )
          *(_QWORD *)v29 = 0LL;
        goto LABEL_77;
      }
      while ( (*(_DWORD *)(v29 + 8) & 0xFFFFFF) == 0 || *(_KPROCESS **)v29 != v8 )
      {
        v29 += 16LL;
        if ( !--v31 )
          goto LABEL_74;
      }
      v25 = *(_DWORD *)(v29 + 8) & 0xFFFFFF;
      v30 = *(_DWORD *)(v29 + 8) ^ (*(_DWORD *)(v29 + 8) ^ (*(_DWORD *)(v29 + 8) - 1)) & 0xFFFFFF;
    }
    *(_DWORD *)(v29 + 8) = v30;
    goto LABEL_74;
  }
  if ( !a5 )
    KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v48, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v49 )
    KiUnstackDetachProcess((__int64)v58, 0LL);
  if ( KeGetCurrentThread()->ApcStateIndex == 1
    || (NtGlobalFlag & 0x400000) == 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6]
    && !*(_QWORD *)(a1 + 96) )
  {
    return 3221226037LL;
  }
  return KeRaiseUserException(0xC0000235);
}
