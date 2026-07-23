/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x14010A340
 * Callers:
 *     ExSetResourceOwnerPointerEx @ 0x14010A320 (ExSetResourceOwnerPointerEx.c)
 *     ExSetResourceOwnerPointer @ 0x1401669B0 (ExSetResourceOwnerPointer.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14004F570 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ObpIncrPointerCount @ 0x14005B360 (ObpIncrPointerCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PsBoostThreadIoEx @ 0x1400BBED0 (PsBoostThreadIoEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x140313A1C (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

void __fastcall ExpSetResourceOwnerPointerEx(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter4, char a3)
{
  bool v6; // bp
  ULONG_PTR CurrentThread; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // r13
  ULONG_PTR v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r11
  ULONG_PTR v16; // r14
  ULONG_PTR v17; // r10
  ULONG_PTR v18; // r9
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // r15d
  ULONG_PTR v24; // rax
  volatile signed __int64 *v25; // rsi
  unsigned int v26; // eax
  int v27; // ecx
  __int64 v28; // r13
  unsigned __int64 v29; // r8
  __int64 v30; // r11
  __int64 v31; // r10
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v8 = 65792;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(BugCheckParameter1 + 96), &LockHandle);
  if ( *(char *)(BugCheckParameter1 + 26) >= 0 )
  {
    v9 = *(_QWORD *)(BugCheckParameter1 + 48);
    v10 = BugCheckParameter1 + 48;
    v11 = 0LL;
    if ( v9 == BugCheckParameter4 )
    {
      v16 = BugCheckParameter1 + 48;
      goto LABEL_13;
    }
    v12 = *(_QWORD *)(BugCheckParameter1 + 16);
    v13 = BugCheckParameter1 + 48;
    if ( v9 )
      v13 = 0LL;
    v14 = v9 != 0;
    v15 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
    if ( v12 )
    {
      v16 = v12 + 16;
      if ( v14 < v15 )
      {
        while ( 1 )
        {
          v17 = v13;
          v18 = v13;
          if ( *(_QWORD *)v16 == BugCheckParameter4 )
            break;
          if ( *(_QWORD *)v16 )
          {
            if ( ++v14 == v15 )
              goto LABEL_11;
          }
          else
          {
            v13 = v16;
            if ( v18 )
              v13 = v17;
          }
          v16 += 16LL;
          if ( v16 == v12 + 16LL * *(unsigned int *)(v12 + 8) )
            goto LABEL_11;
        }
        v11 = 0LL;
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v16 - v12) >> 4;
LABEL_13:
        if ( (CurrentThread & 3) != 0 )
          v19 = 0;
        else
          v19 = *(unsigned __int8 *)(CurrentThread + 649);
        v20 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 != CurrentThread )
        {
          if ( v20 )
            v10 = 0LL;
          LOBYTE(v11) = v20 != 0;
          v21 = v10;
          if ( !v19
            || (v22 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
            || v19 >= *(_DWORD *)(v22 + 8)
            || (v10 = v22 + 16LL * v19, *(_QWORD *)v10 != CurrentThread) )
          {
            v28 = *(_QWORD *)(BugCheckParameter1 + 16);
            v29 = *(unsigned int *)(BugCheckParameter1 + 64)
                + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
            if ( !v28 || (v10 = v28 + 16, v11 >= v29) )
LABEL_80:
              KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 4uLL);
            while ( 1 )
            {
              v30 = v21;
              v31 = v21;
              if ( *(_QWORD *)v10 == CurrentThread )
                break;
              if ( *(_QWORD *)v10 )
              {
                if ( ++v11 == v29 )
                  goto LABEL_80;
              }
              else
              {
                v21 = v10;
                if ( v31 )
                  v21 = v30;
              }
              v10 += 16LL;
              if ( v10 == v28 + 16LL * *(unsigned int *)(v28 + 8) )
                goto LABEL_80;
            }
            KeGetCurrentThread()->SchedulerApc.SpareByte0 = (v10 - v28) >> 4;
          }
        }
        v23 = a3 & 1;
        if ( !v16 )
        {
          if ( v23 )
          {
            v24 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
              KeBugCheckEx(
                0x132u,
                BugCheckParameter1,
                *(_QWORD *)(BugCheckParameter1 + 16),
                CurrentThread,
                BugCheckParameter4);
            v25 = (volatile signed __int64 *)(v24 - 48);
            if ( ObpTraceFlags )
              ObpPushStackInfo(v24 - 48);
            ObpIncrPointerCount(v25);
            *(_DWORD *)(v10 + 8) |= 2u;
          }
          else
          {
            v33 = *(_DWORD *)(v10 + 8);
            if ( (v33 & 1) != 0 )
            {
              PsBoostThreadIoEx(*(_QWORD *)v10, 1, 0, 0LL);
              *(_DWORD *)(v10 + 8) &= ~1u;
              v33 = *(_DWORD *)(v10 + 8);
            }
            if ( (v33 & 4) != 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v10 + 1804LL));
              *(_DWORD *)(v10 + 8) &= ~4u;
            }
          }
          *(_QWORD *)v10 = BugCheckParameter4;
          v26 = 25560;
          goto LABEL_29;
        }
        if ( v23 )
        {
          if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
            KeBugCheckEx(
              0x132u,
              BugCheckParameter1,
              *(_QWORD *)(BugCheckParameter1 + 16),
              CurrentThread,
              BugCheckParameter4);
          v32 = *(_DWORD *)(v10 + 8);
          if ( (v32 & 1) != 0 )
          {
            v35 = *(_DWORD *)(v16 + 8);
            if ( (v35 & 1) != 0 )
              PsBoostThreadIoEx(*(_QWORD *)v10, 1, 0, 0LL);
            else
              *(_DWORD *)(v16 + 8) = v35 | 1;
            *(_DWORD *)(v10 + 8) &= ~1u;
            v32 = *(_DWORD *)(v10 + 8);
          }
          if ( (v32 & 4) != 0 )
          {
            v36 = *(_DWORD *)(v16 + 8);
            if ( (v36 & 4) != 0 )
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v10 + 1804LL));
            else
              *(_DWORD *)(v16 + 8) = v36 | 4;
            *(_DWORD *)(v10 + 8) &= ~4u;
          }
          if ( (*(_DWORD *)(v16 + 8) & 2) == 0 )
          {
            ObfReferenceObjectWithTag(*(PVOID *)v10, 0x746C6644u);
            *(_DWORD *)(v16 + 8) |= 2u;
          }
        }
        else
        {
          v27 = *(_DWORD *)(v10 + 8);
          if ( (v27 & 1) != 0 )
          {
            PsBoostThreadIoEx(*(_QWORD *)v10, 1, 0, 0LL);
            *(_DWORD *)(v10 + 8) &= ~1u;
            v27 = *(_DWORD *)(v10 + 8);
          }
          if ( (v27 & 4) == 0 )
            goto LABEL_38;
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v10 + 1804LL));
          *(_DWORD *)(v10 + 8) &= ~4u;
        }
        v27 = *(_DWORD *)(v10 + 8);
