/*
 * XREFs of ExDupHandleTable @ 0x140697740
 * Callers:
 *     ObInitProcess @ 0x14060A2E4 (ObInitProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExLockHandleTableEntry @ 0x140053220 (ExLockHandleTableEntry.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExpLookupHandleTableEntry @ 0x1405E9990 (ExpLookupHandleTableEntry.c)
 *     ExpFreeHandleTable @ 0x1406077F8 (ExpFreeHandleTable.c)
 *     ExCreateHandleTable @ 0x1406975C0 (ExCreateHandleTable.c)
 *     ObInheritObjectHandle @ 0x140697B64 (ObInheritObjectHandle.c)
 *     ExpAllocateHandleTable @ 0x140697C24 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140697D34 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpGetHandleExtraInfo @ 0x1408CF3D0 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x1408CF41C (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1408CF6A8 (ExpUpdateDebugInfo.c)
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
  char HandleTableEntrySlow; // al
  int v19; // r13d
  __int64 v20; // rax
  unsigned int *v21; // rcx
  __int64 v22; // r9
  unsigned int v23; // r10d
  __int64 v24; // r11
  __int64 v25; // rdx
  unsigned int v26; // esi
  __int64 v27; // r14
  volatile signed __int64 *v28; // r15
  __int64 v29; // rcx
  unsigned int *v30; // rax
  unsigned int *v31; // rcx
  __int64 v32; // rsi
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  char v35; // al
  signed __int64 *v37; // r12
  int v38; // r12d
  unsigned int *v39; // rcx
  unsigned int v40; // edx
  _QWORD *v41; // r8
  unsigned __int64 v42; // rax
  __int64 HandleTable; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v45; // r10
  _QWORD *v46; // rax
  signed __int32 v47[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v48; // [rsp+20h] [rbp-88h]
  __int64 *v49; // [rsp+28h] [rbp-80h]
  __int64 v50; // [rsp+30h] [rbp-78h]
  unsigned int *v51; // [rsp+38h] [rbp-70h]
  __int64 v52; // [rsp+40h] [rbp-68h]
  __int64 v53; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp+8h]
  unsigned int v57; // [rsp+C0h] [rbp+18h]

  v55 = a1;
  v5 = *a2;
  v6 = 0LL;
  v7 = a5;
  v8 = a4;
  v48 = v5;
  v10 = (unsigned int)v5;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      v40 = 1;
      if ( a3 <= 1 )
      {
LABEL_56:
        v42 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v42 < v10 )
        {
          v10 = v42 + 4;
LABEL_14:
          a1 = v55;
          v48 = v10;
          goto LABEL_15;
        }
      }
      else
      {
        v41 = a4 + 8;
        while ( (*v41 & 3) == 0 && *v41 > *(_QWORD *)&a4[8 * v40 - 8] )
        {
          ++v40;
          ++v41;
          if ( v40 >= a3 )
            goto LABEL_56;
        }
      }
    }
    return 3221225485LL;
  }
  if ( (_DWORD)v5 )
  {
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
    goto LABEL_14;
  }
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
        goto LABEL_20;
    }
    ExpFreeHandleTable(v17);
    *v7 = 0LL;
    return 3221225626LL;
  }
LABEL_20:
  *((_BYTE *)v17 + 44) |= 8u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v51 = *v7;
  v19 = 0;
  v57 = 0;
  v49 = (__int64 *)(v51 + 18);
  do
  {
    v20 = ExpLookupHandleTableEntry(a2, v6);
    v21 = *v7;
    v53 = v20;
    v50 = ExpLookupHandleTableEntry(v21, v6);
    v25 = v22 - v50;
    v26 = 1;
    v52 = v22 - v50;
    v27 = v50 + 16;
    while ( v19 >= 0 )
    {
      if ( a3 && *(_QWORD *)&v8[8 * v23] != v6 + 4 * v26 )
        goto LABEL_27;
      v28 = (volatile signed __int64 *)(v25 + v27);
      if ( (*(_DWORD *)(v25 + v27) & 0x40000) == 0 )
        goto LABEL_25;
      v37 = (signed __int64 *)(v22 + 16LL * v26);
      if ( !ExLockHandleTableEntry(v24, v37) )
        goto LABEL_25;
      if ( (*(_DWORD *)v28 & 0x40000) == 0 )
      {
        _InterlockedExchangeAdd64(v37, 1uLL);
        _InterlockedOr(v47, 0);
        if ( *((_QWORD *)a2 + 6) )
          ExfUnblockPushLock((volatile __int64 *)a2 + 6, 0LL);
LABEL_25:
        v7 = a5;
        if ( a3 )
          v19 = -1073741811;
        goto LABEL_27;
      }
      *(_OWORD *)v27 = *(_OWORD *)v28;
      *(_QWORD *)v27 &= 0xFFFFFFFFFFFE0001uLL;
      *(_QWORD *)v27 |= 1uLL;
      if ( a2[1]
        && (HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a2, v6 + 4 * v26)) != 0LL
        && (*HandleExtraInfo || HandleExtraInfo[1])
        && (v38 = ExpSetHandleExtraInfo(v45, v6 + 4 * v26), v38 < 0) )
      {
        _InterlockedExchangeAdd64(v28, 1uLL);
        _InterlockedOr(v47, 0);
        if ( *((_QWORD *)a2 + 6) )
          ExfUnblockPushLock((volatile __int64 *)a2 + 6, 0LL);
      }
      else
      {
        v38 = ObInheritObjectHandle(v55, v6 + 4 * v26, a2, v28);
        if ( v38 >= 0 )
          goto LABEL_39;
        if ( !a4 )
          v38 = 263;
      }
      *(_QWORD *)v27 = 0LL;
      *(_QWORD *)(v27 + 8) = 0LL;
LABEL_39:
      v7 = a5;
      v19 = v38;
      if ( v38 >= 0 )
      {
        if ( v38 != 263 )
        {
          v39 = *a5;
          ++(*a5)[22];
          if ( a3 && v57 < a3 - 1 )
            ++v57;
          if ( *((_QWORD *)v39 + 12) )
            ExpUpdateDebugInfo(v39, KeGetCurrentThread(), v6 + 4 * v26, 1LL);
          goto LABEL_28;
        }
        v19 = 0;
      }
LABEL_27:
      v29 = 16LL * v26 + v50;
      *v49 = v29;
      v49 = (__int64 *)(v29 + 8);
      *((_QWORD *)v51 + 10) = v29;
      *(_QWORD *)v27 = 0LL;
LABEL_28:
      v25 = v52;
      ++v26;
      v22 = v53;
      v27 += 16LL;
      v23 = v57;
      v24 = (__int64)a2;
      v8 = a4;
      if ( v26 >= 0x100 )
        goto LABEL_29;
    }
    memset((void *)(16LL * v26 + v50), 0, 4096 - 16LL * v26);
LABEL_29:
    v6 += 1024LL;
  }
  while ( v6 < v48 );
  v30 = *v7;
  v31 = *v7;
  v32 = (__int64)CurrentThread;
  *v49 = 0LL;
  if ( v19 < 0 )
  {
    *((_BYTE *)v31 + 44) |= 4u;
    v46 = v30 + 6;
    v46[1] = v46;
    *v46 = v46;
  }
  else
  {
    v31[23] = v31[22];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
    v33 = (_QWORD *)qword_14096FA18;
    v34 = *v7 + 6;
    if ( *(__int64 **)qword_14096FA18 != &HandleTableListHead )
      __fastfail(3u);
    *v34 = &HandleTableListHead;
    v34[1] = v33;
    *v33 = v34;
    qword_14096FA18 = (__int64)v34;
    v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v35 & 2) != 0 && (v35 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
    KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
    v19 = 0;
  }
  KiLeaveCriticalRegionUnsafe(v32);
  return (unsigned int)v19;
}
