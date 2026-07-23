/*
 * XREFs of MiPurgeLargeZeroNodePages @ 0x140151BF8
 * Callers:
 *     MiPurgeZeroList @ 0x140151ABC (MiPurgeZeroList.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiMoveLargeZeroToFree @ 0x140151DC8 (MiMoveLargeZeroToFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPurgeLargeZeroNodePages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  volatile __int64 *v5; // r12
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // eax
  int *v8; // rcx
  _QWORD *v9; // r13
  unsigned int v10; // edx
  __int64 v11; // r15
  __int64 v12; // rax
  int v13; // ebp
  _QWORD *v14; // rsi
  unsigned int v15; // r14d
  __int64 v16; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx
  int *v19; // [rsp+30h] [rbp-78h]
  _QWORD *v20; // [rsp+38h] [rbp-70h]
  unsigned __int64 v21; // [rsp+40h] [rbp-68h]
  volatile signed __int64 *v22; // [rsp+48h] [rbp-60h] BYREF
  volatile __int64 *v23; // [rsp+50h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp+8h]
  unsigned int v25; // [rsp+B8h] [rbp+10h]
  int v26; // [rsp+C0h] [rbp+18h]
  __int64 v27; // [rsp+C8h] [rbp+20h]

  v24 = a1;
  v3 = *(_QWORD *)(a1 + 16);
  result = (unsigned __int16)KeNumberNodes;
  v21 = v3 + 1984LL * (unsigned __int16)KeNumberNodes;
  if ( v3 < v21 )
  {
    v5 = (volatile __int64 *)(v3 + 1928);
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v22 = 0LL;
      v23 = v5;
      KxAcquireQueuedSpinLock((__int64)&v22, v5, a3);
      v7 = 0;
      v20 = (_QWORD *)v3;
      v8 = dword_14043B1C0;
      v25 = 0;
      v19 = dword_14043B1C0;
      v9 = (_QWORD *)v3;
      do
      {
        if ( *v9 )
        {
          v10 = *v8;
          v11 = 0LL;
          v26 = *v8;
          if ( MmNumberOfChannels )
          {
            do
            {
              v12 = 8 * v11 + 144;
              v13 = 0;
              v27 = v12;
              do
              {
                v14 = *(_QWORD **)((char *)v9 + v12);
                v15 = 0;
                if ( v10 )
                {
                  do
                  {
                    if ( (_QWORD *)*v14 != v14 )
                    {
                      if ( !(unsigned int)MiMoveLargeZeroToFree(v24, v3, v25, v13, v15, v11) )
                      {
                        KxReleaseQueuedSpinLock(&v22);
                        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        }
                        __writecr8(CurrentIrql);
                        --v15;
                        v14 -= 3;
                        CurrentIrql = KeGetCurrentIrql();
                        __writecr8(2uLL);
                        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
                          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                        v22 = 0LL;
                        v23 = v5;
                        KxAcquireQueuedSpinLock((__int64)&v22, v5, v16);
                      }
                      v10 = v26;
                    }
                    ++v15;
                    v14 += 3;
                  }
                  while ( v15 < v10 );
                  v9 = v20;
                  v12 = v27;
                }
                v12 += 64LL;
                ++v13;
                v27 = v12;
              }
              while ( v13 <= 1 );
              v11 = (unsigned int)(v11 + 1);
            }
            while ( (unsigned int)v11 < MmNumberOfChannels );
            v7 = v25;
            v8 = v19;
          }
        }
        ++v7;
        ++v8;
        v9 += 34;
        v25 = v7;
        v19 = v8;
        v20 = v9;
      }
      while ( v7 < 3 );
      KxReleaseQueuedSpinLock(&v22);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v18 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v18);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      v3 += 1984LL;
      v5 += 248;
    }
    while ( v3 < v21 );
  }
  return result;
}
