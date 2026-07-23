/*
 * XREFs of KiSetSystemAffinityThread @ 0x1400D6480
 * Callers:
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400D1644 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400D563C (KiUpdateNodeAffinitizedFlag.c)
 *     KiPrcbInGroupAffinity @ 0x1400D57B4 (KiPrcbInGroupAffinity.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSetSystemAffinityThread(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int16 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  _DWORD *v22; // rcx
  int v23; // eax
  bool v24; // zf
  int v25; // eax
  int v26; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  *(_WORD *)(v4 + 584) = *(_WORD *)(a2 + 8);
  *(_QWORD *)(v4 + 576) = *(_QWORD *)a2;
  if ( a3 < 0x500 )
  {
    *(_DWORD *)(v4 + 588) = a3;
    v14 = a3;
    v9 = 0x140000000uLL;
LABEL_7:
    v7 = *(_QWORD *)(v9 + 8 * v14 + 5520704);
    goto LABEL_8;
  }
  v7 = KiProcessorBlock[*(unsigned int *)(v4 + 588)];
  if ( !KiPrcbInGroupAffinity(v7, a2) )
  {
    v10 = *(_QWORD *)(v7 + 192);
    v11 = *(_WORD *)(v8 + 8);
    v12 = *(_QWORD *)v8;
    if ( v11 == *(_WORD *)(v10 + 144) )
    {
      v13 = v12 & *(_QWORD *)(v10 + 136);
      if ( v13 )
        v12 = v13;
    }
    _BitScanReverse64(&v12, v12);
    v14 = *(unsigned int *)(v9 + 4LL * ((unsigned int)v12 + (v11 << 6)) + 5533504);
    *(_DWORD *)(v4 + 588) = v14;
    goto LABEL_7;
  }
LABEL_8:
  if ( (*(_DWORD *)(v4 + 116) & 8) != 0 || !(unsigned int)KiComputeThreadAffinity(v4) )
  {
    KiUpdateSharedReadyQueueAffinityThread(v7, v4);
    KiUpdateNodeAffinitizedFlag(v4);
  }
  result = KiPrcbInGroupAffinity(a1, v4 + 576);
  if ( !(_DWORD)result )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xCu);
    if ( !*(_QWORD *)(a1 + 16) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v26 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v23 = SchedulerAssist[5];
            v24 = v23 == -1;
            result = (unsigned int)(v23 + 1);
            SchedulerAssist[5] = result;
            if ( v24 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v22 = CurrentPrcb->SchedulerAssist;
        if ( v22 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v25 = v22[5] - 1;
            v22[5] = v25;
            if ( !v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
        {
          KeYieldProcessorEx(&v26, v16, v17);
          result = *(_QWORD *)(a1 + 48);
        }
        while ( result );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        result = KiSelectNextThread(a1, a4);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      if ( v21 && v20->NestingLevel <= 1u )
      {
        result = (unsigned int)(v21[5] - 1);
        v21[5] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  return result;
}
