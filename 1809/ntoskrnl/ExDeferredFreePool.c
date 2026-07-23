/*
 * XREFs of ExDeferredFreePool @ 0x14034E7A0
 * Callers:
 *     ExpAllocateBigPool @ 0x1400E6A70 (ExpAllocateBigPool.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiDereferenceSessionFinal @ 0x1406E1858 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExFreeHeapPages @ 0x14015B374 (ExFreeHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall ExDeferredFreePool(_DWORD *a1, int a2)
{
  signed __int64 v3; // rbp
  int v4; // esi
  unsigned int v5; // r13d
  _QWORD *v6; // r14
  int v7; // r15d
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rdx
  ULONG_PTR v11; // r8
  ULONG_PTR v12; // r9
  ULONG_PTR BugCheckParameter4; // rax
  char v14; // bl
  int v15; // r11d
  __int64 v16; // r10
  ULONG_PTR v17; // rcx
  ULONG_PTR v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r8
  _DWORD *v21; // rcx
  __int64 v22; // rax
  _BYTE *v23; // rcx
  _QWORD *v24; // r9
  _QWORD *v25; // r9
  char v26; // r9
  __int64 *v27; // rtt
  unsigned __int8 OldIrql; // bl
  _QWORD *v29; // rbx
  unsigned __int8 v30; // bl
  struct _KPRCB *v31; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  signed __int64 v34; // [rsp+80h] [rbp+8h]

  if ( _InterlockedIncrement(a1 + 66) == 1 || a2 )
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
    v6 = 0LL;
    _m_prefetchw(a1);
    v7 = *a1 & 1;
    if ( v7 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(a1 + 2));
      PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 1, &LockHandle);
    }
    v9 = (__int64 *)*((_QWORD *)a1 + 32);
    if ( v9 )
    {
      do
      {
        v34 = (signed __int64)v9;
        while ( 1 )
        {
          v10 = *v9;
          v11 = (ULONG_PTR)(v9 - 2);
          ++v4;
          v12 = *(v9 - 1);
          BugCheckParameter4 = (unsigned __int64)(v9 - 2) ^ ExpPoolQuotaCookie;
          if ( v12 != BugCheckParameter4 )
            KeBugCheckEx(0x19u, 0xDuLL, v11, v12, BugCheckParameter4);
          v14 = *(_BYTE *)(v11 + 1);
          v15 = 0;
          _InterlockedIncrement(a1 + 32);
          _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 19, 16LL * (unsigned __int8)*(_WORD *)(v11 + 2));
          LOWORD(v16) = *(_WORD *)(v11 + 2);
          v17 = v11 + 16LL * (unsigned __int8)v16;
          if ( (v17 & 0xFFF) != 0 && !*(_BYTE *)(v17 + 3) )
          {
            LOWORD(v25) = *(_WORD *)(v17 + 2);
            v15 = 1;
            if ( (_BYTE)v25 != 1 )
            {
              v16 = *(_QWORD *)(v17 + 16);
              v25 = *(_QWORD **)(v17 + 24);
              if ( *(_QWORD *)(v16 + 8) != v17 + 16 || *v25 != v17 + 16 )
                goto LABEL_56;
              *v25 = v16;
              *(_QWORD *)(v16 + 8) = v25;
              LOBYTE(v25) = *(_BYTE *)(v17 + 2);
              LOBYTE(v16) = *(_BYTE *)(v11 + 2);
            }
            v26 = v16 + (_BYTE)v25;
            *(_BYTE *)(v11 + 2) = v26;
            LOBYTE(v16) = v26;
          }
          if ( (unsigned __int8)*(_WORD *)v11 )
          {
            v18 = v11 - 16LL * (unsigned __int8)*(_WORD *)v11;
            if ( !*(_BYTE *)(v18 + 3) )
            {
              LOWORD(v24) = *(_WORD *)(v18 + 2);
              v15 = 1;
              if ( (_BYTE)v24 != 1 )
              {
                v16 = *(_QWORD *)(v18 + 16);
                v24 = *(_QWORD **)(v18 + 24);
                if ( *(_QWORD *)(v16 + 8) != v18 + 16 || *v24 != v18 + 16 )
                  goto LABEL_56;
                *v24 = v16;
                *(_QWORD *)(v16 + 8) = v24;
                LOBYTE(v24) = *(_BYTE *)(v18 + 2);
                LOBYTE(v16) = *(_BYTE *)(v11 + 2);
              }
              v11 = v18;
              *(_BYTE *)(v18 + 2) = v16 + (_BYTE)v24;
            }
          }
          if ( (v11 & 0xFFF) != 0 || (((_WORD)v11 + 16 * *(_WORD *)(v11 + 2)) & 0xFFF) != 0 )
          {
            *(_BYTE *)(v11 + 3) = 0;
            v19 = (unsigned __int8)*(_WORD *)(v11 + 2);
            *(_BYTE *)(v11 + 1) = v14;
            if ( v15 )
            {
              v23 = (_BYTE *)(v11 + 16 * v19);
              if ( ((unsigned __int16)v23 & 0xFFF) != 0 )
                *v23 = v19;
            }
            v20 = (_QWORD *)(v11 + 16);
            v21 = &a1[4 * (unsigned int)(v19 - 1) + 80];
            v22 = *(_QWORD *)v21;
            if ( *(_DWORD **)(*(_QWORD *)v21 + 8LL) != v21 )
LABEL_56:
              __fastfail(3u);
            *v20 = v22;
            v20[1] = v21;
            *(_QWORD *)(v22 + 8) = v20;
            *(_QWORD *)v21 = v20;
          }
          else
          {
            *(_QWORD *)v11 = v6;
            ++v5;
            v6 = (_QWORD *)v11;
          }
          if ( v10 == v3 )
            break;
          v9 = (__int64 *)v10;
        }
        v3 = v34;
        v27 = (__int64 *)v34;
        v9 = (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)a1 + 32, 0LL, v34);
      }
      while ( v27 != v9 );
      _InterlockedDecrement(a1 + 66);
      if ( v7 )
      {
        LOBYTE(v10) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v10);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 2));
      }
      else
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(OldIrql);
      }
      if ( v6 )
      {
        do
        {
          v29 = (_QWORD *)*v6;
          ExFreeHeapPages((ULONG_PTR)v6, 4096LL, 0);
          v6 = v29;
        }
        while ( v29 );
        _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 17, v5);
      }
      _InterlockedExchangeAdd(a1 + 67, -v4);
    }
    else
    {
      _InterlockedDecrement(a1 + 66);
      if ( v7 )
      {
        LOBYTE(v8) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v8);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 2));
      }
      else
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v30 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v31 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v31);
        }
        __writecr8(v30);
      }
    }
  }
  else
  {
    _InterlockedDecrement(a1 + 66);
  }
}
