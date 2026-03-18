/*
 * XREFs of MiBuildForkPageTable @ 0x1402E18F0
 * Callers:
 *     MiUpdateForkMaps @ 0x1402E4DC0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, __int64 a5, int a6)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r10
  unsigned __int8 v13; // bp
  char v14; // al
  char v15; // cl
  unsigned __int64 v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v18; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  int v21; // r9d
  unsigned __int64 v22; // r8

  v10 = 48 * a2 - 0x58000000000LL;
  v11 = 48 * a5 - 0x58000000000LL;
  *(_QWORD *)(v10 + 16) = MiSwizzleInvalidPte(128LL);
  *(_QWORD *)(v10 + 40) ^= (v12 ^ *(_QWORD *)(v10 + 40)) & 0xFFFFFFFFFLL;
  v13 = MiLockPageInline(v11);
  *(_QWORD *)(v11 + 24) ^= ((*(_QWORD *)(v11 + 24) + 1LL) ^ *(_QWORD *)(v11 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  v14 = *(_BYTE *)(v10 + 34) | 0x10;
  *(_BYTE *)(v10 + 34) = v14;
  v15 = v14;
  if ( (v14 & 0xC0) != 0x40 )
  {
    MiChangePageAttribute(v10, 1u, 1);
    v15 = *(_BYTE *)(v10 + 34);
  }
  v16 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v16 | 1;
  *(_BYTE *)(v10 + 34) = v15 & 0xF8 | 6;
  MiAddLockedPageCharge(v10, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v13);
  if ( a6 == 1 )
  {
    MiMakeTransitionPte(a2, 4);
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_31;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v21 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_31;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_31;
    }
    if ( (v20 & 1) != 0 )
    {
      v22 = 0x8000000000000000uLL;
LABEL_30:
      v20 |= v22;
    }
  }
  else
  {
    v18 = MiMakeValidPte(a3, a2, -2147483644) | 4;
    if ( a6 == 3 && (MiFlags & 0xC00000) != 0 && *(_BYTE *)(a1 + 648) != 1 )
      *(_QWORD *)((a3 & 0xFFF) + *(_QWORD *)(a1 + 1544)) = v18;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v21 = 1;
        if ( HIBYTE(word_1404658EC) )
          goto LABEL_31;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_31;
      }
      if ( (v20 & 1) != 0 )
        goto LABEL_30;
    }
  }
LABEL_31:
  *a4 = v20;
  if ( v21 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a4);
  return (char)CurrentThread;
}
