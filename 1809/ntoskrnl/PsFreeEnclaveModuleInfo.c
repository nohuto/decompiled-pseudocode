/*
 * XREFs of PsFreeEnclaveModuleInfo @ 0x1402EBD74
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x1402EBDD0 (PsGetProcessEnclaveModuleInfo.c)
 *     DbgkpPostModuleMessages @ 0x14080F1C4 (DbgkpPostModuleMessages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PsFreeEnclaveModuleInfo(char *P, int a2)
{
  int v2; // edi
  PVOID *v4; // rbx

  if ( P )
  {
    v2 = a2;
    if ( a2 )
    {
      v4 = (PVOID *)&P[16 * a2];
      do
      {
        v4 -= 2;
        ExFreePoolWithTag(*v4, 0);
        --v2;
      }
      while ( v2 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
