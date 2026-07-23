/*
 * XREFs of ExpApplyPriorityBoost @ 0x1400CEAA0
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140050D60 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPrewaitBoost @ 0x1400D1C58 (ExpApplyPrewaitBoost.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1401210A8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyRewaitBoost @ 0x140160040 (ExpApplyRewaitBoost.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObpIncrPointerCount @ 0x14005B360 (ObpIncrPointerCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetBaseIoPriorityThread @ 0x1400B6D00 (PsGetBaseIoPriorityThread.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400D143C (KeAbProcessEffectiveIoPriorityChange.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x14010DC84 (ExGetExtensionTable.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140128EA8 (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 */

void __fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3)
{
  unsigned int v5; // r15d
  bool v6; // cc
  int v7; // esi
  int v8; // r13d
  int v9; // ebp
  int v10; // r14d
  int v11; // edx
  char v12; // cl
  int v13; // eax
  ULONG_PTR v14; // rdi
  signed __int64 BugCheckParameter4; // rax
  __int64 v16; // rdi
  unsigned int v17; // r12d
  unsigned int i; // esi
  int v19; // eax
  __int64 v20; // rbp
  int v21; // edx
  __int64 v22; // rax
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v25; // rcx
  __int64 ExtensionTable; // rax
  __int64 v27; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v29; // [rsp+90h] [rbp+8h]
  int v30; // [rsp+98h] [rbp+10h]
  int v31; // [rsp+A8h] [rbp+20h]

  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return;
  v5 = (*(_DWORD *)(a3 + 1744) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 544) + 772LL) & 0x100000) != 0 )
    v5 = 0;
  v6 = v5 <= 2;
  if ( v5 < 2 )
  {
    if ( (struct _KTHREAD *)a3 == KeGetCurrentThread() && *(_DWORD *)(a3 + 1800) )
      v5 = 2;
    v6 = v5 <= 2;
  }
  if ( v6 )
    v5 = 2;
  v7 = a2 & 0xFF00;
  v8 = a2 & 2;
  v29 = (unsigned __int16)v7;
  v9 = a2 & 4;
  v30 = v8;
  v31 = v9;
  v10 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  if ( v9 )
    *(_WORD *)(a1 + 26) |= 4u;
  if ( v8 )
    *(_WORD *)(a1 + 26) |= 2u;
  if ( v7 )
  {
    v11 = *(char *)(a3 + 195);
    if ( v11 > *(unsigned __int8 *)(a1 + 27) )
    {
      v12 = 15;
      if ( (unsigned __int8)v11 < 0xFu )
        v12 = *(_BYTE *)(a3 + 195);
      *(_BYTE *)(a1 + 27) = v12;
    }
  }
  v13 = *(_DWORD *)(a1 + 56);
  v14 = *(_QWORD *)(a1 + 48);
  if ( (v13 & 2) != 0 )
  {
    v14 &= 0xFFFFFFFFFFFFFFFCuLL;
LABEL_18:
    if ( v14 )
    {
      if ( v9
        && (v13 & 1) == 0
        && ((*(_DWORD *)(*(_QWORD *)(v14 + 544) + 772LL) & 0x100000) != 0 || (*(_DWORD *)(v14 + 1744) & 0xE00u) < 0x400) )
      {
        v10 = 4;
        PsBoostThreadIo(v14, 0LL);
        *(_DWORD *)(a1 + 56) |= 1u;
      }
      if ( v8 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
      {
        v10 |= 2u;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v14 + 1804)) == 1 && *(_BYTE *)(v14 + 793) )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (unsigned int)KiAbThreadInsertList(v14, &CurrentPrcb->AbPropagateBoostsList, v14 + 1376) )
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            v25 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v25);
          }
          __writecr8(CurrentIrql);
          v7 = v29;
        }
        *(_DWORD *)(a1 + 56) |= 4u;
      }
      if ( v7 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v14 + 195) )
        v10 |= 0xFF00u;
      if ( v10 )
      {
        if ( ObpTraceFlags )
          ObpPushStackInfo(v14 - 48);
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v14 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v14, 0x10uLL, BugCheckParameter4);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( (v10 & 4) != 0 )
        {
          ++ExpResourceIoBoosted;
          IoBoostThreadIoPriority(v14, v5, 0LL);
        }
        if ( (v10 & 2) != 0 )
        {
          if ( *(_DWORD *)(v14 + 1808) )
          {
            ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
            if ( ExtensionTable )
            {
              (*(void (__fastcall **)(ULONG_PTR))(ExtensionTable + 16))(v14);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
            }
          }
        }
        if ( (v10 & 0xFF00) != 0 )
        {
          __incgsdword(0x63E8u);
          KeSetPriorityBoost(v14, *(unsigned __int8 *)(a1 + 27));
        }
        v10 = 0;
        ObDereferenceObjectDeferDelete((PVOID)v14);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
      }
    }
    goto LABEL_42;
  }
  if ( (v14 & 3) == 0 )
    goto LABEL_18;
LABEL_42:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 8);
      for ( i = 1; i < v17; ++i )
      {
        v19 = *(_DWORD *)(v16 + 24);
        v16 += 16LL;
        v20 = *(_QWORD *)v16;
        if ( (v19 & 2) != 0 )
        {
          v20 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v20 & 3) != 0 )
        {
          continue;
        }
        if ( v20 )
        {
          LOBYTE(v21) = v19;
          if ( v31 && (v19 & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v20) < 2 )
          {
            v10 |= 4u;
            PsBoostThreadIo(v20, 0LL);
            *(_DWORD *)(v16 + 8) |= 1u;
            v21 = *(_DWORD *)(v16 + 8);
          }
          if ( v8 && (v21 & 4) == 0 )
          {
            v10 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v20 + 1804)) == 1 )
              KeAbProcessEffectiveIoPriorityChange(v20, 0LL);
            *(_DWORD *)(v16 + 8) |= 4u;
          }
          if ( v29 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v20 + 195) )
            v10 |= 0xFF00u;
          if ( v10 )
          {
            if ( ObpTraceFlags )
              ObpPushStackInfo(v20 - 48);
            ObpIncrPointerCount((volatile signed __int64 *)(v20 - 48));
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            if ( (v10 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority(v20, v5, 0LL);
            }
            if ( (v10 & 2) != 0 )
            {
              if ( *(_DWORD *)(v20 + 1808) )
              {
                v27 = ExGetExtensionTable(IopIoRateExtensionHost);
                if ( v27 )
                {
                  (*(void (__fastcall **)(__int64))(v27 + 16))(v20);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                }
              }
            }
            if ( (v10 & 0xFF00) != 0 )
            {
              __incgsdword(0x63ECu);
              KeSetPriorityBoost(v20, *(unsigned __int8 *)(a1 + 27));
            }
            ObDereferenceObjectDeferDelete((PVOID)v20);
            v10 = 0;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
            v22 = *(_QWORD *)(a1 + 16);
            if ( !v22 || *(_DWORD *)(v22 + 8) != v17 )
              break;
            v8 = v30;
          }
        }
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
