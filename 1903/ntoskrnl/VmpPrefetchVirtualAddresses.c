/*
 * XREFs of VmpPrefetchVirtualAddresses @ 0x14032AA00
 * Callers:
 *     VmpPrefetchWorker @ 0x1408EDF40 (VmpPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExGetExtensionTable @ 0x1400FB6C0 (ExGetExtensionTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VmpFillGpnRanges @ 0x140329EA8 (VmpFillGpnRanges.c)
 *     VmpProcessContextLockShared @ 0x14032ADD8 (VmpProcessContextLockShared.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchVirtualAddresses(volatile LONG *SpinLock, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  PVOID PoolWithTag; // r15
  _QWORD *v9; // rsi
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-40h]
  __int64 v15; // [rsp+38h] [rbp-38h]
  unsigned __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  unsigned __int64 v21; // [rsp+B0h] [rbp+40h] BYREF
  int (__fastcall **ExtensionTable)(PVOID, unsigned __int64, __int64, __int64); // [rsp+C8h] [rbp+58h]

  v16 = 0LL;
  v17 = 0LL;
  v14 = *((_QWORD *)SpinLock + 9);
  if ( v14 != -1 )
  {
    ExtensionTable = (int (__fastcall **)(PVOID, unsigned __int64, __int64, __int64))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost);
    if ( ExtensionTable )
    {
      v6 = 0LL;
      v21 = 0LL;
      v7 = a3;
      if ( a3 >= 0x2000 )
        v7 = 0x2000LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v7, 0x72506D56u);
      if ( PoolWithTag )
      {
        v9 = &a2[2 * a3];
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        v10 = VmpProcessContextLockShared(SpinLock);
        while ( a2 < v9 )
        {
          v11 = ((*a2 + (((*a2 & 0xFFFLL) + a2[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL)) >> 12) - (*a2 >> 12);
          v16 = *a2 >> 12;
          v17 = v11;
          while ( v17 )
          {
            VmpFillGpnRanges((__int64)SpinLock, &v16, (__int64)PoolWithTag, (__int64 *)&v21, v7, &v18);
            v6 = v21;
            if ( v21 >= v7 )
            {
              v15 = *((_QWORD *)SpinLock + 5);
              ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                v6 = v21;
              }
              __writecr8(v10);
              if ( (*ExtensionTable)(PoolWithTag, v6, v14, 1LL) < 0 )
                goto LABEL_27;
              v6 = 0LL;
              v21 = 0LL;
              v10 = VmpProcessContextLockShared(SpinLock);
              if ( v15 != *((_QWORD *)SpinLock + 5) )
              {
                v18 = 0LL;
                v19 = 0LL;
                v20 = 0LL;
              }
            }
          }
          a2 += 2;
        }
        ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
        {
          v13 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v13);
          v6 = v21;
        }
        __writecr8(v10);
        if ( v6 )
          (*ExtensionTable)(PoolWithTag, v6, v14, 1LL);
      }
LABEL_27:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(VmpExtensionHost + 64));
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
}
