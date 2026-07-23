/*
 * XREFs of PpmIdleGuestPreselect @ 0x1402E75C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleGuestPreselect(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 *StatisticsPage; // rcx
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rbx
  unsigned int HvTargetState; // r8d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->PowerState.Hypervisor < ProcHypervisorPower )
  {
    v4 = *(_QWORD *)a2;
    v5 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    StatisticsPage = CurrentPrcb->StatisticsPage;
    v4 = StatisticsPage[(unsigned int)xmmword_1404DEB68];
    v5 = v4 - StatisticsPage[DWORD1(xmmword_1404DEB68)];
  }
  HvTargetState = *(_DWORD *)(a2 + 32);
  if ( HvTargetState != -1 )
  {
    if ( HvTargetState < 2 )
    {
LABEL_16:
      CurrentPrcb->PowerState.HvIdleCheck.Time = v4;
      CurrentPrcb->PowerState.HvIdleCheck.Idle = v5;
      goto LABEL_17;
    }
LABEL_6:
    HvTargetState = 1;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a2 + 42) && CurrentPrcb->PowerState.Hypervisor < ProcHypervisorPower )
    goto LABEL_6;
  v7 = v4 - CurrentPrcb->PowerState.HvIdleCheck.Time;
  HvTargetState = CurrentPrcb->PowerState.HvTargetState;
  if ( v7 >= *(unsigned int *)(a2 + 36) )
  {
    v8 = v5 - CurrentPrcb->PowerState.HvIdleCheck.Idle;
    if ( v8 < (unsigned int)(v7 * *(unsigned __int8 *)(a2 + 41) / 0x64) && CurrentPrcb->PowerState.HvTargetState )
    {
      --HvTargetState;
    }
    else if ( v8 >= (unsigned int)(v7 * *(unsigned __int8 *)(a2 + 40) / 0x64) && HvTargetState + 1 < 2 )
    {
      ++HvTargetState;
    }
    goto LABEL_16;
  }
LABEL_17:
  result = HvTargetState;
  CurrentPrcb->PowerState.HvTargetState = HvTargetState;
  return result;
}
