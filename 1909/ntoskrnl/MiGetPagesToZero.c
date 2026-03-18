/*
 * XREFs of MiGetPagesToZero @ 0x14002A040
 * Callers:
 *     MiZeroPageThread @ 0x140185720 (MiZeroPageThread.c)
 *     MiZeroLargePages @ 0x14018FC0C (MiZeroLargePages.c)
 * Callees:
 *     MiUnlinkNodeLargePage @ 0x14002A7D0 (MiUnlinkNodeLargePage.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002AC80 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002C1E0 (MiMakeProtectionPfnCompatible.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     KeQueryNodeActiveAffinity @ 0x140118A60 (KeQueryNodeActiveAffinity.c)
 *     KeSetIdealProcessorThreadEx @ 0x1401275D0 (KeSetIdealProcessorThreadEx.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x14012DE30 (KeFindFirstSetLeftGroupAffinity.c)
 *     MiRemoveFaultNode @ 0x1401386EC (MiRemoveFaultNode.c)
 *     MiGetHugePageToZero @ 0x14018F650 (MiGetHugePageToZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGetPagesToZero(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r15
  int v18; // ecx
  int ProtectionPfnCompatible; // eax
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 ValidPte; // r11
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r11
  unsigned __int8 v30; // r15
  unsigned int v31; // eax
  __int64 v32; // r12
  unsigned int v33; // r15d
  ULONG_PTR v34; // rbx
  __int64 CurrentIrql; // r10
  __int64 v36; // r8
  __int64 *v37; // rax
  __int64 v38; // rdx
  unsigned int i; // ecx
  volatile signed __int32 *v40; // r14
  struct _KTHREAD *CurrentThread; // r15
  bool v42; // zf
  struct _KPRCB *v43; // rbx
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v45; // edx
  _QWORD *v46; // rdx
  _QWORD *v47; // rax
  __int64 *v48; // rcx
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  int v51; // ebx
  unsigned __int8 v52; // r14
  __int64 v53; // rcx
  __int64 v54; // r11
  __int64 v55; // rcx
  struct _KTHREAD *v56; // rbx
  unsigned int FirstSetLeftGroupAffinity; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  int v59; // eax
  _DWORD *v60; // rcx
  int v61; // eax
  signed __int32 v62; // eax
  _QWORD *v63; // rax
  int v64; // eax
  struct _KPRCB *v65; // rcx
  struct _KPRCB *v66; // rcx
  struct _KPRCB *v67; // rcx
  int v68; // [rsp+40h] [rbp-48h] BYREF
  int v69; // [rsp+44h] [rbp-44h] BYREF
  __int64 v70; // [rsp+48h] [rbp-40h]
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v74; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  if ( !a3 && *(_BYTE *)(a2 + 210) )
    return MiGetHugePageToZero();
  v5 = *(_DWORD *)(a2 + 244) >> byte_14046574D;
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( (unsigned int)v3 < 3 )
  {
    v6 = MiUnlinkNodeLargePage(a1, v3, v5, 4, a2 + 232, 0, a2);
    v7 = MiLargePageSizes[v3];
    v8 = v6;
    goto LABEL_4;
  }
  v31 = *(_DWORD *)(a2 + 244);
  v32 = *(_QWORD *)(a1 + 2120);
  v33 = v31;
  while ( 1 )
  {
    v34 = *(_QWORD *)(v32 + 40LL * v31 + 16);
    if ( v34 != 0xFFFFFFFFFLL )
      break;
    v31 = dword_140465740 & (v31 + 1) | v31 & ~dword_140465740;
    *(_DWORD *)(a2 + 244) = v31;
LABEL_37:
    if ( v31 == v33 )
      goto LABEL_38;
  }
  v8 = 48 * v34 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v70 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v68 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v68);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
    LOBYTE(CurrentIrql) = v70;
  }
  if ( v34 > 0xFFFFFFFFFLL
    || (*(_QWORD *)(48 * v34 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
    || (v36 = *(unsigned __int8 *)(v8 + 34), (v36 & 7) != 1) )
  {
LABEL_89:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      LOBYTE(CurrentIrql) = v70;
    }
    __writecr8((unsigned __int8)CurrentIrql);
    v31 = *(_DWORD *)(a2 + 244);
    goto LABEL_37;
  }
  v37 = MiLargePageContainingFrames;
  v38 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL;
  for ( i = 0; i < 3; ++i )
  {
    if ( v38 == *v37 )
      goto LABEL_89;
    ++v37;
  }
  if ( *(_WORD *)(v8 + 32) )
    KeBugCheckEx(0x4Eu, 0x8DuLL, v34, *(unsigned int *)(v8 + 32), *(_QWORD *)(v8 + 8));
  if ( (v36 & 8) != 0 )
  {
    v51 = 0;
    goto LABEL_67;
  }
  *(_QWORD *)(a2 + 24) = v8;
  v40 = &dword_140465DE0;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a2 + 56) = CurrentThread;
  *(_BYTE *)(v8 + 34) |= 8u;
  *(_QWORD *)(v8 + 16) = a2;
  v42 = *(_BYTE *)(a2 + 71) == 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( v42 )
    v40 = &dword_140465DF0;
  *(_WORD *)(a2 + 69) = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v38) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v40, v38);
  }
  else
  {
    v43 = KeGetCurrentPrcb();
    v74 = 0;
    SchedulerAssist = v43->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v43->NestingLevel <= 1u )
      {
        v59 = SchedulerAssist[5];
        SchedulerAssist[5] = v59 + 1;
        if ( v59 == -1 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    if ( _interlockedbittestandset(v40, 0x1Fu) )
    {
      v60 = v43->SchedulerAssist;
      if ( v60 )
      {
        if ( v43->NestingLevel <= 1u )
        {
          v61 = v60[5] - 1;
          v60[5] = v61;
          if ( !v61 )
            KiRemoveSystemWorkPriorityKick(v43);
        }
      }
      LOBYTE(v38) = -1;
      v74 = ExpWaitForSpinLockExclusiveAndAcquire(v40, v38);
    }
    v45 = *v40;
    while ( (v45 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v45 & 0x40000000) == 0 )
      {
        v62 = _InterlockedCompareExchange(v40, v45 | 0x40000000, v45);
        v42 = v45 == v62;
        v45 = v62;
        if ( !v42 )
          continue;
      }
      KeYieldProcessorEx(&v74);
      v45 = *v40;
    }
  }
  LOBYTE(v36) = 0;
  if ( *(_BYTE *)(a2 + 71) )
  {
    v46 = (_QWORD *)qword_140465DE8;
    if ( qword_140465DE8 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v46[7] )
        {
          v63 = (_QWORD *)v46[1];
          if ( !v63 )
          {
            LOBYTE(v36) = 1;
            break;
          }
        }
        else
        {
          v63 = (_QWORD *)*v46;
          if ( !*v46 )
          {
            LOBYTE(v36) = 0;
            break;
          }
        }
        v46 = v63;
      }
    }
    v48 = &qword_140465DE8;
    goto LABEL_63;
  }
  v46 = (_QWORD *)qword_140465DF8;
  if ( !qword_140465DF8 )
    goto LABEL_62;
  while ( 2 )
  {
    if ( a2 < (unsigned __int64)v46 )
    {
      v47 = (_QWORD *)*v46;
      if ( !*v46 )
      {
        LOBYTE(v36) = 0;
        goto LABEL_62;
      }
      goto LABEL_59;
    }
    v47 = (_QWORD *)v46[1];
    if ( v47 )
    {
LABEL_59:
      v46 = v47;
      continue;
    }
    break;
  }
  LOBYTE(v36) = 1;
LABEL_62:
  v48 = &qword_140465DF8;
LABEL_63:
  RtlAvlInsertNodeEx(v48, v46, v36, a2);
  *(_BYTE *)(a2 + 68) = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v40, retaddr);
  else
    *v40 = 0;
  v49 = KeGetCurrentPrcb();
  v50 = v49->SchedulerAssist;
  if ( v50 )
  {
    if ( v49->NestingLevel <= 1u )
    {
      v64 = v50[5] - 1;
      v50[5] = v64;
      if ( !v64 )
        KiRemoveSystemWorkPriorityKick(v49);
    }
  }
  v51 = 1;
LABEL_67:
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v52 = v70;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v70 < 2u )
  {
    v65 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v65->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v65);
  }
  __writecr8(v52);
  if ( !v51 )
LABEL_38:
    v8 = 0LL;
  v7 = 1LL;
LABEL_4:
  if ( !v8 )
    return 0LL;
  v10 = *(_QWORD *)(v8 + 40) >> 58;
  if ( *(_DWORD *)(a2 + 252) != (_DWORD)v10 )
  {
    *(_DWORD *)(a2 + 252) = v10;
    Affinity.Mask = 0LL;
    *(_QWORD *)&Affinity.Group = 0LL;
    KeQueryNodeActiveAffinity(v10, &Affinity, 0LL);
    if ( Affinity.Mask )
    {
      v56 = KeGetCurrentThread();
      FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity(&Affinity);
      KeSetIdealProcessorThreadEx(v56, FirstSetLeftGroupAffinity, 0LL);
    }
  }
  UltraMapping = MiGetUltraMapping(32 * v3 + a2 + 80, (unsigned int)v3, v7);
  v12 = 0xFFFFF68000000000uLL;
  v13 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = 2LL;
  if ( (unsigned int)v3 <= 1 )
  {
    v55 = (unsigned int)(2 - v3);
    do
    {
      v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v55;
    }
    while ( v55 );
  }
  if ( (unsigned int)v3 < 3 )
    v15 = MiLargePageSizes[v3];
  else
    v15 = 1LL;
  v16 = (unsigned __int128)((v8 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v17 = KeGetCurrentIrql();
  v70 = v17;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v17 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v69 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v69);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  if ( *(_BYTE *)(a2 + 69) == 1 )
  {
    MiRemoveFaultNode(a2, v16, v12, v14);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v17 < 2u )
    {
      v66 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v66->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v66);
    }
    result = 0LL;
    __writecr8((unsigned __int8)v17);
    return result;
  }
  if ( v15 == 1 )
  {
    v18 = *(unsigned __int8 *)(v8 + 34) >> 6;
    if ( !v18 || v18 == 2 )
    {
      if ( dword_14046585C[4 * v18] == 1 )
        MiChangePageAttribute(v8, 1LL, 1LL);
    }
    else if ( (*(_BYTE *)(v8 + 34) & 0xC0) == 0xC0 )
    {
      MiFinalizePageAttribute(v8, 1LL, 1LL, v14);
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v8, v12, v14);
  }
  else
  {
    ProtectionPfnCompatible = 4;
  }
  v20 = ProtectionPfnCompatible | 0xA0000000;
  if ( (unsigned int)v3 <= 1 )
    v20 = ProtectionPfnCompatible | 0xA4000000;
  ValidPte = MiMakeValidPte(v13, (v8 + 0x58000000000LL) / 48, v20);
  v24 = (__int64)(v13 << 25) >> 16;
  if ( v24 >= 0xFFFFF68000000000uLL )
  {
    v21 = 0xFFFFF6FFFFFFFFFFuLL;
    do
    {
      if ( v24 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v24 = (__int64)(v24 << 25) >> 16;
    }
    while ( v24 >= 0xFFFFF68000000000uLL );
  }
  if ( (unsigned int)v3 <= 1 )
  {
    if ( (unsigned int)MiPteInShadowRange(v13, v21, 0xFFFFF68000000000uLL, v22) )
    {
      if ( (unsigned int)MiPteHasShadow(v53) )
      {
        if ( !HIBYTE(word_1404658EC) && (v54 & 1) != 0 )
          v54 |= 0x8000000000000000uLL;
        *(_QWORD *)v13 = v54;
        MiWritePteShadow(v13, v54);
        goto LABEL_32;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v54 & 1) != 0 )
      {
        v54 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v13 = v54;
    goto LABEL_32;
  }
  v3 = 8 * v15;
  v25 = v13 + 8 * v15;
  if ( v13 >= v25 )
    goto LABEL_31;
  v26 = 0x8000000000000000uLL;
  while ( 2 )
  {
    if ( (unsigned int)MiPteInShadowRange(v13, ValidPte, v26, v22) )
    {
      if ( !(unsigned int)MiPteHasShadow(v28) )
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v29 & 1) != 0 )
        {
          v27 |= v26;
        }
        goto LABEL_28;
      }
      if ( !HIBYTE(word_1404658EC) && (v29 & 1) != 0 )
        v27 |= v26;
      *(_QWORD *)v13 = v27;
      MiWritePteShadow(v13, v27);
      v26 = 0x8000000000000000uLL;
    }
    else
    {
LABEL_28:
      *(_QWORD *)v13 = v27;
    }
    v13 += 8LL;
    ValidPte = (v29 ^ (v29 + 4096)) & 0xFFFFFFFFF000LL ^ v29;
    if ( v13 < v25 )
      continue;
    break;
  }
  v3 = 8 * v15;
LABEL_31:
  v13 -= v3;
  LODWORD(v3) = a3;
LABEL_32:
  *(_QWORD *)(a2 + 32) = v13;
  *(_QWORD *)(a2 + 48) = (v15 << 12) + v24 - 1;
  *(_QWORD *)(a2 + 40) = v24;
  *(_DWORD *)(a2 + 64) = v3;
  *(_QWORD *)(a2 + 72) = v8;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v30 = v70;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v70 < 2u )
  {
    v67 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v67->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v67);
  }
  result = 1LL;
  __writecr8(v30);
  return result;
}
