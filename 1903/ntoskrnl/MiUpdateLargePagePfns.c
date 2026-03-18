/*
 * XREFs of MiUpdateLargePagePfns @ 0x1402E039C
 * Callers:
 *     MiFindLargePageMemory @ 0x140899CB0 (MiFindLargePageMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiPfnZeroingNeeded @ 0x1400A452C (MiPfnZeroingNeeded.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateLargePagePfns(__int64 a1, int a2, __int64 a3, int a4, char a5)
{
  int v6; // r12d
  __int64 v7; // rbx
  int v8; // r9d
  _KPROCESS *v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // rsi
  __int64 *v13; // r13
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 *v15; // rdi
  int v16; // r14d
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v23; // rcx
  _KPROCESS *Process; // [rsp+20h] [rbp-58h]
  unsigned int v26; // [rsp+88h] [rbp+10h]
  int v27; // [rsp+90h] [rbp+18h] BYREF
  int v28; // [rsp+98h] [rbp+20h]

  v28 = a4;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = MiSwizzleInvalidPte(128LL);
  v26 = 0;
  v12 = (__int64 *)(48 * v10 - 0x58000000000LL);
  v13 = &v12[6 * v11];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v15 = (volatile signed __int32 *)(v12 + 3);
  v16 = a5 & 2;
  do
  {
    v27 = 0;
    if ( _interlockedbittestandset64(v15, 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v27);
        while ( *(__int64 *)v15 < 0 );
      }
      while ( _interlockedbittestandset64(v15, 0x3FuLL) );
      v8 = v28;
      v9 = Process;
    }
    if ( v16 || !MiPfnZeroingNeeded((__int64)v12, v8) )
    {
      *((_QWORD *)v15 - 2) = 0xFFFFF68000000000uLL;
      v20 = *v12;
      v21 = *v12 ^ ((unsigned __int64)v9 >> 3);
      *((_QWORD *)v15 - 1) = v7;
      *v12 = v20 ^ v21 & 0xFFFFFFFFFFELL;
    }
    else
    {
      v26 = 1;
      v18 = dword_140465AB0 & a2 | (*((_QWORD *)v15 + 2) >> 58 << byte_140465A4D) | (((unsigned int)(*((_QWORD *)v15 + 2) >> 36) & 3) << byte_140465A4E);
      v19 = 3 * v18;
      *v12 = *(_QWORD *)(v17 + 24 * v18 + 16);
      ++*(_QWORD *)(v17 + 8 * v19 + 8);
      *(_QWORD *)(v17 + 8 * v19 + 16) = v12;
    }
    _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
    ++a2;
    v12 += 6;
    v15 += 12;
    if ( (++v6 & 0xF) == 0 && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
    v8 = v28;
    v9 = Process;
  }
  while ( v12 != v13 );
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v23 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v23);
  }
  __writecr8(CurrentIrql);
  return v26;
}
