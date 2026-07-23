/*
 * XREFs of LdrResolveDelayLoadsFromDll @ 0x1800CF110
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDelayloadDescriptor @ 0x1800CF294 (LdrpGetDelayloadDescriptor.c)
 */

NTSTATUS __cdecl LdrResolveDelayLoadsFromDll(PVOID ParentModuleBase, PCSTR TargetDllName, ULONG Flags)
{
  const IMAGE_DELAYLOAD_DESCRIPTOR *DelayloadDescriptor; // rax

  if ( Flags )
    return -1073741811;
  DelayloadDescriptor = (const IMAGE_DELAYLOAD_DESCRIPTOR *)LdrpGetDelayloadDescriptor(ParentModuleBase);
  if ( DelayloadDescriptor )
    return LdrpResolveDelayLoadDescriptor((char *)ParentModuleBase, DelayloadDescriptor);
  else
    return -1073741515;
}
