/*
 * XREFs of KeQueryWakeSource @ 0x1402A573C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031920 (PpmIdleExecuteTransition.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiGetPastDueIRTimerInfo @ 0x1402B2ABC (KiGetPastDueIRTimerInfo.c)
 */

__int64 __fastcall KeQueryWakeSource(int *a1, _BYTE *a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rcx
  struct _KPRCB *v12; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  int v14; // edx
  unsigned int v15; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-10h] BYREF
  char v17; // [rsp+50h] [rbp+18h] BYREF
  char v18; // [rsp+58h] [rbp+20h] BYREF

  memset(a2, 0, 0x88uLL);
  result = ((__int64 (__fastcall *)(unsigned int *, _QWORD))off_140424628[0])(&v15, 0LL);
  if ( (int)result >= 0 )
  {
    if ( ((v15 - 209) & 0xFFFFFFFD) != 0 )
    {
      *a1 = 5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( v15 <= 0xFF
        && (_mm_lfence(), CurrentPrcb = KeGetCurrentPrcb(), (v7 = CurrentPrcb->InterruptObject[v15]) != 0LL) )
      {
        v8 = 0LL;
        v9 = CurrentPrcb->InterruptObject[v15];
        do
        {
          v10 = v9[4];
          if ( v10 || (v10 = v9[3]) != 0 )
            *(_QWORD *)&a2[8 * v8] = v10;
          v11 = v9[1];
          v8 = (unsigned int)(v8 + 1);
          if ( !v11 )
            break;
          v9 = (_QWORD *)(v11 - 8);
          if ( v9 == v7 )
            break;
        }
        while ( (unsigned int)v8 < 3 );
      }
      else
      {
        *a1 = 2;
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v12 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v12);
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiGetPastDueIRTimerInfo)(
                           (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
                           &v17,
                           &v18) )
      {
        v14 = 6;
        *a2 = v17;
        a2[2] = v18;
      }
      else
      {
        v14 = 1;
      }
      *a1 = v14;
    }
  }
  else
  {
    if ( (_DWORD)result != -1073741823 )
      return result;
    *a1 = 0;
  }
  return 0LL;
}
