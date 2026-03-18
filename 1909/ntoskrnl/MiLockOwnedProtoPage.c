/*
 * XREFs of MiLockOwnedProtoPage @ 0x1400CF120
 * Callers:
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiRelockProtoPoolPage @ 0x1400CF084 (MiRelockProtoPoolPage.c)
 * Callees:
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400FA460 (MiWriteValidPteVolatile.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockOwnedProtoPage(__int64 a1, unsigned __int8 a2)
{
  _BYTE *v2; // rsi
  char i; // al
  __int64 result; // rax
  unsigned int v7; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (_BYTE *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  for ( i = *(_BYTE *)(a1 + 34); (i & 0x20) != 0; i = *(_BYTE *)(a1 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a2 != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(a2);
    }
    v7 = 0;
    while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
    {
      if ( (HvlLongSpinCountMask & ++v7) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
    MiLockPageInline(a1);
  }
  *(_BYTE *)(a1 + 34) = i | 0x20;
  result = *(_QWORD *)(a1 + 24) >> 62;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 && (*v2 & 0x20) == 0 )
    result = MiWriteValidPteVolatile(v2, 1LL, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
