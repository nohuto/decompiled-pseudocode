/*
 * XREFs of KiForceIdleParkUnparkProcessor @ 0x1402B2198
 * Callers:
 *     KiForceIdleParkUnparkDpcRoutine @ 0x1402B2170 (KiForceIdleParkUnparkDpcRoutine.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1402B2500 (KiForceIdleUpdateSchedulerParkState.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x14018C210 (KeInterlockedSetProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1402A4BA0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x1402B54CC (KeTransitionProcessorParkState.c)
 */

__int64 __fastcall KiForceIdleParkUnparkProcessor(__int64 a1, char a2)
{
  int v3; // edx
  void *v4; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  bool v9; // zf
  _DWORD *v10; // rcx
  int v11; // eax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rdx
  int v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    if ( PoSoftParkingAllowed && *(_BYTE *)(a1 + 23859) )
    {
      KeInterlockedClearProcessorAffinityEx((__int64)&KiForceIdleSoftParkRestoreMask, *(_DWORD *)(a1 + 36));
      v14 = 2LL;
    }
    else
    {
      KeInterlockedClearProcessorAffinityEx((__int64)&KiForceIdleUnparkRestoreMask, *(_DWORD *)(a1 + 36));
      v14 = 0LL;
    }
    return KeTransitionProcessorParkState(a1, v14);
  }
  if ( !*(_BYTE *)(a1 + 24228) )
  {
    v3 = *(_DWORD *)(a1 + 36);
    v4 = &KiForceIdleUnparkRestoreMask;
LABEL_7:
    KeInterlockedSetProcessorAffinityEx((__int64)v4, v3);
    result = KeTransitionProcessorParkState(a1, 1LL);
    goto LABEL_8;
  }
  if ( PoSoftParkingAllowed && *(_BYTE *)(a1 + 23859) )
  {
    v3 = *(_DWORD *)(a1 + 36);
    v4 = &KiForceIdleSoftParkRestoreMask;
    goto LABEL_7;
  }
LABEL_8:
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = 0;
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
      KeYieldProcessorEx(&v15);
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
  return result;
}