LABEL_38:
        v26 = 25564;
        *(_DWORD *)(v16 + 8) += v27 & 0xFFFFFFF8;
        *(_DWORD *)(v10 + 8) &= 7u;
        *(_QWORD *)v10 = 0LL;
        --*(_DWORD *)(BugCheckParameter1 + 64);
LABEL_29:
        __incgsdword(v26);
        if ( v6 )
          v8 = 65856;
        else
          v8 = 65792;
        goto LABEL_31;
      }
LABEL_11:
      v11 = 0LL;
    }
    v16 = 0LL;
    goto LABEL_13;
  }
  if ( ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1) && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
    KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
  if ( (a3 & 1) != 0 )
  {
    if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
      KeBugCheckEx(0x132u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 16), CurrentThread, BugCheckParameter4);
    ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
    *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
  }
  else
  {
    v34 = *(_DWORD *)(BugCheckParameter1 + 56);
    if ( (v34 & 1) != 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), 1, 0, 0LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      v34 = *(_DWORD *)(BugCheckParameter1 + 56);
    }
    if ( (v34 & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter1 + 48) + 1804LL));
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
  __incgsdword(0x63D4u);
  if ( v6 )
    v8 = 65824;
LABEL_31:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
    PerfLogExecutiveResourceSetOwnerPointer(v8, BugCheckParameter1);
}
