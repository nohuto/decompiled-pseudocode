/*
 * XREFs of MiMirrorNodeLargePages @ 0x140152CA8
 * Callers:
 *     MiMirrorGatherBrownPages @ 0x140152660 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x140152EE0 (MiMirrorReduceBlackWrites.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiMirrorAddPagesToBrownList @ 0x1401528BC (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1401530FC (MiMirrorOmitPagesFromCopy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiMirrorNodeLargePages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  volatile __int64 *v5; // r13
  int *v6; // rax
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  __int64 i; // rbp
  unsigned int v13; // r14d
  __int64 v14; // rcx
  _QWORD **v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rdi
  bool v18; // zf
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v21; // [rsp+20h] [rbp-A8h]
  int *v22; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v23; // [rsp+30h] [rbp-98h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  unsigned __int8 v25; // [rsp+40h] [rbp-88h]
  unsigned __int64 v26; // [rsp+48h] [rbp-80h]
  unsigned __int64 v27; // [rsp+50h] [rbp-78h]
  volatile signed __int64 *v28; // [rsp+58h] [rbp-70h] BYREF
  volatile __int64 *v29; // [rsp+60h] [rbp-68h]
  __int64 v30; // [rsp+68h] [rbp-60h]
  __int64 v31; // [rsp+70h] [rbp-58h]
  unsigned __int64 v32; // [rsp+78h] [rbp-50h]
  int v34; // [rsp+D8h] [rbp+10h]
  unsigned int v35; // [rsp+E0h] [rbp+18h]
  __int64 v36; // [rsp+E8h] [rbp+20h]

  v35 = a3;
  v3 = *(_QWORD *)(a2 + 16);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v25 = 17;
  result = v3 + 1984LL * (unsigned __int16)KeNumberNodes;
  v26 = v3;
  v32 = result;
  if ( v3 < result )
  {
    v5 = (volatile __int64 *)(v3 + 1928);
    v27 = v3 + 1928;
    do
    {
      if ( !(_DWORD)a3 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v25 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v28 = 0LL;
        v29 = v5;
        KxAcquireQueuedSpinLock((__int64)&v28, v5, a3);
      }
      v6 = dword_14043B1C0;
      v7 = (unsigned __int64 *)MiLargePageSizes;
      v23 = v3;
      v8 = v3;
      v22 = dword_14043B1C0;
      v21 = MiLargePageSizes;
      v24 = 3LL;
      do
      {
        v9 = *v6;
        v10 = 0LL;
        v11 = *v7;
        v34 = *v6;
        do
        {
          for ( i = 0LL; i <= 1; ++i )
          {
            v13 = 0;
            if ( MmNumberOfChannels )
            {
              v14 = 4 * (v10 + i);
              v31 = v14;
              do
              {
                v15 = *(_QWORD ***)(v8 + 8 * (v14 + v13) + 144);
                if ( v9 )
                {
                  v16 = v9;
                  v36 = v9;
                  do
                  {
                    v17 = *v15;
                    if ( *v15 != v15 )
                    {
                      do
                      {
                        if ( v35 )
                          MiMirrorOmitPagesFromCopy(a1, (__int64)(v17 + 0xB000000000LL) / 48, v11);
                        else
                          MiMirrorAddPagesToBrownList((__int64)(v17 + 0xB000000000LL) / 48, v11);
                        v17 = (_QWORD *)*v17;
                      }
                      while ( v17 != v15 );
                      v16 = v36;
                    }
                    v15 += 3;
                    v36 = --v16;
                  }
                  while ( v16 );
                  v14 = v31;
                  v8 = v23;
                  v9 = v34;
                }
                ++v13;
              }
              while ( v13 < MmNumberOfChannels );
            }
          }
          v10 += 2LL;
        }
        while ( v10 <= 2 );
        v8 += 272LL;
        v7 = (unsigned __int64 *)(v21 + 1);
        v6 = v22 + 1;
        ++v21;
        v18 = v24-- == 1;
        ++v22;
        v23 = v8;
      }
      while ( !v18 );
      if ( !v35 )
      {
        KxReleaseQueuedSpinLock(&v28);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v25);
      }
      a3 = v35;
      result = 1984LL;
      v3 = v26 + 1984;
      v5 = (volatile __int64 *)(v27 + 1984);
      v26 = v3;
      v27 += 1984LL;
    }
    while ( v3 < v32 );
  }
  return result;
}
