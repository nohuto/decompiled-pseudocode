/*
 * XREFs of MiCopySinglePage @ 0x1400C7A2C
 * Callers:
 *     MmCopyMemory @ 0x1400C7740 (MmCopyMemory.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002C1E0 (MiMakeProtectionPfnCompatible.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPageSecured @ 0x1400C7BE4 (MiIsPageSecured.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
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
  __int64 v18; // rsi
  const void *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  bool v26; // zf
  bool v27; // zf
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // rcx

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
        MiWritePteShadow(a5, v15);
      v18 = (__int64)(a5 << 25) >> 16;
LABEL_15:
      v19 = (const void *)(a3 + v18);
      memmove(a1, v19, a4);
      if ( !a5 )
      {
        LOBYTE(v20) = 17;
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v19, v20, 0x80000000LL);
LABEL_19:
        if ( v13 == 3 )
          MiChangePageAttribute(v11, 3LL, 3LL);
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
        return 0LL;
      }
      if ( !MiPteInShadowRange(a5) )
      {
LABEL_17:
        *(_QWORD *)a5 = v21;
        if ( v23 )
          MiWritePteShadow(a5, v21);
        goto LABEL_19;
      }
      if ( (unsigned int)MiPteHasShadow(v22) )
      {
        v23 = 1;
        if ( HIBYTE(word_1404658EC) )
          goto LABEL_17;
        v27 = (v21 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_17;
        v27 = (v21 & 1) == 0;
      }
      if ( !v27 )
        v21 |= 0x8000000000000000uLL;
      goto LABEL_17;
    }
    if ( (unsigned int)MiPteHasShadow(v16) )
    {
      v17 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_12;
      v26 = (v15 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_12;
      v26 = (v15 & 1) == 0;
    }
    if ( !v26 )
      v15 |= 0x8000000000000000uLL;
    goto LABEL_12;
  }
  if ( v12 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v29 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v29);
    }
    __writecr8(v12);
  }
  return 3221227273LL;
}
