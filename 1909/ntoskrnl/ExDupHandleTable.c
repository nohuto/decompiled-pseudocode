/*
 * XREFs of ExDupHandleTable @ 0x1406B73C0
 * Callers:
 *     ObInitProcess @ 0x140680D70 (ObInitProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x14003FA90 (ExLockHandleTableEntry.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExpLookupHandleTableEntry @ 0x1405FBAD0 (ExpLookupHandleTableEntry.c)
 *     ExpFreeHandleTable @ 0x14068622C (ExpFreeHandleTable.c)
 *     ExCreateHandleTable @ 0x1406B7240 (ExCreateHandleTable.c)
 *     ObInheritObjectHandle @ 0x1406B7800 (ObInheritObjectHandle.c)
 *     ExpAllocateHandleTable @ 0x1406B78C0 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406B79C8 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpGetHandleExtraInfo @ 0x14090B138 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x14090B180 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14090B40C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDupHandleTable(__int64 a1, unsigned int *a2, unsigned int a3, _BYTE *a4, unsigned int **a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned int **v7; // r15
  _BYTE *v8; // r12
  unsigned __int64 v10; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  int v14; // edx
  _DWORD *v15; // rcx
  unsigned int *v16; // rax
  unsigned int *v17; // rcx
  int v18; // r13d
  __int64 v19; // rax
  unsigned int *v20; // rcx
  __int64 v21; // r9
  unsigned int v22; // r10d
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned int v25; // esi
  __int64 v26; // r14
  volatile signed __int64 *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rsi
  unsigned int *v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  char v33; // al
  signed __int64 *v35; // r12
  int v36; // r12d
  unsigned int *v37; // rcx
  char HandleTableEntrySlow; // al
  unsigned int v39; // edx
  _QWORD *v40; // r8
  unsigned __int64 v41; // rax
  __int64 HandleTable; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v44; // r10
  signed __int32 v45[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v46; // [rsp+20h] [rbp-98h]
  __int64 *v47; // [rsp+28h] [rbp-90h]
  __int64 v48; // [rsp+30h] [rbp-88h]
  unsigned int *v49; // [rsp+38h] [rbp-80h]
  __int64 v50; // [rsp+40h] [rbp-78h]
  __int64 v51; // [rsp+48h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  unsigned __int64 v53; // [rsp+58h] [rbp-60h]
  __int64 v54; // [rsp+60h] [rbp-58h]
  __int64 v55; // [rsp+C0h] [rbp+8h]
  unsigned int v57; // [rsp+D0h] [rbp+18h]

  v55 = a1;
  v5 = *a2;
  v6 = 0LL;
  v7 = a5;
  v8 = a4;
  v46 = v5;
  v10 = (unsigned int)v5;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      v39 = 1;
      if ( a3 <= 1 )
      {
LABEL_57:
        v41 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v41 < v10 )
        {
          v10 = v41 + 4;
          goto LABEL_14;
        }
      }
      else
      {
        v40 = a4 + 8;
        while ( (*v40 & 3) == 0 && *v40 > *(_QWORD *)&a4[8 * v39 - 8] )
        {
          ++v39;
          ++v40;
          if ( v39 >= a3 )
            goto LABEL_57;
        }
      }
    }
    return 3221225485LL;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_15;
  do
  {
    v12 = ExpLookupHandleTableEntry(a2, v10 - 1024);
    v14 = 255;
    v15 = (_DWORD *)(v12 + 4080);
    while ( (*v15 & 0x40000) == 0 )
    {
      if ( (*(v15 - 4) & 0x40000) != 0 )
      {
        --v14;
        break;
      }
      if ( (*(v15 - 8) & 0x40000) != 0 )
      {
        v14 -= 2;
        break;
      }
      if ( (*(v15 - 12) & 0x40000) != 0 )
      {
        v14 -= 3;
        break;
      }
      if ( (*(v15 - 16) & 0x40000) != 0 )
      {
        v14 -= 4;
        break;
      }
      v15 -= 20;
      v14 -= 5;
      if ( !v14 )
        break;
    }
    if ( v14 )
      break;
    v10 = v13;
  }
  while ( v13 );
  v7 = a5;
LABEL_14:
  a1 = v55;
  v46 = v10;
LABEL_15:
  if ( !v10 )
  {
    HandleTable = ExCreateHandleTable(a1, 1LL);
    *v7 = (unsigned int *)HandleTable;
    if ( HandleTable )
      return 0LL;
    return 3221225626LL;
  }
  v16 = (unsigned int *)ExpAllocateHandleTable(a1, 0LL);
  *v7 = v16;
  v17 = v16;
  if ( !v16 )
    return 3221225626LL;
  if ( *v16 < v10 )
  {
    while ( 1 )
    {
      HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v17, 0LL);
      v17 = *v7;
      if ( !HandleTableEntrySlow )
        break;
      if ( *v17 >= v10 )
        goto LABEL_18;
    }
    ExpFreeHandleTable(v17);
    *v7 = 0LL;
    return 3221225626LL;
  }
LABEL_18:
  *((_BYTE *)v17 + 44) |= 8u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v49 = *v7;
  v18 = 0;
  v57 = 0;
  v47 = (__int64 *)(v49 + 18);
  do
  {
    v19 = ExpLookupHandleTableEntry(a2, v6);
    v20 = *v7;
    v51 = v19;
    v48 = ExpLookupHandleTableEntry(v20, v6);
    v24 = v21 - v48;
    v25 = 1;
    v50 = v21 - v48;
    v26 = v48 + 16;
    while ( v18 >= 0 )
    {
      if ( a3 && *(_QWORD *)&v8[8 * v22] != v6 + 4 * v25 )
        goto LABEL_25;
      v27 = (volatile signed __int64 *)(v24 + v26);
      if ( (*(_DWORD *)(v24 + v26) & 0x40000) == 0 )
        goto LABEL_23;
      v35 = (signed __int64 *)(v21 + 16LL * v25);
      if ( !ExLockHandleTableEntry(v23, v35) )
        goto LABEL_23;
      if ( (*(_DWORD *)v27 & 0x40000) == 0 )
      {
        _InterlockedExchangeAdd64(v35, 1uLL);
        _InterlockedOr(v45, 0);
        if ( *((_QWORD *)a2 + 6) )
          ExfUnblockPushLock((volatile __int64 *)a2 + 6, 0LL);
LABEL_23:
        v7 = a5;
        if ( a3 )
          v18 = -1073741811;
        goto LABEL_25;
      }
      *(_OWORD *)v26 = *(_OWORD *)v27;
      v54 = 0LL;
      v53 = *(_QWORD *)v26 & 0xFFFFFFFFFFFE0001uLL;
      *(_QWORD *)v26 = v53;
      *(_QWORD *)v26 |= 1uLL;
      if ( a2[1]
        && (HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a2, v6 + 4 * v25)) != 0LL
        && (*HandleExtraInfo || HandleExtraInfo[1])
        && (v36 = ExpSetHandleExtraInfo(v44, v6 + 4 * v25), v36 < 0) )
      {
        _InterlockedExchangeAdd64(v27, 1uLL);
        _InterlockedOr(v45, 0);
        if ( *((_QWORD *)a2 + 6) )
          ExfUnblockPushLock((volatile __int64 *)a2 + 6, 0LL);
      }
      else
      {
        v36 = ObInheritObjectHandle(v55, v6 + 4 * v25, a2, v27);
        if ( v36 >= 0 )
          goto LABEL_37;
        if ( !a4 )
          v36 = 263;
      }
      *(_QWORD *)v26 = 0LL;
      *(_QWORD *)(v26 + 8) = 0LL;
LABEL_37:
      v7 = a5;
      v18 = v36;
      if ( v36 >= 0 )
      {
        if ( v36 != 263 )
        {
          v37 = *a5;
          ++(*a5)[22];
          if ( a3 && v57 < a3 - 1 )
            ++v57;
          if ( *((_QWORD *)v37 + 12) )
            ExpUpdateDebugInfo(v37, KeGetCurrentThread(), v6 + 4 * v25, 1LL);
          goto LABEL_26;
        }
        v18 = 0;
      }
LABEL_25:
      v28 = 16LL * v25 + v48;
      *v47 = v28;
      v47 = (__int64 *)(v28 + 8);
      *((_QWORD *)v49 + 10) = v28;
      *(_QWORD *)v26 = 0LL;
LABEL_26:
      v24 = v50;
      ++v25;
      v21 = v51;
      v26 += 16LL;
      v22 = v57;
      v23 = (__int64)a2;
      v8 = a4;
      if ( v25 >= 0x100 )
        goto LABEL_27;
    }
    memset((void *)(16LL * v25 + v48), 0, 4096 - 16LL * v25);
LABEL_27:
    v6 += 1024LL;
  }
  while ( v6 < v46 );
  v29 = (__int64)CurrentThread;
  v30 = *v7;
  *v47 = 0LL;
  if ( v18 < 0 )
  {
    *((_BYTE *)v30 + 44) |= 4u;
    *((_QWORD *)v30 + 4) = v30 + 6;
    *((_QWORD *)v30 + 3) = v30 + 6;
  }
  else
  {
    v30[23] = v30[22];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
    v31 = (_QWORD *)qword_1409AEAE8;
    v32 = *v7 + 6;
    if ( *(__int64 **)qword_1409AEAE8 != &HandleTableListHead )
      __fastfail(3u);
    *v32 = &HandleTableListHead;
    v32[1] = v31;
    *v31 = v32;
    qword_1409AEAE8 = (__int64)v32;
    v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v33 & 2) != 0 && (v33 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
    KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
    v18 = 0;
  }
  KeLeaveCriticalRegionThread(v29);
  return (unsigned int)v18;
}
