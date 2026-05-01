/*
 * XREFs of ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003919C
 * Callers:
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800390E4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800184EC (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180038530 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x1800385B4 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800391FC (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostComputeDesiredPsmAndSwapState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800699C4 (-HampHostComputeDesiredPsmAndSwapState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 */

__int64 __fastcall RmpPolicyComputeDesiredState(__int64 a1)
{
  unsigned int v2; // ebx
  bool v3; // zf
  int v4; // eax
  unsigned int v6; // eax
  __int64 v7; // rsi
  int v8; // ebx

  if ( (*(_BYTE *)(a1 + 812) & 1) != 0 )
  {
    v6 = HampHostComputeDesiredPsmAndSwapState(a1 + 64);
    v3 = *(_QWORD *)(a1 + 640) == 0LL;
    v2 = v6;
  }
  else
  {
    v2 = 0;
    v3 = RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)a1, 3u) == 0;
  }
  if ( !v3 )
  {
    v4 = *(_DWORD *)(a1 + 624);
    if ( v4 != 2 )
    {
      if ( v4 == 4 )
      {
        if ( (*(_BYTE *)(a1 + 1184) & 1) != 0 )
          v2 |= 0x40u;
      }
      else if ( v4 != 8 )
      {
        return v2;
      }
    }
    if ( (v2 & 8) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 48) + 400LL;
      v8 = RmpPolicyComputeDesiredEmptyState(v7, a1, 0) | v2;
      v2 = RmpPolicyGetDesiredEmptyOptimizationsForHost(v7, a1) | v8;
      if ( (unsigned int)RmpPolicyIsHostCommitSaveEligible((struct _RM_POLICY *)v7, (struct _RM_ACTIVITY_HOST *)a1) )
        v2 ^= ((unsigned __int8)v2 ^ (unsigned __int8)(8 * *(_DWORD *)(v7 + 108))) & 0x10;
    }
  }
  return v2;
}
