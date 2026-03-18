/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x140654C54
 * Callers:
 *     SepSetTokenCapabilities @ 0x1405BCEA4 (SepSetTokenCapabilities.c)
 *     SeTokenCanImpersonate @ 0x1406380E0 (SeTokenCanImpersonate.c)
 *     SepSetTokenPackage @ 0x14065BD08 (SepSetTokenPackage.c)
 *     SepCheckCreateLowBox @ 0x1406CBE84 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x1408A453C (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1400DCAD0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140654B80 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  ULONG v4; // edi
  PULONG v5; // rbx
  int v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (int)RtlGetAppContainerSidType((char *)Sid, &v7) >= 0
    && v7 == 2
    && (int)RtlGetAppContainerSidType((char *)a2, &v7) >= 0
    && v7 == 1 )
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = RtlSubAuthoritySid(Sid, v4);
      if ( *v5 != *RtlSubAuthoritySid(a2, v4) )
        break;
      if ( ++v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
