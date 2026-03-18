/*
 * XREFs of MiUnlockStoreLockedPages @ 0x140157F98
 * Callers:
 *     SmKmUnlockMdl @ 0x1401487E8 (SmKmUnlockMdl.c)
 *     MmStoreProbeAndLockPages @ 0x140157AA0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiWriteCompletePfn @ 0x1400DE110 (MiWriteCompletePfn.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiUnlockStoreLockedPages(__int64 a1)
{
  __int64 *v1; // r14
  unsigned int v3; // ebx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // al
  unsigned int v8; // ecx
  unsigned __int8 v9; // r12
  unsigned __int64 v10; // rdi
  __int64 v11; // r15
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = (__int64 *)(a1 + 48);
  v3 = 0;
  v4 = a1
     + 48
     + 8
     * ((*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12);
  do
  {
    v5 = *v1;
    if ( *v1 == -1 )
      break;
    v6 = 48 * v5 - 0x58000000000LL;
    v7 = MiLockPageInline(v6);
    v8 = v3 & 0xFFFFFFFD;
    v3 |= 2u;
    v9 = v7;
    if ( (*(_BYTE *)(v6 + 34) & 0x10) == 0 )
      v3 = v8;
    v10 = MiWriteCompletePfn(v6, v3);
    if ( v10 )
      v11 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL));
    else
      v11 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    LODWORD(v5) = v9;
    __writecr8(v9);
    if ( v10 )
      LODWORD(v5) = MiReleasePageFileInfo(v11, v10, 0);
    ++v1;
  }
  while ( (unsigned __int64)v1 < v4 );
  *(_WORD *)(a1 + 10) &= ~2u;
  return v5;
}
