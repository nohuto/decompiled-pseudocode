/*
 * XREFs of KiForceIdleParkUnparkProcessor @ 0x14029B198
 * Callers:
 *     KiForceIdleParkUnparkDpcRoutine @ 0x14029B170 (KiForceIdleParkUnparkDpcRoutine.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14029B4F0 (KiForceIdleUpdateSchedulerParkState.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeTransitionProcessorParkState @ 0x14029CF8C (KeTransitionProcessorParkState.c)
 */

__int64 __fastcall KiForceIdleParkUnparkProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  bool v9; // zf
  _DWORD *v10; // rcx
  int v11; // eax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v14; // [rsp+38h] [rbp+10h] BYREF

  if ( (_BYTE)a2 )
  {
    if ( !*(_BYTE *)(a1 + 24228) )
    {
      v4 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      _InterlockedOr64(&qword_140406028[v4 >> 6], 1LL << (v4 & 0x3F));
      result = KeTransitionProcessorParkState(a1);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v8 = SchedulerAssist[5];
          v9 = v8 == -1;
          result = (unsigned int)(v8 + 1);
          SchedulerAssist[5] = result;
          if ( v9 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v10[5] - 1;
          v10[5] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
      {
        KeYieldProcessorEx(&v14, a2, a3);
        result = *(_QWORD *)(a1 + 48);
      }
      while ( result );
    }
    *(_BYTE *)(a1 + 11881) = 0;
    *(_BYTE *)(a1 + 11883) = 0;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        result = (unsigned int)(v13[5] - 1);
        v13[5] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick((__int64)v12);
      }
    }
  }
  else
  {
    _InterlockedAnd64(
      &qword_140406028[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] >> 6],
      ~(1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] & 0x3F)));
    return KeTransitionProcessorParkState(a1);
  }
  return result;
}
