/*
 * XREFs of KeSetTracepoint @ 0x140846060
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400F34D0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlPcToFileHeader @ 0x14012F740 (RtlPcToFileHeader.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiTpWriteMemory @ 0x14029C508 (KiTpWriteMemory.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KeIsValidTraceCallbackTarget @ 0x140845B80 (KeIsValidTraceCallbackTarget.c)
 *     KiTpSetupCompletion @ 0x140846FEC (KiTpSetupCompletion.c)
 */

__int64 __fastcall KeSetTracepoint(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, __int64 a5)
{
  BOOL v6; // ebp
  unsigned __int64 v7; // rsi
  int IsValidTraceCallbackTarget; // edi
  PVOID v9; // rbx
  _IMAGE_NT_HEADERS64 *v10; // rax
  PIMAGE_SECTION_HEADER v11; // rax
  _DWORD *v12; // rcx
  int v13; // eax
  _QWORD *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v16; // rbp
  __int64 v17; // rdi
  PVOID v18; // rax
  unsigned __int64 *v19; // rdx
  __int64 v20; // r12
  unsigned __int64 *v21; // r15
  unsigned __int64 *v22; // rcx
  BOOL v23; // ecx
  signed __int32 v25[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v26; // [rsp+30h] [rbp-98h]
  BOOL v27; // [rsp+34h] [rbp-94h]
  BOOL v28; // [rsp+38h] [rbp-90h]
  BOOL v29; // [rsp+3Ch] [rbp-8Ch]
  BOOL v30; // [rsp+40h] [rbp-88h]
  PVOID BaseOfImage; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-78h]
  char v33[48]; // [rsp+58h] [rbp-70h] BYREF

  v32 = a4;
  v26 = a3;
  v6 = (unsigned int)(a3 - 1) <= 1;
  v28 = v6;
  v7 = 0LL;
  v27 = (unsigned int)(a3 - 2) <= 1;
  v29 = (unsigned int)(a3 - 4) <= 1;
  v30 = (unsigned int)(a3 - 5) <= 1;
  if ( (unsigned int)(a3 - 2) > 1 )
  {
    if ( a4 )
      return (unsigned int)-1073741811;
  }
  else if ( !a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( a1 )
    return (unsigned int)-1073741637;
  if ( a2 < 0x7FFFFFFF0000LL )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    IsValidTraceCallbackTarget = KeIsValidTraceCallbackTarget(a4);
    if ( IsValidTraceCallbackTarget < 0 )
      return (unsigned int)IsValidTraceCallbackTarget;
    a3 = v26;
  }
  if ( v6 || !a3 )
  {
    if ( RtlPcToFileHeader((PVOID)a2, &BaseOfImage) )
    {
      v9 = BaseOfImage;
      v10 = RtlImageNtHeader(BaseOfImage);
      v11 = RtlSectionTableFromVirtualAddress(v10, v9, (int)a2 - (int)v9);
      v12 = v11;
      if ( v11 )
      {
        if ( (v11->Characteristics & 0x2000020) == 0x20 )
        {
          v13 = *(_DWORD *)v11->Name;
          if ( *v12 != 1414090313 && v13 != 1396790859 )
          {
            if ( v6 )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x52uLL, 0x70727446u);
              v7 = (unsigned __int64)PoolWithTag;
              if ( !PoolWithTag )
                return (unsigned int)-1073741670;
              memset(PoolWithTag, 0, 0x52uLL);
              *(_QWORD *)(v7 + 16) = 0LL;
              *(_QWORD *)(v7 + 8) = a2;
            }
            goto LABEL_21;
          }
        }
      }
      return (unsigned int)-1073741637;
    }
    return (unsigned int)-1073741811;
  }
