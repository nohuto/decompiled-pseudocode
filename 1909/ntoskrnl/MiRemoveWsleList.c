/*
 * XREFs of MiRemoveWsleList @ 0x140023B20
 * Callers:
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteWsle @ 0x1400FA424 (MiWriteWsle.c)
 *     MiLookupDataTableEntry @ 0x1400FB388 (MiLookupDataTableEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x1402BF3C0 (MiLogRemoveWsleEvent.c)
 */

__int64 __fastcall MiRemoveWsleList(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v7; // rdx
  char v8; // al
  int *v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned __int64 v13; // r11
  _BYTE *v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdi
  int v17; // r12d
  __int64 v18; // rsi
  unsigned __int64 v19; // r8
  int v20; // r9d
  unsigned __int64 v21; // rdi
  char *v22; // rsi
  __int64 v23; // r12
  unsigned __int64 *v24; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 v27; // rbx
  char *v28; // rbp
  unsigned __int64 v29; // r11
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  char v32; // r9
  unsigned __int8 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // r8
  __int64 *v37; // r8
  __int64 v38; // rdx
  unsigned __int8 v39; // al
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // r13
  __int64 *v43; // r14
  __int64 v44; // r8
  unsigned __int64 *v45; // rbx
  unsigned __int64 v46; // rsi
  __int64 v47; // rcx
  unsigned __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 **v53; // rcx
  __int64 v54; // r15
  __int64 **v55; // rax
  int v56; // eax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // [rsp+20h] [rbp-B8h]
  unsigned int v61; // [rsp+24h] [rbp-B4h]
  int v62; // [rsp+28h] [rbp-B0h]
  __int64 v63; // [rsp+30h] [rbp-A8h]
  __int64 v64; // [rsp+38h] [rbp-A0h]
  int *v65; // [rsp+40h] [rbp-98h]
  __int64 v66; // [rsp+48h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v68; // [rsp+68h] [rbp-70h] BYREF
  __int64 v69; // [rsp+80h] [rbp-58h]
  __int64 v73; // [rsp+F8h] [rbp+20h] BYREF

  v73 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a1;
  v7 = 0LL;
  v8 = *(_BYTE *)(a1 + 184) & 7;
  v69 = 0LL;
  v9 = &dword_140466F80;
  v61 = 0;
  if ( v8 != 2 )
    v9 = 0LL;
  v60 = 0;
  v65 = v9;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( !a4 )
    return v10;
  v13 = 0xFFFFF6FFFFFFFFFFuLL;
  v14 = a3 + 1;
  v15 = a4;
  v64 = a2 - (_QWORD)a3;
  v16 = a2 - (_QWORD)a3;
  v17 = 0;
  v18 = 0LL;
  do
  {
    if ( (*v14 & 1) != 0 )
    {
      v19 = *(_QWORD *)&v14[v16 + 23];
      ++v18;
      if ( v19 < 0xFFFFF68000000000uLL || v19 > v13 )
      {
        v60 = 2;
        v10 = ((v19 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      }
      else
      {
        v60 = 1;
      }
      if ( (*v14 & 2) != 0 )
      {
        ++v11;
        if ( v19 < 0xFFFFF68000000000uLL || v19 > v13 )
          ++v12;
      }
      if ( (*(_BYTE *)(v4 + 184) & 7) == 4 )
      {
        if ( PsNtosImageBase
          && (v19 >= (unsigned __int64)PsNtosImageBase && v19 < PsNtosImageEnd
           || v19 >= (unsigned __int64)PsHalImageBase && v19 < PsHalImageEnd) )
        {
          v7 = (unsigned int)(v7 + 1);
          v61 = v7;
        }
        else if ( (unsigned int)MiGetSystemRegionType(v19, v7, v19, 0xFFFFF68000000000uLL) == 12 )
        {
          v51 = MiLookupDataTableEntry(
                  (__int64)(((v50 + ((v49 >> 9) & 0x7FFFFFFFF8LL)) << 25) - (v50 << 25)) >> 16,
                  2LL);
          v4 = a1;
          v7 = v61;
          v13 = 0xFFFFF6FFFFFFFFFFuLL;
          if ( v51 )
            ++v17;
        }
      }
    }
    v14 += 8;
    --v15;
  }
  while ( v15 );
  v20 = v60;
  v21 = v73;
  v63 = v18;
  v22 = a3;
  v62 = v17;
  v23 = v69;
  v66 = v10;
  if ( !v60 )
    return v10;
  if ( (*(_BYTE *)(v4 + 184) & 7) == 2 )
    v24 = (unsigned __int64 *)&unk_140466F40;
  else
    v24 = (unsigned __int64 *)(v4 + 256);
  LockHandle.LockQueue.Lock = v24;
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v56 = SchedulerAssist[5];
      SchedulerAssist[5] = v56 + 1;
      if ( v56 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v4 = a1;
        v20 = v60;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v24);
  }
  else
  {
    if ( !_InterlockedExchange64((volatile __int64 *)v24, (__int64)&LockHandle) )
      goto LABEL_17;
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v20 = v60;
  v4 = a1;
LABEL_17:
  if ( v11 )
  {
    *(_QWORD *)(v4 + 144) -= v11;
    if ( v12 )
      *(_QWORD *)(v4 + 128) -= v12;
  }
  if ( v61 )
    LODWORD(xmmword_140464640) = xmmword_140464640 - v61;
  if ( v62 )
    DWORD1(xmmword_140464640) -= v62;
  *(_QWORD *)(v4 + 136) -= v63;
  v27 = 0LL;
  v28 = &a3[-a2];
  v29 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    v30 = v23;
    if ( (v22[v64 + 1 + (_QWORD)v28] & 1) == 0 )
      goto LABEL_39;
    v31 = *(_QWORD *)&v22[v64 + 24];
    if ( v20 == 1 )
    {
      if ( (*(_BYTE *)(v4 + 184) & 7) != 0 )
        goto LABEL_39;
      v32 = *v22;
LABEL_30:
      v33 = v32 & 0xF;
      if ( v31 < 0xFFFFF68000000000uLL || v31 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v34 = (v31 >> 18) & 0x3FFFFFF8;
        v35 = *(_QWORD *)(v34 - 0x904C0000000LL);
        v36 = v34 - 0x904C0000000LL;
        if ( (unsigned __int64)(v34 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
          && v36 <= v29
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v35 & 1) != 0
          && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v58 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v36 >> 3) & 0x1FF));
            v59 = v35 | 0x20;
            if ( (v58 & 0x20) == 0 )
              v59 = *(_QWORD *)(v34 - 0x904C0000000LL);
            v35 = v59;
            if ( (v58 & 0x42) != 0 )
              v35 = v59 | 0x42;
          }
        }
        v73 = v35;
        v37 = (__int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v73) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        v38 = *v37;
        v39 = ((unsigned __int64)*v37 >> 14) & 7;
        if ( (((unsigned __int64)*v37 >> 4) & 0x3FF) != 0 )
        {
          if ( v33 == v39 )
          {
            *v37 = v38 ^ ((unsigned __int16)v38 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v37 >> 4) & 0x3FF) - 1))) & 0x3FF0;
          }
          else if ( v33 > v39 )
          {
            *v37 = v38 ^ ((unsigned int)v38 ^ (v33 << 14)) & 0x1C000 | 0x3FF0;
          }
        }
      }
      --*(_QWORD *)(v4 + 8LL * v33 + 40);
      if ( v33 == 7 )
      {
        v40 = *(unsigned __int16 *)(v4 + 174);
        memset(&v68, 0, sizeof(v68));
        v41 = *(_QWORD *)(qword_140465E88 + 8 * v40);
        v42 = *(_QWORD *)(v41 + 7800);
        if ( *(_QWORD *)(v4 + 96) < *(_QWORD *)(v42 + 64) )
        {
          v43 = (__int64 *)(v4 + 24);
          if ( *(_QWORD *)(v4 + 24) )
          {
            if ( *(__int64 **)(v41 + 7816) != v43 )
            {
              v68.LockQueue.Next = 0LL;
              v68.LockQueue.Lock = &SpinLock;
              KxAcquireQueuedSpinLock((__int64)&v68, (volatile __int64 *)&SpinLock);
              if ( *(_BYTE *)(v42 + 53) || (v52 = *v43) == 0 )
              {
                *(_BYTE *)(v42 + 54) = 1;
              }
              else
              {
                v53 = (__int64 **)v43[1];
                if ( *(__int64 **)(v52 + 8) != v43
                  || *v53 != v43
                  || (*v53 = (__int64 *)v52,
                      v54 = v41 + 7808,
                      *(_QWORD *)(v52 + 8) = v53,
                      v55 = *(__int64 ***)(v54 + 8),
                      *v55 != (__int64 *)v54) )
                {
                  __fastfail(3u);
                }
                *v43 = v54;
                v43[1] = (__int64)v55;
                *v55 = v43;
                *(_QWORD *)(v54 + 8) = v43;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v68);
              v4 = a1;
              v29 = 0xFFFFF6FB7DBED7F8uLL;
            }
          }
        }
      }
      goto LABEL_39;
    }
    --*(_QWORD *)(v4 + 120);
    ++v23;
    v32 = *v22;
    if ( !v65 )
      v23 = v30;
    if ( (v32 & 0xF) != 8 )
      goto LABEL_30;
LABEL_39:
    ++v27;
    v22 += 8;
    if ( v27 >= v21 )
      break;
    v20 = v60;
  }
  if ( v65 )
  {
    *((_QWORD *)v65 + 1) -= v63;
    if ( v23 )
      *((_QWORD *)v65 + 2) -= v23;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v45 = (unsigned __int64 *)(a2 + 24);
  do
  {
    if ( (v28[(_QWORD)v45 - 23] & 1) != 0 )
    {
      v46 = *v45;
      if ( v60 == 2 )
      {
        v47 = *(unsigned __int8 *)(((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v47 & 1) != 0 )
        {
          LOBYTE(v44) = 10;
          MiWriteWsle(v47, *v45, v44);
        }
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
        MiLogRemoveWsleEvent(v46, *(_BYTE *)(a1 + 184) & 7);
    }
    ++v45;
    --v21;
  }
  while ( v21 );
  return v66;
}
