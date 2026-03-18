/*
 * XREFs of KeSetTracepoint @ 0x14087F280
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     RtlPcToFileHeader @ 0x14012FF70 (RtlPcToFileHeader.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiTpWriteBreakpoint @ 0x1402AD73C (KiTpWriteBreakpoint.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1405B0A5C (KiTpIsSupportedKernelTracepointLocation.c)
 *     KiTpSetupCompletion @ 0x14087FEB0 (KiTpSetupCompletion.c)
 */

__int64 __fastcall KeSetTracepoint(
        ULONG_PTR a1,
        char a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9)
{
  __int64 v9; // rsi
  ULONG_PTR v10; // rbp
  __int64 v12; // rdx
  __int64 v14; // r9
  int v16; // edi
  __int64 v17; // rax
  _BOOL8 v18; // r8
  __int64 v19; // rbp
  __int64 v21; // rbx
  _QWORD *v22; // rbx
  __int64 v23; // rbx
  _QWORD *v24; // rbx
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  void *v27; // rbp
  __int64 v28; // r14
  PVOID v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // r15
  __int64 v32; // rdx
  bool i; // zf
  _BYTE *v34; // rdx
  char v35; // al
  BOOL v36; // ecx
  signed __int32 v37[8]; // [rsp+0h] [rbp-D8h] BYREF
  size_t Size; // [rsp+20h] [rbp-B8h]
  BOOL v39; // [rsp+30h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-A0h]
  int v41; // [rsp+40h] [rbp-98h]
  BOOL v42; // [rsp+44h] [rbp-94h]
  BOOL v43; // [rsp+48h] [rbp-90h]
  BOOL v44; // [rsp+4Ch] [rbp-8Ch]
  _BYTE *v45; // [rsp+50h] [rbp-88h]
  PVOID BaseOfImage; // [rsp+58h] [rbp-80h] BYREF
  __int64 v47; // [rsp+60h] [rbp-78h]
  char v48[48]; // [rsp+68h] [rbp-70h] BYREF

  v9 = 0LL;
  v10 = a1;
  BugCheckParameter1 = a1;
  v41 = a4;
  v12 = (unsigned int)KiDynamicTraceEnabled;
  v45 = a9;
  v14 = 1LL;
  if ( (KiDynamicTraceEnabled & 2) == 0 && (!a2 || (KiDynamicTraceEnabled & 1) == 0) )
    return (unsigned int)-1073741790;
  if ( !a1 && a2 || a3 > 0x7FFFFFFEFFFFLL && a2 == 1 || a3 < 0xFFFF800000000000uLL && !a2 )
    return (unsigned int)-1073741811;
  if ( a1 )
  {
    v17 = *(_QWORD *)(a1 + 728);
    if ( ((v17 & 1) != 0 || v17) && (a2 || (KiDynamicTraceEnabled & 2) == 0) )
      return (unsigned int)-1073741790;
  }
  v42 = (unsigned int)(a4 - 1) <= 1;
  v39 = (unsigned int)(a4 - 2) <= 1;
  v43 = (unsigned int)(a4 - 4) <= 1;
  v18 = (unsigned int)(a4 - 5) <= 1;
  v44 = (unsigned int)(a4 - 5) <= 1;
  if ( (unsigned int)(a4 - 2) <= 1 )
  {
    if ( !a5 )
    {
      v19 = a7;
      if ( !a7 )
        return (unsigned int)-1073741811;
LABEL_28:
      if ( v19 )
      {
        v23 = 40LL;
        if ( a2 )
          v23 = 56LL;
        v24 = (_QWORD *)((char *)&KiDynamicTraceCallouts + v23);
        if ( (KiDynamicTraceEnabled & 4) == 0 )
        {
LABEL_34:
          if ( v19 == *v24 )
            goto LABEL_35;
          return (unsigned int)-1073741790;
        }
        if ( v19 != *v24 )
        {
          DbgPrint("DTrace/NT: Overriding post-callback in DTrace test mode.\n", v12, v18, v14);
          *v24 = a5;
          goto LABEL_34;
        }
      }
LABEL_35:
      v10 = BugCheckParameter1;
      goto LABEL_36;
    }
    v21 = 32LL;
    if ( a2 )
      v21 = 48LL;
    v12 = KiDynamicTraceEnabled & 4;
    v22 = (_QWORD *)((char *)&KiDynamicTraceCallouts + v21);
    if ( (KiDynamicTraceEnabled & 4) != 0 )
    {
      if ( a5 == *v22 )
      {
LABEL_27:
        v19 = a7;
        goto LABEL_28;
      }
      DbgPrint("DTrace/NT: Overriding pre-callback in DTrace test mode.\n", v12, v18, 1LL);
      *v22 = a5;
    }
    if ( a5 != *v22 )
      return (unsigned int)-1073741790;
    goto LABEL_27;
  }
  if ( a5 || a7 )
    return (unsigned int)-1073741811;
LABEL_36:
  if ( (unsigned int)(a4 - 1) <= 1 || !a4 )
  {
    if ( a3 >= 0xFFFF800000000000uLL )
    {
      if ( !RtlPcToFileHeader((PVOID)a3, &BaseOfImage) )
        return (unsigned int)-1073741811;
      if ( !(unsigned int)KiTpIsSupportedKernelTracepointLocation(BaseOfImage, a3) )
        return (unsigned int)-1073741637;
    }
    if ( (unsigned int)(a4 - 1) <= 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x5CuLL, 0x70727446u);
      v9 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 0x5CuLL);
      *(_QWORD *)(v9 + 16) = v10;
      *(_BYTE *)(v9 + 50) = a2;
      *(_QWORD *)(v9 + 8) = a3;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v27 = (void *)v9;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiTpStateLock, 0LL);
  v28 = KiTpHashTable;
  if ( KiTpHashTable )
  {
LABEL_53:
    v30 = 0LL;
    v47 = (a3 >> 4) & 0x3FFF;
    v31 = (__int64 *)(v28 + 8 * v47);
    v32 = *v31;
    for ( i = *v31 == 0; ; i = v32 == 0 )
    {
      if ( i )
        goto LABEL_60;
      if ( *(_QWORD *)(v32 + 8) == a3 && *(_QWORD *)(v32 + 16) == BugCheckParameter1 )
        break;
      v31 = (__int64 *)v32;
      v32 = *(_QWORD *)v32;
    }
    v30 = v32;
    if ( *(_BYTE *)(v32 + 50) != a2 )
    {
LABEL_59:
      v16 = -1073741811;
      goto LABEL_97;
    }
LABEL_60:
    if ( v41 )
    {
      if ( v42 )
      {
        if ( v30 )
        {
          v16 = -1073740008;
          goto LABEL_97;
        }
        LODWORD(Size) = 1;
        v16 = KiTpSetupCompletion(BugCheckParameter1, Size, (void *)(v9 + 52));
        if ( v16 < 0 )
          goto LABEL_97;
        ++KiTpRegisteredCount;
        v31 = (__int64 *)(KiTpHashTable + 8 * v47);
        *(_QWORD *)v9 = *v31;
        *v31 = v9;
        _InterlockedOr(v37, 0);
        v36 = v39;
        v27 = (void *)(v9 & -(__int64)v39);
      }
      else
      {
        if ( !v30 )
        {
          v16 = -1073741275;
          goto LABEL_97;
        }
        v9 = v30;
        v36 = v39;
      }
      if ( v36 )
      {
        if ( !*(_BYTE *)(v9 + 48) )
        {
          if ( ++KiTpEnabledCount == 1 )
            _InterlockedOr(&KiDynamicTraceMask, 2u);
          v16 = KiTpWriteBreakpoint(v9);
          if ( v16 < 0 )
          {
            if ( (void *)v9 == v27 )
            {
              *v31 = *(_QWORD *)v9;
              _InterlockedOr(v37, 0);
              --KiTpRegisteredCount;
            }
            if ( !--KiTpEnabledCount )
              _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFD);
            goto LABEL_97;
          }
          *(_BYTE *)(v9 + 48) = 1;
        }
        *(_QWORD *)(v9 + 32) = a6;
        *(_QWORD *)(v9 + 40) = a8;
        _InterlockedOr(v37, 0);
        v27 = 0LL;
        *(_BYTE *)(v9 + 24) = a5 != 0;
        *(_BYTE *)(v9 + 25) = a7 != 0;
      }
      if ( v43 )
      {
        *(_WORD *)(v9 + 24) = 0;
        _InterlockedOr(v37, 0);
        *(_QWORD *)(v9 + 32) = 0LL;
        *(_QWORD *)(v9 + 40) = 0LL;
        if ( *(_BYTE *)(v9 + 48) )
        {
          v16 = KiTpWriteBreakpoint(v9);
          if ( v16 < 0 )
            goto LABEL_97;
          if ( !--KiTpEnabledCount )
            _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFD);
          *(_BYTE *)(v9 + 48) = 0;
        }
      }
      if ( v44 )
      {
        if ( *(_BYTE *)(v9 + 48) )
          goto LABEL_59;
        *v31 = *(_QWORD *)v9;
        _InterlockedOr(v37, 0);
        --KiTpRegisteredCount;
        v27 = (void *)v9;
      }
      v34 = v45;
      if ( v45 )
      {
        v35 = *(_BYTE *)(v9 + 51);
        goto LABEL_95;
      }
    }
    else
    {
      if ( !v30 )
      {
        LODWORD(Size) = 0;
        v16 = KiTpSetupCompletion(BugCheckParameter1, Size, v48);
        goto LABEL_97;
      }
      v34 = v45;
      if ( v45 )
      {
        v35 = *(_BYTE *)(v30 + 51);
LABEL_95:
        *v34 = v35;
      }
    }
    v16 = 0;
    goto LABEL_97;
  }
  v29 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x70727446u);
  v28 = (__int64)v29;
  if ( v29 )
  {
    memset(v29, 0, 0x20000uLL);
    KiTpHashTable = v28;
    goto LABEL_53;
  }
  v16 = -1073741670;
LABEL_97:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
  KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v27 )
  {
    while ( KiTpActiveTrapsCount )
      _mm_pause();
    ExFreePoolWithTag(v27, 0x70727446u);
  }
  return (unsigned int)v16;
}
