/*
 * XREFs of MiPruneStandbyPages @ 0x1402DA158
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1402DA520 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiIsFreeZeroPfnCold @ 0x1400C4A94 (MiIsFreeZeroPfnCold.c)
 *     MiNodeFreeZeroPages @ 0x1400DBD74 (MiNodeFreeZeroPages.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 */

unsigned __int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  int v5; // ebp
  unsigned __int64 v6; // rsi
  unsigned int v7; // r10d
  unsigned int v8; // r12d
  __int64 v9; // r13
  int i; // eax
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r14
  signed __int32 v16; // ecx
  __int64 Page; // rax
  __int64 v18; // r15
  __int64 v19; // rbx
  unsigned __int8 v20; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v22; // rax
  ULONG_PTR v23; // r14
  __int64 v24; // rbx
  int v25; // r12d
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int8 v31; // r15
  struct _KPRCB *v32; // rcx
  __int64 BugCheckParameter2; // [rsp+20h] [rbp-68h]
  volatile signed __int32 *v35; // [rsp+28h] [rbp-60h] BYREF
  __int64 v36; // [rsp+30h] [rbp-58h]
  int v38; // [rsp+98h] [rbp+10h]
  unsigned __int64 v40; // [rsp+A8h] [rbp+20h]

  v40 = a4;
  v35 = 0LL;
  v5 = 2;
  v36 = 0LL;
  v6 = 0LL;
  v7 = a3;
  v8 = 1;
  v9 = a1;
  v38 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1984LL * a2 + 1912) & 1;
  for ( i = (unsigned __int16)KeNumberNodes; v8 < (unsigned __int16)KeNumberNodes; ++v8 )
  {
    v11 = *(unsigned int *)(qword_140465750 + 4LL * (v8 + a2 * i));
    v12 = (_QWORD *)(*(_QWORD *)(v9 + 16) + 1984 * v11);
    if ( v12[226] || !(_DWORD)InitializationPhase )
    {
      v13 = (unsigned int)MmNumberOfChannels;
      if ( MmNumberOfChannels )
      {
        v14 = v13 * MiNodeFreeZeroPages(v12, v7, 4096);
        if ( v14 > 0x10000 )
        {
          MiInitializePageColorBase(0LL, v11 + 1, (__int64)&v35);
          v15 = v14 - 0x10000;
          if ( v15 )
          {
            while ( 1 )
            {
              v16 = _InterlockedExchangeAdd(v35, 1u);
              Page = MiGetPage(v9, (unsigned int)v36 & v16 | HIDWORD(v36), 64LL);
              v18 = Page;
              if ( Page == -1 )
              {
                a4 = v40;
              }
              else
              {
                BugCheckParameter2 = MiSwapNumaStandbyPage(Page, a2, a3, 16LL);
                v19 = 48 * BugCheckParameter2 - 0x58000000000LL;
                v20 = MiLockPageInline(v19);
                *(_QWORD *)(v19 + 24) |= 0x4000000000000000uLL;
                MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 2);
                _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20 < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                __writecr8(v20);
                if ( BugCheckParameter2 == v18 )
                  return v6;
                a4 = v40;
                if ( ++v6 == v40 )
                  return v6;
                v9 = a1;
              }
              if ( !--v15 )
                goto LABEL_20;
            }
          }
        }
        a4 = v40;
LABEL_20:
        v7 = a3;
      }
    }
    i = (unsigned __int16)KeNumberNodes;
  }
  if ( v6 < a4 )
  {
    do
    {
      v22 = MiRemoveLowestPriorityStandbyPage(v9, 8u, 0);
      v23 = v22;
      if ( v22 == -1 )
        break;
      v24 = 48 * v22 - 0x58000000000LL;
      ++v6;
      v25 = 0;
      LOBYTE(v26) = MiIsFreeZeroPfnCold(v24);
      v27 = v5 & 0xFFFFFBFF;
      v5 |= 0x400u;
      if ( !v26 )
        v5 = v27;
      v28 = (*(_QWORD *)(v24 + 40) >> 36) & 3LL;
      v29 = *(_QWORD *)(v24 + 40) >> 58;
      if ( (_DWORD)v29 != a2 || (_DWORD)v28 != a3 && v38 )
      {
        if ( (unsigned __int64)MiNodeFreeZeroPages(
                                 (_QWORD *)(*(_QWORD *)(v9 + 16) + 1984LL * (unsigned int)v29),
                                 v28,
                                 4096) >= 0x200 )
        {
          v30 = MiSwapNumaStandbyPage(v23, a2, a3, 48LL);
          if ( v30 == v23 )
          {
            v25 = 1;
          }
          else
          {
            v23 = v30;
            v24 = 48 * v30 - 0x58000000000LL;
            v5 &= ~0x400u;
          }
        }
        else
        {
          --v6;
        }
      }
      v31 = MiLockPageInline(v24);
      *(_QWORD *)(v24 + 24) |= 0x4000000000000000uLL;
      MiInsertPageInFreeOrZeroedList(v23, v5);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v31 < 2u )
      {
        v32 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v32);
      }
      __writecr8(v31);
      if ( v25 == 1 )
        break;
    }
    while ( v6 < v40 );
  }
  return v6;
}
