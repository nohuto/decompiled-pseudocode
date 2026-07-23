/*
 * XREFs of KiInsertTimerTable @ 0x1400581E0
 * Callers:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     KeSetTimerEx @ 0x14001DF70 (KeSetTimerEx.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiTimerWaitTest @ 0x1400C7AB0 (KiTimerWaitTest.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x14016FCEC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveEntryTimer @ 0x14013199C (KiRemoveEntryTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
  _QWORD *v18; // rcx
  char *v19; // r14
  __int64 v20; // r9
  unsigned int v21; // ecx
  __int64 v22; // r13
  char v23; // r11
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // ax
  _QWORD *v29; // r8
  _QWORD *v30; // rax
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  __int64 v33; // r8
  char v34; // cl
  unsigned __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  signed __int32 v40[10]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+28h] [rbp-50h]
  struct _KPRCB *v42; // [rsp+30h] [rbp-48h]
  int v43; // [rsp+88h] [rbp+10h] BYREF
  char v44; // [rsp+98h] [rbp+20h]

  v5 = a4;
  v6 = 0;
  v44 = 0;
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
          v10 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208) + (((_BYTE)v35 + v34) & 0x3F)];
          v40[8] = v10;
        }
      }
    }
  }
  *(_DWORD *)(a2 + 56) = v10;
  v11 = v10;
  CurrentPrcb = KeGetCurrentPrcb();
  v42 = CurrentPrcb;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v14 = KiProcessorBlock[v11] + 13952 + 32 * (a4 + 16LL);
  v41 = KiProcessorBlock[v11] + 13952;
  v43 = 0;
  v15 = (_QWORD *)(v14 + 8);
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v36 = SchedulerAssist[5];
      SchedulerAssist[5] = v36 + 1;
      if ( v36 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  v16 = v42;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
  {
    v31 = v16->SchedulerAssist;
    if ( v31 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v37 = v31[5] - 1;
        v31[5] = v37;
        if ( !v37 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    do
      KeYieldProcessorEx(&v43);
    while ( *(_QWORD *)v14 );
    v32 = v16->SchedulerAssist;
    if ( v32 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v38 = v32[5];
        v32[5] = v38 + 1;
        if ( v38 == -1 )
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
    v27 = *(v17 - 1);
    if ( v9 > v27 )
    {
      v29 = (_QWORD *)(v14 + 16);
      if ( v9 - v27 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v15 = *(_QWORD **)(v14 + 8);
        if ( v17 != (_QWORD *)*v29 )
        {
          while ( 1 )
          {
            v30 = (_QWORD *)*v15;
            if ( v9 <= *(_QWORD *)(*v15 - 8LL) )
              break;
            v15 = (_QWORD *)*v15;
            if ( v30 == (_QWORD *)*v29 )
            {
              v17 = (_QWORD *)*v30;
              goto LABEL_11;
            }
          }
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
      v6 = v9 < v27 ? 2 : 0;
    }
    v17 = (_QWORD *)*v15;
  }
LABEL_11:
  v18 = (_QWORD *)(a2 + 32);
  if ( (_QWORD *)v17[1] != v15 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 40) = v15;
  *v18 = v17;
  v17[1] = v18;
  *v15 = v18;
  v19 = a5;
  if ( (v6 & 2) != 0 )
  {
    *(_QWORD *)(v14 + 24) = v9;
    _InterlockedOr(v40, 0);
    v20 = v41;
    if ( v6 >= 4 )
    {
      if ( KiSerializeTimerExpiration )
      {
        v21 = v5 & 0x3F;
        v22 = 8LL * ((unsigned int)v5 >> 6);
      }
      else
      {
        v21 = *(unsigned __int8 *)(v41 - 13743);
        v22 = v5 << 6;
      }
      _interlockedbittestandset64(
        (volatile signed __int32 *)(qword_1405434C8[2 * *(unsigned __int8 *)(v41 - 13744)] + v22),
        v21);
    }
    if ( v9 <= MEMORY[0xFFFFF78000000008] )
    {
      if ( v19 )
      {
        v23 = 1;
        v44 = 1;
        goto LABEL_19;
      }
      LOBYTE(v6) = 1;
      KiRemoveEntryTimer(v20, a2, (unsigned int)v5);
    }
  }
  v23 = 0;
LABEL_19:
  _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 )
  {
    if ( v24->NestingLevel <= 1u )
    {
      v39 = v25[5] - 1;
      v25[5] = v39;
      if ( !v39 )
      {
        KiRemoveSystemWorkPriorityKick(v24);
        v23 = v44;
      }
    }
  }
  if ( v19 )
    *v19 = v23;
  return (v6 & 1) == 0;
}
