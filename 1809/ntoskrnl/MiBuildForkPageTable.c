/*
 * XREFs of MiBuildForkPageTable @ 0x1402C7AFC
 * Callers:
 *     MiUpdateForkMaps @ 0x1402CADF8 (MiUpdateForkMaps.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // r8
  unsigned __int8 v15; // bp
  __int64 v16; // rdx
  char v17; // al
  unsigned __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v20; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rdx
  int v23; // r9d
  unsigned __int64 v24; // r8

  v10 = 48 * a2 - 0x58000000000LL;
  v11 = 48 * a5 - 0x58000000000LL;
  *(_QWORD *)(v10 + 16) = MiSwizzleInvalidPte(128LL);
  *(_QWORD *)(v10 + 40) ^= (v12 ^ *(_QWORD *)(v10 + 40)) & 0xFFFFFFFFFLL;
  v13 = MiLockPageInline(v11);
  v14 = *(_QWORD *)(v11 + 24);
  v15 = v13;
  v16 = v14 ^ ((v14 + 1) ^ v14) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v11 + 24) = v16;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5, v16, v14);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  *(_BYTE *)(v10 + 34) |= 0x10u;
  v17 = *(_BYTE *)(v10 + 34);
  if ( (v17 & 0xC0) != 0x40 )
  {
    MiChangePageAttribute(v10, 1u, 1);
    v17 = *(_BYTE *)(v10 + 34);
  }
  v18 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v18 | 1;
  *(_BYTE *)(v10 + 34) = v17 & 0xF8 | 6;
  MiAddLockedPageCharge(v10, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v15);
  if ( a6 == 1 )
  {
    MiSwizzleInvalidPte(((a2 & 0xFFFFFFFFFLL) << 12) | 0x880);
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_31;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v23 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_31;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_31;
    }
    if ( (v22 & 1) != 0 )
    {
      v24 = 0x8000000000000000uLL;
LABEL_30:
      v22 |= v24;
    }
  }
  else
  {
    v20 = MiMakeValidPte(a3, a2, -2147483644) | 4;
    if ( a6 == 3 && (MiFlags & 0xC00000) != 0 && *(_BYTE *)(a1 + 640) != 1 )
      *(_QWORD *)((a3 & 0xFFF) + *(_QWORD *)(a1 + 1544)) = v20;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v23 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_31;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_31;
      }
      if ( (v22 & 1) != 0 )
        goto LABEL_30;
    }
  }
LABEL_31:
  *a4 = v22;
  if ( v23 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a4, v22);
  return (char)CurrentThread;
}
