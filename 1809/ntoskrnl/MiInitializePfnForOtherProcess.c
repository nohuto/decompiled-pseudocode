/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x140026C2C
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140026984 (MiInitializeSystemPageTable.c)
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184C44 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiMakeLargePageTable @ 0x1402B52D8 (MiMakeLargePageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1402C9BC8 (MiDuplicateCloneLeaf.c)
 *     MiAllocateTopLevelPage @ 0x1406D2E6C (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x1407171D8 (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x14072B5E4 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiLockAndIncrementShareCount @ 0x140026D44 (MiLockAndIncrementShareCount.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v7; // rbx
  unsigned __int8 v8; // di
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  char v12; // al
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v15; // [rsp+58h] [rbp+20h] BYREF

  v7 = 48 * a1 - 0x58000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    v15 = 0;
    v8 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  else
  {
    v8 = MiLockPageInline(48 * a1 - 0x58000000000LL);
  }
  v9 = *(_QWORD *)(v7 + 24) & 0xF0FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v7 + 8) = a2;
  *(_QWORD *)(v7 + 24) = v9;
  *(_QWORD *)(v7 + 16) = MiSwizzleInvalidPte(128LL);
  *(_WORD *)(v7 + 32) = 1;
  if ( (a4 & 0x80u) != 0 )
    v11 = v10 ^ ((v10 + 1) ^ v10) & 0x3FFFFFFFFFFFFFFFLL;
  else
    v11 = v10 & 0xC000000000000000uLL | 1;
  *(_QWORD *)(v7 + 24) = v11;
  v12 = *(_BYTE *)(v7 + 34) | 0x10;
  *(_BYTE *)(v7 + 34) = v12;
  if ( (a4 & 0x200) != 0 )
    *(_BYTE *)(v7 + 34) = v12 & 0xF8 | 6;
  *(_QWORD *)(v7 + 40) ^= (a3 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v8;
    __writecr8(v8);
  }
  if ( (a4 & 0x800) == 0 )
    return MiLockAndIncrementShareCount(a3);
  return result;
}
