/*
 * XREFs of KiAdjustTimerDueTimes @ 0x140179ACC
 * Callers:
 *     KiSetSystemTimeDpc @ 0x1401798E0 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1402A530C (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiInsertTimerTable @ 0x140042A10 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1400A35B0 (KiTimerWaitTest.c)
 *     KiRemoveEntryTimer @ 0x1401300B8 (KiRemoveEntryTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x140179D34 (KiAdjustTimer2DueTimes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer @ 0x1402B2BA0 (KiTraceSetTimer.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  unsigned int i; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD **v8; // r12
  volatile signed __int32 *v9; // rdi
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v11; // rbx
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  _QWORD *result; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // r9d
  unsigned __int64 v22; // rdi
  bool inserted; // al
  __int64 v24; // r14
  char v25; // dl
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-28h] BYREF
  _QWORD **v34; // [rsp+40h] [rbp-20h]
  __int64 v35; // [rsp+48h] [rbp-18h]
  __int64 v36; // [rsp+50h] [rbp-10h]
  __int64 v37; // [rsp+58h] [rbp-8h]
  char v39; // [rsp+B8h] [rbp+58h] BYREF

  v34 = &v33;
  v4 = a2;
  v33 = &v33;
  for ( i = 0; i < 0x100; ++i )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = (_QWORD **)(32LL * i + v4 + 520);
    v9 = (volatile signed __int32 *)(v4 + 32 * (i + 16LL));
    v32 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v28 = SchedulerAssist[5];
          SchedulerAssist[5] = v28 + 1;
          if ( v28 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64(v9, 0LL) )
        break;
      v29 = CurrentPrcb->SchedulerAssist;
      if ( v29 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v30 = v29[5] - 1;
          v29[5] = v30;
          if ( !v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v32);
      while ( *(_QWORD *)v9 );
    }
    v11 = *v8;
    while ( v11 != v8 )
    {
      v24 = (__int64)(v11 - 4);
      v25 = *((_BYTE *)v11 - 31);
      v11 = (_QWORD *)*v11;
      if ( (v25 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v25 & 2) == 0) )
      {
        KiRemoveEntryTimer(a2, v24, i);
        v26 = v34;
        v27 = (_QWORD *)(v24 + 32);
        if ( *v34 != &v33 )
          goto LABEL_50;
        *(_QWORD *)(v24 + 40) = v34;
        *v27 = &v33;
        *v26 = v27;
        v34 = (_QWORD **)(v24 + 32);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v31 = v13[5] - 1;
        v13[5] = v31;
        if ( !v31 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    v4 = a2;
  }
  result = v33;
  if ( v33 != &v33 )
  {
    while ( 1 )
    {
      v15 = (__int64)(result - 4);
      v16 = *result;
      v17 = (_QWORD *)result[1];
      if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v17 != result )
        break;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      v18 = *(_QWORD *)(a3 + 24);
      v19 = *(_QWORD *)(v15 + 24);
      v20 = v19 - v18;
      if ( v18 >= 0 )
      {
        if ( v20 > v19 )
          v20 = 0LL;
      }
      else if ( v20 < v19 )
      {
        v20 = -1LL;
      }
      v21 = (unsigned __int8)(v20 >> 18);
      v22 = KiWaitAlways ^ _byteswap_uint64(v15 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v15 + 48), KiWaitNever));
      *(_DWORD *)v15 |= 0x80u;
      *(_QWORD *)(v15 + 24) = v20;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      LODWORD(v35) = *(_DWORD *)v15;
      BYTE2(v35) = v20 >> 18;
      *(_DWORD *)v15 = v35;
      if ( *(_BYTE *)(a3 + 32) )
        inserted = KiInsertTimerTable(a1, v15, v22, v21, &v39);
      else
        inserted = KiInsertTimerTable(a1, v15, v22, v21, 0LL);
      if ( inserted )
      {
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
          KiTraceSetTimer(v15, v22, 0LL);
        else
          _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
      }
      else
      {
        KiTimerWaitTest(a1, v15, 0LL);
      }
      result = v33;
      if ( v33 == &v33 )
        goto LABEL_20;
    }
LABEL_50:
    __fastfail(3u);
  }
LABEL_20:
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)KiAdjustTimer2DueTimes(a3, v13, a3, v4);
  return result;
}
