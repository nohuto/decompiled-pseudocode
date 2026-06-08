/*
 * XREFs of EnableEnergyEstimation @ 0x1C00231AC
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0022300 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 */

__int64 __fastcall EnableEnergyEstimation(__int64 a1)
{
  PVOID PoolWithTag; // rax
  void *v3; // rdi
  __int64 v4; // rdx
  int v5; // ebx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  if ( qword_1C001A550 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x72637250u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x70uLL);
      v4 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 344) = v3;
      KeProcessorGroupAffinity(&Affinity, v4);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v5 = ((__int64 (*)(void))qword_1C001A550)();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      if ( v5 < 0 )
      {
        ExFreePoolWithTag(v3, 0x72637250u);
        *(_QWORD *)(a1 + 344) = 0LL;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v5;
}
