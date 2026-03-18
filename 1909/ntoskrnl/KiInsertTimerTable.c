/*
 * XREFs of KiInsertTimerTable @ 0x140042A10
 * Callers:
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     KiCommitThreadWait @ 0x140040480 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     KiTimerWaitTest @ 0x1400A35B0 (KiTimerWaitTest.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1400E2FE0 (KeSetTimerEx.c)
 *     KiAdjustTimerDueTimes @ 0x140179ACC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveEntryTimer @ 0x1401300B8 (KiRemoveEntryTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  __int64 v5; // r12
  unsigned int v6; // ebx
  unsigned __int64 v9; // rbp
  unsigned int v10; // edx
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // r14
  struct _KPRCB *v16; // r15
  _QWORD *v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  char *v20; // r14
  __int64 v21; // r9
  unsigned int v22; // ecx
  __int64 v23; // r13
  char v24; // r11
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  unsigned __int16 v28; // ax
  _QWORD *v29; // r8
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // r8
  char v34; // cl
  unsigned __int64 v35; // rax
  int v36; // edx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  signed __int32 v41[8]; // [rsp+0h] [rbp-78h] BYREF
  int v42; // [rsp+20h] [rbp-58h]
  __int64 v43; // [rsp+28h] [rbp-50h]
  struct _KPRCB *v44; // [rsp+30h] [rbp-48h]
  int v45; // [rsp+88h] [rbp+10h] BYREF
  char v46; // [rsp+98h] [rbp+20h]

  v5 = a4;
  v6 = 0;
  v46 = 0;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = *(_QWORD *)(a2 + 24);
  v10 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v28 = *(_WORD *)(a3 + 2), v28 >= 0x500u) )
    {
      v10 = v28 - 1280;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 2) != 0 )
      {
        v33 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL);
        if ( v33 )
        {
          v34 = *(_BYTE *)(a1 + 209);
          _BitScanForward64(&v35, __ROR8__(v33, v34));
          v36 = *(unsigned __int8 *)(a1 + 208) << 6;
          v42 = ((_BYTE)v35 + v34) & 0x3F;
          v10 = KiProcessorNumberToIndexMappingTable[v42 + v36];
        }
      }
    }
  }
  *(_DWORD *)(a2 + 56) = v10;
  v11 = v10;
  CurrentPrcb = KeGetCurrentPrcb();
  v44 = CurrentPrcb;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v14 = KiProcessorBlock[v11] + 13952 + 32 * (a4 + 16LL);
  v43 = KiProcessorBlock[v11] + 13952;
  v45 = 0;
  v15 = (_QWORD *)(v14 + 8);
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v37 = SchedulerAssist[5];
      SchedulerAssist[5] = v37 + 1;
      if ( v37 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  v16 = v44;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
  {
    v30 = v16->SchedulerAssist;
    if ( v30 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v38 = v30[5] - 1;
        v30[5] = v38;
        if ( !v38 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    do
      KeYieldProcessorEx(&v45);
    while ( *(_QWORD *)v14 );
    v31 = v16->SchedulerAssist;
    if ( v31 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v39 = v31[5];
        v31[5] = v39 + 1;
        if ( v39 == -1 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  v17 = *(_QWORD **)(v14 + 8);
  if ( v17 == (_QWORD *)(v14 + 8) )
  {
    v6 = 6;
  }
  else
  {
    v18 = *(v17 - 1);
    if ( v9 > v18 )
    {
      v29 = (_QWORD *)(v14 + 16);
      if ( v9 - v18 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v15 = *(_QWORD **)(v14 + 8);
        if ( v17 != (_QWORD *)*v29 )
        {
          do
          {
            v32 = (_QWORD *)*v15;
            if ( v9 <= *(_QWORD *)(*v15 - 8LL) )
              break;
            v15 = (_QWORD *)*v15;
          }
          while ( v32 != (_QWORD *)*v29 );
        }
      }
      else
      {
        v15 = (_QWORD *)*v29;
        do
        {
          if ( v9 >= *(v15 - 1) )
            break;
          v15 = (_QWORD *)v15[1];
        }
        while ( v15 != (_QWORD *)(v14 + 8) );
      }
    }
    else
    {
      v6 = v9 < v18 ? 2 : 0;
    }
    v17 = (_QWORD *)*v15;
  }
  v19 = (_QWORD *)(a2 + 32);
  if ( (_QWORD *)v17[1] != v15 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 40) = v15;
  *v19 = v17;
  v17[1] = v19;
  *v15 = v19;
  v20 = a5;
  if ( (v6 & 2) != 0 )
  {
    *(_QWORD *)(v14 + 24) = v9;
    _InterlockedOr(v41, 0);
    v21 = v43;
    if ( v6 >= 4 )
    {
      if ( KiSerializeTimerExpiration )
      {
        v22 = v5 & 0x3F;
        v23 = 8LL * ((unsigned int)v5 >> 6);
      }
      else
      {
        v22 = *(unsigned __int8 *)(v43 - 13743);
        v23 = v5 << 6;
      }
      _interlockedbittestandset64(
        (volatile signed __int32 *)(qword_140573688[2 * *(unsigned __int8 *)(v43 - 13744)] + v23),
        v22);
    }
    if ( v9 <= MEMORY[0xFFFFF78000000008] )
    {
      if ( v20 )
      {
        v24 = 1;
        v46 = 1;
        goto LABEL_19;
      }
      LOBYTE(v6) = 1;
      KiRemoveEntryTimer(v21, a2, (unsigned int)v5);
    }
  }
  v24 = 0;
LABEL_19:
  _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
  v25 = KeGetCurrentPrcb();
  v26 = v25->SchedulerAssist;
  if ( v26 )
  {
    if ( v25->NestingLevel <= 1u )
    {
      v40 = v26[5] - 1;
      v26[5] = v40;
      if ( !v40 )
      {
        KiRemoveSystemWorkPriorityKick(v25);
        v24 = v46;
      }
    }
  }
  if ( v20 )
    *v20 = v24;
  return (v6 & 1) == 0;
}
