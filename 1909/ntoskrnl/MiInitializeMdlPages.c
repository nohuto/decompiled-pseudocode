/*
 * XREFs of MiInitializeMdlPages @ 0x1400DCD38
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400DCB14 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiInitializeMdlPfn @ 0x1400DCE94 (MiInitializeMdlPfn.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogMdlRangeEvent @ 0x1402C294C (MiLogMdlRangeEvent.c)
 */

__int64 __fastcall MiInitializeMdlPages(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rbp
  _QWORD *v5; // r15
  __int64 v6; // rbx
  _KPROCESS *Process; // r14
  unsigned int v8; // r12d
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // al
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v17; // [rsp+58h] [rbp+10h]

  v2 = a1 + 48;
  v3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  v5 = (_QWORD *)(a1 + 48);
  if ( (a2 & 0x80000200) != 0 )
    v6 = 0LL;
  else
    v6 = MiSwizzleInvalidPte(128LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 )
  {
    v8 = a2;
    v9 = v3;
    v10 = ((unsigned __int64)Process >> 3) & 0xFFFFFFFFFFELL;
    do
    {
      v11 = 48LL * *v5 - 0x58000000000LL;
      *(_QWORD *)(v11 + 8) = 0xFFFFF68000000000uLL;
      v12 = *(_QWORD *)(v11 + 40) & 0xFDFFFFFFFFFFFFFDuLL;
      *(_QWORD *)(v11 + 16) = v6;
      *(_QWORD *)(v11 + 40) = v12 | 0xFFFFFFFFDLL;
      v13 = MiLockPageInline(v11);
      *(_QWORD *)v11 = 0LL;
      v17 = v13;
      *(_QWORD *)v11 = v10;
      MiInitializeMdlPfn(v11, v8);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v17);
      ++v5;
      --v9;
    }
    while ( v9 );
    v2 = a1 + 48;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 10) |= 2u;
  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    return MiLogMdlRangeEvent(v2, 632LL, v3);
  return result;
}
