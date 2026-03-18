/*
 * XREFs of MiReadyLargePageToFree @ 0x140146F40
 * Callers:
 *     MiFreeLargePageMemory @ 0x140146DD8 (MiFreeLargePageMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiClearPfnImageVerified @ 0x1400BB9EC (MiClearPfnImageVerified.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeLargePageSubPageAsSmall @ 0x1402DF514 (MiFreeLargePageSubPageAsSmall.c)
 */

_BOOL8 __fastcall MiReadyLargePageToFree(unsigned __int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  __int64 v6; // rdi
  ULONG_PTR v7; // r15
  __int64 v8; // r12
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  ULONG_PTR v12; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v14; // rdi
  char v15; // dl
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  char v21; // al
  char v22; // cl
  unsigned __int8 v24; // dl
  unsigned int v25; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+80h] [rbp+8h]
  int v31; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v29 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = a2;
  v9 = a1 + MiLargePageSizes[v8];
  v30 = v9;
  v10 = v9 - 1;
  v11 = 48 * (v9 - 1) - 0x58000000000LL;
  v28 = v11;
  v12 = v11;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  do
  {
    if ( v7 )
    {
      v25 = MiFreeLargePageSubPageAsSmall(v12);
      v9 = v30;
      v11 = v28;
      v6 += v25;
      v29 = v6;
    }
    else
    {
      v14 = MiLargePageContainingFrames[v8];
      v31 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v31);
          while ( *(__int64 *)(v12 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
        v9 = v30;
        v11 = v28;
      }
      v15 = *(_BYTE *)(v12 + 34);
      if ( *(_WORD *)(v12 + 32) != ((v15 & 7) != 5) + 1 || (v15 & 0xC0) != 0x40 || (*(_BYTE *)(v12 + 35) & 0x40) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v6 = v29;
        v7 = v12;
        v12 = v11;
        v10 = v9;
        goto LABEL_21;
      }
      v16 = *(_QWORD *)(v12 + 24);
      *(_QWORD *)(v12 + 40) &= ~0x200000000000000uLL;
      v17 = *(_QWORD *)(v12 + 40);
      if ( (v16 & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(v12 + 24) = v16 | 0x4000000000000000LL;
      if ( ((v17 >> 54) & 7) == 3 )
      {
        MiClearPfnImageVerified(v12, 12);
        v9 = v30;
        v11 = v28;
      }
      v18 = qword_140465800;
      v19 = 128LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      if ( v18 )
      {
        if ( (v18 & 0x80) != 0 )
          v19 = 144LL;
        else
          v19 = v18 | 0x80;
      }
      *(_QWORD *)(v12 + 16) = v19;
      *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
      v20 = *(_QWORD *)(v12 + 40) ^ v14;
      *(_BYTE *)(v12 + 35) &= 0xF8u;
      v21 = *(_BYTE *)(v12 + 34);
      *(_QWORD *)(v12 + 40) ^= v20 & 0xFFFFFFFFFLL;
      *(_WORD *)(v12 + 32) = 0;
      *(_BYTE *)(v12 + 34) = v21 & 0xEF;
      if ( ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 1 )
        *(_QWORD *)(v12 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 24) &= ~0x4000000000000000uLL;
      v22 = *(_BYTE *)(v12 + 34);
      if ( ((MiLargePageSizes[v8] - 1) & ((__int64)(v12 + 0x58000000000LL) / 48)) != 0 )
        *(_BYTE *)(v12 + 34) = v22 ^ (v22 ^ a3) & 7;
      else
        *(_BYTE *)(v12 + 34) = v22 & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 = v29;
    }
    if ( CurrentIrql < 2u && (v10 & 0xF) == 0 )
    {
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        v24 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentIrql = v24;
      }
      v11 = v28;
      v9 = v30;
    }
    v12 -= 48LL;
LABEL_21:
    --v10;
  }
  while ( v10 >= a1 );
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v27 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v27);
  }
  __writecr8(CurrentIrql);
  *v32 = v6;
  return v7 == 0;
}
