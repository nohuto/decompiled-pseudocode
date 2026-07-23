/*
 * XREFs of KiSelectReadyThread @ 0x140057A20
 * Callers:
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0FC4 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D312C (KiGroupSchedulingGenerationEnd.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiChooseLowestRankedThread @ 0x140116B1C (KiChooseLowestRankedThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x140117004 (KiAddThreadToScbQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402985A0 (KiConvertDynamicHeteroPolicy.c)
 */

_QWORD *__fastcall KiSelectReadyThread(signed int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  unsigned __int64 v7; // r9
  _QWORD *v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rdx
  signed int v11; // ecx
  unsigned int v12; // eax
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v15; // r12d
  _DWORD *SchedulerAssist; // rcx
  unsigned int v17; // r12d
  _QWORD **v18; // r13
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r10
  __int64 v28; // r10
  unsigned __int64 *v29; // rax
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // [rsp+80h] [rbp+8h]
  signed int v37; // [rsp+88h] [rbp+10h]
  _QWORD *v38; // [rsp+90h] [rbp+18h]
  _QWORD *v39; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 24904);
  v4 = 1 << a1;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 80LL);
  v38 = (_QWORD *)v7;
  if ( (*(_BYTE *)(a2 + 35) & 2) != 0 && (v7 & *(_QWORD *)(a2 + 24896)) != 0 )
    v3 = 0LL;
  while ( 1 )
  {
    v8 = 0LL;
    if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
      return v8;
    v9 = *(_DWORD *)(a2 + 22808);
    LODWORD(v10) = -2;
    v36 = -2;
    v11 = -1;
    v37 = -1;
    if ( v9 >= v4 )
    {
      _BitScanReverse((unsigned int *)&v11, v9);
      v37 = v11;
      v9 = 1 << v11;
    }
    if ( v3 )
    {
      v12 = *(_DWORD *)(v3 + 8);
      if ( v12 >= v4 )
      {
        _BitScanReverse((unsigned int *)&v10, v12);
        v36 = v10;
      }
      else
      {
        v10 = 4294967294LL;
      }
      v11 = v37;
      if ( (int)v10 > v37 || (_DWORD)v10 == v37 && !_bittest((const signed __int32 *)(a2 + 22812), v37) )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v32 = SchedulerAssist[5];
            SchedulerAssist[5] = v32 + 1;
            if ( v32 == -1 )
LABEL_62:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        {
          v30 = CurrentPrcb->SchedulerAssist;
          if ( v30 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v33 = v30[5] - 1;
              v30[5] = v33;
              if ( !v33 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
          {
            if ( (++v15 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30, v10, a3) )
            {
              HvlNotifyLongSpinWait(v15);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v3 );
          v31 = CurrentPrcb->SchedulerAssist;
          if ( v31 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v34 = v31[5];
              v31[5] = v34 + 1;
              if ( v34 == -1 )
                goto LABEL_62;
            }
          }
        }
        v17 = *(_DWORD *)(v3 + 8);
        v7 = (unsigned __int64)v38;
LABEL_18:
        v8 = 0LL;
        if ( v17 >= v4 && v17 >= v9 )
        {
          _BitScanReverse((unsigned int *)&a3, v17);
          v36 = a3;
          v18 = (_QWORD **)(v3 + 16 * ((int)a3 + 1LL));
          v17 ^= 1 << a3;
          v19 = *v18;
          v39 = *v18;
          while ( 1 )
          {
            v20 = *((unsigned __int8 *)v19 - 91);
            v8 = v19 - 27;
            if ( v20 >= 5 )
            {
              v20 = KiConvertDynamicHeteroPolicy(v19 - 27, v19, a2);
              v19 = v39;
              v7 = (unsigned __int64)v38;
            }
            v21 = -1LL;
            if ( v20 )
              v21 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 24 * ((int)v20 + 8LL));
            if ( (v21 & *(_QWORD *)(a2 + 200)) != 0 || (v21 & *(_QWORD *)(a2 + 24896) & v7) == 0 )
              break;
            v19 = (_QWORD *)*v19;
            v39 = v19;
            if ( v19 == v18 )
              goto LABEL_18;
          }
          if ( (v8[15] & 0x400000) != 0 )
            _InterlockedAnd((volatile signed __int32 *)v8[189], 0xFFFBFFFF);
          v22 = (_QWORD *)v8[27];
          v23 = (_QWORD *)v8[28];
          if ( (_QWORD *)v22[1] != v8 + 27 || (_QWORD *)*v23 != v8 + 27 )
LABEL_78:
            __fastfail(3u);
          *v23 = v22;
          v22[1] = v23;
          if ( v23 == v22 )
            *(_DWORD *)(v3 + 8) ^= 1 << v36;
          --*(_DWORD *)(v3 + 608);
          *(_QWORD *)(v3 + 616) -= *((unsigned int *)v8 + 504);
          *((_DWORD *)v8 + 134) = *(_DWORD *)(a2 + 36);
        }
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v35 = v25[5] - 1;
            v25[5] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        if ( v8 )
        {
          if ( v36 == v37 )
            _bittestandset((signed __int32 *)(a2 + 22812), v37);
          goto LABEL_37;
        }
        LODWORD(v10) = v36;
        v11 = v37;
      }
    }
    if ( v11 >= a1 )
    {
      a3 = *(_QWORD *)(a2 + 16 * (v11 + 1432LL));
      v8 = (_QWORD *)(a3 - 216);
      if ( (*(_DWORD *)(a3 - 96) & 0x400000) != 0 )
      {
        _InterlockedAnd(*(volatile signed __int32 **)(a3 + 1296), 0xFFFBFFFF);
        LODWORD(v10) = v36;
        v11 = v37;
      }
      v7 = *(_QWORD *)a3;
      v29 = *(unsigned __int64 **)(a3 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a3 + 8LL) != a3 || *v29 != a3 )
        goto LABEL_78;
      *v29 = v7;
      *(_QWORD *)(v7 + 8) = v29;
      if ( v29 == (unsigned __int64 *)v7 )
        *(_DWORD *)(a2 + 22808) ^= 1 << v11;
      --*(_DWORD *)(a2 + 23476);
      *(_QWORD *)(a2 + 23480) -= *(unsigned int *)(a3 + 1800);
      if ( v11 == (_DWORD)v10 )
        _bittestandreset((signed __int32 *)(a2 + 22812), v11);
    }
    if ( !v8 )
      return v8;
LABEL_37:
    v26 = v8[13];
    if ( !v26 )
      return v8;
    v27 = *(unsigned int *)(a2 + 216) + v26;
    if ( !v27 )
      return v8;
    LOBYTE(v7) = 1;
    if ( !(unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)v8, v27, a3, v7, 0LL) )
      return v8;
    KiAddThreadToScbQueue(a2, v28, v8, 0LL);
  }
}
