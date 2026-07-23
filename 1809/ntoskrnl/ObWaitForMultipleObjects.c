/*
 * XREFs of ObWaitForMultipleObjects @ 0x14058B3E0
 * Callers:
 *     NtWaitForMultipleObjects32 @ 0x14058B1A0 (NtWaitForMultipleObjects32.c)
 *     NtWaitForMultipleObjects @ 0x14058B2B0 (NtWaitForMultipleObjects.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140003BB0 (ObpIncrPointerCountEx.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140003BE0 (ExSlowReplenishHandleTableEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExLockHandleTableEntry @ 0x140053220 (ExLockHandleTableEntry.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     ObpIsKernelHandle @ 0x140088EC8 (ObpIsKernelHandle.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetKernelStackSwapEnable @ 0x140101D60 (KeSetKernelStackSwapEnable.c)
 *     ExFastReplenishHandleTableEntry @ 0x140134C4C (ExFastReplenishHandleTableEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x14031A004 (ExHandleLogBadReference.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x1405E9990 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140698A24 (ExpBlockOnLockedHandleEntry.c)
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
  int v10; // esi
  struct _KTHREAD *CurrentThread; // r14
  struct _EX_RUNDOWN_REF *Process; // r10
  char v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int16 v16; // r10
  unsigned __int64 v17; // rbx
  ULONG_PTR v18; // r14
  ULONG_PTR v19; // r15
  __int64 *v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rax
  __int128 v24; // rt0
  unsigned __int8 v25; // tt
  unsigned __int64 v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  WAIT_TYPE v30; // r15d
  unsigned __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r8
  ULONG v34; // edi
  bool v35; // zf
  PKWAIT_BLOCK v36; // r12
  unsigned int v37; // edi
  struct _EX_RUNDOWN_REF *v38; // r15
  PVOID *v39; // rbx
  unsigned __int64 v41; // rbx
  struct _KWAIT_BLOCK *PoolWithTag; // rax
  volatile signed __int64 *v43; // rbx
  int v44; // eax
  unsigned __int64 *v45; // r9
  unsigned int v46; // r10d
  unsigned int v47; // ecx
  unsigned __int64 v48; // r8
  __int64 v49; // rbx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned int v52; // edx
  int v53; // ecx
  __int64 v54; // rax
  void *v55; // rsp
  ULONG v56; // ebx
  unsigned __int64 *v57; // r8
  __int64 v58; // r8
  signed __int32 v59[8]; // [rsp+0h] [rbp-40h] BYREF
  char v60; // [rsp+40h] [rbp+0h] BYREF
  char v61; // [rsp+41h] [rbp+1h]
  char v62; // [rsp+42h] [rbp+2h]
  BOOLEAN v63; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  unsigned __int64 v65; // [rsp+50h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v66; // [rsp+58h] [rbp+18h]
  struct _KTHREAD *v67; // [rsp+60h] [rbp+20h]
  __int128 v68; // [rsp+68h] [rbp+28h] BYREF
  WAIT_TYPE WaitType; // [rsp+78h] [rbp+38h]
  ULONG Count; // [rsp+7Ch] [rbp+3Ch]
  unsigned int v71; // [rsp+80h] [rbp+40h]
  int v72; // [rsp+84h] [rbp+44h]
  __int64 v73; // [rsp+88h] [rbp+48h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+90h] [rbp+50h]
  unsigned __int64 *v75; // [rsp+98h] [rbp+58h]
  PLARGE_INTEGER Timeout; // [rsp+A0h] [rbp+60h]
  struct _EX_RUNDOWN_REF *v77; // [rsp+A8h] [rbp+68h]
  PVOID Object; // [rsp+B0h] [rbp+70h] BYREF
  _BYTE v79[1016]; // [rsp+B8h] [rbp+78h] BYREF

  WaitType = a4;
  v7 = a3;
  v60 = a3;
  v8 = a2;
  v75 = a2;
  Count = a1;
  Timeout = a7;
  v63 = 0;
  v62 = 0;
  WaitBlockArray = 0LL;
  v10 = 0;
  Lookaside = 0LL;
  if ( a1 > 3 )
  {
    v41 = 48LL * a1;
    if ( a1 > 0xA )
    {
      Lookaside = (PNPAGED_LOOKASIDE_LIST)((char *)&ObpWaitBlockLookaside + 128 * (unsigned __int64)((a1 - 11) / 0xE));
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocateFromNPagedLookasideList(Lookaside);
    }
    else
    {
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 48LL * a1, 0x6D57624Fu);
    }
    WaitBlockArray = PoolWithTag;
    if ( PoolWithTag )
    {
      v62 = 1;
    }
    else
    {
      v63 = KeSetKernelStackSwapEnable(0);
      v54 = v41 + 15;
      if ( v41 + 15 < v41 )
        v54 = 0xFFFFFFFFFFFFFF0LL;
      v55 = alloca(v54 & 0xFFFFFFFFFFFFFFF0uLL);
      WaitBlockArray = (PKWAIT_BLOCK)&v60;
    }
    v7 = v60;
  }
  v61 = 0;
  CurrentThread = KeGetCurrentThread();
  v67 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v66 = Process;
  v77 = Process;
  v13 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v14 = Process[131].Count;
    v73 = v14;
    goto LABEL_4;
  }
  v14 = ObReferenceProcessHandleTable(Process);
  v73 = v14;
  if ( v14 )
  {
    v61 = 1;
LABEL_94:
    v7 = v60;
    goto LABEL_4;
  }
  v56 = 0;
  if ( !a1 )
    goto LABEL_94;
  v57 = v8;
  v7 = v60;
  while ( ObpIsKernelHandle(*v57, v7) )
  {
    ++v56;
    v57 = (unsigned __int64 *)(v58 + 8);
    if ( v56 >= a1 )
    {
      v14 = v73;
LABEL_4:
      v15 = 0LL;
      v16 = 1;
      v17 = v65;
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
          v20 = (__int64 *)ExpLookupHandleTableEntry(v19, v18);
          v21 = v20;
          if ( v20 )
          {
            _m_prefetchw(v20);
            v68 = *(_OWORD *)v20;
LABEL_10:
            v22 = v68;
            while ( (v22 & 0x1FFFE) != 0 )
            {
              if ( (v22 & 1) == 0 )
              {
                ExpBlockOnLockedHandleEntry(v19, v21);
                _m_prefetchw(v21);
                v68 = *(_OWORD *)v21;
                goto LABEL_10;
              }
              *(_QWORD *)&v24 = v22;
              *((_QWORD *)&v24 + 1) = *((_QWORD *)&v68 + 1);
              v25 = _InterlockedCompareExchange128(v21, *((signed __int64 *)&v24 + 1), v22 - 2, (signed __int64 *)&v24);
              v23 = v24;
              v22 = v24;
              v68 = v24;
              if ( v25 )
              {
                if ( (unsigned __int16)((unsigned __int64)v23 >> 1) != 16 )
                {
                  v17 = (v23 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                  v65 = v17;
                  v16 = 1;
LABEL_16:
                  v7 = v60;
                  goto LABEL_17;
                }
                *(_QWORD *)&v68 = v23 ^ ((unsigned int)v23 ^ (2 * (unsigned int)((unsigned __int64)v23 >> 1) - 2)) & 0x1FFFE;
                v17 = ((__int64)v68 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v65 = v17;
                ObpIncrPointerCountEx((volatile signed __int64 *)v17, 32752);
                v53 = ExFastReplenishHandleTableEntry(v21, (unsigned __int64 *)&v68, 32752);
                v16 = 1;
                if ( !v53 )
                  goto LABEL_16;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v17, -v53);
LABEL_58:
                v17 = v65;
                goto LABEL_16;
              }
            }
            if ( ExLockHandleTableEntry(v19, v21) )
            {
              v65 = (*v21 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v43 = (volatile signed __int64 *)v65;
              v68 = *(_OWORD *)v21;
              v44 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v21);
              ObpIncrPointerCountEx(v43, v44 + 1);
              v16 = 1;
              _InterlockedExchangeAdd64(v21, 1uLL);
              _InterlockedOr(v59, 0);
              if ( *(_QWORD *)(v19 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v19 + 48), 0LL);
                v16 = 1;
              }
              goto LABEL_58;
            }
            v17 = v65;
            v7 = v60;
            v16 = 1;
          }
        }
        if ( v18 )
        {
          ExHandleLogBadReference(v19, v18, KeGetCurrentThread()->PreviousMode);
          v17 = v65;
          v7 = v60;
          v16 = 1;
        }
        v21 = 0LL;
LABEL_17:
        v26 = v17;
        if ( !v21 )
        {
LABEL_60:
          v37 = -1073741816;
LABEL_61:
          v13 = 1;
          CurrentThread = v67;
          goto LABEL_62;
        }
        v27 = DWORD2(v68) & 0x1FFFFFF;
        v72 = ++v10;
        v28 = v17 + 48;
        *(_QWORD *)&v79[8 * v15 + 504] = v17 + 48;
        if ( v7 == 1 )
        {
          if ( (~v27 & 0x100000) != 0 )
          {
            v37 = -1073741790;
            goto LABEL_61;
          }
          if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
          {
            v51 = v17 - ObpInfoMaskToOffset[*(_BYTE *)(v17 + 26) & 0x7F];
            if ( *(_BYTE *)(*(_QWORD *)v51 + 24LL) )
            {
              if ( *(_QWORD *)(*(_QWORD *)v51 + 16LL) == 1LL )
              {
                v37 = -1073700858;
                goto LABEL_61;
              }
              v17 = v65;
            }
          }
        }
        v29 = v26 >> 8;
        v30 = WaitType;
        if ( WaitType != WaitAny
          && (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v29 ^ (unsigned __int64)*(unsigned __int8 *)(v17 + 24)] == IoCompletionObjectType )
        {
          goto LABEL_60;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v17, 1, v16, 1951883855);
          v16 = 1;
        }
        v31 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 + 24) ^ (unsigned __int64)BYTE1(v17);
        v32 = ObTypeIndexTable[v31];
        v33 = *(_QWORD *)(v32 + 32);
        if ( (v33 & 1) != 0 )
        {
          if ( (v33 & 2) != 0 )
          {
            v52 = *(_DWORD *)(v32 + 176);
            v31 = v52 & *(_DWORD *)(*(unsigned __int16 *)(v32 + 180) + v28);
            if ( (_DWORD)v31 == v52 )
            {
              v33 = *(_QWORD *)(*(unsigned __int16 *)(v32 + 182) + v28);
            }
            else
            {
              v33 -= 3LL;
LABEL_26:
              v33 += v28;
            }
          }
          else
          {
            v33 = *(_QWORD *)(v33 + v28 - 1);
          }
        }
        else if ( v33 >= 0 )
        {
          goto LABEL_26;
        }
        *(_QWORD *)&v79[8 * v15 - 8] = v33;
        v15 = (unsigned int)(v15 + 1);
        v34 = Count;
        if ( (unsigned int)v15 >= Count )
        {
          if ( v61 )
          {
            v61 = 0;
            ExReleaseRundownProtection_0(v66 + 95);
          }
          CurrentThread = v67;
          v35 = v67->KernelApcDisable++ == -1;
          if ( v35
            && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v31);
          }
          v13 = 0;
          v60 = 0;
          if ( v30 == WaitAll && v34 > 1 )
          {
            v45 = (unsigned __int64 *)v79;
            v46 = 1;
            while ( 2 )
            {
              v47 = v46;
              v48 = *v45;
              do
              {
                v49 = v47 - 1;
                v50 = *(_QWORD *)&v79[8 * v49 - 8];
                if ( v48 > v50 )
                  break;
                if ( v48 == v50 )
                {
                  v37 = -1073741776;
                  goto LABEL_62;
                }
                *(_QWORD *)&v79[8 * v47-- - 8] = v50;
              }
              while ( (_DWORD)v49 );
              *(_QWORD *)&v79[8 * v47 - 8] = v48;
              ++v46;
              ++v45;
              if ( v46 < v34 )
                continue;
              break;
            }
          }
          v36 = WaitBlockArray;
          v37 = KeWaitForMultipleObjects(v34, &Object, v30, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
          v71 = v37;
          v38 = v66;
          goto LABEL_35;
        }
        v7 = v60;
        v14 = v73;
        v8 = v75;
        continue;
      }
    }
  }
  v37 = -1073741558;
LABEL_62:
  v38 = v66;
  v36 = WaitBlockArray;
LABEL_35:
  if ( v10 )
  {
    v39 = (PVOID *)&v79[8 * v10 + 504];
    do
    {
      ObfDereferenceObjectWithTag(*--v39, 0x7457624Fu);
      --v10;
    }
    while ( v10 );
  }
  if ( v13 )
  {
    if ( v61 )
      ExReleaseRundownProtection_0(v38 + 95);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  if ( v36 )
  {
    if ( v62 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v36);
      else
        ExFreePoolWithTag(v36, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v63);
    }
  }
  return v37;
}
