/*
 * XREFs of MiInitializeEnclavePfn @ 0x1402D4728
 * Callers:
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408932E4 (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rsi
  unsigned __int8 v6; // bp
  unsigned __int64 v7; // rcx
  char v8; // al
  unsigned __int8 v9; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v5 = 48 * a1 - 0x58000000000LL;
  v6 = MiLockPageInline(v5);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 6;
  v7 = *(_QWORD *)(v5 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v5 + 32) = 1;
  v8 = *(_BYTE *)(v5 + 34);
  *(_QWORD *)(v5 + 24) = v7 | 1;
  *(_BYTE *)(v5 + 34) = v8 | 0x10;
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)(v5 + 16) = MiSwizzleInvalidPte(32LL * (a3 & 0x1F));
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v9) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
