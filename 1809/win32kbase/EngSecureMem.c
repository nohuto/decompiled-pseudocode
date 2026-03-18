/*
 * XREFs of EngSecureMem @ 0x1C0106BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00AA88C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrepSecureVirtualMemory @ 0x1C00ABE90 (GrepSecureVirtualMemory.c)
 */

HANDLE __stdcall EngSecureMem(PVOID Address, ULONG cjLength)
{
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)Address) )
    return GrepSecureVirtualMemory(Address, cjLength, 4u);
  else
    return MmSecureVirtualMemory(Address, cjLength, 4u);
}
