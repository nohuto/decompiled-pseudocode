/*
 * XREFs of MiPruneStandbyPages @ 0x1402C0C84
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1402C1060 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiIsFreeZeroPfnCold @ 0x140082360 (MiIsFreeZeroPfnCold.c)
 *     MiNodeFreeZeroPages @ 0x1400EE374 (MiNodeFreeZeroPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140152020 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 */

unsigned __int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rdi
  unsigned int v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  unsigned int v9; // r9d
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  int v16; // edx
  unsigned int v17; // r8d
  __int64 Page; // rax
  __int64 v19; // r15
  ULONG_PTR v20; // r13
  __int64 v21; // rbx
  unsigned __int8 v22; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v24; // rax
  ULONG_PTR v25; // r14
  __int64 v26; // rbx
  int v27; // r15d
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // esi
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned int v34; // ebp
  unsigned int v35; // esi
  __int64 v36; // rax
  unsigned __int8 v37; // bp
  struct _KPRCB *v38; // rcx
  int v40; // [rsp+20h] [rbp-68h]
  unsigned int v41; // [rsp+24h] [rbp-64h]
  int v42; // [rsp+28h] [rbp-60h]
  volatile signed __int32 *v43; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 v44; // [rsp+38h] [rbp-50h]
  unsigned __int16 v45; // [rsp+3Ah] [rbp-4Eh]
  unsigned int v47; // [rsp+98h] [rbp+10h]

  v47 = a2;
  v4 = 2;
  v5 = 0LL;
  v6 = 1;
  v7 = a4;
  v8 = a1;
  v9 = a3;
  v42 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1984LL * a2 + 1888) & 1;
  v10 = (unsigned __int16)KeNumberNodes;
  while ( v6 < (unsigned __int16)KeNumberNodes )
  {
    v11 = *((unsigned __int16 *)qword_14043B110 + v6 + a2 * v10);
    v12 = *(_QWORD *)(v8 + 16) + 1984 * v11;
    if ( *(_QWORD *)(v12 + 1808) || !(_DWORD)InitializationPhase )
    {
      v13 = (unsigned int)MmNumberOfChannels;
      if ( MmNumberOfChannels )
      {
        v14 = v13 * MiNodeFreeZeroPages(v12, v9, 4096);
        if ( v14 > 0x10000 )
        {
          MiInitializePageColorBase(0LL, v11 + 1, (__int64)&v43);
          v15 = v14 - 0x10000;
          if ( v15 )
          {
            v16 = v44;
            v17 = v45;
            v40 = v44;
            v41 = v45;
            do
            {
              Page = MiGetPage(v8, v16 & _InterlockedExchangeAdd(v43, 1u) | v17, 0x40u);
              v19 = Page;
              if ( Page != -1 )
              {
                v20 = MiSwapNumaStandbyPage(Page, v47, a3, 16LL);
                v21 = 48 * v20 - 0x58000000000LL;
                v22 = MiLockPageInline(v21);
                *(_QWORD *)(v21 + 24) |= 0x4000000000000000uLL;
                MiInsertPageInFreeOrZeroedList(v20, 2);
                _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                __writecr8(v22);
                if ( v20 == v19 )
                  return v5;
                v7 = a4;
                if ( ++v5 == a4 )
                  return v5;
                v8 = a1;
              }
              v16 = v40;
              v17 = v41;
              --v15;
            }
            while ( v15 );
          }
        }
        a2 = v47;
        v9 = a3;
      }
    }
    v10 = (unsigned __int16)KeNumberNodes;
    ++v6;
  }
  do
  {
    if ( v5 >= v7 )
      break;
    v24 = MiRemoveLowestPriorityStandbyPage(v8, 8u, 0LL);
    v25 = v24;
    if ( v24 == -1 )
      break;
    v26 = 48 * v24 - 0x58000000000LL;
    ++v5;
    v27 = 0;
    LOBYTE(v28) = MiIsFreeZeroPfnCold(v26);
    v29 = v4;
    v30 = v4 | 0x400;
    v31 = v29 & 0xFFFFFBFF;
    if ( !v28 )
      v30 = v31;
    v32 = (*(_QWORD *)(v26 + 40) >> 36) & 3LL;
    v33 = *(_QWORD *)(v26 + 40) >> 58;
    v34 = v30;
    v35 = v47;
    if ( (_DWORD)v33 == v47 )
    {
      v4 = v34;
      if ( (_DWORD)v32 == a3 || !v42 )
        goto LABEL_34;
      v35 = v47;
    }
    if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(v8 + 16) + 1984LL * (unsigned int)v33, v32, 4096) < 0x200 )
    {
      --v5;
LABEL_32:
      v4 = v34;
      goto LABEL_34;
    }
    v36 = MiSwapNumaStandbyPage(v25, v35, a3, 48LL);
    if ( v36 == v25 )
    {
      v27 = 1;
      goto LABEL_32;
    }
    v25 = v36;
    v26 = 48 * v36 - 0x58000000000LL;
    v4 = v34 & 0xFFFFFBFF;
LABEL_34:
    v37 = MiLockPageInline(v26);
    *(_QWORD *)(v26 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v25, v4);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v37 < 2u )
    {
      v38 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v38);
    }
    __writecr8(v37);
  }
  while ( v27 != 1 );
  return v5;
}
