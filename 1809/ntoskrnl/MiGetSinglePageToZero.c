/*
 * XREFs of MiGetSinglePageToZero @ 0x1402C1B08
 * Callers:
 *     MiGetPagesToZero @ 0x1401853A0 (MiGetPagesToZero.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiBeginPageAccessor @ 0x140064A10 (MiBeginPageAccessor.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetSinglePageToZero(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // r13
  unsigned int v5; // r12d
  unsigned __int8 v6; // di
  ULONG_PTR v7; // r14
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  int v10; // esi
  struct _KPRCB *v11; // rcx

  v2 = *(_DWORD *)(a2 + 244);
  v4 = *(_QWORD *)(a1 + 2120);
  v5 = v2;
  v6 = 17;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v4 + 40LL * v2 + 16);
    if ( v7 != 0xFFFFFFFFFLL )
      break;
    v2 = dword_14043B100 & (v2 + 1) | v2 & ~dword_14043B100;
    *(_DWORD *)(a2 + 244) = v2;
LABEL_14:
    v8 = 0LL;
    if ( v2 == v5 )
      goto LABEL_15;
  }
  v8 = 48 * v7 - 0x58000000000LL;
  v6 = MiLockPageInline(v8);
  if ( v7 > 0xFFFFFFFFFLL
    || (*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
    || (*(_BYTE *)(v8 + 34) & 7) != 1
    || (unsigned int)MiFreeZeroPageSizeIndex(48 * v7 - 0x58000000000LL) != -1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
    v2 = *(_DWORD *)(a2 + 244);
    goto LABEL_14;
  }
LABEL_15:
  if ( !v8 )
    return 0LL;
  if ( *(_WORD *)(v8 + 32) )
    KeBugCheckEx(0x4Eu, 0x8DuLL, v7, *(unsigned int *)(v8 + 32), *(_QWORD *)(v8 + 8));
  v10 = MiBeginPageAccessor(a2, v8);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v11);
  }
  __writecr8(v6);
  if ( v10 )
    return v8;
  else
    return 0LL;
}
