/*
 * XREFs of VerifierExFreePool @ 0x140925780
 * Callers:
 *     VerifierExFreePoolEx @ 0x1409257B0 (VerifierExFreePoolEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x1409257D0 (VerifierExFreePoolWithTag.c)
 */

void __fastcall VerifierExFreePool(void *a1)
{
  if ( (MiFlags & 2) != 0 )
    ExFreePoolWithTag(a1, 0);
  else
    VerifierExFreePoolWithTag(a1, 0);
}
