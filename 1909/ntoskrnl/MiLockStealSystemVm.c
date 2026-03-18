/*
 * XREFs of MiLockStealSystemVm @ 0x14012CDC0
 * Callers:
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiSynchronizeSystemVa @ 0x140075BC0 (MiSynchronizeSystemVa.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiVaIsPageFileHash @ 0x1400BD7F4 (MiVaIsPageFileHash.c)
 *     MiUnlockStealVm @ 0x1400C4688 (MiUnlockStealVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiAttachToOwningSession @ 0x14012D08C (MiAttachToOwningSession.c)
 *     MiSmallVaStillMapsFrame @ 0x1401396D8 (MiSmallVaStillMapsFrame.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockStealSystemVm(__int64 a1, unsigned __int8 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  int SystemRegionType; // r12d
  unsigned int v11; // esi
  char *v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  int IsPfnFileOnly; // eax
  int v16; // r8d
  unsigned int v17; // r8d
  char *v19; // rax
  __int64 v20; // rax
  unsigned __int64 SessionVm; // rax
  char v22; // al
  bool v23; // zf
  int v24; // eax
  char *AnyMultiplexedVm; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // rcx
  struct _KPRCB *v30; // rcx
  __int64 v31[7]; // [rsp+30h] [rbp-38h] BYREF
  int v33; // [rsp+88h] [rbp+20h]

  v7 = (__int64)(a3 << 25) >> 16;
  SystemRegionType = MiGetSystemRegionType(v7);
  v11 = 0;
  if ( v7 < v8 || (v33 = 1, v7 > 0xFFFFF6FFFFFFFFFFuLL) )
    v33 = 0;
  switch ( SystemRegionType )
  {
    case 5:
      v22 = *(_BYTE *)(a1 + 35);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v23 = (v22 & 0x10) == 0;
      v24 = KiIrqlFlags;
      if ( !v23 )
        goto LABEL_30;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(a2);
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
      *(_DWORD *)(a4 + 8) |= 0x20u;
      v12 = AnyMultiplexedVm;
      break;
    case 1:
      LOBYTE(v8) = a2;
      v20 = MiAttachToOwningSession(a1, v8, v9 + 72);
      *(_QWORD *)(a4 + 56) = v20;
      if ( v20 )
      {
        SessionVm = MiGetSessionVm();
        *(_DWORD *)(a4 + 8) |= 0x80u;
        v12 = (char *)SessionVm;
        break;
      }
LABEL_29:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v24 = KiIrqlFlags;
LABEL_30:
      if ( v24 && (v24 & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        v30 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v30);
      }
      __writecr8(a2);
      return 0LL;
    case 6:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        v27 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v27);
      }
      __writecr8(a2);
      v19 = MiGetAnyMultiplexedVm(2);
      *(_DWORD *)(a4 + 8) |= 0x10u;
      v12 = v19;
      break;
    case 12:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        v28 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v28);
      }
      __writecr8(a2);
      v12 = MiGetAnyMultiplexedVm(1);
      *(_DWORD *)(a4 + 48) = 1;
      break;
    default:
      if ( SystemRegionType == 9
        && MiVaIsPageFileHash(*(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)), v7) )
      {
        v12 = MiGetAnyMultiplexedVm(3);
        *(_DWORD *)(a4 + 48) = 2;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
        {
          v29 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v29);
        }
        __writecr8(a2);
        break;
      }
      goto LABEL_29;
  }
  if ( !(unsigned int)MiSynchronizeSystemVa((__int64)v12, v7, SystemRegionType, v33, a4) )
    goto LABEL_55;
  if ( !v33 )
  {
    v31[0] = MI_READ_PTE_LOCK_FREE(a3);
    if ( (v31[0] & 1) != 0 )
    {
      v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v31);
      if ( ((v13 >> 12) & 0xFFFFFFFFFLL) == v14 )
        goto LABEL_14;
    }
LABEL_54:
    v11 = 2;
    goto LABEL_55;
  }
  if ( !(unsigned int)MiSmallVaStillMapsFrame(v7, (a1 + 0x58000000000LL) / 48) )
    goto LABEL_54;
LABEL_14:
  if ( ((unsigned int)(*(_DWORD *)(a4 + 48) - 2) <= 1
     || (*(_DWORD *)(a4 + 8) & 0x20) != 0
     || (*(_BYTE *)a1 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 8) == 0)
    && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 )
  {
    IsPfnFileOnly = MiIsPfnFileOnly(a1);
    if ( IsPfnFileOnly != v16 && !MiIsPfnFromSlabAllocation(a1) )
      return v17;
  }
LABEL_55:
  MiUnlockStealVm(a4);
  if ( (v12[184] & 7) == 3 )
    return 0LL;
  return v11;
}
