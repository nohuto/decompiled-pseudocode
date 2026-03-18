/*
 * XREFs of ObCloseHandleTableEntry @ 0x1405F65C0
 * Callers:
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     ObpCloseHandle @ 0x140610DCC (ObpCloseHandle.c)
 *     ExSweepHandleTable @ 0x140686480 (ExSweepHandleTable.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140003F54 (ObpReleaseLookupContext.c)
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     ObpLockDirectoryExclusive @ 0x140105100 (ObpLockDirectoryExclusive.c)
 *     PsDereferenceSiloContext @ 0x14012E7D0 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x1402A6E10 (KeRaiseUserException.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406B36E8 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406B3964 (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BEB70 (ObpLookupDirectoryEntryEx.c)
 *     ObpDeleteDirectoryEntry @ 0x1406CC76C (ObpDeleteDirectoryEntry.c)
 *     SeCloseObjectAuditAlarm @ 0x1408DE720 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x1408F50C4 (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x14090B138 (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14090B40C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        volatile signed __int64 *a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  __int64 v6; // rbx
  char v8; // r15
  _KPROCESS *v9; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int8 (__fastcall *v16)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD); // r10
  int v18; // edx
  __int64 v19; // rdx
  _QWORD *HandleExtraInfo; // rax
  unsigned int Number; // eax
  ULONG_PTR v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned int v27; // r13d
  __int64 v28; // r14
  ULONG_PTR v29; // r12
  struct _KTHREAD *v30; // rax
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // r8d
  void (__fastcall *v34)(_KPROCESS *, unsigned __int64, _QWORD, ULONG_PTR); // r10
  char v35; // r14
  struct _LIST_ENTRY *v36; // rsi
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *i; // rdi
  struct _KTHREAD *v44; // rax
  void *v45; // r10
  struct _KTHREAD *v47; // rax
  void *v48; // rsi
  struct _OBJECT_TYPE *v49; // r13
  void *v50; // rax
  signed __int32 v51[8]; // [rsp+0h] [rbp-E9h] BYREF
  char v52; // [rsp+30h] [rbp-B9h]
  char v53; // [rsp+31h] [rbp-B8h]
  unsigned __int64 v54; // [rsp+38h] [rbp-B1h]
  __int64 v55; // [rsp+40h] [rbp-A9h]
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-A1h]
  __int64 v57; // [rsp+50h] [rbp-99h]
  unsigned __int64 v58; // [rsp+58h] [rbp-91h]
  __int64 v59[2]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v60; // [rsp+70h] [rbp-79h]
  int v61; // [rsp+78h] [rbp-71h]
  __int16 v62; // [rsp+7Ch] [rbp-6Dh]
  __int16 v63; // [rsp+7Eh] [rbp-6Bh]
  int v64; // [rsp+80h] [rbp-69h]
  int v65; // [rsp+84h] [rbp-65h]
  _QWORD v66[6]; // [rsp+88h] [rbp-61h] BYREF
  _QWORD v67[6]; // [rsp+B8h] [rbp-31h] BYREF

  v6 = *a2;
  memset(v66, 0, sizeof(v66));
  v8 = 0;
  v9 = (_KPROCESS *)a3;
  v12 = (v6 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  BugCheckParameter1 = a3;
  v52 = 0;
  v13 = v12 + 48;
  v14 = BYTE1(v12) ^ (unsigned __int64)*(unsigned __int8 *)(v12 + 24);
  v57 = BYTE1(v12);
  v15 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14];
  v55 = v15;
  v16 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v15 + 168);
  if ( v16 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != v9 )
    {
      KiStackAttachProcess(v9, 0, (__int64)v66);
      v13 = v12 + 48;
      v8 = 1;
      v52 = 1;
      v16 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v55 + 168);
    }
    if ( !v16(v9, v13, a4, a5) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v51, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v8 )
        KiUnstackDetachProcess((struct _KTHREAD *)v66, 0);
      return 3221226037LL;
    }
    v15 = v55;
    v13 = v12 + 48;
  }
  v18 = ((__int64)*(unsigned int *)a2 >> 17) & 7 | 8;
  if ( (a2[1] & 0x2000000) == 0 )
    v18 = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  LODWORD(v55) = v18;
  if ( (v18 & 1) == 0 || a6 )
  {
    if ( (xmmword_140572410 & 0x40) != 0 )
    {
      v19 = a4;
      if ( v9 == PsInitialSystemProcess )
        v19 = a4 | 0x80000000;
      EtwpTraceHandle(4385LL, v19, v13, v15);
    }
    if ( a6 )
    {
      v58 = (unsigned __int64)*a2 >> 1;
      *a2 = 0LL;
      _InterlockedOr(v51, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a4, 2LL);
      v58 = (unsigned __int64)*a2 >> 1;
      *a2 = 0LL;
      _InterlockedOr(v51, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      v54 = a4 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(a1 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v54);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0LL;
      }
      *((_QWORD *)a2 + 1) = 0LL;
      v53 = *(_BYTE *)(a1 + 44) & 1;
      if ( v53 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v22 = a1 + ((Number + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v22, 0LL);
      if ( v53 )
      {
        v23 = *(_QWORD *)(v22 + 16);
        if ( v23 )
          *(_QWORD *)(v23 + 8) = a2;
        else
          *(_QWORD *)(v22 + 8) = a2;
        *(_QWORD *)(v22 + 16) = a2;
      }
      else
      {
        v24 = *(_QWORD *)(v22 + 8);
        *((_QWORD *)a2 + 1) = v24;
        if ( !v24 )
          *(_QWORD *)(v22 + 16) = a2;
        *(_QWORD *)(v22 + 8) = a2;
      }
      --*(_DWORD *)(v22 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v22);
      KeAbPostRelease(v22);
      v9 = (_KPROCESS *)BugCheckParameter1;
    }
    KeLeaveCriticalRegion();
    if ( (v55 & 4) != 0 )
    {
      LOBYTE(v25) = 1;
      SeCloseObjectAuditAlarm(v12 + 48, a4 & 0xFFFFFFFFFFFFFFFCuLL, v25);
    }
    v26 = *(unsigned __int8 *)(v12 + 24);
    v27 = 0;
    memset(v67, 0, sizeof(v67));
    v28 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v57 ^ v26];
    v54 = v28;
    if ( (*(_BYTE *)(v28 + 66) & 0x10) == 0 && (*(_BYTE *)(v12 + 27) & 8) == 0 )
    {
      v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_78:
      v34 = *(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, ULONG_PTR))(v28 + 128);
      if ( v34 )
      {
        v35 = 0;
        v36 = 0LL;
        if ( KeGetCurrentThread()->ApcState.Process != v9 )
        {
          v35 = 1;
          ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)v9);
          v36 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KiStackAttachProcess(v9, 0, (__int64)v67);
          v34 = *(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, ULONG_PTR))(v54 + 128);
        }
        v34(v9, v12 + 48, v27, v29);
        if ( v35 )
        {
          KiUnstackDetachProcess((struct _KTHREAD *)v67, 0);
          PsDetachSiloFromCurrentThread(v36);
        }
      }
      if ( v29 == 1 )
      {
        v38 = *(_BYTE *)(v12 + 26);
        v60 = 0LL;
        v61 = 0;
        v62 = 0;
        v65 = 0;
        if ( (v38 & 2) != 0 )
        {
          v39 = ObpInfoMaskToOffset[v38 & 3];
          v40 = v12 - v39;
          if ( v12 != v39 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v12 + 16, 0LL);
            for ( i = *(void **)v40; *(_QWORD *)v40; i = *(void **)v40 )
            {
              if ( (*(_BYTE *)(v12 + 27) & 0x10) != 0 || *(_QWORD *)(v12 + 8) )
                break;
              ObfReferenceObject(i);
              ExReleasePushLockEx(v12 + 16, 0LL);
              KeLeaveCriticalRegion();
              v63 = 0;
              v64 = -60876;
              *(_OWORD *)v59 = 0LL;
              ObpLockDirectoryExclusive((__int64)v59, i);
              v44 = KeGetCurrentThread();
              --v44->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v12 + 16, 0LL);
              v45 = *(void **)v40;
              if ( *(void **)v40 == i && (*(_BYTE *)(v12 + 27) & 0x10) == 0 && !*(_QWORD *)(v12 + 8) )
              {
                v48 = 0LL;
                if ( !*(_DWORD *)(v40 + 24) )
                {
                  v49 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v57 ^ (unsigned __int64)*(unsigned __int8 *)(v12 + 24)];
                  if ( v49 == ObpSymbolicLinkObjectType )
                  {
                    ObpDeleteSymbolicLinkName(v12 + 48);
                    v45 = *(void **)v40;
                  }
                  v50 = (void *)ObpLookupDirectoryEntryEx(v45, 0, (__int64)v59);
                  v48 = v50;
                  if ( v49 == ObpDirectoryObjectType )
                    ObfReferenceObject(v50);
                  else
                    v48 = 0LL;
                  ObpDeleteDirectoryEntry(v59);
                }
                ObpReleaseLookupContext((__int64)v59);
                ExReleasePushLockEx(v12 + 16, 0LL);
                KeLeaveCriticalRegion();
                PsDereferenceSiloContext(i);
                if ( v48 )
                {
                  ObpMarkDirectoryTreeTemporary(v48);
                  PsDereferenceSiloContext(v48);
                }
                goto LABEL_100;
              }
              ObpReleaseLookupContext((__int64)v59);
              ExReleasePushLockEx(v12 + 16, 0LL);
              KeLeaveCriticalRegion();
              PsDereferenceSiloContext(i);
              v47 = KeGetCurrentThread();
              --v47->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v12 + 16, 0LL);
            }
            ExReleasePushLockEx(v12 + 16, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
LABEL_100:
      _InterlockedDecrement((volatile signed __int32 *)(v54 + 48));
      if ( v52 )
        KiUnstackDetachProcess((struct _KTHREAD *)v66, 0);
      if ( (_WORD)v58 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v12, -(unsigned __int16)v58);
      ObfDereferenceObjectWithTag((PVOID)(v12 + 48), 0x6E48624Fu);
      return 0LL;
    }
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v12 + 16, 0LL);
    BugCheckParameter1 = *(_QWORD *)(v12 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v12 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v12 - ObpInfoMaskToOffset[*(_BYTE *)(v12 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v28 + 66) & 0x10) == 0 )
    {
LABEL_77:
      ExReleasePushLockEx(v12 + 16, 0LL);
      KeLeaveCriticalRegion();
      v29 = BugCheckParameter1;
      goto LABEL_78;
    }
    if ( (*(_BYTE *)(v12 + 26) & 4) != 0 )
      v31 = v12 - ObpInfoMaskToOffset[*(_BYTE *)(v12 + 26) & 7];
    else
      v31 = 0LL;
    if ( (*(_BYTE *)(v12 + 27) & 0x40) != 0 )
    {
      v32 = *(_DWORD *)(v31 + 8);
      v27 = v32 & 0xFFFFFF;
    }
    else
    {
      v33 = **(_DWORD **)v31;
      v31 = *(_QWORD *)v31 + 8LL;
      if ( !v33 )
      {
LABEL_74:
        if ( !*(_BYTE *)(v31 + 11) && (*(_DWORD *)(v31 + 8) & 0xFFFFFF) == 0 )
          *(_QWORD *)v31 = 0LL;
        goto LABEL_77;
      }
      while ( 1 )
      {
        v32 = *(_DWORD *)(v31 + 8);
        if ( (v32 & 0xFFFFFF) != 0 && *(_KPROCESS **)v31 == v9 )
          break;
        v31 += 16LL;
        if ( !--v33 )
          goto LABEL_74;
      }
      v27 = *(_DWORD *)(v31 + 8) & 0xFFFFFF;
    }
    *(_DWORD *)(v31 + 8) = v32 ^ (v32 ^ (v32 - 1)) & 0xFFFFFF;
    goto LABEL_74;
  }
  if ( !a5 )
    KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v51, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v52 )
    KiUnstackDetachProcess((struct _KTHREAD *)v66, 0);
  if ( KeGetCurrentThread()->ApcStateIndex == 1
    || (NtGlobalFlag & 0x400000) == 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5]
    && !*(_QWORD *)(a1 + 96) )
  {
    return 3221226037LL;
  }
  return KeRaiseUserException(0xC0000235);
}
