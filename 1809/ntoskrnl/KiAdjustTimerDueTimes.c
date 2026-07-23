/*
 * XREFs of KiAdjustTimerDueTimes @ 0x14016FCEC
 * Callers:
 *     KiSetSystemTimeDpc @ 0x14016FB00 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14028ECBC (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KiInsertTimerTable @ 0x1400581E0 (KiInsertTimerTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiTimerWaitTest @ 0x1400C7AB0 (KiTimerWaitTest.c)
 *     KiRemoveEntryTimer @ 0x14013199C (KiRemoveEntryTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x14016FF34 (KiAdjustTimer2DueTimes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer @ 0x14029BB58 (KiTraceSetTimer.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  unsigned int i; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD **v8; // r15
  volatile signed __int32 *v9; // rdi
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v11; // rbx
  struct _KPRCB *v12; // rcx
  _QWORD *result; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned __int64 v21; // rdi
  bool inserted; // al
  __int64 v23; // r14
  char v24; // dl
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-28h] BYREF
  _QWORD **v33; // [rsp+40h] [rbp-20h]
  int v34; // [rsp+48h] [rbp-18h]
  __int64 v35; // [rsp+A8h] [rbp+48h]
  char v36; // [rsp+B8h] [rbp+58h] BYREF

  v35 = a2;
  v33 = &v32;
  v4 = a2;
  v32 = &v32;
  for ( i = 0; i < 0x100; ++i )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = (_QWORD **)(32LL * i + v4 + 520);
    v9 = (volatile signed __int32 *)(v4 + 32 * (i + 16LL));
    v31 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v27 = SchedulerAssist[5];
          SchedulerAssist[5] = v27 + 1;
          if ( v27 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64(v9, 0LL) )
        break;
      v28 = CurrentPrcb->SchedulerAssist;
      if ( v28 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v29 = v28[5] - 1;
          v28[5] = v29;
          if ( !v29 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v31, a2, a3);
      while ( *(_QWORD *)v9 );
    }
    v11 = *v8;
    while ( v11 != v8 )
    {
      v23 = (__int64)(v11 - 4);
      v24 = *((_BYTE *)v11 - 31);
      v11 = (_QWORD *)*v11;
      if ( (v24 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v24 & 2) == 0) )
      {
        KiRemoveEntryTimer(v35, v23, i);
        v25 = v33;
        v26 = (_QWORD *)(v23 + 32);
        if ( *v33 != &v32 )
          goto LABEL_50;
        *(_QWORD *)(v23 + 40) = v33;
        *v26 = &v32;
        *v25 = v26;
        v33 = (_QWORD **)(v23 + 32);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    v12 = KeGetCurrentPrcb();
    a2 = (__int64)v12->SchedulerAssist;
    if ( a2 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v30 = *(_DWORD *)(a2 + 20) - 1;
        *(_DWORD *)(a2 + 20) = v30;
        if ( !v30 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    v4 = v35;
  }
  result = v32;
  if ( v32 != &v32 )
  {
    while ( 1 )
    {
      v14 = (__int64)(result - 4);
      v15 = *result;
      v16 = (_QWORD *)result[1];
      if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v16 != result )
        break;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      v17 = *(_QWORD *)(a3 + 24);
      v18 = *(_QWORD *)(v14 + 24);
      v19 = v18 - v17;
      if ( v17 >= 0 )
      {
        if ( v19 > v18 )
          v19 = 0LL;
      }
      else if ( v19 < v18 )
      {
        v19 = -1LL;
      }
      v20 = (unsigned __int8)(v19 >> 18);
      v21 = KiWaitAlways ^ _byteswap_uint64(v14 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v14 + 48), KiWaitNever));
      *(_DWORD *)v14 |= 0x80u;
      *(_QWORD *)(v14 + 24) = v19;
      v34 = *(_DWORD *)v14;
      BYTE2(v34) = v19 >> 18;
      *(_DWORD *)v14 = v34;
      if ( *(_BYTE *)(a3 + 32) )
        inserted = KiInsertTimerTable(a1, v14, v21, v20, &v36);
      else
        inserted = KiInsertTimerTable(a1, v14, v21, v20, 0LL);
      if ( inserted )
      {
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
          KiTraceSetTimer(v14, v21, 0LL);
        else
          _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
      }
      else
      {
        KiTimerWaitTest(a1, v14, 0LL);
      }
      result = v32;
      if ( v32 == &v32 )
        goto LABEL_20;
    }
LABEL_50:
    __fastfail(3u);
  }
LABEL_20:
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)KiAdjustTimer2DueTimes(a3, a2, a3, v4);
  return result;
}
