/*
 * XREFs of KeQueryCurrentStackInformationEx @ 0x1400A2E20
 * Callers:
 *     RtlpGetStackLimitsEx @ 0x140017028 (RtlpGetStackLimitsEx.c)
 *     KeQueryCurrentStackInformation @ 0x14001BBD0 (KeQueryCurrentStackInformation.c)
 *     KeCheckStackAndTargetAddress @ 0x14009FCB0 (KeCheckStackAndTargetAddress.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400A17E0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400A1930 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlpGetStackLimits @ 0x1400A2DD0 (RtlpGetStackLimits.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400A3040 (KeAreInterruptsEnabled.c)
 *     KiRspInIstStack @ 0x1402A9848 (KiRspInIstStack.c)
 */

bool __fastcall KeQueryCurrentStackInformationEx(unsigned __int64 a1, _DWORD *a2, char **a3, unsigned __int64 *a4)
{
  unsigned __int64 v7; // r11
  unsigned __int8 CurrentIrql; // dl
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // r11
  char *v13; // rax
  bool result; // al
  char *IsrStack; // rax
  char *v16; // rcx
  char *v17; // rax
  char *v18; // rcx
  char *v19; // rcx
  char *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // [rsp+20h] [rbp-28h]

  v7 = a1;
  if ( (KiBugCheckActive & 3) != 0 )
  {
    *a2 = 0;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
    return 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v16 = IsrStack - 24576;
    if ( (unsigned __int64)(IsrStack - 24576) <= v7 && v7 < (unsigned __int64)IsrStack )
    {
      *a2 = 6;
      *a4 = (unsigned __int64)IsrStack;
      result = 1;
      *a3 = v16;
      return result;
    }
    v17 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    v18 = v17 - 24576;
    if ( (unsigned __int64)(v17 - 24576) <= v7 && v7 < (unsigned __int64)v17 )
      goto LABEL_19;
    goto LABEL_17;
  }
  if ( !(unsigned __int8)KeAreInterruptsEnabled() )
  {
LABEL_17:
    v17 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    v18 = v17 - 24576;
    if ( (unsigned __int64)(v17 - 24576) > v7 || v7 >= (unsigned __int64)v17 )
      goto LABEL_4;
LABEL_19:
    *a2 = 10;
    *a4 = (unsigned __int64)v17;
    result = 1;
    *a3 = v18;
    return result;
  }
LABEL_4:
  if ( KeGetCurrentThread()->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
  {
    *a2 = 5;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
    return result;
  }
  if ( CurrentIrql >= 2u )
  {
    v19 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    v20 = &v19[-(unsigned int)KeKernelStackSize];
    if ( (unsigned __int64)v20 <= v7 && v7 < (unsigned __int64)v19 )
    {
      result = 1;
      *a2 = 1;
      *a4 = (unsigned __int64)v19;
      *a3 = v20;
      return result;
    }
    if ( KeGetCurrentPrcb() == (struct _KPRCB *)KiDebuggerOwner )
    {
      *a2 = 7;
      result = 1;
      *a4 = -1LL;
      *a3 = (char *)0xFFFF800000000000LL;
      return result;
    }
  }
  if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() < 0xFu )
    goto LABEL_8;
  if ( (unsigned int)KiRspInIstStack(3LL, v12, v9, v10) )
  {
    *a2 = 8;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
    return result;
  }
  if ( !(unsigned int)KiRspInIstStack(2LL, v21, v22, v23) )
  {
LABEL_8:
    if ( (*(_DWORD *)(v11 + 116) & 0x1000) != 0 )
    {
      *a2 = 2;
    }
    else if ( *(_BYTE *)(v11 + 731) )
    {
      *a2 = 4;
    }
    else
    {
      *a2 = 3;
    }
    v24 = *(_QWORD *)(v11 + 56);
    v13 = *(char **)(v11 + 48);
    *a4 = v24;
    *a3 = v13;
    return (unsigned __int64)v13 <= v12 && v12 < *a4;
  }
  else
  {
    *a2 = 9;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
  }
  return result;
}
