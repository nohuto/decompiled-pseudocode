/*
 * XREFs of ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00F8D70
 * Callers:
 *     HmgAllocateDcAttr @ 0x1C0023C68 (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C006B0CC (HmgAllocateObjectAttr.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00AA88C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00ABEC0 (GrepUnsecureVirtualMemory.c)
 */

void __fastcall HmgFreeAllocateSecureUserMemory(void *a1, void *a2)
{
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = a1;
  RegionSize = 4096LL;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)a1) )
    GrepUnsecureVirtualMemory(a2);
  else
    MmUnsecureVirtualMemory(a2);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
}
