/*
 * XREFs of MiLockStealSystemVm @ 0x1400E99F8
 * Callers:
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiVaIsPageFileHash @ 0x14009D9C8 (MiVaIsPageFileHash.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiSynchronizeSystemVa @ 0x1400E9FE8 (MiSynchronizeSystemVa.c)
 *     MiUnlockStealVm @ 0x1400ECDE4 (MiUnlockStealVm.c)
 *     MiAttachToOwningSession @ 0x14011A53C (MiAttachToOwningSession.c)
 *     MiSmallVaStillMapsFrame @ 0x140134AC4 (MiSmallVaStillMapsFrame.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockStealSystemVm(__int64 a1, unsigned __int8 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r12
  __int64 v8; // r9
  int SystemRegionType; // r15d
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // r13d
  unsigned __int64 AnyMultiplexedVm; // rax
  unsigned int v15; // edx
  char *v16; // r14
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  int IsPfnFileOnly; // eax
  int v21; // r8d
  unsigned int v22; // r8d
  char v24; // al
  bool v25; // zf
  int v26; // eax
  __int64 v27; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v29; // rcx
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  struct _KPRCB *v32; // rcx
  __int64 v34; // [rsp+78h] [rbp+20h] BYREF

  v7 = (__int64)(a3 << 25) >> 16;
  SystemRegionType = MiGetSystemRegionType(v7);
  v11 = v10;
  v12 = 0LL;
  if ( v7 < v11 || (v13 = 1, v7 > 0xFFFFF6FFFFFFFFFFuLL) )
    v13 = 0;
  if ( SystemRegionType == 5 )
  {
    v24 = *(_BYTE *)(a1 + 35);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v25 = (v24 & 0x10) == 0;
    v26 = KiIrqlFlags;
    if ( v25 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(a2);
      AnyMultiplexedVm = (unsigned __int64)MiGetAnyMultiplexedVm(5);
      *(_DWORD *)(a4 + 8) |= 0x20u;
      goto LABEL_10;
    }
  }
  else
  {
    if ( SystemRegionType == 1 )
    {
      LOBYTE(v12) = a2;
      v27 = MiAttachToOwningSession(a1, v12, v8 + 72);
      *(_QWORD *)(a4 + 56) = v27;
      if ( v27 )
      {
        AnyMultiplexedVm = MiGetSessionVm();
        *(_DWORD *)(a4 + 8) |= 0x80u;
LABEL_10:
        v16 = (char *)AnyMultiplexedVm;
        goto LABEL_11;
      }
    }
    else
    {
      if ( (unsigned int)(SystemRegionType - 6) <= 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
        {
          v32 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v32);
        }
        __writecr8(a2);
        AnyMultiplexedVm = (unsigned __int64)MiGetAnyMultiplexedVm(2);
        *(_DWORD *)(a4 + 8) |= 0x10u;
        goto LABEL_10;
      }
      if ( SystemRegionType == 12 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
        {
          v29 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v29);
        }
        __writecr8(a2);
        AnyMultiplexedVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
        *(_DWORD *)(a4 + 48) = 1;
        goto LABEL_10;
      }
      if ( SystemRegionType == 9
        && MiVaIsPageFileHash(*(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)), v7) )
      {
        v16 = MiGetAnyMultiplexedVm(3);
        *(_DWORD *)(a4 + 48) = 2;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
        {
          v30 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v30);
          v15 = 0;
        }
        __writecr8(a2);
LABEL_11:
        v17 = v15;
        if ( (unsigned int)MiSynchronizeSystemVa((_DWORD)v16, v7, SystemRegionType, v13, a4) )
        {
          if ( v13 )
          {
            if ( (unsigned int)MiSmallVaStillMapsFrame(v7, (a1 + 0x58000000000LL) / 48) )
            {
LABEL_15:
              if ( ((unsigned int)(*(_DWORD *)(a4 + 48) - 2) <= 1
                 || (*(_DWORD *)(a4 + 8) & 0x20) != 0
                 || (*(_BYTE *)a1 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 8) == 0)
                && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 )
              {
                IsPfnFileOnly = MiIsPfnFileOnly(a1);
                if ( IsPfnFileOnly != v21 && !MiIsPfnFromSlabAllocation(a1) )
                  return v22;
              }
              goto LABEL_31;
            }
          }
          else
          {
            v34 = MI_READ_PTE_LOCK_FREE(a3);
            if ( (v34 & 1) != 0 )
            {
              v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v34);
              if ( ((v18 >> 12) & 0xFFFFFFFFFLL) == v19 )
                goto LABEL_15;
            }
          }
          v17 = 2;
        }
LABEL_31:
        MiUnlockStealVm(a4);
        if ( (v16[184] & 7) == 3 )
          return 0;
        return v17;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v26 = KiIrqlFlags;
  }
  if ( v26 && (v26 & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    v31 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v31);
  }
  __writecr8(a2);
  return 0LL;
}
