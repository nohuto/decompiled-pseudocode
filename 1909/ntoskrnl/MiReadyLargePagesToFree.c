/*
 * XREFs of MiReadyLargePagesToFree @ 0x1402DFF30
 * Callers:
 *     MiFreeLargeZeroPages @ 0x140186C94 (MiFreeLargeZeroPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReadyLargePagesToFree(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // r14
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  _QWORD *v7; // r15
  unsigned __int8 CurrentIrql; // si
  unsigned int v9; // r12d
  unsigned __int64 *v10; // rbx
  unsigned __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v14; // [rsp+88h] [rbp+10h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h]
  __int64 v16; // [rsp+98h] [rbp+20h]

  v1 = 0LL;
  result = a1;
  v15 = 0LL;
  v3 = 3LL;
  v16 = 3LL;
  do
  {
    v4 = *(_QWORD **)(v1 + result);
    v5 = *(__int64 *)((char *)MiLargePageSizes + v1);
    if ( v4 )
    {
      v6 = *(__int64 *)((char *)MiLargePageContainingFrames + v1);
      do
      {
        v7 = (_QWORD *)*v4;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v9 = 0;
        if ( v5 )
        {
          v10 = v4 + 5;
          do
          {
            v14 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)v10 - 4, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v14);
              while ( (*(v10 - 2) & 0x8000000000000000uLL) != 0LL );
            }
            *((_BYTE *)v10 - 5) &= 0xF8u;
            *(v10 - 2) &= 0xC000000000000000uLL;
            v11 = *v10;
            *(v10 - 4) = 0LL;
            *v10 = v6 & 0xFFFFFFFFFLL | v11 & 0xFFFFFFF000000000uLL;
            *((_BYTE *)v10 - 6) &= 0xF8u;
            _InterlockedAnd64((volatile signed __int64 *)v10 - 2, 0x7FFFFFFFFFFFFFFFuLL);
            ++v9;
            v10 += 6;
          }
          while ( v9 < v5 );
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        v4 = v7;
      }
      while ( v7 );
      v1 = v15;
      v3 = v16;
      result = a1;
    }
    v1 += 8LL;
    --v3;
    v15 = v1;
    v16 = v3;
  }
  while ( v3 );
  return result;
}
