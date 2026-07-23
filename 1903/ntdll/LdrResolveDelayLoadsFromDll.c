/*
 * XREFs of LdrResolveDelayLoadsFromDll @ 0x1800CF050
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF1D4 @ 0x1800CF1D4 (sub_1800CF1D4.c)
 */

NTSTATUS __cdecl LdrResolveDelayLoadsFromDll(PVOID ParentModuleBase, PCSTR TargetDllName, ULONG Flags)
{
  const IMAGE_DELAYLOAD_DESCRIPTOR *v5; // rax

  if ( Flags )
    return -1073741811;
  v5 = (const IMAGE_DELAYLOAD_DESCRIPTOR *)sub_1800CF1D4(ParentModuleBase);
  if ( v5 )
    return sub_180017368((char *)ParentModuleBase, v5);
  else
    return -1073741515;
}
