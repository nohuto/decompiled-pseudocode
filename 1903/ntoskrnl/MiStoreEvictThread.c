/*
 * XREFs of MiStoreEvictThread @ 0x140193590
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x1400E3EBC (KiInitializeTimer2.c)
 *     MiStoreEvictPageFile @ 0x1401315F8 (MiStoreEvictPageFile.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *P)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // r8
  int v5; // r14d
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  KIRQL v9; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v11; // rcx
  _QWORD v12[2]; // [rsp+40h] [rbp-148h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-138h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-128h] BYREF
  _BYTE v15[144]; // [rsp+C0h] [rbp-C8h] BYREF

  memset(v15, 0, 0x88uLL);
  KeWaitForSingleObject(P + 2, WrKernel, 0, 0, 0LL);
  v2 = P[8];
  v3 = *(_QWORD *)P;
  ExFreePoolWithTag(P, 0);
  if ( !v2 )
  {
    KiInitializeTimer2((__int64)v15, 0LL, 0LL, 8);
    v12[0] &= v4;
    v12[1] = -1LL;
    KeSetTimer2((__int64)v15, -600000000LL, 600000000LL, (__int64)v12);
    Object[1] = v15;
    Object[0] = (PVOID)(v3 + 1184);
    while ( 1 )
    {
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray) )
        KeResetEvent((PRKEVENT)(v3 + 1184));
      while ( 1 )
      {
        v5 = *(_DWORD *)(v3 + 1152);
        v6 = 0LL;
        v7 = *(_DWORD *)(v3 + 7896);
        if ( v7 )
        {
          do
          {
            v8 = *(_QWORD *)(v3 + 8 * v6 + 7904);
            if ( (*(_BYTE *)(v8 + 204) & 0x40) != 0 )
            {
              MiStoreEvictPageFile(*(_QWORD *)(v3 + 8 * v6 + 7904));
              if ( *(_DWORD *)(v8 + 200) >= 0x100u )
                LODWORD(v6) = v6 - 1;
            }
            v6 = (unsigned int)(v6 + 1);
          }
          while ( (unsigned int)v6 < v7 );
        }
        v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1168));
        if ( v5 == *(_DWORD *)(v3 + 1152) )
          break;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1168));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v9);
      }
      if ( v5 )
      {
        *(_DWORD *)(v3 + 1152) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1232), 0, 0);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1168));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        v11 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v11);
      }
      __writecr8(v9);
    }
  }
}
