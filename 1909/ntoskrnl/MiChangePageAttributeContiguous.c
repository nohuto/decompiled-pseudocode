/*
 * XREFs of MiChangePageAttributeContiguous @ 0x14017D844
 * Callers:
 *     MiTryConvertLargePageAttribute @ 0x14017D7C0 (MiTryConvertLargePageAttribute.c)
 *     MiFreeLargeZeroPages @ 0x140186C94 (MiFreeLargeZeroPages.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140098898 (MiAbortCombineScan.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140098A00 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiChangePageAttributeContiguous(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdi
  unsigned __int8 v4; // r14
  unsigned __int64 v5; // rbp
  unsigned int v6; // esi
  int v7; // eax
  int v8; // r15d
  char v9; // bl
  unsigned int i; // ecx
  struct _KPRCB *CurrentPrcb; // rcx

  result = 0xFFFFFA8000000000uLL;
  v3 = 48 * a1 - 0x58000000000LL;
  v4 = 17;
  v5 = v3 + 48 * a2;
  while ( v3 < v5 )
  {
    v6 = 0;
    v7 = 1;
    while ( 1 )
    {
      v8 = v7;
      if ( v3 >= v5 || v6 >= 0x1000 )
        break;
      if ( v6 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
          break;
      }
      else
      {
        v4 = MiLockPageInline(v3);
      }
      v9 = *(_BYTE *)(v3 + 34);
      MiAbortCombineScan(v3);
      v7 = 0;
      ++v6;
      if ( (v9 & 0xC0) == 0xC0 )
        v7 = v8;
    }
    if ( !v7 )
      MiFlushEntireTbDueToAttributeChange();
    for ( i = 0; i < v6; ++i )
    {
      *(_BYTE *)(v3 + 34) = *(_BYTE *)(v3 + 34) & 0x3F | 0x40;
      *(_QWORD *)(v3 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
      if ( i < v6 - 1 )
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v3 += 48LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 - 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
