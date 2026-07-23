/*
 * XREFs of VerifierExFreePool @ 0x140926780
 * Callers:
 *     VerifierExFreePoolEx @ 0x1409267B0 (VerifierExFreePoolEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x1409267D0 (VerifierExFreePoolWithTag.c)
 */

void __fastcall VerifierExFreePool(void *a1)
{
  if ( (MiFlags & 2) != 0 )
    ExFreePoolWithTag(a1, 0);
  else
    VerifierExFreePoolWithTag(a1, 0);
}
