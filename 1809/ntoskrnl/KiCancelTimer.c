/*
 * XREFs of KiCancelTimer @ 0x14001E100
 * Callers:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     ExpCancelTimer @ 0x14001D270 (ExpCancelTimer.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     KeSetTimerEx @ 0x14001DF70 (KeSetTimerEx.c)
 *     KiSuspendThread @ 0x1400F2428 (KiSuspendThread.c)
 *     KeCancelTimerInternal @ 0x140132214 (KeCancelTimerInternal.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, _DWORD *a2)
{
  char v2; // si
  unsigned __int8 v4; // di
  __int64 v5; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v7; // rax
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // r15
  volatile signed __int32 *v10; // r14
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned int v17; // eax
  int v18; // ecx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  struct _KPRCB *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // [rsp+30h] [rbp-58h] BYREF
  int v29; // [rsp+34h] [rbp-54h] BYREF
  int v30; // [rsp+38h] [rbp-50h] BYREF
  __int64 v31; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v32[2]; // [rsp+48h] [rbp-40h] BYREF

  v2 = (char)a2;
  v4 = 0;
  while ( 1 )
  {
    v28 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v28);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v5 = *(unsigned __int8 *)(a1 + 2);
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *(unsigned int *)(a1 + 56);
    v29 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v9 = KiProcessorBlock[v7] + 13952;
    v10 = (volatile signed __int32 *)(v9 + 32 * (v5 + 16));
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = SchedulerAssist[5];
        SchedulerAssist[5] = v23 + 1;
        if ( v23 == -1 )
LABEL_38:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      v20 = CurrentPrcb->SchedulerAssist;
      if ( v20 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v24 = v20[5] - 1;
          v20[5] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
        }
      }
      do
        KeYieldProcessorEx(&v29);
      while ( *(_QWORD *)v10 );
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = v21[5];
          v21[5] = v25 + 1;
          if ( v25 == -1 )
            goto LABEL_38;
        }
      }
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v11 = *(_QWORD **)(a1 + 32);
      v12 = *(_QWORD **)(a1 + 40);
      if ( v11[1] != a1 + 32 || *v12 != a1 + 32 )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      if ( v12 == v11 )
      {
        *(_DWORD *)(32 * (v5 + 16) + v9 + 28) = -1;
        if ( KiSerializeTimerExpiration )
        {
          v13 = v5 & 0x3F;
          v14 = 8LL * ((unsigned int)v5 >> 6);
        }
        else
        {
          v13 = *(unsigned __int8 *)(v9 - 13743);
          v14 = v5 << 6;
        }
        _interlockedbittestandreset64(
          (volatile signed __int32 *)(qword_1405434C8[2 * *(unsigned __int8 *)(v9 - 13744)] + v14),
          v13);
      }
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v27 = v16[5] - 1;
          v16[5] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(v15, v16);
        }
      }
      v17 = -1073741953;
      v18 = -1073741825;
      goto LABEL_15;
    }
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    v22 = KeGetCurrentPrcb();
    a2 = v22->SchedulerAssist;
    if ( a2 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v26 = a2[5] - 1;
        a2[5] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(v22, a2);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v9 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v17 = 16777087;
      v18 = 0xFFFFFF;
LABEL_15:
      if ( !v2 )
        v17 = v18;
      _InterlockedAnd((volatile signed __int32 *)a1, v17);
      v4 = 1;
      goto LABEL_18;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v30 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v30);
  }
  if ( v2 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_18:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v4 )
  {
    v31 = a1;
    v32[0] = &v31;
    v32[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v32, 1, 1073872896, 3925, 1538);
  }
  return v4;
}
