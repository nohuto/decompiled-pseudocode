/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x1402A7600
 * Callers:
 *     MiScrubNodeLargePageList @ 0x1402CCD80 (MiScrubNodeLargePageList.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1408DD00C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 *     MiFreeContiguousPages @ 0x1401231C4 (MiFreeContiguousPages.c)
 *     MiAcquireNonPagedResources @ 0x14013DB2C (MiAcquireNonPagedResources.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     MiReferencePagePartition @ 0x1402B4844 (MiReferencePagePartition.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402B6578 (MiMarkFileOnlyPfnBad.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(_DWORD *a1, _DWORD *a2)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // r12d
  int v5; // r13d
  __int64 v6; // rbx
  volatile signed __int64 *v7; // rsi
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r15
  unsigned __int8 v10; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v12; // r14
  struct _KPRCB *v13; // rcx
  struct _KPRCB *v14; // rcx
  unsigned __int8 v15; // bp
  struct _KPRCB *v16; // rcx
  char v17; // al
  char v18; // al
  struct _KPRCB *v19; // rcx
  struct _KPRCB *v20; // rcx
  int ContiguousPages; // ebp
  unsigned __int8 v22; // r15
  __int64 v23; // rax
  struct _KPRCB *v24; // rcx
  struct _KPRCB *v25; // rcx
  unsigned int v26; // ebx
  _QWORD *v27; // [rsp+60h] [rbp-68h]
  __int64 v28; // [rsp+68h] [rbp-60h]
  __int64 v29[11]; // [rsp+70h] [rbp-58h] BYREF
  int v30; // [rsp+D0h] [rbp+8h]
  unsigned __int64 v32; // [rsp+E8h] [rbp+20h]

  if ( (*a1 & 0xFFFu) > 1 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( (MiFlags & 0x8000000) == 0 )
    return 3221225474LL;
  v3 = *(_QWORD *)a1 >> 12;
  v28 = *(_QWORD *)a2 >> 12;
  v32 = v28 + v3;
  if ( v3 >= v28 + v3 )
    return 3221225711LL;
  v4 = 0;
  v5 = (((*a1 & 1) == 0) << 28) + 739246080;
  v30 = 0;
  v6 = 48 * v3 - 0x58000000000LL;
  v7 = (volatile signed __int64 *)(v6 + 24);
  v8 = v28 + v3;
  v9 = (_QWORD *)(48 * v3 - 0x57FFFFFFFD8LL);
  v27 = v9;
  while ( 1 )
  {
    if ( v3 > 0xFFFFFFFFFLL || (*v9 & 0x20000000000000LL) == 0 )
    {
      v4 = -1073741584;
      goto LABEL_81;
    }
    if ( (*(_QWORD *)(v6 + 40) & 0x10000000000000LL) != 0 )
    {
      v4 = MiMarkFileOnlyPfnBad(v6);
      goto LABEL_81;
    }
    v10 = MiLockPageInline(v6);
    if ( (*(_QWORD *)(v6 + 40) & 0x10000000000000LL) != 0 )
    {
      _InterlockedAnd64(v7, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v10);
      v8 = v32;
      --v3;
      v9 -= 6;
      v6 -= 48LL;
      v7 -= 6;
      goto LABEL_81;
    }
    v12 = MiReferencePagePartition(v6);
    _InterlockedAnd64(v7, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
      break;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
    __writecr8(v10);
    v4 = -1073741558;
LABEL_27:
    v8 = v32;
LABEL_81:
    v9 += 6;
    ++v3;
    v6 += 48LL;
    v27 = v9;
    v7 += 6;
    if ( v3 >= v8 )
    {
      v26 = 0;
      goto LABEL_83;
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v14);
  }
  __writecr8(v10);
  if ( (unsigned int)MiAcquireNonPagedResources((ULONG_PTR *)v12, 2uLL) )
  {
    v15 = MiLockPageInline(v6);
    if ( *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL)) != v12 )
    {
      _InterlockedAnd64(v7, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
      {
        v16 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
      __writecr8(v15);
      MiReleaseNonPagedResources(v12, 2uLL);
      PsDereferencePartition(*(_QWORD *)(v12 + 168));
      --v3;
      v9 -= 6;
      v6 -= 48LL;
      v7 -= 6;
      goto LABEL_27;
    }
    v4 = 0;
    if ( (v5 & 0x10000000) != 0 )
    {
      v17 = *(_BYTE *)(v6 + 35);
      if ( v17 >= 0 )
        *(_BYTE *)(v6 + 35) = v17 | 0x80;
    }
    v18 = *(_BYTE *)(v6 + 35);
    if ( (v18 & 0x40) != 0 )
    {
      _InterlockedAnd64(v7, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
      {
        v19 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
      __writecr8(v15);
      MiReleaseNonPagedResources(v12, 2uLL);
      PsDereferencePartition(*(_QWORD *)(v12 + 168));
      v4 = 259;
      goto LABEL_27;
    }
    *(_BYTE *)(v6 + 35) = v18 | 0x40;
    _InterlockedAnd64(v7, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
    {
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v20);
    }
    __writecr8(v15);
    ContiguousPages = MiFindContiguousPages(v12, v3, v3, 0LL, 1uLL, 1u, 0x80000000, 0x80000000, v5, 0LL, v29);
    v22 = MiLockPageInline(v6);
    v23 = *(_QWORD *)(v6 + 40);
    if ( ContiguousPages < 0 )
    {
      if ( v12 == *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL)) )
      {
        if ( (*(_BYTE *)(v6 + 35) & 0x40) == 0 )
          goto LABEL_71;
        if ( (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL || (*(_BYTE *)(v6 + 34) & 7) != 5 )
        {
          byte_14043B958 = 1;
          v4 = 259;
          v30 = 1;
        }
      }
      ContiguousPages = 0;
    }
    else
    {
      if ( (*(_BYTE *)(v6 + 35) & 0x40) == 0 )
      {
        _InterlockedAnd64(v7, 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
        {
          v24 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v24);
        }
        __writecr8(v22);
        MiFreeContiguousPages(v12, v3, 1uLL);
        goto LABEL_77;
      }
      *(_WORD *)(v6 + 32) = 0;
      *(_QWORD *)(v6 + 40) = v23 & 0xFFFFFFF000000000uLL;
      MiInsertPageInList(v6, 32);
    }
LABEL_71:
    _InterlockedAnd64(v7, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v25);
    }
    __writecr8(v22);
    MiReleaseNonPagedResources(v12, 1uLL);
LABEL_77:
    PsDereferencePartition(*(_QWORD *)(v12 + 168));
    if ( ContiguousPages == -1073741523 || ContiguousPages == -1073741670 )
    {
      v4 = ContiguousPages;
      v26 = ContiguousPages;
      goto LABEL_89;
    }
    v9 = v27;
    goto LABEL_27;
  }
  v4 = -1073741523;
  v26 = -1073741523;
  PsDereferencePartition(*(_QWORD *)(v12 + 168));
LABEL_89:
  v8 = v32;
LABEL_83:
  if ( v30 == 1 )
    ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  *(_QWORD *)a2 = (v3 + v28 - v8) << 12;
  if ( v28 == 1 )
    return v4;
  return v26;
}
