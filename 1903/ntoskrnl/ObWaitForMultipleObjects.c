/*
 * XREFs of ObWaitForMultipleObjects @ 0x14060AF40
 * Callers:
 *     NtWaitForMultipleObjects @ 0x14060AE00 (NtWaitForMultipleObjects.c)
 *     NtWaitForMultipleObjects32 @ 0x1406C82A0 (NtWaitForMultipleObjects32.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x14003FD50 (ExLockHandleTableEntry.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     ObpIncrPointerCountEx @ 0x14007ED14 (ObpIncrPointerCountEx.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14007ED40 (ExSlowReplenishHandleTableEntry.c)
 *     ObpIsKernelHandle @ 0x1400828B0 (ObpIsKernelHandle.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     KeSetKernelStackSwapEnable @ 0x1400BA370 (KeSetKernelStackSwapEnable.c)
 *     ExFastReplenishHandleTableEntry @ 0x140135770 (ExFastReplenishHandleTableEntry.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x140338B98 (ExHandleLogBadReference.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x1405FAA80 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406BCCE4 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ObWaitForMultipleObjects(
        ULONG a1,
        unsigned __int64 *a2,
        char a3,
        WAIT_TYPE a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *a7)
{
  char v7; // r9
  unsigned __int64 *v8; // r15
  __int64 v9; // rdi
  int v10; // esi
  struct _KTHREAD *CurrentThread; // r14
  struct _EX_RUNDOWN_REF *Process; // r10
  char v13; // r13
  unsigned __int64 v14; // rcx
  __int64 v15; // r13
  unsigned int v16; // r10d
  unsigned __int64 v17; // rbx
  ULONG_PTR v18; // r14
  ULONG_PTR v19; // r15
  __int64 *v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rax
  __int128 v24; // rt0
  unsigned __int8 v25; // tt
  int v26; // eax
  unsigned __int64 v27; // rdi
  WAIT_TYPE v28; // r15d
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  ULONG v32; // edi
  bool v33; // zf
  PKWAIT_BLOCK v34; // r12
  unsigned int v35; // edi
  struct _EX_RUNDOWN_REF *v36; // r15
  PVOID *v37; // rbx
  __int64 v39; // rbx
  struct _KWAIT_BLOCK *PoolWithTag; // rax
  volatile signed __int64 *v41; // rbx
  int v42; // eax
  unsigned __int64 *v43; // r9
  unsigned int v44; // r10d
  unsigned int v45; // ecx
  unsigned __int64 v46; // r8
  __int64 v47; // rbx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned int v50; // edx
  int v51; // ecx
  unsigned __int64 v52; // rax
  void *v53; // rsp
  unsigned int v54; // ebx
  unsigned __int64 *v55; // r8
  __int64 v56; // r8
  signed __int32 v57[8]; // [rsp+0h] [rbp-40h] BYREF
  char v58; // [rsp+40h] [rbp+0h] BYREF
  char v59; // [rsp+41h] [rbp+1h]
  char v60; // [rsp+42h] [rbp+2h]
  BOOLEAN v61; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  unsigned __int64 v63; // [rsp+50h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v64; // [rsp+58h] [rbp+18h]
  __int128 v65; // [rsp+60h] [rbp+20h] BYREF
  struct _KTHREAD *v66; // [rsp+70h] [rbp+30h]
  WAIT_TYPE WaitType; // [rsp+78h] [rbp+38h]
  ULONG Count; // [rsp+7Ch] [rbp+3Ch]
  unsigned int v69; // [rsp+80h] [rbp+40h]
  int v70; // [rsp+84h] [rbp+44h]
  unsigned __int64 v71; // [rsp+88h] [rbp+48h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+90h] [rbp+50h]
  unsigned __int64 *v73; // [rsp+98h] [rbp+58h]
  PLARGE_INTEGER Timeout; // [rsp+A0h] [rbp+60h]
  struct _EX_RUNDOWN_REF *v75; // [rsp+A8h] [rbp+68h]
  PVOID Object; // [rsp+B0h] [rbp+70h] BYREF
  _BYTE v77[1016]; // [rsp+B8h] [rbp+78h] BYREF

  WaitType = a4;
  v7 = a3;
  v58 = a3;
  v8 = a2;
  v73 = a2;
  v9 = a1;
  Count = a1;
  Timeout = a7;
  v65 = 0uLL;
  v61 = 0;
  v60 = 0;
  WaitBlockArray = 0LL;
  v10 = 0;
  Lookaside = 0LL;
  if ( a1 > 3 )
  {
    if ( a1 > 0xA )
    {
      Lookaside = &ObpWaitBlockLookaside + (a1 - 11) / 0xE;
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocateFromNPagedLookasideList(Lookaside);
      v39 = v9;
    }
    else
    {
      v39 = a1;
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 48LL * a1, 0x6D57624Fu);
    }
    WaitBlockArray = PoolWithTag;
    if ( PoolWithTag )
    {
      v60 = 1;
    }
    else
    {
      v61 = KeSetKernelStackSwapEnable(0);
      v52 = 48 * v39 + 15;
      if ( v52 <= 48 * v39 )
        v52 = 0xFFFFFFFFFFFFFF0LL;
      v53 = alloca(v52 & 0xFFFFFFFFFFFFFFF0uLL);
      WaitBlockArray = (PKWAIT_BLOCK)&v58;
    }
    v7 = v58;
  }
  v59 = 0;
  CurrentThread = KeGetCurrentThread();
  v66 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v64 = Process;
  v75 = Process;
  v13 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v14 = Process[131].Count;
    v71 = v14;
    goto LABEL_4;
  }
  v14 = ObReferenceProcessHandleTable(Process);
  v71 = v14;
  if ( v14 )
  {
    v59 = 1;
LABEL_94:
    v7 = v58;
    goto LABEL_4;
  }
  v54 = 0;
  if ( !(_DWORD)v9 )
    goto LABEL_94;
  v55 = v8;
  v7 = v58;
  while ( ObpIsKernelHandle(*v55, v7) )
  {
    ++v54;
    v55 = (unsigned __int64 *)(v56 + 8);
    if ( v54 >= (unsigned int)v9 )
    {
      v14 = v71;
LABEL_4:
      v15 = 0LL;
      v16 = 1;
      v17 = v63;
      while ( 2 )
      {
        v18 = v8[v15];
        if ( v7 || (v18 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v18 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v19 = v14;
        }
        else
        {
          v18 ^= 0xFFFFFFFF80000000uLL;
          v19 = ObpKernelHandleTable;
        }
        if ( (v18 & 0x3FC) != 0 )
        {
          v20 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v19, v18);
          v21 = v20;
          if ( v20 )
          {
            _m_prefetchw(v20);
            v65 = *(_OWORD *)v20;
LABEL_10:
            v22 = v65;
            while ( (v22 & 0x1FFFE) != 0 )
            {
              if ( (v22 & 1) == 0 )
              {
                ExpBlockOnLockedHandleEntry(v19, v21, v22);
                _m_prefetchw(v21);
                v65 = *(_OWORD *)v21;
                goto LABEL_10;
              }
              *(_QWORD *)&v24 = v22;
              *((_QWORD *)&v24 + 1) = *((_QWORD *)&v65 + 1);
              v25 = _InterlockedCompareExchange128(v21, *((signed __int64 *)&v24 + 1), v22 - 2, (signed __int64 *)&v24);
              v23 = v24;
              v22 = v24;
              v65 = v24;
              if ( v25 )
              {
                if ( (unsigned __int16)((unsigned __int64)v23 >> 1) != 16 )
                {
                  v17 = (v23 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                  v63 = v17;
                  v16 = 1;
LABEL_16:
                  v7 = v58;
                  goto LABEL_17;
                }
                *(_QWORD *)&v65 = v23 ^ ((unsigned int)v23 ^ (2 * (unsigned int)((unsigned __int64)v23 >> 1) - 2)) & 0x1FFFE;
                v17 = ((__int64)v65 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v63 = v17;
                ObpIncrPointerCountEx((volatile signed __int64 *)v17, 32752);
                v51 = ExFastReplenishHandleTableEntry(v21, (unsigned __int64 *)&v65, 32752);
                v16 = 1;
                if ( !v51 )
                  goto LABEL_16;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v17, -v51);
LABEL_58:
                v17 = v63;
                goto LABEL_16;
              }
            }
            if ( ExLockHandleTableEntry(v19, v21) )
            {
              v63 = (*v21 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v41 = (volatile signed __int64 *)v63;
              v65 = *(_OWORD *)v21;
              v42 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v21);
              ObpIncrPointerCountEx(v41, v42 + 1);
              v16 = 1;
              _InterlockedExchangeAdd64(v21, 1uLL);
              _InterlockedOr(v57, 0);
              if ( *(_QWORD *)(v19 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v19 + 48), 0LL);
                v16 = 1;
              }
              goto LABEL_58;
            }
            v17 = v63;
            v7 = v58;
            v16 = 1;
          }
        }
        if ( v18 )
        {
          ExHandleLogBadReference(v19, v18, KeGetCurrentThread()->PreviousMode);
          v17 = v63;
          v7 = v58;
          v16 = 1;
        }
        v21 = 0LL;
LABEL_17:
        if ( !v21 )
        {
LABEL_60:
          v35 = -1073741816;
LABEL_61:
          v13 = 1;
          CurrentThread = v66;
          goto LABEL_62;
        }
        v26 = DWORD2(v65) & 0x1FFFFFF;
        v70 = ++v10;
        v27 = v17 + 48;
        *(_QWORD *)&v77[8 * v15 + 504] = v17 + 48;
        if ( v7 == 1 )
        {
          if ( (~v26 & 0x100000) != 0 )
          {
            v35 = -1073741790;
            goto LABEL_61;
          }
          if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
          {
            v49 = v17 - ObpInfoMaskToOffset[*(_BYTE *)(v17 + 26) & 0x7F];
            if ( *(_BYTE *)(*(_QWORD *)v49 + 24LL) )
            {
              if ( *(_QWORD *)(*(_QWORD *)v49 + 16LL) == 1LL )
              {
                v35 = -1073700858;
                goto LABEL_61;
              }
              v17 = v63;
            }
          }
        }
        v28 = WaitType;
        if ( WaitType != WaitAny
          && (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 + 24) ^ (unsigned __int64)BYTE1(v17)] == IoCompletionObjectType )
        {
          goto LABEL_60;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v17, 1, v16, 0x7457624Fu);
          v16 = 1;
        }
        v29 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 + 24) ^ (unsigned __int64)BYTE1(v17);
        v30 = ObTypeIndexTable[v29];
        v31 = *(_QWORD *)(v30 + 32);
        if ( (v31 & 1) != 0 )
        {
          if ( (v31 & 2) != 0 )
          {
            v50 = *(_DWORD *)(v30 + 176);
            v29 = v50 & *(_DWORD *)(*(unsigned __int16 *)(v30 + 180) + v27);
            if ( (_DWORD)v29 == v50 )
            {
              v31 = *(_QWORD *)(*(unsigned __int16 *)(v30 + 182) + v27);
            }
            else
            {
              v31 -= 3LL;
LABEL_26:
              v31 += v27;
            }
          }
          else
          {
            v31 = *(_QWORD *)(v31 + v27 - 1);
          }
        }
        else if ( v31 >= 0 )
        {
          goto LABEL_26;
        }
        *(_QWORD *)&v77[8 * v15 - 8] = v31;
        v15 = (unsigned int)(v15 + 1);
        v32 = Count;
        if ( (unsigned int)v15 >= Count )
        {
          if ( v59 )
          {
            v59 = 0;
            ExReleaseRundownProtection_0(v64 + 96);
          }
          CurrentThread = v66;
          v33 = v66->KernelApcDisable++ == -1;
          if ( v33
            && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v29);
          }
          v13 = 0;
          v58 = 0;
          if ( v28 == WaitAll && v32 > 1 )
          {
            v43 = (unsigned __int64 *)v77;
            v44 = 1;
            while ( 2 )
            {
              v45 = v44;
              v46 = *v43;
              do
              {
                v47 = v45 - 1;
                v48 = *(_QWORD *)&v77[8 * v47 - 8];
                if ( v46 > v48 )
                  break;
                if ( v46 == v48 )
                {
                  v35 = -1073741776;
                  goto LABEL_62;
                }
                *(_QWORD *)&v77[8 * v45-- - 8] = v48;
              }
              while ( (_DWORD)v47 );
              *(_QWORD *)&v77[8 * v45 - 8] = v46;
              ++v44;
              ++v43;
              if ( v44 < v32 )
                continue;
              break;
            }
          }
          v34 = WaitBlockArray;
          v35 = KeWaitForMultipleObjects(v32, &Object, v28, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
          v69 = v35;
          v36 = v64;
          goto LABEL_35;
        }
        v7 = v58;
        v14 = v71;
        v8 = v73;
        continue;
      }
    }
  }
  v35 = -1073741558;
LABEL_62:
  v36 = v64;
  v34 = WaitBlockArray;
LABEL_35:
  if ( v10 )
  {
    v37 = (PVOID *)&v77[8 * v10 + 504];
    do
    {
      ObfDereferenceObjectWithTag(*--v37, 0x7457624Fu);
      --v10;
    }
    while ( v10 );
  }
  if ( v13 )
  {
    if ( v59 )
      ExReleaseRundownProtection_0(v36 + 96);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  if ( v34 )
  {
    if ( v60 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v34);
      else
        ExFreePoolWithTag(v34, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v61);
    }
  }
  return v35;
}
