/*
 * XREFs of KiCancelTimer @ 0x140042CD0
 * Callers:
 *     KiSwapThread @ 0x140040B40 (KiSwapThread.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     KeSetTimerEx @ 0x1400E2FE0 (KeSetTimerEx.c)
 *     KiSuspendThread @ 0x1400E5914 (KiSuspendThread.c)
 *     KeCancelTimerInternal @ 0x140135A10 (KeCancelTimerInternal.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, char a2)
{
  unsigned __int8 v3; // si
  __int64 v5; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v7; // rax
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // r15
  volatile signed __int32 *v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  unsigned int v15; // eax
  int v16; // ecx
  unsigned __int64 v18; // rax
  __int64 v19; // rbp
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // [rsp+30h] [rbp-58h] BYREF
  int v30; // [rsp+34h] [rbp-54h] BYREF
  int v31; // [rsp+38h] [rbp-50h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v33[2]; // [rsp+48h] [rbp-40h] BYREF

  v32 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v29 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v29);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v5 = *(unsigned __int8 *)(a1 + 2);
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *(unsigned int *)(a1 + 56);
    v30 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v9 = KiProcessorBlock[v7] + 13952;
    v10 = (volatile signed __int32 *)(v9 + 32 * (v5 + 16));
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = SchedulerAssist[5];
        SchedulerAssist[5] = v24 + 1;
        if ( v24 == -1 )
LABEL_39:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      v20 = CurrentPrcb->SchedulerAssist;
      if ( v20 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = v20[5] - 1;
          v20[5] = v25;
          if ( !v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v30);
      while ( *(_QWORD *)v10 );
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v26 = v21[5];
          v21[5] = v26 + 1;
          if ( v26 == -1 )
            goto LABEL_39;
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
          v18 = v5 & 0x3F;
          v19 = 8LL * ((unsigned int)v5 >> 6);
        }
        else
        {
          v18 = *(unsigned __int8 *)(v9 - 13743);
          v19 = v5 << 6;
        }
        _interlockedbittestandreset64(
          (volatile signed __int32 *)(qword_140573688[2 * *(unsigned __int8 *)(v9 - 13744)] + v19),
          v18);
      }
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v28 = v14[5] - 1;
          v14[5] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      v15 = -1073741953;
      v16 = -1073741825;
      goto LABEL_12;
    }
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    v22 = KeGetCurrentPrcb();
    v23 = v22->SchedulerAssist;
    if ( v23 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v27 = v23[5] - 1;
        v23[5] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v9 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v15 = 16777087;
      v16 = 0xFFFFFF;
LABEL_12:
      if ( !a2 )
        v15 = v16;
      _InterlockedAnd((volatile signed __int32 *)a1, v15);
      v3 = 1;
      goto LABEL_15;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v31 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v31);
  }
  if ( a2 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_15:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v3 )
  {
    v32 = a1;
    v33[0] = &v32;
    v33[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v33, 1, 1073872896, 3925, 1538);
  }
  return v3;
}
