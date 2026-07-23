/*
 * XREFs of MmTryIdentifyPage @ 0x1402AA834
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x14057A230 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 * Callees:
 *     MiIdentifyPfn @ 0x1400A7E20 (MiIdentifyPfn.c)
 *     MiIsPageSecured @ 0x1400EA860 (MiIsPageSecured.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmTryIdentifyPage(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *v5; // r10
  struct _KPRCB *CurrentPrcb; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = 1;
  a2[2] = 0LL;
  v3 = 48 * a1 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    v2 = 0;
  }
  else
  {
    if ( (*(_BYTE *)(v3 + 35) & 0x40) != 0 || MiIsPageSecured(v3) )
      v2 = 0;
    else
      MiIdentifyPfn((__int128 *)v3, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v2;
}
