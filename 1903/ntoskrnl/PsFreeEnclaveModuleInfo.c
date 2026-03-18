/*
 * XREFs of PsFreeEnclaveModuleInfo @ 0x140309CF8
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x140309D54 (PsGetProcessEnclaveModuleInfo.c)
 *     DbgkpPostModuleMessages @ 0x140848A68 (DbgkpPostModuleMessages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
