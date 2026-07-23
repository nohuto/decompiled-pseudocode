/*
 * XREFs of MiCopySinglePage @ 0x1400EA6A8
 * Callers:
 *     MmCopyMemory @ 0x1400EA8F0 (MmCopyMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPageSecured @ 0x1400EA860 (MiIsPageSecured.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 v12; // di
  int v13; // ebp
  int ProtectionPfnCompatible; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  unsigned __int64 v18; // rsi
  const void *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  bool v25; // zf
  bool v26; // zf
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx

  if ( a2 > 0xFFFFFFFFFLL )
    return 3221225793LL;
  v9 = 6 * a2;
  v10 = *(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL);
  if ( (v10 & 0x20000000000000LL) == 0 )
    return 3221225793LL;
  v11 = 48 * a2 - 0x58000000000LL;
  if ( (a6 & 1) != 0 )
  {
    v12 = MiLockPageInline(48 * a2 - 0x58000000000LL);
    v10 = *(_QWORD *)(8 * v9 - 0x57FFFFFFFD8LL);
  }
  else
  {
    v12 = 17;
  }
  if ( (v10 & 0x20000000000000LL) == 0 )
  {
    if ( v12 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v12);
    }
    return 3221225793LL;
  }
  if ( *(char *)(v11 + 35) >= 0 && !(unsigned int)MiIsPageSecured(8 * v9 - 0x58000000000LL) )
  {
    v13 = *(unsigned __int8 *)(v11 + 34) >> 6;
    if ( v13 == 3 )
      MiChangePageAttribute(8 * v9 - 0x58000000000LL, 1LL, 1LL);
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, 8 * v9 - 0x58000000000LL);
    if ( !a5 )
    {
      v18 = MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736);
      goto LABEL_15;
    }
    MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000);
    if ( !MiPteInShadowRange(a5) )
    {
LABEL_12:
      *(_QWORD *)a5 = v15;
      if ( v17 )
        MiWritePteShadow(a5);
      v18 = (__int64)(a5 << 25) >> 16;
LABEL_15:
      v19 = (const void *)(a3 + v18);
      memmove(a1, v19, a4);
      if ( !a5 )
      {
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v19, 0x11u, 0x80000000LL);
LABEL_19:
        if ( v13 == 3 )
          MiChangePageAttribute(v11, 3LL, 3LL);
        if ( v12 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
          {
            v27 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v27);
          }
          __writecr8(v12);
        }
        return 0LL;
      }
      if ( !MiPteInShadowRange(a5) )
      {
LABEL_17:
        *(_QWORD *)a5 = v20;
        if ( v22 )
          MiWritePteShadow(a5);
        goto LABEL_19;
      }
      if ( (unsigned int)MiPteHasShadow(v21, v20) )
      {
        v22 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_17;
        v26 = (v20 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_17;
        v26 = (v20 & 1) == 0;
      }
      if ( !v26 )
        v20 |= 0x8000000000000000uLL;
      goto LABEL_17;
    }
    if ( (unsigned int)MiPteHasShadow(v16, v15) )
    {
      v17 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_12;
      v25 = (v15 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_12;
      v25 = (v15 & 1) == 0;
    }
    if ( !v25 )
      v15 |= 0x8000000000000000uLL;
    goto LABEL_12;
  }
  if ( v12 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v28 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v28);
    }
    __writecr8(v12);
  }
  return 3221227273LL;
}
