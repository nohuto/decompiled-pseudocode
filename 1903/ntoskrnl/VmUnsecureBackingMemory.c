/*
 * XREFs of VmUnsecureBackingMemory @ 0x1408ED790
 * Callers:
 *     <none>
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x14060AA10 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmUnsecureBackingMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}
