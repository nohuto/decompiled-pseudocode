/*
 * XREFs of VerifierExFreePool @ 0x1409727F0
 * Callers:
 *     VerifierExFreePoolEx @ 0x140972820 (VerifierExFreePoolEx.c)
 * Callees:
 *     MmKernelVerifierEnabled @ 0x1402BF4D4 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x140972840 (VerifierExFreePoolWithTag.c)
 */

void VerifierExFreePool()
{
  void *v0; // rcx

  if ( (unsigned int)MmKernelVerifierEnabled() )
    ExFreePoolWithTag(v0, 0);
  else
    VerifierExFreePoolWithTag(v0, 0);
}