LABEL_21:
  CurrentThread = KeGetCurrentThread();
  v16 = (_QWORD *)v7;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiTpStateLock, 0LL);
  v17 = KiTpHashTable;
  if ( KiTpHashTable )
    goto LABEL_25;
  v18 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x70727446u);
  v17 = (__int64)v18;
  if ( v18 )
  {
    memset(v18, 0, 0x20000uLL);
    KiTpHashTable = v17;
LABEL_25:
    v19 = 0LL;
    v20 = (a2 >> 4) & 0x3FFF;
    v21 = (unsigned __int64 *)(v17 + 8 * v20);
    v22 = (unsigned __int64 *)*v21;
    if ( *v21 )
    {
      while ( v22[1] != a2 || v22[2] )
      {
        v21 = v22;
        v22 = (unsigned __int64 *)*v22;
        if ( !v22 )
          goto LABEL_31;
      }
      v19 = v22;
    }
LABEL_31:
    if ( !v26 )
    {
      if ( !v19 )
      {
        IsValidTraceCallbackTarget = KiTpSetupCompletion(0LL, a2, 0LL, 0LL, v33);
        goto LABEL_66;
      }
LABEL_65:
      IsValidTraceCallbackTarget = 0;
      goto LABEL_66;
    }
    if ( v28 )
    {
      if ( v19 )
      {
        IsValidTraceCallbackTarget = -1073740008;
        goto LABEL_66;
      }
      IsValidTraceCallbackTarget = KiTpSetupCompletion(0LL, *(_QWORD *)(v7 + 8), v7 + 41, 1LL, v7 + 42);
      if ( IsValidTraceCallbackTarget < 0 )
        goto LABEL_66;
      ++KiTpRegisteredCount;
      v21 = (unsigned __int64 *)(KiTpHashTable + 8 * v20);
      *(_QWORD *)v7 = *v21;
      *v21 = v7;
      _InterlockedOr(v25, 0);
      v23 = v27;
      v16 = (_QWORD *)(v7 & -(__int64)v27);
    }
    else
    {
      if ( !v19 )
      {
        IsValidTraceCallbackTarget = -1073741275;
        goto LABEL_66;
      }
      v23 = v27;
      v7 = (unsigned __int64)v19;
    }
    if ( v23 )
    {
      if ( *(_QWORD *)(v7 + 24) )
        goto LABEL_44;
      if ( !*(_BYTE *)(v7 + 40) )
      {
        if ( ++KiTpEnabledCount == 1 )
          _InterlockedOr(&KiDynamicTraceMask, 2u);
        IsValidTraceCallbackTarget = KiTpWriteMemory(0LL, *(void **)(v7 + 8));
        if ( IsValidTraceCallbackTarget < 0 )
        {
          if ( (_QWORD *)v7 == v16 )
          {
            *v21 = *(_QWORD *)v7;
            _InterlockedOr(v25, 0);
            --KiTpRegisteredCount;
          }
          if ( !--KiTpEnabledCount )
            _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFD);
          goto LABEL_66;
        }
        *(_BYTE *)(v7 + 40) = 1;
      }
      *(_QWORD *)(v7 + 32) = a5;
      _InterlockedOr(v25, 0);
      v16 = 0LL;
      *(_QWORD *)(v7 + 24) = v32;
    }
    if ( v29 )
    {
      if ( !*(_QWORD *)(v7 + 24) )
        goto LABEL_44;
      *(_QWORD *)(v7 + 24) = 0LL;
      _InterlockedOr(v25, 0);
      *(_QWORD *)(v7 + 32) = 0LL;
      if ( *(_BYTE *)(v7 + 40) )
      {
        IsValidTraceCallbackTarget = KiTpWriteMemory(0LL, *(void **)(v7 + 8));
        if ( IsValidTraceCallbackTarget < 0 )
          goto LABEL_66;
        if ( !--KiTpEnabledCount )
          _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFD);
        *(_BYTE *)(v7 + 40) = 0;
      }
    }
    if ( !v30 )
      goto LABEL_65;
    if ( !*(_BYTE *)(v7 + 40) )
    {
      *v21 = *(_QWORD *)v7;
      _InterlockedOr(v25, 0);
      --KiTpRegisteredCount;
      v16 = (_QWORD *)v7;
      goto LABEL_65;
    }
LABEL_44:
    IsValidTraceCallbackTarget = -1073741811;
    goto LABEL_66;
  }
  IsValidTraceCallbackTarget = -1073741670;
LABEL_66:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
  KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v16 )
  {
    while ( KiTpActiveTrapsCount )
      _mm_pause();
    ExFreePoolWithTag(v16, 0);
  }
  return (unsigned int)IsValidTraceCallbackTarget;
}
